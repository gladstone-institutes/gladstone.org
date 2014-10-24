; Gladstone Widgets Makefile

api = 2
core = 7.x


projects[menu_block][version]	= "2.x-dev"
projects[menu_block][subdir]	= "contrib"
projects[menu_block][download][type]     = git
projects[menu_block][download][revision] = 193b23a0
projects[menu_block][download][branch]   = 7.x-2.x
; add exportable/features suport https://drupal.org/node/693302#comment-7946737
projects[menu_block][patch][]   = https://drupal.org/files/ctools_exportable-693302-119.patch

projects[views_autocomplete_filters][version] 	= 7.x-1.x-dev
projects[views_autocomplete_filters][subdir] 	= contrib
projects[views_autocomplete_filters][download][type]     = git
projects[views_autocomplete_filters][download][revision] = 4773fbe5
projects[views_autocomplete_filters][download][branch]   = 7.x-1.x

projects[better_exposed_filters][version] 			 = 7.x-3.x-dev
projects[better_exposed_filters][subdir] 			 = contrib
projects[better_exposed_filters][download][type]     = git
projects[better_exposed_filters][download][revision] = 5e91a5bc
projects[better_exposed_filters][download][branch]   = 7.x-3.x
; Workaround for php max_input_vars warning https://www.drupal.org/node/1891612
projects[better_exposed_filters][patch][]   = https://www.drupal.org/files/better_exposed_filters-max_input_vars-1891612-7.patch