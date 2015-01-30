

set :drush_roles, :all
set :drush_site_dir, ->() { fetch(:release_path) }
set :drush_env, ->(){
	{
		php_options: "'-d max_execution_time=0 -d disable_functions=set_time_limit'"
	}
}

namespace :drush do
	desc 'run an arbitrary drush command'
	task :run, :command do |t, args|
		on release_roles(fetch(:drush_roles)) do
			within fetch(:drush_site_dir) do
				with fetch(:drush_env) do 
					SSHKit.config.output = DrushFormatter.new($stdout)
					execute :drush, '-p', args[:command], *args.extras
				end
			end
		end
	end
end


task :drush, [:command] => 'drush:run'


class DrushFormatter < SSHKit::Formatter::Pretty
	
	def write(obj)
		return if obj.verbosity < SSHKit.config.output_verbosity
		case obj
		when SSHKit::Command	then drush(obj)
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
					when /ok/i 			then status = c.green(state)
					when /warning/i		then status = c.yellow(state)
					when /error/in		then status = c.blink(c.red(state))
					when nil			then status = ''
					else					 status = c.cyan(state)					
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