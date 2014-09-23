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
projects[panels][version] = "3.x-dev"
projects[panels][subdir]  = "contrib"

; add ability to inject nodes into the menu structure
projects[menu_position][version]	= "1.x-dev"
projects[menu_position][subdir]		= "contrib"

projects[pathauto][version]	= "1.2"
projects[pathauto][subdir]	= "contrib"

projects[subpathauto][version]	= "1.3"
projects[subpathauto][subdir]	= "contrib"

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

projects[entity_menu_links][version] = "1.x-dev"
projects[entity_menu_links][subdir]  = "contrib"
projects[entity_menu_links][patch][] = "https://www.drupal.org/files/issues/2138509-entity-menu-links-deploy-4.patch"

projects[menu_position_uuid][version] = "1.x-dev"
projects[menu_position_uuid][subdir]  = "contrib"
projects[menu_position_uuid][patch][] = "https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/menu_position_uuid-fix_deletion_of_other_postion_rules.patch"


