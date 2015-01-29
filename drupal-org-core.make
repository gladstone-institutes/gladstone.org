api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = 7.34


; Patches to Core =============================================================

; Undefined index: #field_name in file_managed_file_save_upload()
; @see https://www.drupal.org/node/1903010
projects[drupal][patch][1903010] = https://www.drupal.org/files/issues/drupal-undefinedindex_fileupload-1903010-4.patch

