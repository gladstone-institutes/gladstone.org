Rake::Task["drupal:build"].clear
desc 'Build a DEV site (end-to-end)'
task 'drupal:build' do invoke 'drupal:dev:build' end

task :pull, [:drush_alias] => 'pull:default'
task :delete, [:build] => 'drupal:dev:delete'