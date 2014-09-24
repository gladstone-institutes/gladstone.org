; Base Makefile

api = 2
core = 7.x

; Structure -------------------------------------
projects[views][version]  = 3.7
projects[views][subdir]   = contrib

projects[token][version]	= 1.5
projects[token][subdir]		= contrib

projects[field_group][version] = 1.4
projects[field_group][subdir]  = contrib

projects[libraries][version] = 2.1

; Media -----------------------------------------
projects[media][version] = 2.x-dev
projects[media][subdir]	 = contrib

projects[media_youtube][version] = 2.x-dev
projects[media_youtube][subdir]  = contrib

projects[ckeditor_media][version] = 1.x-dev
projects[ckeditor_media][subdir]  = contrib

projects[file_entity][version] = 2.x-dev
projects[file_entity][subdir]  = contrib

; UI Widgets ------------------------------------
projects[autocomplete_deluxe][version] 	= 7.x-2.0-beta3+2-dev
projects[autocomplete_deluxe][subdir] 	= contrib
projects[autocomplete_deluxe][download][type]     = git
projects[autocomplete_deluxe][download][revision] = 70bdefe5
projects[autocomplete_deluxe][download][branch]   = 7.x-2.0

; Filters ---------------------------------------
projects[htmlpurifier][version]	= 2.x-dev
projects[htmlpurifier][subdir]	= contrib
projects[htmlpurifier][download][type]		= git
projects[htmlpurifier][download][revision]	= a62d293a
projects[htmlpurifier][download][revision]	= 7.x-2.x
libraries[htmlpurifier][download][type]	= get
libraries[htmlpurifier][download][url]	= http://htmlpurifier.org/releases/htmlpurifier-4.6.0.tar.gz
libraries[htmlpurifier][destination]	= libraries