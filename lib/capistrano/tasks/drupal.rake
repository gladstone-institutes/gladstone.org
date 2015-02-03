
require 'tempfile'

set :drupal_admin_user, 'admin'
set :drupal_admin_pass, 'admin'

namespace :drupal do 

	desc 'Migrate data forwards from the last release'
	task :migrate do 
		invoke 'drupal:migrate:setup'
		invoke 'drupal:migrate:run'
		if fetch(:stage) =~ /^(prod|www)/
			invoke 'drupal:migrate:cleanup'
		end
	end

	desc "Download features dir from remote :web server's profile dir"
	task :dl_features do
		remote_ssh			= "#{fetch(:deploy_user)}@#{roles(:web).first}"
		remote_features_dir = current_path+"/profiles/#{fetch(:application)}"
		remote = remote_ssh+remote_features_dir

		run_locally do
			within "#{Dir.pwd}/modules/features" do
				execute :scp, '-r', remote, '.'
			end
		end
	end

	desc 'Make a "site-install" ready Drupal via profile.build & profile.make'
	task :make do
		SSHKit.config.output = DrushFormatter.new($stdout)

		invoke 'drupal:setup_make_dir'

		make_dir   = fetch(:drupal_make_path)
		make_files = [ 'drupal-org-core.make', "#{fetch(:application)}.make" ]
		make_opts = '--yes --ignore-checksums --concurrency=4'

		on roles(:web) do
			within repo_path do
				with git_work_tree: make_dir do
					execute :git, :checkout, fetch(:branch), '-f', '--', make_files.join(' ')
				end
			end
		end

		profile_dir = "profiles/#{fetch(:application)}"
		on roles(:web) do 
			within make_dir do
				with fetch(:drush_env) do
					# Download Drupal core
					execute :drush, :make, make_opts, '--projects=drupal', '--prepare-install', 'drupal-org-core.make', '2>&1'

					# Download contribs to the profile directory
					execute :mkdir, '-p', profile_dir
					execute :drush, :make, make_opts, '--no-core', "--contrib-destination=#{profile_dir}", "#{fetch(:application)}.make", '2>&1'
				end
			end
		end
	end

	desc 'Pull a remote release into the local environment'
	task :pull do
		SSHKit.config.output = DrushFormatter.new($stdout)

		stage			= fetch(:stage)
		mysql 			= fetch(:mysql)
		current_release = ''
		pull_path		= ''

		on roles(:web) do
			current_release = File.basename(capture(:readlink, current_path))
		end

		# Template for creating a drush alias
		drush_alias = Tempfile.new('aliases.drushrc.php')
		drush_alias.write(%Q{
				$aliases['#{stage}'] = array(
				   'uri' => 'http://#{host.hostname}:#{fetch(:http_port)}',
				   'root' => '#{releases_path}/#{current_release}',
				   'remote-host' => '#{host.hostname}',
				   'remote-user' => '#{host.username}',
				   'path-aliases' => array(
				     // '%drush' => '/home/jnand/drush',
				     '%drush-script' => '#{SSHKit.config.command_map[:drush]}',
				     '%dump-dir' => '#{deploy_path}/drush-dumps',
				     // '%files' => 'sites/mydrupalsite.com/files',
				     // '%custom' => '/my/custom/path',
				    ),
				   'databases' => array (
				       'default' => array ( 'default' => array (
				        	'driver' => 'mysql',
				        	'host' => '#{mysql[:host]}',
				        	'port' => '',			        	
				        	'database' => '#{stage}_#{current_release}',			        	
				        	'username' => '#{mysql[:admin_user]}',
				        	'password' => '#{mysql[:admin_pass]}',			        	
				         ),
				      ),
				    ),
				    'command-specific' => array ( 'sql-sync' => array ('no-cache' => TRUE)),
				 );
		})
		drush_alias.close

		run_locally do
			pull_path = "#{deploy_path}/remote_deploys/#{stage}"
			execute :mkdir, '-p', pull_path
			within pull_path do
				execute :drush, '--yes', drush_alias.path, :rsync,
					"@#{stage}", pull_path			 
			end
		end

		load "#{stage_config_path}/local.rb"
		mysql = fetch(:mysql)

		run_locally do
			within pull_path do
				upload! StringIO.new( template('settings.php',
							host:     mysql[:host],
							schema:   "#{stage}_#{current_release}",
							username: stage,
							password: mysql[:app_pass],
						)),
						pull_path

				execute :drush, '--yes', drush_alias.path, 'sql-sync',
					'--no-cache', '--create-db', 
					"--db-su=#{mysql[:admin_user]}",
					"--db-su-pass=#{mysql[:admin_pass]}",
					"@#{stage}", '.'
			end
		end
	end

	desc 'Unlock permissions of critical files'
	task :unlock, :release do |t, args|		
		drupal_path = args[:release].nil? ? current_path : releases_path.join(args[:release])
		on roles :web do
			within drupal_path do
				within 'sites/default' do
					# execute :find, '.',  '-type d -print0 | xargs -0 chmod 754'
					execute :chmod, '-fr', '754', '*'
					execute :chmod, '-fr', '754', '.'
				end
			end
		end
	end

	### Internal Tasks -----

	task :site_install do
		SSHKit.config.output = DrushFormatter.new($stdout)

		host   = fetch(:mysql)[:host]
		schema = "#{fetch(:stage)}_#{release_timestamp}"
		user   = fetch(:stage)
		pass   = fetch(:mysql)[:app_pass]

		on roles(:web) do
			within release_path do
				with fetch(:drush_env) do
					execute :drush, '--yes', 'site-install', 
									'-d -v', #drush debug flags
									fetch(:application),
									"--db-url=mysql://#{user}:#{pass}@#{host}/#{schema}",
									"--account-name=#{fetch(:drupal_admin_user)}",
									"--account-pass=#{fetch(:drupal_admin_user)}",
									"--db-su=#{fetch(:mysql)[:admin_user]}",
									"--db-su-pw=#{fetch(:mysql)[:admin_pass]}",
									'2>&1',
									:raise_on_non_zero_exit => false
				end
			end
		end
	end

	task :setup_make_dir do
		set :drupal_make_path, "#{deploy_path}/make"
		on roles(:web) do
			within deploy_path do
				if test "[ ! -d make ]"
					execute :mkdir, '-p', 'make'
				end
			end
		end
	end

	task :symlink do
		on roles(:web) do
			if host.hostname =~ /localhost/
				info "Installing from locally symlinked working copy"

				profile_path = "#{release_path}/profiles/#{fetch(:application)}"

				themes = capture(:ls, '-xtr', Dir.pwd+'/themes').split
				within "#{profile_path}/themes" do	
					themes.each do |theme|				
						execute :rm, '-fr', theme
						execute :ln, '-s', Dir.pwd+"/themes/#{theme}"
					end
				end

				module_folders = capture(:ls, '-xtr', Dir.pwd+'/modules').split
				within "#{profile_path}/modules" do
					module_folders.each do |folder|
						execute :rm, '-fr', folder
						execute :ln, '-s', Dir.pwd+"/modules/#{folder}"
					end
				end			
			else
				info "Installing checked out profile"
			end
		end			
	end

	task :login_url do		
		on roles(:web) do
			within current_path do
				url   = "http://#{roles(:web).first}:#{fetch(:http_port)}"				
				login = capture :drush, 'user-login', '--browser=0', "--uri=#{url}"
				info "- Login to the latest deployed Drupal site below -----"
				info login
			end
		end
	end

	task :compile do
		# @see https://github.com/wayneeseguin/rvm-capistrano
		on roles(:web) do
			within Drupal.theme_path do
				execute :rvm, "@#{fetch(:application)}", :do, :compass, :compile
			end

			invoke :drush, 'generate-theme-files'
		end
	end

	### Deploy Flow Hooks -----

	task :before_create_release do
		drupal_make_valid  = false
		repo_present       = false

		invoke 'drupal:setup_make_dir'

		# Run some sanity checks
		on release_roles :web do
			if test "[ -d #{repo_path} ]"
				within repo_path do
					git_dir = capture(:git, 'rev-parse', '--git-dir', '2> /dev/null')
					repo_present = (not git_dir.empty?) && (not git_dir.nil?)
				end

				within fetch(:drupal_make_path) do
					drupal_root = capture(:drush, :status, '-p', :drupal_root)
					drupal_make_valid = ( File.basename(drupal_root) == 'make' )
				end
			end			
		end

		if repo_present
			if not drupal_make_valid
				invoke 'drupal:make'
			end

			# Copy latest make into release
			on release_roles :web do
				execute :cp, '-fr', "#{fetch(:drupal_make_path)}/", release_path
				set :cap_release_path, release_path.dup
				set :release_path, "#{release_path}/profiles/#{fetch(:application)}"			
			end			
		end
	end

	task :after_create_release do
		valid_drupal_root = false

		# Handle cold-start deploy case
		on release_roles :web do
			within release_path do
				valid_drupal_root = (not capture(:drush, :status, '-p', :drupal_root).empty?)				
			end
		end

		if not valid_drupal_root	
			on release_roles :web do
				within release_path do
					execute :rm, '-fr', '*'
					execute :rm, '-fr', '.*'
				end	
			end						

			Rake::Task["drupal:before_create_release"].reenable
			Rake::Task["drupal:before_create_release"].invoke
			Rake::Task["#{scm}:create_release"].reenable
			Rake::Task["#{scm}:create_release"].invoke			
		end

		set :release_path, fetch(:cap_release_path)
	end	

	# desc 'cap workarounds for finishing the profile install'
	task :after_finising do		
		invoke :drush, 'fr', '--yes --force', 'site_pages', '2>&1'
		invoke :drush, :en, :biblio_ucsf_profiles
		invoke :drush, :en, '-y', 'build'

		if fetch(:stage) =~ /^(prod|www)/
			invoke :drush, :dis, '-y', 'update'
			invoke :drush, :vset, 'error_level', '0' 	
		end
	end
end

namespace 'drupal:migrate' do
	### Internal Tasks -----
	task :setup do
		mysql = fetch(:mysql)
		last_release =  capture(:ls, '-xtr').split[1]

		if last_release
			source_schema = "#{fetch(:stage)}_#{last_release}"
			source_files  = shared_path
		else
			source_schema = fetch(:initalization_schema)
			source_files  = fetch(:initalization_files)
		end

		invoke :drush, :vset, 'gladstone_migrate_source_schema', source_schema
		invoke :drush, :vset, 'gladstone_migrate_source_user', fetch(:stage)
		invoke :drush, :vset, 'gladstone_migrate_source_pass', mysql[:app_pass]
		invoke :drush, :vset, 'gladstone_migrate_source_files', source_files
		invoke :drush, :en, '-y', :gladstone_intramigrate
		invoke :drush, :cc, :all
	end

	task :run do
		invoke :drush, :ms
		invoke :drush, :mi, '--yes', "--group=gladstone"
	end

	task :cleanup do
		invoke :drush, :vdel, '--yes', '--exact', :gladstone_migrate_source_schema
		invoke :drush, :vdel, '--yes', '--exact', :gladstone_migrate_source_user
		invoke :drush, :vdel, '--yes', '--exact', :gladstone_migrate_source_pass
		invoke :drush, :vdel, '--yes', '--exact', :gladstone_migrate_source_files
	end
end

