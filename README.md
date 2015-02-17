


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

### Special branches [^gitignore]

*SCM based on [Git-flow](http://nvie.com/posts/a-successful-git-branching-model/)*

<dl>
    <dt>content</dt>
    <dd>all source data needed to "initialize" a <code>drush site-install</code>. At build time, <code>drush make</code> will download this branch from a private server</dd>
</dl>


[^gitignore]: Branch membership is determined by a series of branch specific .gitignore files based on the configuration [here](http://cogniton-mind.tumblr.com/post/1423976659/howto-gitignore-for-different-branches). 


### Directories

<dl>
    <dt>config/</dt>
    <dd>stage specific settings for capistrano, drush, and supporting services, along with templates. </dd>
    <dt>exports</dt>
    <dd>serialized config dumps from the database</dd>
    <dt>htdocs</dt>
    <dd>automatically created during local builds, or when a remote build is downloaded locally; is also ignored by git</dd>
    <dt>lib</dt>
    <dd>plugins and extension to dev tooling</dd>
    <dt>libraries</dt>
    <dd>contrib module dependencies</dd>
    <dt>modules/content</dt>
    <dd><strong>content</strong> branch specific modules and data</dd>
    <dt>modules/custom</dt>
    <dd>custom modules not yet broken-out into their own projects, so are bundled with the profile here</dd>
    <dt>modules/dev</dt>
    <dd>developer tooling</dd>
    <dt>modules/features</dt>
    <dd>site specific configuration</dd>
    <dt>modules/migrations</dt>
    <dd>import/export migrations from older sites, also intra-release migrations between major versions</dd>
    <dt>modules/updates</dt>
    <dd>experimental meta-code for programmatically altering features<dd>
    <dt>patches</dt>
    <dd>build specific patches to core and/or contrib</dd>
    <dt>theme</dt>
    <dd>bundled themes</dd>    
</dl>


Deploy Setup
-----------

The production deployment target should have a dedicated `deploy` user with its primary group set the same as the web-server, typically `www-data`.

The `deploy` user will need a ssh-key pair for accessing any private git repos.You'll also need to add your public key to the `deploy` user's authorized_keys, allowing capistrano to ssh into the deploy host. 

Install `drush` locally for the `deploy` user. Cloning the official drush git repo is a good way to do this, in case the drush version needs to be frozen, updated, or changed. 

The `deploy` user might also need passwordless sudo for `chgrp` and `chmod` depending on the target host's configuration.


Tooling
----------

The majority of dev tasks have been automated using `drush` and `cap`. The rake files for various capistrano tasks can be found under `lib/capistrano`.

Its best to use `rvm` to manage any ruby dependencies. Setup the environment so the gemset name is the same as defined by capistrano's `set :application`, which should be the same as the drupal profile's machine name.


### Stages

Use the examples under the `config/` directory to setup `deploy.rb` and the stage specific files. You'll need one `"stage".rb` file for each "stage", placing them under the `config/deploy` directory.


### Deployment

#### End-to-end setup and deploy

    cap "stage" deploy:check drupal:make deploy drupal:migrate init=true

#### Tasks

##### deploy

    cap "stage" deploy

Will checkout, build, test, and publish the installation profile. Add `branch="name"` to deploy a specific branch, tag, or commit. 

##### migrate

    cap "stage" drupal:migrate

Migrate data from the last release forward to the current release. Add `init="name or a release number"` on the command line to specify which release to use as the source, or `init=true` to use the initialization config defined in the stage.rb file.

##### make

    cap "stage" drupal:make

Make a "site-install" ready Drupal including all needed dependencies defined in `drupal-or-core.make` and `gladstone_org.make`

##### download remote releases

    cap "stage" drupal:pull                    

Pull a remote release into the local working directory. The release will be downloaded into a folder named `"stage"` under the directory defined by `set deploy_to` in the "stage".rb file, typically this will show up as directory under `htdocs/` named the same as the `"stage"`` pulled from in the command.

    cap "stage" drupal:pull:symlink   

Symlink a pulled remote's release to the local dev copy equivalents, i.e. if a remote's features directory is downloaded then this command will symlink it to local features directory instead, so local dev changes will reflect in the "pulled" instance. This is useful for building remotely and debugging locally, without having to constantly push/pull code changes or nuke the remote.

    cap "stage" drupal:unlock[release]         

Correct all the drush altered permissions so that we can remove or change files and directories.

    cap "stage" drush:run[command]            

Run an arbitrary drush command on the remote `"stage"`




