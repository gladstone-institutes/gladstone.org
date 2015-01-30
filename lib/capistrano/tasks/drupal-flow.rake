######################################################################
#
#	Deploy flow alterations to accommodate Drupal profile style
#	deployment, where the repo contains a drupal install profile,
#   and specifications for drush make-"ing" its distro.
#
######################################################################

namespace 'drupal:flow' do 
	task 'before_create_release' do
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

	task 'after_create_release' do
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

			Rake::Task["drupal:flow:before_create_release"].reenable
			Rake::Task["drupal:flow:before_create_release"].invoke
			Rake::Task["#{scm}:create_release"].reenable
			Rake::Task["#{scm}:create_release"].invoke
   			# invoke "deploy:set_current_revision"
    		# invoke 'deploy:symlink:shared'			
		end

		set :release_path, fetch(:cap_release_path)
	end

end

after  'deploy:new_release_path', 'drupal:flow:before_create_release'
before 'deploy:set_current_revision', 'drupal:flow:after_create_release'


