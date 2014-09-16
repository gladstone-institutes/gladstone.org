namespace :merge do
# Scripted git behaviors for working in our Drupal project

  desc 'Merge to the content branch'
  task :content, :message do |t, args| 
    warn 'Need to be on a contents/* branch of dev' and exit if fetch(:branch) !~ /^content/
    set :target_branch, :content 
    commit_message(args[:message])     
    run_locally do
      execute :git, :add, '-f', '--', 'modules/content/' 
    end
    invoke 'merge:cross_branch'
  end

  desc 'Update the distribution branch'
  task :distro, :message do |t, args| 
    warn 'Need to be on a release/* branch of dev' and exit if fetch(:branch) !~ /^release/
    set :target_branch, :distro
    commit_message(args[:message])     
    run_locally do
      execute :git, :add, '-f', '--', 'gladstone.org/'
    end
    invoke 'merge:cross_branch'
  end

  desc 'Update the master install profile branch'
  task :master, :message do |t, args|
    warn 'Not on dev branch' and exit if fetch(:branch) != 'dev'
    set :target_branch, :master
    commit_message(args[:message])     
    invoke 'merge:sanitized'
  end



  # [internal] desc 'Perform a cross-branch commit'
  task :cross_branch do
    run_locally do
      stash = capture(:git, :stash, :create).chomp
      execute :git, :stash, :apply, stash
      execute :git, :commit, "-m '#{fetch(:commit_message)}'"
      execute :git, :checkout, fetch(:target_branch)
      execute :git, :stash, :apply, stash
      execute :git, :commit, "-m '#{fetch(:commit_message)}'"
      execute :git, :checkout, :dev
    end
  end

  # [internal] desc 'Perform a sanitized-merge'
  task :sanitized do
    run_locally do
      execute :git, :checkout, fetch(:target_branch)
      paths = read_gitignore()
      # execute :git, :merge, '--no-ff',  '--no-commit', '--quiet', fetch(:branch), :raise_on_non_zero_exit => false
      # Use squash rather than no-ff to prevent commits from other branches passing through the merge
      execute :git, :merge, '--squash', '--no-commit', '--quiet', fetch(:branch), :raise_on_non_zero_exit => false
      execute :git, :reset, '--', paths.join(' ')
      execute :git, :commit, "-m '#{fetch(:commit_message)}'"
    end
  end

  # [internal] desc 'Perform a detached commit & merge'
  task :detached do
      ## Code below leaves a "detached commit" of the sensitization process ##
      unsanitized_dev_sha = capture(:git, 'rev-parse', fetch(:branch)).chomp
      execute :git, :checkout, unsanitized_dev_sha
      paths = read_gitignore()
      execute :git, :rm, '-rf', '--ignore-unmatch', '--', paths.join(' ') , :raise_on_non_zero_exit => false
      execute :git, :commit, "-m 'detached merge #{fetch(:commit_message)}'"
      sanitized_commit_sha = capture(:git, 'rev-parse', 'HEAD').chomp
      execute :git, :checkout, fetch(:target_branch)
      execute :git, :merge, "-m '#{fetch(:commit_message)}'", sanitized_commit_sha
  end

  def commit_message(message)
    if message.nil? or message.length.zero?
      ask :commit_message, "cap-drupalflow #{Time.now.to_i}"
    else
      set :commit_message, message
    end
  end

  def read_gitignore()
    return File.open('.gitignore','r').readlines.
                select{|l| l !~ /^#/}.
                map{|l| l.chomp}
  end
end