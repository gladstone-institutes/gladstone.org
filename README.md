


Gladstone.org Readme (Drupal 7 site build)
==========================================

### Requirements: ###

Dependency | Version
----------|--------
drush | 5.x 
php   | 5.4+
mysql | 5.x
**Optional Dependencies** |
capistrano | 3..3.5
compass | 0.12.6
rvm | 1.26.3



Project structure
-------------

### Special branches 

*SCM based on [Git-flow](http://nvie.com/posts/a-successful-git-branching-model/)*

Branch membership is determined by a series of branch specific .gitignore files based on the configuration [here](http://cogniton-mind.tumblr.com/post/1423976659/howto-gitignore-for-different-branches). 

<dl>
    <dt>content</dt>
    <dd>stored on a private repo, all the source data needed to "initialize" a `drush site-install` lives hear for branch checkout via drush.</dd>
</dl>

### Directories

<dl>
    <dt>config/</dt>
    <dd>stage specific settings for capistrano, drush, and supporting services, along with templates. </dd>
    <dt>exports</dt>
    <dd>serialized config dumps form the database</dd>
    <dt>htdocs</dt>
    <dd>automatically created dir during local builds, or when a remote build is downloaded locally; is ignored by git</dd>
    <dt>lib</dt>
    <dd>plugins and extension to dev tooling</dd>
    <dt>libraries</dt>
    <dd>contrib module dependencies</dd>
    <dt>modules/content</dt>
    <dd>**content** branch specific modules/data</dd>
    <dt>modules/custom</dt>
    <dd>custom modules not yet broken-out into their own projects, and bundled with the profile</dd>
    <dt>modules/dev</dt>
    <dd>dev tooling</dd>
    <dt>modules/features</dt>
    <dd>site specific configuration</dd>
    <dt>modules/migrations</dt>
    <dd>import/export migrations from older sites, also intra-release migrations between major versions</dd>
    <dt>modules/updates</dt>
    <dd>experimental meta-code for programmatically altering features<dd>
    <dt>patches</dt>
    <dd>build specific patches to core and/or contrib</dd>
    <dt>theme</dt>
    <dd>bundled install profile themes</dd>    
</dl>


Deploy Setup
-----------

The production deployment target should have a dedicated `deploy` user with its primary group set to the same group as the web-server, typically `www-data`.

The deploy user will need a ssh-key pair for accessing any public/private git repos. You'll also need to add your local machine's public key to the remote deploy user's `authorized_keys` so capistrano can ssh into the deploy host. 

`drush` needs to be installed for any deploy users, I prefer to clone the drush git repo, in case it needs to be frozen at a particular version, later updated or switched. 

Setup `rvm` and `ruby` for the deploy user. Often times its easiest to do this via `cap rvm1:install:rvm` followed by `cap rvm1:install:ruby`

Use `rvm gemset create` to make a gemset and install all needed ruby dependencies via `bundle install`.

Then setup the deploy host's webserver to serve pages from `"current"`
under the `deploy_to` path.

The `deploy` user might also need passwordless sudo for `chgrp` and `chmod` depending on the target host's configuration.


Tooling
----------

The majority of dev tasks have been automated using `drush` and `cap`. The rake files for various capistrano tasks can be found under `lib/capistrano`.

Its suggested that you use `rvm` to manage any ruby dependencies. Setup the environment so the gemset name is the same as defined for capistrano's `set :applicationn`, which should be the same as the drupal profile's machine name.


### Stages

Use the examples under the `config/` directory to setup `deploy.rb` and stage files. You'll need one `"stage".rb` file for each "stage" under the `config/deploy` directory.


### Deployment

#### End-to-end setup and deploy

    cap "stage" deploy:check drupal:make deploy drupal:migrate init=true

#### Tasks

    cap "stage" deploy

Will checkout, build, test, and publish the installation profile. Add `branch="name"` to deploy a specific branch, tag, or commit. 

    cap "stage" drupal:migrate

Migrate data from the last release forward to the current release. Add `init="name or releases number"` on the command line to specify which release to use as the source or simply `init=true` to used the initialization config from the stage.rb file.

    cap "stage" drupal:make

Make a "site-install" ready Drupal including all needed dependencies defined in `drupal-or-core.make` and `gladstone_org.make`


    cap "stage" drupal:pull                    

Pull a remote release into the local working directory as a sibling directory to the stage capistrano config defined by `set deploy_to`, typically this will show up as directory under `htdocs/` named the same as the "stage" pulled from in the `cap` command

    cap "stage" drupal:pull:symlink   

Symlink a pulled remote's release to the local dev copy equivalents, i.e. if a remotes features directory is downloaded then this command will symlink it to local features directory instead, so changes there will then reflect in the "pulled" instance. This is useful for building remotely and debugging locally, without having to constantly push/pull code changes or nuke the remote.

    cap drupal:unlock[release]         

Correct all the drush altered permissions so that we can remove or change files and directories.

    cap drush:run[command]            

Run an arbitrary drush command




