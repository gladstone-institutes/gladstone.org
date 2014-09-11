


Gladstone.org Readme (Drupal 7 site build)
==========================================

### Requirements: ###

Dependency | Version
----------|--------
drush | 5.x 
php   | 5.4+
mysql | 5.x
**Optional Dependencies** |
capistrano | 3.1
compass | 0.12.4



Git structure
-------------

*Structure based on [Git-flow](http://nvie.com/posts/a-successful-git-branching-model/)*

master
:contains a drush build profile
:includes a copy of all needed patches

distro
:a complete build "frozen" at the given release number
:ready for installation

dev
:master + all tools need to make, develop, and test a distro

content
:all content bundles are commited to this branch
:kept private, NOT published to public remote

feature-*
:all feature development

release-*
:preparation of new build profiles or distros

hotfix-*
:development of patches, and additions to the patch/ directory


### Gitignore ###

Branch membership is determined by a series of branch specific .gitignore files based on the configuration [here](http://cogniton-mind.tumblr.com/post/1423976659/howto-gitignore-for-different-branches). The global .gitignore however is left untouched in our case.


Directory Structure
-------------------

*Directories can/are branch specific, see [side note] for detail*

config/ [dev]
:deploy scripts
:configuration
:templates

config/private [dev]
:*.example password/key files
:actual data files are ignored

doc/ [master,dev]
:build specific documentation
:notes
:best practices

gladstone.org/ [distro]
:a complete build "frozen" by release
:includes drupal, modules, themes, and patches
:only needs to be "installed"

htdocs/ [dev]
:temp location for development builds

includes/ [mater,dev]
:tasks to be called during profile installation

lib/ [dev]
:libraries needed for development

modules/ [master,dev]
:custom modules
:profile features
:migrations
:content bundles [content]

patches/ [master|dev]
:copy of all needed patches for a successful build

scripts/ [dev]
:custom scripts needed during development

themes/ [master|dev]
:themes and styles





