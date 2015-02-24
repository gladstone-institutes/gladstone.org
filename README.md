


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

### Deploy user
Create a dedicated deploy user on the target host with primary group same as the webserver

_on targethost:_

    $ sudo adduser --ingroup www-data deploy    

### SSH Keys
[Create an ssh key pair](https://help.github.com/articles/generating-ssh-keys/) so the deploy user can access any remote repos

_on targethost:_

    $ cd /home/deploy
    $ ssh-keygen

Add the generated public key to github's [allowed keys](https://help.github.com/articles/generating-ssh-keys/#step-3-add-your-ssh-key-to-your-account)

Add your local machines public key to the deploy user's `~/.ssh/authorized_keys` file on the target host. Now capistrano can SSH without prompting for a password.

_on localhost:_

    $ scp ~/.ssh/id_dsa.pub deploy@targethost:~/
    $ ssh deploy@targethost

_on targethost:_

    $ cd ~/
    $ cat id_dsa.pub > .ssh/authorized_keys

### Install drush

_on localhost:_ **repeat** _on targethost:_

    $ git clone git@github.com:drush-ops/drush.git
    $ cd drush
    $ git checkout 6.x
    $ ln -s /path/to/drush/drush ~/bin/drush

### Install [rvm](https://rvm.io/rvm/install) and gemset

_on localhost:_ **repeat** _on targethost:_

    $ gpg --keyserver hkp://keys.gnupg.net --recv-keys 409B6B1796C275462A1703113804BB82D39DC0E3
    $ \curl -sSL https://get.rvm.io | bash -s stable --ruby

    $ rvm gemset create gladstone_org
    $ rvm use @gladstone_org
    $ cd gladstone_org.git
    $ gem install bundler
    $ bundler install

### Test if `cap` can connect
Test that capistrano can connect to the deploy target, assuming the stage config file is set up correctly and specifies the `deploy` user we just created

_on localhost:_

    $ cd /path/to/gladstone_org.git
    $ rvm use @gladstone_org
    $ rvm cap stage deploy:check

### Webserver
Setup the remote target's host webserver to serve pages from `"current"`
under the `deploy_to` path, via the vhost.conf's `DocumentRoot`

_on targethost:_

    $ cd deploy_to_path/current
    "path/to/deploy_to/current"
    $ vim /etc/apache/vhost.conf

### Mysql
Make sure both the local host and target host have mysql installed and listening on the standard port on `127.0.0.1`

### Deploy the projects
    
_on localhost:_

    $ cd gladstone_org.git
    $ rvm use @gladstone_org
    $ cap stage deploy 
    $ cap stage drupal:migrate init=true

### *Notes*

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




