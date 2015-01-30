
namespace :drupal do 

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
					SSHKit.config.output = DrushFormatter.new($stdout)
					# Download Drupal core
					execute :drush, :make, make_opts, '--projects=drupal', '--prepare-install', 'drupal-org-core.make', '2>&1'
					# Download contribs to the profile directory
					execute :mkdir, '-p', profile_dir
					execute :drush, :make, make_opts, '--no-core', "--contrib-destination=#{profile_dir}", "#{fetch(:application)}.make", '2>&1'
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

	# task :login_url do
	# 	on roles(:web) do
	# 		binding.pry			
	# 	end
	# end
end

