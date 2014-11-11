; Base Makefile

api = 2
core = 7.x

; Structure -------------------------------------
projects[views][version]  = 3.8
projects[views][subdir]   = contrib

projects[token][version]	= 1.5
projects[token][subdir]		= contrib

projects[field_group][version] = 1.4
projects[field_group][subdir]  = contrib

projects[libraries][version] = 2.1

projects[entityreference][version]	= 1.x-dev
projects[entityreference][subdir]	= contrib
projects[entityreference][download][type]		= git
projects[entityreference][download][revision]	= dc4196b
projects[entityreference][download][branch]		= 7.x-1.x
;display views label in autocomplete, not the entity type: https://www.drupal.org/node/1896210
projects[entityreference][patch][1896210] = https://www.drupal.org/files/issues/entityreference-1896210-5.patch

projects[link][version] = "1.2"
projects[link][subdir]	= "contrib"

projects[date][version] = "2.8"
projects[date][subdir]  = "contrib"

projects[relation][version]  = 1.x-rc5
projects[relation][subdir]	 = contrib
projects[relation][download][type]     = git
projects[relation][download][revision] = 5b8e243b
projects[relation][download][branch]   = 7.x-1.x
; workaround for migrate error
projects[relation][patch][] = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/relation-field_validation_failed-2160525-4.patch

projects[relation_add][version]  = 1.x-dev
projects[relation_add][subdir]	 = contrib
projects[relation_add][download][type]     = git
projects[relation_add][download][revision] = 93d6dda9
projects[relation_add][download][branch]   = 7.x-1.x
; Add case for profile2 relation_add queries, depends on computed_field:field_label_alias in target entity
projects[relation_add][patch][]   = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/realtion_add-profile2_query_case.patch

projects[auto_entitylabel][version] = "1.x-dev"
projects[auto_entitylabel][subdir]	= "contrib"
projects[auto_entitylabel][download][type]		= git
projects[auto_entitylabel][download][revision]	= baf64896
projects[auto_entitylabel][download][branch]	= 7.x-1.x

projects[computed_field][version] = "1.x-dev"
projects[computed_field][subdir]	= "contrib"
projects[computed_field][download][type]		= git
projects[computed_field][download][revision]	= c93e2512
projects[computed_field][download][branch]	= 7.x-1.x

projects[field_collection][version] = "1.x-dev"
projects[field_collection][subdir]	= "contrib"
projects[field_collection][download][type]		= git
projects[field_collection][download][revision]	= 13c47f88
projects[field_collection][download][branch]	= 7.x-1.x

;these patches may be needed for importing "deployed profiles"
;https://drupal.org/files/field_collection-field_collection_uuid-2075325-2.patch
;projects[field_collection][patch][]	= https://drupal.org/files/field_collection-field_collection_uuid-2075325-2.patch
;projects[field_collection][patch][] = "<%= token[:raw_base_uri] %>/patches/field_collection-revisiond_id_default.patch"
;projects[field_collection][patch][] = "<%= token[:raw_base_uri] %>/patches/field_collection-uri_callback.patch"
;maybe this woudl be a better option, put it in superstructure; https://www.drupal.org/project/field_collection_deploy

; Media -----------------------------------------
projects[media][version] = 2.x-dev
projects[media][subdir]	 = contrib

projects[media_youtube][version] = 2.x-dev
projects[media_youtube][subdir]  = contrib

projects[ckeditor_media][version] = 1.x-dev
projects[ckeditor_media][subdir]  = contrib

projects[file_entity][version] = 2.x-dev
projects[file_entity][subdir]  = contrib

projects[imagefield_focus][version] = "1.x-dev"
projects[imagefield_focus][subdir]	= "contrib"
projects[imagefield_focus][download][type]		= git
projects[imagefield_focus][download][revision]	= fd5c5df2
projects[imagefield_focus][download][branch]	= 7.x-1.x
;patch to intergrate with media-2.x-dev: https://drupal.org/node/1781778#comment-7641057
projects[imagefield_focus][patch][] = https://drupal.org/files/imagefield_focus-media-integration.patch


; UI Widgets ------------------------------------
projects[autocomplete_deluxe][version] 	= 7.x-2.0-dev
projects[autocomplete_deluxe][subdir] 	= contrib
projects[autocomplete_deluxe][download][type]     = git
projects[autocomplete_deluxe][download][revision] = a49e633d
projects[autocomplete_deluxe][download][branch]   = 7.x-2.0


; Filters ---------------------------------------
projects[better_formats][version]	= 1.x-dev
projects[better_formats][subdir]	= contrib
projects[better_formats][download][type]		= git
projects[better_formats][download][revision]	= 3b4a8c92
projects[better_formats][download][revision]	= 7.x-1.x

projects[htmlpurifier][version]	= 2.x-dev
projects[htmlpurifier][subdir]	= contrib
projects[htmlpurifier][download][type]		= git
projects[htmlpurifier][download][revision]	= a62d293a
projects[htmlpurifier][download][revision]	= 7.x-2.x
libraries[htmlpurifier][download][type]	= get
libraries[htmlpurifier][download][url]	= http://htmlpurifier.org/releases/htmlpurifier-4.6.0.tar.gz
libraries[htmlpurifier][destination]	= libraries

; Libraries -------------------------------------
projects[jquery_update][version] = 2.4
projects[jquery_update][subdir]  = contrib
