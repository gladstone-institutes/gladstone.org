
set :mysql, ->() {
  {
    host: '127.0.0.1',
    admin_user: 'root',
    admin_pass: '',
    app_pass: ''
  }
}

namespace :mysql do
  desc 'Run a SQL query against the target host'
  task :query, :sql do |t, args|    
    auth_string = 
    query = '-e "'+args[:sql]+'"'
    on roles(:db) do      
      execute :mysql, Mysql.auth_string, *args.extras, query
    end
  end

  desc "Drop all databases of the form #{fetch(:stage)}_*"
  task 'cleanup:all' do
    on roles(:db) do
      databases = capture(:mysql, Mysql.auth_string, '--skip-column-names',
                    %Q{-e "show databases like '#{fetch(:stage)}_%'";}).split
      databases.each do |database|
        execute :mysql, Mysql.auth_string, 
          %Q{-e "DROP DATABASE IF EXISTS #{database};"}
      end
    end
  end

  ### Internal Tasks -----

  # desc 'drop databases belonging to old releases'
  task :cleanup do    
    on roles(:db) do
      releases  = capture(:ls, '-xtr', releases_path).split
      databases = capture(:mysql, Mysql.auth_string, 
                    '--skip-column-names',
                    %Q{-e "show databases like '#{fetch(:stage)}_%'";}).split
      release_dbs_to_drop = databases.map{|d| d.split('_')[1]} - releases

      release_dbs_to_drop.each do |drop_release_timestamp|
        schema = "#{fetch(:stage)}_#{drop_release_timestamp}"
        execute :mysql, Mysql.auth_string,
          %Q{-e "DROP DATABASE IF EXISTS #{schema};"}
      end
    end
  end

  task :cleanup_rollback do
    on roles(:db) do
      last_release = capture(:ls, '-xt', releases_path).split.first
      last_release_schema = "#{fetch(:stage)}_#{last_release}"

      if test "[ `readlink #{current_path}` != #{last_release_path} ]"       
        execute :mysql, Mysql.auth_string, last_release_schema,
          '| gzip -9 >', deploy_path.join("rolled-back-release-#{last_release}.sql.gz")
        execute :mysql, Mysql.auth_string,
          %Q{-e "DROP DATABASE IF EXISTS #{last_release_schema};"}
      else
        debug 'Last release is the current release, skip mysql:cleanup_rollback.'
      end
    end
  end
end


