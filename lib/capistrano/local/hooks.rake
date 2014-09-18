before 'deploy', 'drupal:dev:purge'
after 'drupal:dev:gen_make_profile', 'drupal:dev:symlink'
after 'deploy', :symlink_builds do
  on roles(:web) do
    within fetch(:deploy_to) do
      execute :ln, '-s', fetch(:build_root), :raise_on_non_zero_exit => false
    end
  end
end