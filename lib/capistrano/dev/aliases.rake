# Alias drupal:build to drupal:dev:build
Rake::Task["drupal:build"].clear
desc 'Build a DEV site (end-to-end)'
task 'drupal:build' do invoke 'drupal:dev:build' end