######################################################################
#         This file contains EXAMPLE stage-specific settings         #
#   --------------------------------------------------------------   #
#                                                                    #
#  Configure the variables in this example with settings needed to   #
#  deploy to each environment: ':local', ':dev', ':test',            #
#                              ':pre', ':www'                        #
#                                                                    #
######################################################################

set :stage, :EXAMPLE

server 'EXAMPLE.com', roles: [:web,:db], user: 'deploy'

set :deploy_user, 	'deploy'
set :server_group, 	'www-data'
set :deploy_to, 	'/home/deploy/EXAMPLE'

# Checkout a minimal branch for the dev build
set :repo_url, 		"git@bitbucket.org:USER/EXAMPLE_REPO.git"
set :branch, 		proc { `git rev-parse --abbrev-ref HEAD`.chomp }
set :keep_releases, 3

# add some additional dirs to the PATH
# set :default_env, { 
# 	'PATH' => '/usr/local/bin:$PATH',
# }

# Drupal Specific Settings
#----------------------------------
# * commented lines will default

# set :drush_roles, :all
# set :drush_site_dir, -> { fetch(:release_path) }
# set :drupal_admin_user, 'admin'
# set :drupal_admin_pass, 'admin'

# webserver host port
set :http_port, '80'

# database configuration
set :mysql, ->() {
	{
		host: 		'127.0.0.1',
		admin_user: 'root',
		admin_pass: 'EXAMPLE_ADMIN_PASSWORD',
		app_pass: 	'EXAMPLE_APP_PASSWORD'
	}
}

# where should the migration look on its first run?
set :initalization_schema,	'EXAMPLE_DB_NAME'
set :initalization_files,	'EXAMPLE_PATH'

# Map commands that may not be available in the SSHKit env
SSHKit.config.command_map[:drush] = "/usr/bin/drush"


