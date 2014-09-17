
# =========================================================================
# These variables may be set in the client capfile if their default values
# are not sufficient.
# =========================================================================


# IMPORTANT NOTE #
# @todo: remove all use of passwordless sudo
#

namespace :drupal do

  # desc "Symlink settings and files to shared directory. This allows the settings.php and \
  #   and sites/default/files directory to be correctly linked to the shared directory on a new deployment."  
  # task :setup do
  #  Setup a directory in the deploy user for drupal
  #   dirs = [deploy_to, releases_path, shared_path].join(' ')
  #   run "#{try_sudo} mkdir -p #{releases_path} #{shared_path}"
  #   run "#{try_sudo} chown -R #{user}:#{runner_group} #{deploy_to}"
  #   sub_dirs = shared_children.map { |d| File.join(shared_path, d) }
  #   run "#{try_sudo} mkdir -p #{sub_dirs.join(' ')}"
  #   run "#{try_sudo} chmod 2775 #{sub_dirs.join(' ')}"
  #   ["files", "private", "settings.php"].each do |asset|
  #     run "rm -rf #{app_path}/#{asset} && ln -nfs #{shared_path}/#{asset} #{app_path}/sites/default/#{asset}"
  #   end
  # end

  desc 'Build a site (end-to-end)'
  task :build do
    # invoke 'drupal:prepare_build'
    # on roles(:all) do
    #   info "Building Drupal in (#{fetch(:drupal_root)})"
    #   # drush build stub
    # end

    invoke 'drupal:login_url'
  end

  # [internal] desc 'Prepare build target'
  task :prepare_build do
    on roles(:web) do
      execute :mkdir, "-p #{fetch(:drupal_root)}"
    end
  end    

  # [internal] desc 'Drupal site installation'
  task :site_install do    
    auth    = fetch(:db_auth)
    schema  = fetch(:build)
    profile = fetch(:application)
    pass    = 'admin' #pass for initial installation

    if auth[:password].nil? || auth[:password].empty?
      db_url = "--db-url=mysql://#{auth[:username]}@#{auth[:host]}/#{schema}"
    else
      db_url = "--db-url=mysql://#{auth[:username]}:#{auth[:password]}@#{auth[:host]}/#{schema}"
    end
  
    on roles(:web) do        
      within fetch(:drupal_root) do
        SSHKit.config.output = DrushFormatter.new($stdout)
        execute :drush, '--yes', 'site-install', profile, db_url, "--account-pass=#{pass}", '2>&1', :raise_on_non_zero_exit => false
      end
    end    
  end

  # [internal] desc 'Chmod drupal so cap can move it'
  task :unlock do
    on roles(:web) do
      within releases_path.to_s do 
        execute :sudo, :chown, '-fR', fetch(:deploy_user), fetch(:build_root), :raise_on_non_zero_exit => false
        execute :find, '.', '-path \*/sites/default', '-exec chmod -fR u+rw {} \;', :raise_on_non_zero_exit => false
        execute :find, '.', '-path \*/themes/'+fetch(:application)+'/generated_files', '-exec chmod -fR u+rw {} \;', :raise_on_non_zero_exit => false
      end    
    end
  end 

  # [internal] desc 'Print the user login url'
  task :login_url do
    on roles(:web) do     
      sub_path = fetch(:drupal_root).dup
      sub_path.slice! fetch(:deploy_to)
      uri = "http://#{roles(:web).first}:#{fetch(:http_port)}#{sub_path}"
      within fetch(:drupal_root) do
        login = capture :drush, 'user-login', '--browser=0', "--uri=#{uri}"
        info "Login to the build via the url below"
        info login
      end
    end
  end

  # desc 'Simulate a full production build'
  # task :prod do
  # end

  # desc '[internal] clean sensitive files from repo checkout'
  # task :sanitize do
  # end

end

namespace 'drupal:dev' do

  before 'deploy:publishing', 'drupal:unlock'
  before 'drupal:site_install', 'drupal:dev:apache_subdir_patch'

  desc 'Build a DEV site (end-to-end)'
  task :build do
      invoke 'drupal:dev:build_id'      
      invoke 'drupal:dev:overwrite'
      invoke 'drupal:prepare_build'

      on roles(:db) do
        info "Create Database (#{fetch(:build)})"
        # Create a schema for the build      
        Rake::Task['mysql:query'].invoke("CREATE DATABASE IF NOT EXISTS #{fetch(:build)};")
      end

      # Make the core of the build
      invoke 'drupal:dev:gen_build'
      on roles(:web) do
        within fetch(:drupal_root) do
          SSHKit.config.output = DrushFormatter.new($stdout)
          execute :drush, "make --yes --ignore-checksums --projects=drupal --prepare-install --concurrency=4 #{fetch(:build_file)}", '2>&1'
        end
      end

      # Make profile
      invoke 'drupal:dev:gen_make_profile'            
      on roles(:web) do
        within "#{fetch(:drupal_root)}/profiles/#{fetch(:application)}" do
          execute :drush, "make --yes --ignore-checksums --no-core --contrib-destination=. --concurrency=4 #{fetch(:make_file)}", '2>&1'
        end
      end

      # Site install
      invoke 'drupal:site_install'

      # Setup dev env
      invoke 'drupal:dev:setup'

      # Correct permissions
      # See Setup Drupal.mmd
      # or setup passwordless sudo for specific commands
      on roles(:web) do     
        execute :sudo, :chgrp, '-fR', fetch(:server_group), fetch(:drupal_root)
      end     

      invoke 'drupal:login_url'
  end

  # [internal] desc 'Setup a development environment'
  task :setup do

    invoke 'drupal:dev:build_id'

    # Download some extra libraries
    # lib_dir = "#{fetch(:drupal_root)}/sites/all/libraries"
    libs = [:simplehtmldom]
    on roles(:web) do
      lib_dir = "#{fetch(:drupal_root)}/sites/all/libraries"
      execute :mkdir, '-p', lib_dir
      libs.each do |lib|
        upload! "#{Dir.pwd}/lib/drupal/#{lib}/.", "#{lib_dir}/#{lib}", recursive: true
      end      
    end

    # Download some extra modules
    modules = [ 'menu_editor',
                'backup_migrate',
                'record_feature', 
                'devel', 
                'simplehtmldom',
                'profiler_builder'
              ]
    on roles(:web) do
      within fetch(:drupal_root) do
        execute :drush, 'dl', '--yes --cache', modules.join(' '), '2>&1'
      end
    end

    # Add some sub modules
    modules << ['deploy_ui','views_ui','devel_generate','rules_admin', 'ds_devel', 'ds_ui']
    on roles(:web) do
      within fetch(:drupal_root) do
        execute :drush, 'en', '--yes --resolve-dependencies', modules.join(' '), '2>&1'
      end
    end

    # Apply some patches
    patches = { entityreference: 'entityreference-devel_generate_fix.patch',
                #fixed in contrib# profile2: 'profile2-add_devel_generate_for_profile2_content-1276820-20.patch',
                email: 'email-devel_generate-794354.patch',
                phone: 'phone-devel_generate-794356.patch',
                #fixed in contrib# devel: 'devel_generate-use_basename_fix_warning.patch'
              }
    on roles(:web) do
      within fetch(:drupal_root) do
        patches.each do |project, patch|
          # dir = capture(:drush, 'pmi', project, '| grep Path', '| cut -d\':\' -f2').strip
          dir = capture(:drush, :eval, "'echo drupal_get_path('module','#{project}');'").chomp
          execute :patch, '-p0','--batch', "-d #{dir}", "< #{current_path.to_s}/patches/#{patch}", :raise_on_non_zero_exit => false
        end
      end
    end

    # Revert any installation configs in review to those in source control
    features = [ 'permissions',
                 'basic_page',
                 'gladstone_profiles',
                 'events',
                 'news',
                 'press_releases',
                 'bibliorepository',
                 'structure',
                 'pressroom'
               ]
    on roles(:web) do
      within fetch(:drupal_root) do
        features.each do |feature|
          info "*** Reverting Feature #{feature} ***"
          execute :drush, 'features-revert', '--yes --force', feature, '2>&1'
        end
      end
    end    
  end

  # [internal] desc 'Drupal settings based on build id'
  task :build_id do
    # A specific site build lives in a drupal_root
    ask :build, "build#{Time.now.to_i}"
    set :drupal_root, "#{fetch(:build_root)}/#{fetch(:build)}"
    set :httpd_subdir, "/current/builds/#{fetch(:build)}"
    # MySQL Schema for build
    set :drupal_db, fetch(:build)
  end

  # [internal] desc 'Generate and upload a build file'
  task :gen_build do 

    profile_branch = ''

    run_locally do 
      # Tell drush to checkout the the same branch as currently checked out
        current_branch = fetch(:branch)
        info "Building Branch: #{current_branch}"

        if current_branch == 'HEAD'
            revision = capture("git rev-parse HEAD").chomp
            info "Revision ##{revision}"
            profile_branch = "projects[#{fetch(:application)}][download][revision] = \"#{revision}\" "
        else
            profile_branch = "projects[#{fetch(:application)}][download][branch] = \"#{current_branch}\" "
        end
    end

    on roles(:web) do
      file = gen_file( repo: fetch(:repo_url), 
               file: fetch(:build_file), 
               profile_branch: profile_branch 
              )     
      upload! StringIO.new(file), "#{fetch(:drupal_root)}/#{fetch(:build_file)}"
    end
  end

  # [internal] desc 'Generate and upload profile make file'
  task :gen_make_profile do
    on roles(:web) do
      profile_root = "#{fetch(:drupal_root)}/profiles/#{fetch(:application)}"
      execute :mkdir, "-p #{profile_root}"
      within profile_root do 
        execute :git, 'archive', "--remote=#{fetch(:repo_url)}", fetch(:branch), "| tar -x --no-same-owner"
      end
      file =  gen_file( file: fetch(:make_file), raw_base_uri: fetch(:raw_base_uri) )
      upload! StringIO.new(file), "#{profile_root}/#{fetch(:make_file)}"
    end
  end 

  # [internal] desc 'Patch htaccess for builds in subdirs'
  task :apache_subdir_patch do
    invoke 'drupal:dev:build_id'
    drupal_root = fetch(:drupal_root)   
    on roles(:web) do
      file = gen_file( file: '.htaccess', subdir: fetch(:httpd_subdir) )
      upload! StringIO.new(file), "#{drupal_root}/.htaccess" if test "[ -d #{drupal_root} ]"
    end
  end

  desc 'Sync remote feature changes to the local repo'
  task :dlfeatures do 
    invoke 'drupal:dev:build_id'
    run_locally do 
      features = "#{roles(:web).first}:#{fetch(:drupal_root)}/profiles/#{fetch(:application)}/modules/features/*"
      within "#{Dir.pwd}/modules/features" do
          execute :scp, '-r', features, '.'
      end
    end
  end

  desc 'Update the database for generated fields'
  task :upgen do

    invoke 'drupal:dev:build_id'

    # FIX Field collection devel_generate
    # https://drupal.org/node/1236402#comment-5044530
    # https://drupal.org/node/1266620

    query  = ["\n"]
    fields = ['affiliations','education','leadership','professional_titles']
    fields.each do |field|
      query << "UPDATE field_data_field_#{field} SET field_#{field}_revision_id = field_#{field}_value WHERE field_#{field}_revision_id IS NULL;"
      query << "UPDATE field_revision_field_#{field} SET field_#{field}_revision_id = field_#{field}_value WHERE field_#{field}_revision_id IS NULL;"
    end

    on roles(:db) do 
      within fetch(:drupal_root) do
        execute :drush, 'sql-query', "'#{query.join("\n")}'"
        execute :drush, :cc, :all, '2>&1'
        execute :drush, 'sql-query', '"UPDATE node SET status = 1; UPDATE node_revision SET status = 1;"'
      end
    end
  end

  desc 'Nuke old builds from the database'
  task :purge do
    on roles(:web) do
      if test "[ -d #{fetch(:build_root)} ]" 
        within fetch(:build_root) do
          sql = ["\n"]
          if test :ls, '-1', '-d */'
            builds = capture(:ls, '-1', '-d */').split(/\r?\n/) 
            builds.each do |build|
              sql << "DROP DATABASE IF EXISTS #{build.sub(/(\W)+$/,'')};"
            end
            Rake::Task['mysql:query'].invoke(sql.join("\n"))
          else
            info "No builds to purge"
          end
        end
      end
    end
  end

  desc 'Delete a build and its accompanying database'
  task :delete, [:build] do |t, args|

    invoke 'drupal:unlock'

    on roles(:web) do
      within fetch(:build_root) do
        # if test "[ -d #{args[:build]} ]"
          # execute :sudo, :chown, '-fR', "#{fetch(:deploy_user)}:#{fetch(:server_group)}", args[:build]
          # execute :sudo, :chmod, 'u+rwx', args[:build]
          execute :rm, '-fr', args[:build]
        # end
      end
    end

    on roles(:db) do
      sql = "DROP DATABASE IF EXISTS #{args[:build]};"
      Rake::Task['mysql:query'].invoke(sql)
    end

  end

  desc 'Overwrite a build'
  task :overwrite do
    invoke 'mysql:cli_auth'
    invoke 'drupal:unlock'
    on roles(:db) do
      db_exists    = !capture( :mysql, fetch(:db_auth)[:cli], "-e \"SHOW DATABASES LIKE '#{fetch(:build)}'\";" ).empty?
      build_exists = test "[ -d #{fetch(:drupal_root)} ]"
      
      if db_exists || build_exists
        ask :overwrite_current_build, "N"
        if fetch(:overwrite_current_build) =~ /^(Yes|Y)/i
          within fetch(:build_root) do
          #within fetch(:drupal_root) do
            execute :mysql, fetch(:db_auth)[:cli], "-e 'DROP DATABASE IF EXISTS #{fetch(:build)};'"
            execute :rm, "-fr #{fetch(:build)}", :raise_on_non_zero_exit => false
            #execute :rm, '-fr *', :raise_on_non_zero_exit => false
            #execute :rm, '-fr .*', :raise_on_non_zero_exit => false
          end
        else
          warn "\n\n --- !!! PREVENTING OVERWRITE !!! --- \n\n"
          exit
        end
      end
    end
  end

end

# namespace :apache do
# end

namespace :mysql do

  desc 'Run a SQL query against the target host'
  task :query, :sql do |t, args|
     on roles(:db) do      
      execute :mysql, fetch(:db_auth)[:cli], "-e \"#{args[:sql]}\""
    end
  end

  # [internal] desc 'construct the cli auth string'
  task :cli_auth do
    auth       = fetch(:db_auth)
    schema     = fetch(:drupal_db)
    pass       = (auth[:password].nil? || auth[:password].empty?) ? '' : "-p'#{auth[:password]}' "
    auth[:cli] = pass+"-h'#{auth[:host]}' -u'#{auth[:username]}'"
  end

  before :query, :cli_auth
end

# namespace :git do

#   desc "Place release tag into Git and push it to origin server."
#   task :push_deploy_tag do
#     user = `git config --get user.name`
#     email = `git config --get user.email`
#     tag = "release_#{release_name}"
#     if exists?(:stage)
#       tag = "#{stage}_#{tag}"
#     end
#     puts `git tag #{tag} #{revision} -m "Deployed by #{user} <#{email}>"`
#     puts `git push origin tag #{tag}`
#   end

# end

namespace :drush do

#   drupal_root = fetch(:drupal_root)
#   drush = "#{fetch(:drush_cmd)} -r #{drupal_root}"

#   desc "Backup the database"
#   task :backupdb do
#     run "#{drush} bam-backup"
#   end

#   desc "Run Drupal database migrations if required"
#   task :updatedb do
#     run "#{drush} updatedb -y"
#   end

  desc "Clear the drupal cache"
  task :cc do
    on roles(:web) do
      within fetch(:drupal_root) do
        execute :drush, :cc, :all, '2>&1'
      end    
    end
  end

#   desc "Set the site offline"
#   task :site_offline do
#     run "#{drush} vset site_offline 1 -y"
#     run "#{drush} vset maintenance_mode 1 -y"
#   end

#   desc "Set the site online"
#   task :site_online do
#     run "#{drush} vset site_offline 0 -y"
#     run "#{drush} vset maintenance_mode 0 -y"
#   end

end


def gen_file(token = {})
  template = File.open("#{Dir.pwd}/config/templates/#{token[:file]}.erb",'r').read
  erb = ERB.new(template)
  erb.result(binding)
end


class DrushFormatter < SSHKit::Formatter::Pretty
  def write(obj)
    return if obj.verbosity < SSHKit.config.output_verbosity
    case obj
    when SSHKit::Command    
      if obj.command === :drush
        drush(obj)
      else
        write_command(obj)
      end
    when SSHKit::LogMessage then write_log_message(obj)
    else
      original_output << c.black(c.on_yellow("Output formatter doesn't know how to handle #{obj.class}\n"))      
    end
  end 
  alias :<< :write

  private

  def drush(command)
    unless command.started?
      original_output << level(command.verbosity) + uuid(command) + "Running #{c.yellow(c.bold(String(command)))} on #{c.blue(command.host.to_s)}\n"
      if SSHKit.config.output_verbosity == Logger::DEBUG
        original_output << level(Logger::DEBUG) + uuid(command) + "Command: #{c.blue(command.to_command)}" + "\n"
      end
    end

    if SSHKit.config.output_verbosity == Logger::DEBUG
      unless command.stdout.empty?
        command.stdout.lines.each do |line|
          state = line[/.*(\[[^\]]*\])/,1]
          state.chomp! if state
          line.gsub!("#{state}",'').chomp!

          case state
          when /ok/i
            status = c.green(state)
          when /warning/i
            status = c.yellow(state)
          when /error/in
            status = c.blink(c.red(state))
          else
            status = c.cyan(state) || ''
          end  

          original_output << level(Logger::DEBUG) + c.white(line) + status
          original_output << "\n" unless line[-1] == "\n"
        end
      end

      unless command.stderr.empty?
        command.stderr.lines.each do |line|
          original_output << level(Logger::DEBUG) + uuid(command) + c.red("\t" + line)
          original_output << "\n" unless line[-1] == "\n"
        end
      end
    end

    if command.finished?
      original_output << level(command.verbosity) + uuid(command) + "Finished in #{sprintf('%5.3f seconds', command.runtime)} with exit status #{command.exit_status} (#{c.bold { command.failure? ? c.red('failed') : c.green('successful') }}).\n"
    end
  end
end


