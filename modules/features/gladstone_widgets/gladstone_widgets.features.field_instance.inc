<?php
/**
 * @file
 * gladstone_widgets.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gladstone_widgets_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-basic_file-field_file'
  $field_instances['fieldable_panels_pane-basic_file-field_file'] = array(
    'bundle' => 'basic_file',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'file_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_file',
    'label' => 'File',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'files',
      'file_extensions' => 'pdf txt',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
        ),
        'allowed_types' => array(
          'image' => 'image',
        ),
        'browser_plugins' => array(),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-basic_file-field_text'
  $field_instances['fieldable_panels_pane-basic_file-field_text'] = array(
    'bundle' => 'basic_file',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'limited_html',
          ),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-image-field_formatter'
  $field_instances['fieldable_panels_pane-image-field_formatter'] = array(
    'bundle' => 'image',
    'default_value' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:1:{s:11:"image_style";s:5:"large";}',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_formatter',
    'label' => 'Formatter',
    'required' => 0,
    'settings' => array(
      'field_name' => 'field_image',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'formatter_field',
      'settings' => array(),
      'type' => 'formatter_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-image-field_image'
  $field_instances['fieldable_panels_pane-image-field_image'] = array(
    'bundle' => 'image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'formatter_field',
        'settings' => array(),
        'type' => 'from_field',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'images',
      'file_extensions' => 'png gif jpg jpeg',
      'focus' => 0,
      'focus_lock_ratio' => 0,
      'focus_min_size' => '',
      'focus_required' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'image' => 'image',
        ),
        'browser_plugins' => array(),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-image-field_longtext'
  $field_instances['fieldable_panels_pane-image-field_longtext'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_longtext',
    'label' => 'Caption',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-jump_menu-field_formatter'
  $field_instances['fieldable_panels_pane-jump_menu-field_formatter'] = array(
    'bundle' => 'jump_menu',
    'default_value' => array(
      0 => array(
        'type' => 'image',
        'settings' => 'a:2:{s:11:"image_style";s:0:"";s:10:"image_link";s:0:"";}',
      ),
    ),
    'deleted' => 0,
    'description' => 'Apply an image style',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_formatter',
    'label' => 'Formatter',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'field_name' => 'field_image',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'formatter_field',
      'settings' => array(),
      'type' => 'formatter_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-jump_menu-field_image'
  $field_instances['fieldable_panels_pane-jump_menu-field_image'] = array(
    'bundle' => 'jump_menu',
    'deleted' => 0,
    'description' => 'Background image',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'profile_picture_large',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images',
      'file_extensions' => 'png gif jpg jpeg',
      'focus' => 0,
      'focus_lock_ratio' => 0,
      'focus_min_size' => '',
      'focus_required' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '480x320',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
          'youtube' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-jump_menu-field_longtext'
  $field_instances['fieldable_panels_pane-jump_menu-field_longtext'] = array(
    'bundle' => 'jump_menu',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_longtext',
    'label' => 'Caption',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 0,
          'limited_html' => 'limited_html',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => -8,
            ),
            'limited_html' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'rich_text' => array(
              'weight' => -10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-jump_menu-field_urls'
  $field_instances['fieldable_panels_pane-jump_menu-field_urls'] = array(
    'bundle' => 'jump_menu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Jump menu targets',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_urls',
    'label' => 'Links',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 1,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-map-field_longtext'
  $field_instances['fieldable_panels_pane-map-field_longtext'] = array(
    'bundle' => 'map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_longtext',
    'label' => 'Information',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-map-field_map_address'
  $field_instances['fieldable_panels_pane-map-field_map_address'] = array(
    'bundle' => 'map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The street address of the location you wish to map. This widget will contact Google and try to do its best to create a map!',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'simple_gmap',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
          'iframe_height' => 400,
          'iframe_width' => 600,
          'include_link' => 0,
          'include_map' => 1,
          'include_static_map' => 0,
          'include_text' => 0,
          'information_bubble' => 0,
          'langcode' => 'en',
          'link_text' => 'View larger map',
          'map_type' => 'm',
          'zoom_level' => 14,
        ),
        'type' => 'simple_gmap',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_map_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-quick_links-field_urls'
  $field_instances['fieldable_panels_pane-quick_links-field_urls'] = array(
    'bundle' => 'quick_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_urls',
    'label' => 'Links',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-table-field_table'
  $field_instances['fieldable_panels_pane-table-field_table'] = array(
    'bundle' => 'table',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'cell_0_0' => '',
          'cell_0_1' => '',
          'cell_1_0' => '',
          'cell_1_1' => '',
          'cell_2_0' => '',
          'cell_2_1' => '',
          'import' => array(
            'rebuild_field_table_0' => 'Upload CSV',
            'tablefield_csv_field_table_0' => '',
          ),
          'rebuild' => array(
            'count_cols' => 2,
            'count_rows' => 3,
            'rebuild' => 'Rebuild Table',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'tablefield',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_table',
    'label' => 'Table',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tablefield',
      'settings' => array(),
      'type' => 'tablefield',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-text-field_longtext'
  $field_instances['fieldable_panels_pane-text-field_longtext'] = array(
    'bundle' => 'text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'limited_html',
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_longtext',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-video-field_file'
  $field_instances['fieldable_panels_pane-video-field_file'] = array(
    'bundle' => 'video',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_file',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'video',
      'file_extensions' => 'jpg jpeg gif png txt doc xls pdf ppt pps odt ods odp mp3 mov m4v mp4 mpeg avi ogg oga ogv wmv ico',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'vimeo' => 'vimeo',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 0,
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'library' => 0,
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 'media_internet',
          'upload' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => -2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Apply an image style');
  t('Background image');
  t('Caption');
  t('File');
  t('Formatter');
  t('Image');
  t('Information');
  t('Jump menu targets');
  t('Links');
  t('Table');
  t('Text');
  t('The street address of the location you wish to map. This widget will contact Google and try to do its best to create a map!');
  t('Video');

  return $field_instances;
}
