; Events Makefile

api = 2
core = 7.x

projects[event_calendar][version]	= "1.9" 
projects[event_calendar][subdir] 	= "contrib"

projects[simple_gmap][version] = 1.2
projects[simple_gmap][subdir] = contrib

projects[calendar][version] = 3.5
projects[calendar][subdir]  = contrib
;workaround warning(s): https://drupal.org/node/1471400#comment-7334590
;projects[calendar][patch][1471400] = https://drupal.org/files/calendar-7.x-3.x-issue_1471400-workaround-1.patch

