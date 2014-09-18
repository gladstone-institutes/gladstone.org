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

; Core ========================================================================
api = 2
core = 7.x


; Modules =====================================================================
; Themes ======================================================================
projects[adaptivetheme][version] = "3.1"
projects[tao][version] = "3.1"
projects[rubik][version] = "4.0"

