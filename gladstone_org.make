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

; Core ==========================================
api = 2
core = 7.x


; Modules =======================================
projects[features][version] = "2.0-rc1"
projects[features][subdir]  = "contrib"
