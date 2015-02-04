######################################################################
#
#	Deploy flow alterations to accommodate the Drupal install profile
#	deployment style, where the repo contains an installation profile
#   and specifications to `drush make` its distro.
#
######################################################################

# General Flow
after  'deploy:finished',			  'drupal:login_url'

# Deploy Flow
after  'deploy:new_release_path',     'drupal:before_create_release'
before 'deploy:set_current_revision', 'drupal:after_create_release'
before 'drupal:site_install',		  'drupal:symlink'		
after  'deploy:updated', 			  'drupal:site_install'
after  'drupal:site_install',		  'drupal:revert_features'
before 'deploy:published',			  'drupal:compile'
before 'deploy:cleanup',			  'drupal:cleanup'
after  'deploy:cleanup',			  'mysql:cleanup'
after  'deploy:finishing',			  'drupal:after_finising'

# Rollback Flow
before 'deploy:cleanup_rollback',	  'drupal:cleanup'
before 'deploy:cleanup_rollback',	  'mysql:cleanup_rollback'
