
namespace 'drupal:dev' do

  desc 'Symlink deployed directories to our local dev copy'
  task :symlink do

    on roles(:web) do    
      within fetch(:drupal_root)+'/profiles/'+fetch(:application) do
        # Always remove the checkout and smylink to profile. This way the drush
        # will build the site without needing changes to be committed to git
        info 'Remove embedded Profile'
        execute :rm, '-fr', 'themes/'+fetch(:application)
        execute :rm, '-fr', 'modules/custom/'
        execute :rm, '-fr', 'modules/features/'

        # Symlink to Module and Theme files. 
        # Allows "live" editing without needing to checkout
        # changes from git everytime
        info 'Create Symlinks to git repo'
        execute :ln, '-s', Dir.pwd+'/themes/'+fetch(:application), 'themes/'
        execute :ln, '-s', Dir.pwd+'/modules/custom', 'modules/'
        execute :ln, '-s', Dir.pwd+'/modules/features', 'modules/'
      end
    end  
  end

  desc 'Update profile(root level) build and make files.'
  task :upmakes do
    set :drupal_root, Dir.pwd
    set :branch, :master
    invoke 'drupal:dev:gen_build'
    on roles(:web) do
      file =  gen_file( file: fetch(:make_file), raw_base_uri: fetch(:raw_base_uri) )
      upload! StringIO.new(file), "#{Dir.pwd}/#{fetch(:make_file)}"
    end
  end

end


namespace :pull do

  # todo: replace ssh backend in drush or cap with mosh, so that multitask
  # batch runs are stateful and not streamed
  # http://mosh.mit.edu/mosh-paper.pdf
  aliases = "--alias-path=#{Dir.pwd}/config/drush"

  desc 'Make a local instance of the selected remote build'
  task :default, [:drush_alias] do |t, args|
    
    set :drupal_root,  "#{fetch(:build_root)}/#{args[:drush_alias]}"
    set :httpd_subdir, "/current/builds/#{args[:drush_alias]}"    
    settings_php = "#{fetch(:drupal_root)}/sites/default/settings.php"

    on roles(:web) do
      info "Called inside of pull:default  with #{args}"

      # Download remote source
      execute :drush, '--yes', aliases, :rsync, "@#{args[:drush_alias]}", fetch(:drupal_root)

      # Correct group permissions
      execute :sudo, :chgrp, '-fR', fetch(:server_group), fetch(:drupal_root)
      
      # Update config for local environment 
      execute :sudo, :chmod, 'u+w', settings_php
      upload! StringIO.new( gen_file(  
                                file:     'settings.php',
                                schema:   args[:drush_alias], 
                                username: fetch(:db_auth)[:username], 
                                password: fetch(:db_auth)[:password], 
                                host:     fetch(:db_auth)[:host],
                                hash_salt: '' 
                              )
                          ),
                          settings_php     
      

    end

    invoke 'drupal:dev:symlink'

    on roles(:db) do      
      within fetch(:drupal_root) do
        # Sync remote -> local database
        execute :drush, '--yes', aliases, 'sql-sync', '--no-cache', '--create-db', "@#{args[:drush_alias]}", '.'

        # Todo: for good measure reset the .htaccess with a locally configure version
      end
    end
  end  

end