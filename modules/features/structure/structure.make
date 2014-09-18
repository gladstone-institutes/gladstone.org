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

; Import and export -----------------------------
projects[strongarm][version] = "2.0"
projects[strongarm][subdir]  = "contrib"
