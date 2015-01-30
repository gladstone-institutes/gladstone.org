

def template(template, tokens = {})
	if File.extname(template) != 'erb'
		template = template + '.erb'
	end
	file = File.open("#{Dir.pwd}/config/templates/#{template}",'r').read
	ERB.new(file).result(binding)
end