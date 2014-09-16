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

# Support rsync
#require 'capistrano/rsync'

#Debug stuff
require 'pry'


# Includes tasks from other gems included in your Gemfile
#
# For documentation on these, see for example:
#
#   https://github.com/capistrano/rvm
#   https://github.com/capistrano/rbenv
#   https://github.com/capistrano/chruby
#   https://github.com/capistrano/bundler
#   https://github.com/capistrano/rails
#
# require 'capistrano/rvm'
# require 'capistrano/rbenv'
# require 'capistrano/chruby'
# require 'capistrano/bundler'
# require 'capistrano/rails/assets'
# require 'capistrano/rails/migrations'

# Loads custom rake tasks if any defined.
Dir.glob('lib/capistrano/global/*.rake').each { |r| import r }
