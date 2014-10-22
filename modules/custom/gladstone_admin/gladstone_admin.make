; Gladstone Admin Makefile

api = 2
core = 7.x

;Admin Launcher
projects[coffee][version] = "2.0"
projects[coffee][subdir]	= "contrib"

;Fast Permissions Administration
projects[fpa][version]	= "2.6"
projects[fpa][subdir]	= "contrib"

;Modules Management Filters
projects[module_filter][version] = "2.x-dev"
projects[module_filter][subdir]  = "contrib"

;Menu Power editing
projects[menu_editor][version] = "1.0-beta3"
projects[menu_editor][subdir] = "contrib"

;Admin theme
projects[rubik][version] 			= "4.0-dev"
projects[rubik][download][type] 	= git
projects[rubik][download][revision] = 05ffd6f9
projects[rubik][download][branch] 	= 7.x-4.x
;projects[rubik][patch][] = ""
projects[tao][version] = "3.1"

; Contextual add of relations
projects[relation_dialog][version]  = 1.x-dev
projects[relation_dialog][subdir]	 = contrib
projects[relation_dialog][download][type]     = git
projects[relation_dialog][download][revision] = fa981fe9
projects[relation_dialog][download][branch]   = 7.x-1.x
; Entity create context button not showing: https://www.drupal.org/node/2174815
projects[relation_dialog][patch][]   = https://www.drupal.org/files/issues/2174815-eliminate-PHP-warning-and-notice-7.patch

projects[references_dialog][version]  = 1.x-dev
projects[references_dialog][subdir]	 = contrib
projects[references_dialog][download][type]     = git
projects[references_dialog][download][revision] = 746a40d9
projects[references_dialog][download][branch]   = 7.x-1.x

projects[simplify][version]  = 3.x-dev
projects[simplify][subdir]	 = contrib
projects[simplify][download][type]     = git
projects[simplify][download][revision] = 7681b0e7
projects[simplify][download][branch]   = 7.x-3.x

