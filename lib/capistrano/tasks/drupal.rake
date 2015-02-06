
require 'fileutils'

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
		invoke 'drupal:login_url'
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

		stage			 = fetch(:stage)
		mysql 			 = fetch(:mysql)
		current_release  = ''
		pull_path		 = ''
		drush_alias_path = "#{Dir.tmpdir}/cap-drush-#{Time.now.to_i}"
		
		FileUtils.mkdir_p drush_alias_path
		drush_alias = File.new("#{drush_alias_path}/aliases.drushrc.php",'w')

		on roles(:web) do
			current_release = File.basename(capture(:readlink, current_path))
		
			execute :mkdir ,'-p', deploy_path.join('mysqldump')

			# Template for creating a drush alias
			drush_alias.write(%Q{ <?php
					$aliases['#{stage}'] = array(
					   'uri' => 'http://#{host.hostname}:#{fetch(:http_port)}',
					   'root' => '#{releases_path}/#{current_release}',
					   'remote-host' => '#{host.hostname}',
					   'remote-user' => '#{host.username}',
					   'path-aliases' => array(
					     // '%drush' => '/home/jnand/drush',
					     '%drush-script' => '#{SSHKit.config.command_map[:drush]}',
					     '%dump-dir' => '#{deploy_path}/mysqldump',
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
		end

		load "#{stage_config_path}/local.rb"
		mysql = fetch(:mysql)

		run_locally do

			pull_path = deploy_path.parent.join(stage.to_s)

			within pull_path do
				execute :mkdir, '-p', '.'
				execute :chown, '-fR', "#{fetch(:deploy_user)}:#{fetch(:server_group)}", '.'
				execute :chmod, '-fR', 'u+w', '.'
			

				File.open( pull_path.join('sites/default/settings.php'), 'w') do |f| 
					f.write( template('drupal/settings.php',
								host:     mysql[:host],
								schema:   "#{stage}_#{current_release}",
								username: mysql[:admin_user],
								password: mysql[:admin_pass],
							)
					)
				end
					
				execute :drush, '--yes',
						"--alias-path=#{drush_alias_path}",
						:rsync, "@#{stage}", '.'	

				execute :drush, '--yes',
						"--alias-path=#{drush_alias_path}",
						'sql-sync',
						'--no-cache', '--create-db', 
						"--db-su=#{mysql[:admin_user]}",
						"--db-su-pw=#{mysql[:admin_pass]}",
						"@#{stage}", '.'
			end
		end

		File.unlink(drush_alias.path)
	end

	desc 'Unlock permissions of critical files'
	task :unlock, :release do |t, args|		
		drupal_path = args[:release].nil? ? current_path : releases_path.join(args[:release])
		on roles :web do
			within drupal_path do
				within 'sites/default' do
					# execute :find, '.',  '-type d -print0 | xargs -0 chmod 754'
					execute :chmod, '-fR', '754', '*'
					execute :chmod, '-fR', '754', '.'
				end
			end
		end
	end

	### Internal Tasks -----

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

	task :correct_permissions do
		on roles(:web) do
			within deploy_path do
				execute :chmod,'-f', 'g+sw', shared_path, raise_on_non_zero_exit: false
			end

			within release_path.join('sites/default/files') do
				execute :find, '.', 
						'-type d -print0 | xargs -0 chmod -fR g+sw',
						raise_on_non_zero_exit: false
			end
		end
	end

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
									"--account-pass=#{fetch(:drupal_admin_pass)}",
									"--db-su=#{fetch(:mysql)[:admin_user]}",
									"--db-su-pw=#{fetch(:mysql)[:admin_pass]}",
									'2>&1',
									:raise_on_non_zero_exit => false
				end
			end
		end
	end

	task :revert_features do
		on roles(:web) do 
			within release_path do 
				with fetch(:drush_env) do
					features = capture(:drush,'features-list','--status=enabled').
								split(/\r?\n/).
								map{|l| l.match(/\s+([a-z_]+)\s+Enabled/)}.
								select{|e| not e.nil?}.map{|r| r[1]}							

					features.each do |feature|
						info "*** Reverting feature (#{feature}) ***"
						execute :drush, 'features-revert', '--yes', '--force', feature
					end
				end
			end			
		end		
	end

	task :compile do
		# @see https://github.com/wayneeseguin/rvm-capistrano
		on roles(:web) do
			within Drupal.theme_path do
				execute :rvm, "@#{fetch(:application)}", :do, :compass, :compile
			end

			within release_path do
				execute :drush, 'generate-theme-files'
			end
		end
	end

	task :cleanup do
		on roles(:web) do |host|
			releases = capture(:ls, '-xtr', releases_path).split
			if releases.count >= fetch(:keep_releases)
				info "Unlocking #{releases.count - fetch(:keep_releases)} releases on #{host.to_s}"
				directories = (releases - releases.last(fetch(:keep_releases)))
				if directories.any?
					directories.each do |release|
						within releases_path.join(release) do
							within 'sites/default' do
								execute :chmod, '-fR', '754', '*'
								execute :chmod, '-fR', '754', '.'
							end
						end						
					end
				end
			end
		end
	end

	task :sanitize do
		files = [ 'config', 'lib', 'Capfile', 'Gemfile', 'README.md',
				  'drupal-org-core.make', "#{fetch(:application)}.make"
				]
		on roles(:web) do		
			within release_path.join("profiles/#{fetch(:application)}") do
				execute :rm, '-fr', files.join(" ")
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

	### Deploy Flow Hooks -----

	task :before_create_release do
		make_files_changed = false
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
			make_files = [ 'drupal-org-core.make', "#{fetch(:application)}.make" ]
			on release_roles :web do
				within repo_path do
					with git_work_tree: shared_path do
						make_files.each do |make_file|
							execute :git, :checkout, fetch(:branch), '-f', '--', make_file 
							make_files_changed = ! capture( :diff, '--brief', 
								deploy_path.join("make/#{make_file}"),
								shared_path.join(make_file),
								:raise_on_non_zero_exit => false).empty?
						end
					end
				end
			end

			if make_files_changed || (not drupal_make_valid)
				invoke 'drupal:make'				
			end

			# Copy latest make into release
			on release_roles :web do
				execute :rm, '-fr', release_path
				execute :cp, '-fr', fetch(:drupal_make_path), release_path
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
					execute :rm, '-fr', '.[a-z]*'
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
		on roles(:web) do
			within release_path do
				with fetch(:drush_env) do
					execute :drush, 'fr', '--yes --force', 'site_pages'
					execute :drush, :en, '-y', :biblio_ucsf_profiles
					execute :drush, :en, '-y', 'build'

					if fetch(:stage) =~ /^(prod|www)/
						execute :drush, :dis, '-y', 'update'
						execute :drush, :vset, 'error_level', '0' 	
					end
				end
			end
		end
	end
end

namespace 'drupal:migrate' do


	### Internal Tasks -----
	task :setup do
		mysql 		 = fetch(:mysql)
		last_release = false

		# if not fetch
		on roles(:web) do		
			within releases_path do
				last_release =  capture(:ls, '-xtr').split[1]
			end
		end

		if last_release && ENV['initialize'].nil?
			source_schema = "#{fetch(:stage)}_#{last_release}"
			source_files  = shared_path
		else
			source_schema = fetch(:initalization_schema)
			source_files  = fetch(:initalization_files)
		end

		on roles(:db) do
			within release_path do
				with fetch(:drush_env) do
					execute :drush, :vset, 'gladstone_migrate_source_schema', source_schema
					execute :drush, :vset, 'gladstone_migrate_source_user', mysql[:admin_user]
					execute :drush, :vset, 'gladstone_migrate_source_pass', mysql[:admin_pass]
					execute :drush, :vset, 'gladstone_migrate_source_files', source_files
					execute :drush, :en, '-y', :gladstone_intramigrate
					execute :drush, :cc, :all
				end
			end
		end
	end

	task :run do
		on roles(:db) do
			within release_path do
				with fetch(:drush_env) do		
					execute :drush, :ms
					execute :drush, :mi, '--yes', "--group=gladstone"
				end
			end
		end	

		invoke 'drupal:correct_permissions'
	end

	task :cleanup do
		on roles(:db) do
			within release_path do
				with fetch(:drush_env) do
					execute :drush, :vdel, '--yes', '--exact', :gladstone_migrate_source_schema
					execute :drush, :vdel, '--yes', '--exact', :gladstone_migrate_source_user
					execute :drush, :vdel, '--yes', '--exact', :gladstone_migrate_source_pass
					execute :drush, :vdel, '--yes', '--exact', :gladstone_migrate_source_files
				end
			end
		end		
	end
end

