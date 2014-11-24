; Gladstone Structure Makefile

api = 2
core = 7.x


projects[ctools][version] = "1.4"
projects[ctools][subdir]  = "contrib"
; allow values to be entered in ui for string contexts
projects[ctools][patch][] = "https://drupal.org/files/ctools.code_.1774434-7.patch"
; allow admin overlay for pager page_manager
projects[ctools][patch][] = "https://www.drupal.org/files/page-manager-admin-paths-1120028-14.patch"


; Structure: sitemap, layout, nav ---------------
projects[content_menu][version]  = 1.x-dev
projects[content_menu][subdir]	 = contrib
projects[content_menu][download][type]     = git
projects[content_menu][download][revision] = f004cdfc
projects[content_menu][download][branch]   = 7.x-1.x

projects[panels][version] = "3.x-dev"
projects[panels][subdir]  = "contrib"

projects[panels_css_js][version] = "1.1"
projects[panels_css_js][subdir]  = "contrib"
projects[panels_css_js][patch][] = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/panels_css_js-allowing_configuration_options-2228381-2.patch
projects[panels_css_js][patch][] = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/panels_css_js-allowing_configuration_options-2228381-3.patch

projects[panelizer][version]  = 7.x-3.1+90-dev
projects[panelizer][subdir]	 = contrib
projects[panelizer][download][type]     = git
projects[panelizer][download][revision] = 809ab899
projects[panelizer][download][branch]   = 7.x-3.x

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

; Import and export -----------------------------

projects[strongarm][version] = "2.0"
projects[strongarm][subdir]  = "contrib"

projects[deploy][version] = "2.x-dev"
projects[deploy][subdir]  = "contrib"

projects[entity][version]	= 1.x-dev
projects[entity][subdir]	= contrib

projects[entity_dependency][version] = "1.x-dev"
projects[entity_dependency][subdir]  = "contrib"

projects[uuid][version]	= "1.x-dev"
projects[uuid][subdir]	= "contrib"
; CTools Contexts are missing UUID support.
projects[uuid][patch][] = https://www.drupal.org/files/issues/uuid_ctools_context-2145567-5.patch

projects[entity_menu_links][version] = "1.x-dev"
projects[entity_menu_links][subdir]  = "contrib"
projects[entity_menu_links][patch][] = "https://www.drupal.org/files/issues/2138509-entity-menu-links-deploy-4.patch"

projects[menu_position_uuid][version] = "1.x-dev"
projects[menu_position_uuid][subdir]  = "contrib"
projects[menu_position_uuid][patch][] = "https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/menu_position_uuid-fix_deletion_of_other_postion_rules.patch"

projects[features_extra][version]  = 1.x-dev
projects[features_extra][subdir]	 = contrib
projects[features_extra][download][type]     = git
projects[features_extra][download][revision] = d3d1cba0
projects[features_extra][download][branch]   = 7.x-1.x

;; @todo Relation uuid https://www.drupal.org/sandbox/fruitcake/2161173

; UI/UX Enhancements ----------------------------
projects[ckeditor][version]  = 1.x-dev
projects[ckeditor][subdir]	 = contrib
projects[ckeditor][download][type]     = git
projects[ckeditor][download][revision] = b29372fb
projects[ckeditor][download][branch]   = 7.x-1.x
libraries[ckeditor][download][type]    = get
libraries[ckeditor][download][url]     = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.3.4/ckeditor_4.3.4_standard.zip
libraries[ckeditor][download][subtree] = ckeditor/
libraries[ckeditor][destination]       = modules/contrib/ckeditor/

projects[diff][version]	= 3.x-dev
projects[diff][subdir]	= "contrib"
projects[diff[download][type]     = git
projects[diff[download][revision] = 29ca19a
projects[diff[download][branch]   = 7.x-3.x

