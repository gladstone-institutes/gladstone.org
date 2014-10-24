; Gladstone Profiles Makefile

api = 2
core = 7.x

projects[profile2][version] = "1.x-dev"
projects[profile2][subdir]	= "contrib"
projects[profile2][download][type]		= git
projects[profile2][download][revision]	= 724a5e94
projects[profile2][download][branch]	= 7.x-1.x
; fix for Profile relationship by type https://drupal.org/comment/8004625#comment-8004625
; projects[profile2][patch][]   = "<%= token[:raw_base_uri] %>/patches/profile2-profile2_from_user_relation.patch"
; projects[profile2][patch][]   = "<%= token[:raw_base_uri] %>/patches/profile2-uri_callback.patch"projects[profile2][version] = "1.x-dev"

projects[name][version]  = 1.x-dev
projects[name][subdir]	 = contrib
projects[name][download][type]     = git
projects[name][download][revision] = dbb981c8
projects[name][download][branch]   = 7.x-1.x

projects[email][version] = "1.x-dev"
projects[email][subdir]	= "contrib"
projects[email][download][type]		= git
projects[email][download][revision]	= 25dd1a4e
projects[email][download][branch]	= 7.x-1.x

projects[phone][version] = "1.x-dev"
projects[phone][subdir]	= "contrib"
projects[phone][download][type]		= git
projects[phone][download][revision]	= 7ad8524a
projects[phone][download][branch]	= 7.x-1.x
libraries[libphonenumber][download][type]    = get
libraries[libphonenumber][download][url]     = https://github.com/giggsey/libphonenumber-for-php
libraries[libphonenumber][download][subtree] = src/libphonenumber
libraries[libphonenumber][destination]       = libraries/libphonenumber-for-php

projects[field_collection_tabs_widget][version] = "1.x-dev"
projects[field_collection_tabs_widget][subdir]	= "contrib"
projects[field_collection_tabs_widget][download][type]		= git
projects[field_collection_tabs_widget][download][revision]	= 7e0fb32c
projects[field_collection_tabs_widget][download][branch]	= 7.x-1.x
libraries[erta][download][type]    = git
libraries[erta][download][url]     = https://github.com/samsono/Easy-Responsive-Tabs-to-Accordion.git
libraries[erta][destination]       = libraries

projects[field_permissions][version] = "1.0-beta2"
projects[field_permissions][subdir] = "contrib"

projects[panels_ajax_tab][version] = "1.x-dev"
projects[panels_ajax_tab][subdir]	= "contrib"
projects[panels_ajax_tab][download][type]		= git
projects[panels_ajax_tab][download][revision]	= 96b73a48
projects[panels_ajax_tab][download][branch]	= 7.x-1.x
;workaround for pass by strict warnings
projects[panels_ajax_tab][patch][]	= https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/panels_ajax_tab-pass_by_strict_ref-1.0-alpha+1-dev.patch

