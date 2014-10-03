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

