<?php
/**
 * @file
 * events.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function events_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-event_calendar-body'
  $field_instances['node-event_calendar-body'] = array(
    'bundle' => 'event_calendar',
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
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Event Description',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 7,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-event_calendar-event_calendar_date'
  $field_instances['node-event_calendar-event_calendar_date'] = array(
    'bundle' => 'event_calendar',
    'deleted' => 0,
    'description' => 'Select the start and end dates for this event.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'event_calendar_date',
    'label' => 'Date(s)',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-event_calendar-event_calendar_status'
  $field_instances['node-event_calendar-event_calendar_status'] = array(
    'bundle' => 'event_calendar',
    'default_value' => array(
      0 => array(
        'tid' => 2,
      ),
    ),
    'deleted' => 0,
    'description' => 'Describe Event status',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'event_calendar_status',
    'label' => 'Status',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-event_calendar-field_blurb'
  $field_instances['node-event_calendar-field_blurb'] = array(
    'bundle' => 'event_calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This should be <b>shorter</b> than the Body Summary; its intended for display in minifeeds.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_blurb',
    'label' => 'Blurb',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-event_calendar-field_event_types'
  $field_instances['node-event_calendar-field_event_types'] = array(
    'bundle' => 'event_calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Scientific, Special, Seminar etc...',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_types',
    'label' => 'Event Type(s)',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-event_calendar-field_files'
  $field_instances['node-event_calendar-field_files'] = array(
    'bundle' => 'event_calendar',
    'deleted' => 0,
    'description' => 'Attach file(s) e.g. posters, flyers, handouts etc. 
<i>note: these files will be <b>publicly</b> accessible</i>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_files',
    'label' => 'File(s)',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'event_calendar',
      'file_extensions' => 'txt pdf doc png zip jpeg jpg tiff ppt',
      'max_filesize' => '',
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
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-event_calendar-field_headline'
  $field_instances['node-event_calendar-field_headline'] = array(
    'bundle' => 'event_calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Full form headline.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_headline',
    'label' => 'Headline',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-event_calendar-field_image'
  $field_instances['node-event_calendar-field_image'] = array(
    'bundle' => 'event_calendar',
    'deleted' => 0,
    'description' => 'Cover photo.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'event',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '960x270',
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
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-event_calendar-field_location'
  $field_instances['node-event_calendar-field_location'] = array(
    'bundle' => 'event_calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the address of the event in a format that Google maps can convert into a map!',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'simple_gmap',
        'settings' => array(
          'iframe_height' => 200,
          'iframe_width' => 200,
          'include_link' => 1,
          'include_map' => 1,
          'include_static_map' => 0,
          'include_text' => 0,
          'information_bubble' => 1,
          'langcode' => 'en',
          'link_text' => 'Larger map',
          'map_type' => 'm',
          'zoom_level' => 14,
        ),
        'type' => 'simple_gmap',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location',
    'label' => 'Location',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-event_calendar-field_longtext'
  $field_instances['node-event_calendar-field_longtext'] = array(
    'bundle' => 'event_calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Information about the presenter(s) external or from Gladstone. Make sure to <b>tag</b> presenters that exist in the Gladstone profile system using the "<b>User Reference(s)</b>" tagging field.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_longtext',
    'label' => 'Presenter(s)',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-event_calendar-field_node_refs'
  $field_instances['node-event_calendar-field_node_refs'] = array(
    'bundle' => 'event_calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add references to other content. Useful for displaying related articles feeds in the sidebar.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_node_refs',
    'label' => 'Node Reference(s)',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-event_calendar-field_operational_units'
  $field_instances['node-event_calendar-field_operational_units'] = array(
    'bundle' => 'event_calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Functional group/team (ex: Institute, Lab, Administration, Advisory Boards)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_operational_units',
    'label' => 'Operational Unit(s)',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-event_calendar-field_research_tags'
  $field_instances['node-event_calendar-field_research_tags'] = array(
    'bundle' => 'event_calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Tag content with related terms here. <i>example: disease name, research areas, proteins, pathways, etc..</i>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_research_tags',
    'label' => 'Research Tag(s)',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-event_calendar-field_text'
  $field_instances['node-event_calendar-field_text'] = array(
    'bundle' => 'event_calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Title for views and minifeeds (140chars)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_text',
    'label' => 'Short title',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-event_calendar-field_user_refs'
  $field_instances['node-event_calendar-field_user_refs'] = array(
    'bundle' => 'event_calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Tag users related to this content.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_user_refs',
    'label' => 'User Reference(s)',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add references to other content. Useful for displaying related articles feeds in the sidebar.');
  t('Attach file(s) e.g. posters, flyers, handouts etc. 
<i>note: these files will be <b>publicly</b> accessible</i>');
  t('Blurb');
  t('Cover photo.');
  t('Date(s)');
  t('Describe Event status');
  t('Enter the address of the event in a format that Google maps can convert into a map!');
  t('Event Description');
  t('Event Type(s)');
  t('File(s)');
  t('Full form headline.');
  t('Functional group/team (ex: Institute, Lab, Administration, Advisory Boards)');
  t('Headline');
  t('Image');
  t('Information about the presenter(s) external or from Gladstone. Make sure to <b>tag</b> presenters that exist in the Gladstone profile system using the "<b>User Reference(s)</b>" tagging field.');
  t('Location');
  t('Node Reference(s)');
  t('Operational Unit(s)');
  t('Presenter(s)');
  t('Research Tag(s)');
  t('Scientific, Special, Seminar etc...');
  t('Select the start and end dates for this event.');
  t('Short title');
  t('Status');
  t('Tag content with related terms here. <i>example: disease name, research areas, proteins, pathways, etc..</i>');
  t('Tag users related to this content.');
  t('This should be <b>shorter</b> than the Body Summary; its intended for display in minifeeds.');
  t('Title for views and minifeeds (140chars)');
  t('User Reference(s)');

  return $field_instances;
}
