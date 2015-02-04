

def template(template, tokens = {})
	if File.extname(template) != 'erb'
		template = template + '.erb'
	end
	file = File.open("#{Dir.pwd}/config/templates/#{template}",'r').read
	ERB.new(file).result(binding)
end

class Mysql
	def self.auth_string
		host = fetch(:mysql)[:host]
		user = fetch(:mysql)[:admin_user]
		pass = fetch(:mysql)[:admin_pass]
		pass = (pass.nil? || pass.empty?) ? '' : "-p'#{pass}'"
		auth_string = pass+" -h'#{host}' -u'#{user}'"    
	end
end

class Drupal
	def self.profile_path
		"#{current_path}/profiles/#{fetch(:application)}"
	end

	def self.theme_path
		"#{Drupal.profile_path}/themes/#{fetch(:application)}"
	end
end
