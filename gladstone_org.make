; Gladstone Institutes Org ****************************************************
; 
; This make file will bootstrap the site with Drupal core and all needed 
; modules, profiles, themes, libraries, etc... 
;
; A site can be built using the drush command
;  
;   $ drush make gladstone.org.make <target dir>
;
; [1] https://drupal.org/node/1432374
; 

; base - Core --------------------------------------------------------
api = 2
core = 7.x


;	Structural -----

projects[features][version] = "2.0-rc1"
projects[features][subdir]  = "contrib"

projects[views][version]  = 3.8
projects[views][subdir]   = contrib

projects[token][version]	= 1.5
projects[token][subdir]		= contrib

projects[field_group][version] = 1.4
projects[field_group][subdir]  = contrib

projects[libraries][version] = 2.1

projects[relation][version]  = 7.x-1.x-dev
projects[relation][subdir]	 = contrib
projects[relation][download][type]     = git
projects[relation][download][revision] = f6938120
projects[relation][download][branch]   = 7.x-1.x
; workaround for migrate error
projects[relation][patch][] = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/relation-field_validation_failed-2160525-4.patch

projects[page_manager_pathauto][version] = "1.x-dev"
projects[page_manager_pathauto][subdir]  = "contrib"
; custom patch to resolve php5.4 warning, that key doesnt exist
projects[page_manager_pathauto][patch][] = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/page_manager_pathauto-strict_warning_illegal_string_offset.patch
projects[page_manager_pathauto][patch][] = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/page_manager_pathauto-on_all_page_manager_pages.patch

projects[ctools][version] = "1.4"
projects[ctools][subdir]  = "contrib"
; allow values to be entered in ui for string contexts
projects[ctools][patch][] = "https://drupal.org/files/ctools.code_.1774434-7.patch"
; allow admin overlay for pager page_manager
projects[ctools][patch][] = "https://www.drupal.org/files/page-manager-admin-paths-1120028-14.patch"

projects[panels][version] = "3.x-dev"
projects[panels][subdir]  = "contrib"
projects[panels][download][type] = git
projects[panels][download][revision] = 5fc99872
projects[panels][download][branch] = 7.x-3.x

projects[panels_css_js][version] = "1.1"
projects[panels_css_js][subdir]  = "contrib"
projects[panels_css_js][patch][] = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/panels_css_js-allowing_configuration_options-2228381-2.patch
projects[panels_css_js][patch][] = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/panels_css_js-allowing_configuration_options-2228381-3.patch

projects[panelizer][version]  = 7.x-3.1+90-dev
projects[panelizer][subdir]	 = contrib
projects[panelizer][download][type]     = git
projects[panelizer][download][revision] = 809ab899
projects[panelizer][download][branch]   = 7.x-3.x

projects[pm_existing_pages][version]  = 7.x-1.x-dev
projects[pm_existing_pages][subdir]	 = contrib
projects[pm_existing_pages][download][type]     = git
projects[pm_existing_pages][download][revision] = e0451cc0
projects[pm_existing_pages][download][branch]   = 7.x-1.x
projects[pm_existing_pages][patch][] = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/pm_existing_pages-wildcard_support.patch

; add ability to inject nodes into the menu structure
projects[menu_position][version]	= "1.x-dev"
projects[menu_position][subdir]		= "contrib"

projects[pathauto][version]	= "1.2"
projects[pathauto][subdir]	= "contrib"

projects[subpathauto][version]	= "1.3"
projects[subpathauto][subdir]	= "contrib"

projects[globalredirect][version]  = 1.x-dev
projects[globalredirect][subdir]	 = contrib
projects[globalredirect][download][type]     = git
projects[globalredirect][download][revision] = e7debe9a
projects[globalredirect][download][branch]   = 7.x-1.x

projects[pathologic][version]  = 7.x-3.x
projects[pathologic][subdir]	 = contrib
projects[pathologic][download][type]     = git
projects[pathologic][download][revision] = 19456fe6
projects[pathologic][download][branch]   = 7.x-3.x
; patch for https://www.drupal.org/node/1958122#comment-9471039
projects[pathologic][patch][]   = https://www.drupal.org/files/issues/pathologic_should-1958122-4%20-%20full.patch

projects[logintoboggan][version]	= "1.4"
projects[logintoboggan][subdir]		= "contrib"


;	Fields -----

projects[link][version] = "1.3"
projects[link][subdir]	= "contrib"

projects[date][version] = "2.8"
projects[date][subdir]  = "contrib"
;fix date import timezone conversion https://www.drupal.org/node/2305049
projects[date][patch][] = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/date-timezone_correction.patch

projects[entityreference][version]	= 1.x-dev
projects[entityreference][subdir]	= contrib
projects[entityreference][download][type]		= git
projects[entityreference][download][revision]	= dc4196b
projects[entityreference][download][branch]		= 7.x-1.x
;display views label in autocomplete, not the entity type: https://www.drupal.org/node/1896210
projects[entityreference][patch][1896210] = https://www.drupal.org/files/issues/entityreference-1896210-5.patch

projects[relation_add][version]  = 1.x-dev
projects[relation_add][subdir]	 = contrib
projects[relation_add][download][type]     = git
projects[relation_add][download][revision] = 93d6dda9
projects[relation_add][download][branch]   = 7.x-1.x
; Add case for profile2 relation_add queries, depends on computed_field:field_label_alias in target entity
projects[relation_add][patch][]   = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/relation_add-profile2_query_case.patch

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

projects[auto_entitylabel][version] = "1.x-dev"
projects[auto_entitylabel][subdir]	= "contrib"
projects[auto_entitylabel][download][type]		= git
projects[auto_entitylabel][download][revision]	= baf64896
projects[auto_entitylabel][download][branch]	= 7.x-1.x


;	Media -----

projects[media][version] = 2.x-dev
projects[media][subdir]	 = contrib
projects[media][download][type] 	  = git
projects[media][download][revision] = 247b31f8
projects[media][download][branch]   = 7.x-2.x
; fix markup is strip-out by ckeditor @see https://www.drupal.org/node/2364559
projects[media][patch][] = https://www.drupal.org/files/issues/media-document-stripped-ckeditor-2364559-9.patch

projects[media_youtube][version] = 2.x-dev
projects[media_youtube][subdir]  = contrib
projects[media_youtube][download][type] 	  = git
projects[media_youtube][download][revision] = 9728dfb1
projects[media_youtube][download][branch]   = 7.x-2.x

projects[media_vimeo][version] = 7.x-2.0
projects[media_vimeo][subdir] = contrib
projects[media_vimeo][download][type] 	  = git
projects[media_vimeo][download][revision] = 546dfa35
projects[media_vimeo][download][branch]   = 7.x-2.x

projects[ckeditor_media][version] = 1.x-dev
projects[ckeditor_media][subdir]  = contrib

projects[file_entity][version] = 2.x-dev
projects[file_entity][subdir]  = contrib
projects[file_entity][download][type] 	  = git
projects[file_entity][download][revision] = 39e9f081
projects[file_entity][download][branch]   = 7.x-2.x

projects[imagefield_focus][version] = "1.x-dev"
projects[imagefield_focus][subdir]	= "contrib"
projects[imagefield_focus][download][type]		= git
projects[imagefield_focus][download][revision]	= fd5c5df2
projects[imagefield_focus][download][branch]	= 7.x-1.x
;patch to intergrate with media-2.x-dev: https://drupal.org/node/1781778#comment-7641057
projects[imagefield_focus][patch][] = https://drupal.org/files/imagefield_focus-media-integration.patch


;	User interface & experience -----

projects[jquery_update][version] = 2.4
projects[jquery_update][subdir]  = contrib

projects[autocomplete_deluxe][version] 	= 7.x-2.0-dev
projects[autocomplete_deluxe][subdir] 	= contrib
projects[autocomplete_deluxe][download][type]     = git
projects[autocomplete_deluxe][download][revision] = a49e633d
projects[autocomplete_deluxe][download][branch]   = 7.x-2.0

projects[chosen][version] 			 = "7.x-2.0-beta4+1-dev"
projects[chosen][subdir] 			 = "contrib"
projects[chosen][download][type]     = git
projects[chosen][download][revision] = e7a0d22
projects[chosen][download][branch]   = 7.x-2.0
libraries[chosen][download][type]    = get
libraries[chosen][download][url]     = https://github.com/harvesthq/chosen/releases/download/v1.3.0/chosen_v1.3.0.zip
libraries[chosen][destination]		 = libraries

projects[linkit][version]				= 3.x-dev
projects[linkit][subdir]				= contrib
projects[linkit][download][type] 		= git
projects[linkit][download][revision]	= 2d68605
projects[linkit][download][branch]		= 7.x-3.x

projects[ckeditor][version]  = 1.x-dev
projects[ckeditor][subdir]	 = contrib
projects[ckeditor][download][type]     = git
projects[ckeditor][download][revision] = 8499587d
projects[ckeditor][download][branch]   = 7.x-1.x
; Integration with Media 2.x @see https://www.drupal.org/node/2159403
projects[ckeditor][patch][1504696] = https://www.drupal.org/files/issues/make_ckeditor_plugin-2159403-107.patch
; External plugin declarations are redundant. @see http://drupal.org/comment/8284591#comment-8284591
;projects[ckeditor][patch][2158741] = http://drupal.org/files/issues/ckeditor-remove-external-plugin-declarations-1-alt.patch
libraries[ckeditor][download][type]    = get
libraries[ckeditor][download][url]     = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.3.4/ckeditor_4.3.4_standard.zip
libraries[ckeditor][download][subtree] = ckeditor/
libraries[ckeditor][destination]       = modules/contrib/ckeditor/

projects[diff][version]	= 3.x-dev
projects[diff][subdir]	= "contrib"
projects[diff[download][type]     = git
projects[diff[download][revision] = 29ca19a
projects[diff[download][branch]   = 7.x-3.x


;	Filters -----

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
;libraries[htmlpurifier][download][type]	= get
;libraries[htmlpurifier][download][url]	= http://htmlpurifier.org/releases/htmlpurifier-4.6.0.tar.gz
;libraries[htmlpurifier][destination]	= libraries


;	Import and Export -----

;; @todo Relation uuid https://www.drupal.org/sandbox/fruitcake/2161173

projects[strongarm][version] = "2.0"
projects[strongarm][subdir]  = "contrib"

projects[deploy][version] = "2.x-dev"
projects[deploy][subdir]  = "contrib"

projects[entity][version]	= 1.x-dev
projects[entity][subdir]	= contrib
projects[entity][download][type]     = git
projects[entity][download][revision] = a8688df0
projects[entity][download][branch]   = 7.x-1.x

projects[entity_dependency][version] = "1.x-dev"
projects[entity_dependency][subdir]  = "contrib"

projects[uuid][version]	= "1.x-dev"
projects[uuid][subdir]	= "contrib"
; CTools Contexts are missing UUID support.
projects[uuid][patch][] = https://www.drupal.org/files/issues/uuid_ctools_context-2145567-5.patch

projects[uuid_features][version] = 7.x-1.0-alpha4
projects[uuid_features][subdir] = contrib
projects[uuid_features][download][type]     = git
projects[uuid_features][download][revision] = 4fdc77f8
projects[uuid_features][download][branch]   = 7.x-1.x

projects[entity_menu_links][version] = "1.x-dev"
projects[entity_menu_links][subdir]  = "contrib"
projects[entity_menu_links][download][type]     = git
projects[entity_menu_links][download][revision] = 8a6ef3e8
projects[entity_menu_links][download][branch]   = 7.x-1.x

projects[menu_position_uuid][version] = "1.x-dev"
projects[menu_position_uuid][subdir]  = "contrib"
projects[menu_position_uuid][patch][] = "https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/menu_position_uuid-fix_deletion_of_other_postion_rules.patch"

projects[features_extra][version]  = 1.x-dev
projects[features_extra][subdir]	 = contrib
projects[features_extra][download][type]     = git
projects[features_extra][download][revision] = d3d1cba0
projects[features_extra][download][branch]   = 7.x-1.x

projects[backup_migrate][version] = "3.0"
projects[backup_migrate][subdir] = "contrib"


; gladstone_admin - Admin improvements -------------------------------

;Admin Launcher
projects[coffee][version]  = 2.x-dev
projects[coffee][subdir]	 = contrib
projects[coffee][download][type]     = git
projects[coffee][download][revision] = 2598dcdb
projects[coffee][download][branch]   = 7.x-2.x

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
projects[rubik][download][revision] = 5709b83a
projects[rubik][download][branch] 	= 7.x-4.x
;projects[rubik][patch][] = ""
projects[tao][version] = "3.1"

;Contextual adding of relations
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

;Restrict text formats/text UI
projects[simplify][version]  = 3.x-dev
projects[simplify][subdir]	 = contrib
projects[simplify][download][type]     = git
projects[simplify][download][revision] = 7681b0e7
projects[simplify][download][branch]   = 7.x-3.x

;Check for broken links
projects[linkchecker][version]  = 7.x-1.2
projects[linkchecker][subdir]	= contrib

;contextual menu administration
projects[content_menu][version]  = 1.x-dev
projects[content_menu][subdir]	 = contrib
projects[content_menu][download][type]     = git
projects[content_menu][download][revision] = f004cdfc
projects[content_menu][download][branch]   = 7.x-1.x


; bibliorepo - Biblio repository -------------------------------------

projects[biblio][version]	= "7.x-1.x"
projects[biblio][subdir]	= "contrib"
projects[biblio][download][type]     = git
projects[biblio][download][revision] = c584ee17
projects[biblio][download][branch]   = 7.x-1.x
projects[biblio][patch][]   = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/biblio-typo_isset.patch

projects[timeperiod][version]	= "7.x-1.x"
projects[timeperiod][subdir]	= "contrib"
projects[timeperiod][download][type]     = git
projects[timeperiod][download][revision] = e32b1ce7
projects[timeperiod][download][branch]   = 7.x-1.x
;Widget not parsing out the correct values. @seehttps://www.drupal.org/node/2355859
projects[timeperiod][patch][]   = https://www.drupal.org/files/issues/2355859-unit-order-1.patch
;Cannot have empty value @see https://www.drupal.org/node/2092835
projects[timeperiod][patch][]   = https://www.drupal.org/files/issues/timeperiod-2092835-3.patch


; events - Events ----------------------------------------------------

projects[event_calendar][version]	= "1.9" 
projects[event_calendar][subdir] 	= "contrib"

projects[simple_gmap][version] = 1.2
projects[simple_gmap][subdir] = contrib

projects[calendar][version] = 3.5
projects[calendar][subdir]  = contrib
;workaround warning(s): https://drupal.org/node/1471400#comment-7334590
;projects[calendar][patch][1471400] = https://drupal.org/files/calendar-7.x-3.x-issue_1471400-workaround-1.patch


; gladstone_profiles - Gladstone profiles ----------------------------

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


; gladstone_theme - Gladstone theme ----------------------------------

projects[adaptivetheme][version]  = 3.x-dev
projects[adaptivetheme][download][type]     = git
projects[adaptivetheme][download][revision] = 0e0715cd
projects[adaptivetheme][download][branch]   = 7.x-3.x

projects[menu_attributes][version]  = 1.x-rc3
projects[menu_attributes][subdir]	 = contrib
projects[menu_attributes][download][type]     = git
projects[menu_attributes][download][revision] = 3c652035
projects[menu_attributes][download][branch]   = 7.x-1.x

;projects[classy_panel_styles][version]			  = 1.x
;projects[classy_panel_styles][subdir]			  = contrib
;projects[classy_panel_styles][download][type]     = git
;projects[classy_panel_styles][download][url]	  = git://git.drupal.org/sandbox/derek.deraps/2208431.git
;projects[classy_panel_styles][download][revision] = fa45cc90
;projects[classy_panel_styles][download][branch]   = 7.x-1.x


; gladstone_widgets - Panels aware widgets ---------------------------

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


; gladstone_migrate - Migrations -------------------------------------

projects[migrate][version]				= 2.x-dev
projects[migrate][subdir]				= contrib
projects[migrate][download][type]		= git
projects[migrate][download][revision]	= c9d07e29
projects[migrate][download][branch]		= 7.x-2.x
;fix date import timezone conversion https://www.drupal.org/node/2305049
projects[migrate][patch][] = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/migrate-timezone_correction.patch
;fix migration of phantom nulls
projects[migrate][patch][] = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/migrate-skip_phantom_nulls.patch

projects[migrate_d2d][version]				= 2.x-dev
projects[migrate_d2d][subdir]				= contrib
projects[migrate_d2d][download][type]		= git
projects[migrate_d2d][download][revision]	= 5845d885
projects[migrate_d2d][download][branch]		= 7.x-2.x

projects[migrate_extras][version]				= 2.x-dev
projects[migrate_extras][subdir]				= contrib
projects[migrate_extras][download][type]		= git
projects[migrate_extras][download][revision]	= 02fcb71a
projects[migrate_extras][download][branch]		= 7.x-2.x

projects[computed_field_tools][version]		= 7.x-1.0
projects[computed_field_tools][subdir]		= contrib
 

;	Feilds required for legacy widgets -------------------------------

projects[tablefield][version] = 2.3
projects[tablefield][subdir] = contrib

projects[simple_gmap][version] = 1.2
projects[simple_gmap][subdir] = contrib

projects[formatter_field][version] = 1.x
projects[formatter_field][subdir]  = contrib
projects[formatter_field][download][type]     = git
projects[formatter_field][download][revision] = 67ea6c63
projects[formatter_field][download][branch]   = 7.x-1.x
; patch for reset when a field with unlimited values gets added
; @see https://www.drupal.org/node/1762202
; @see https://www.drupal.org/node/1393488
projects[formatter_field][patch][] = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/formatter_field-undef_index_error.patch

projects[fieldable_panels_panes][version] 			 = 1.x-dev
projects[fieldable_panels_panes][subdir] 			 = contrib
projects[fieldable_panels_panes][download][type]     = git
projects[fieldable_panels_panes][download][revision] = fba17ce3
projects[fieldable_panels_panes][download][branch]   = 7.x-1.x
; Workaround for invalid operation when exporting FPPs via features
 projects[fieldable_panels_panes][patch][] = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/fieldable_panels_panes-invalid_op_on_array.patch
; projects[fieldable_panels_panes][patch][] = https://www.drupal.org/files/issues/fix_array_merge-2342803-5.patch

projects[twitter_block][version] = 2.2
projects[twitter_block][subdir] = contrib


; gladstone_dev - Developer tools ------------------------------------

projects[devel][version]	= 7.x-1.5
projects[devel][subdir]		= contrib

projects[devel_themer][version]	= 7.x-1.x-dev
projects[devel_themer][subdir]		= contrib

projects[profiler_builder][version]	= 7.x-1.2
projects[profiler_builder][subdir]	= contrib

projects[record_feature][version]	= 7.x-1.0-beta2
projects[record_feature][subdir]	= contrib

projects[simplehtmldom][version]	= 7.x-1.12
projects[simplehtmldom][subdir]		= contrib



; Libraries ----------------------------------------------------------

libraries[backbone][download][type]	= get
libraries[backbone][download][url]	= "http://backbonejs.org/backbone-min.js"
libraries[backbone][destination]	= "libraries"

libraries[underscore][download][type]	= get
libraries[underscore][download][url]	= "http://underscorejs.org/underscore-min.js" 
libraries[underscore][destination]		= "libraries" 

