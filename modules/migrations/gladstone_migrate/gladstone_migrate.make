; Gladstone Migrate Makefile

api = 2
core = 7.x

projects[migrate][version]				= 2.x-dev
projects[migrate][subdir]				= contrib
projects[migrate][download][type]		= git
projects[migrate][download][revision]	= c9d07e29
projects[migrate][download][branch]		= 7.x-2.x
;fix date import timezone conversion https://www.drupal.org/node/2305049
projects[migrate][patch][] = https://raw.githubusercontent.com/jnand/gladstone.org/master/patches/migrate-timezone_correction.patch

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