# 
# Configure Capistrano for deploying drupal sites[1]. Setup a project for cap-drupal [2][3]
# 
# [1] https://github.com/previousnext/capistrano-drupal/
# [2] http://www.metaltoad.com/blog/capistrano-drupal-deployments-made-easy-part-1
# [3] http://www.metaltoad.com/blog/deployment-capistrano-part-2-drush-integration-multistage-and-multisite
# 


# Load DSL and Setup Up Stages
require 'capistrano/setup'

# Includes default deployment tasks
require 'capistrano/deploy'

# Integrate with RVM
require 'rvm1/capistrano3'

# Support rsync
#require 'capistrano/rsync'

# Debug stuff
require 'pry'
task :dbg do
	on roles(:all) do 	
		within releases_path do
			binding.pry
		end		
	end
end

# Load our Drupal specifc Tasks in order
load File.expand_path('../lib/capistrano/helpers.rb',__FILE__)
load File.expand_path('../lib/capistrano/tasks/mysql.rake',__FILE__)
load File.expand_path('../lib/capistrano/tasks/git.rake',__FILE__)
load File.expand_path('../lib/capistrano/tasks/drush.rake',__FILE__)
load File.expand_path('../lib/capistrano/tasks/drupal.rake',__FILE__)
load File.expand_path('../lib/capistrano/tasks/deploy-flow.rake',__FILE__)
