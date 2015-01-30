


namespace :mysql do
  desc 'Run a SQL query against the target host'
  task :query, :sql do |t, args|    
    host = fetch(:mysql_admin)[:host]
    user = fetch(:mysql_admin)[:user]
    pass = fetch(:mysql_admin)[:pass]
    pass = (pass.nil? || pass.empty?) ? '' : "-p'#{pass}'"
    auth_string = pass+"-h'#{host}' -u'#{user}'"
    query = '-e "'+args[:sql]+'"'

    on roles(:db) do      
      execute :mysql, auth_string, query
    end
  end
end