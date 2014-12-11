<?php
/**
 * @file
 * gladstone_media.file_type.inc
 */

/**
 * Implements hook_file_default_types().
 */
function gladstone_media_file_default_types() {
  $export = array();

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'web_video';
  $file_type->label = 'Web Video';
  $file_type->description = 'Web video streams/embeds ';
  $file_type->mimetypes = array(
    0 => 'video/vimeo',
    1 => 'video/youtube',
  );
  $export['web_video'] = $file_type;

  return $export;
}
