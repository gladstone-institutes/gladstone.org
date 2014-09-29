<?php
/**
 * @file
 * technology.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function technology_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-technology-body'
  $field_instances['node-technology-body'] = array(
    'bundle' => 'technology',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Briefly describe the technology',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-technology-field_biblio_refs'
  $field_instances['node-technology-field_biblio_refs'] = array(
    'bundle' => 'technology',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Patent citation(s)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
    'field_name' => 'field_biblio_refs',
    'label' => 'Patent(s)',
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

  // Exported field_instance: 'node-technology-field_longtext'
  $field_instances['node-technology-field_longtext'] = array(
    'bundle' => 'technology',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
    'field_name' => 'field_longtext',
    'label' => 'Caption',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-technology-field_contacts'
  $field_instances['node-technology-field_contacts'] = array(
    'bundle' => 'technology',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Contacts in order of precedence.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
    'field_name' => 'field_contacts',
    'label' => 'Contact(s)',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-technology-field_files'
  $field_instances['node-technology-field_files'] = array(
    'bundle' => 'technology',
    'deleted' => 0,
    'description' => 'Attach file(s). <i>note: these files will be <b>publicly</b> accessible</i>',
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
    'label' => 'File',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'technology',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-technology-field_image'
  $field_instances['node-technology-field_image'] = array(
    'bundle' => 'technology',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
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
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'technology',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-technology-field_node_refs'
  $field_instances['node-technology-field_node_refs'] = array(
    'bundle' => 'technology',
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

  // Exported field_instance: 'node-technology-field_operational_units'
  $field_instances['node-technology-field_operational_units'] = array(
    'bundle' => 'technology',
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

  // Exported field_instance: 'node-technology-field_research_tags'
  $field_instances['node-technology-field_research_tags'] = array(
    'bundle' => 'technology',
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

  // Exported field_instance: 'node-technology-field_technology_type'
  $field_instances['node-technology-field_technology_type'] = array(
    'bundle' => 'technology',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Is this internal or external?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_technology_type',
    'label' => 'Technology Type',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-technology-field_text'
  $field_instances['node-technology-field_text'] = array(
    'bundle' => 'technology',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Gladstone Docket Number. e.g. GL2006-828',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_text',
    'label' => 'Reference Number',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-technology-field_user_refs'
  $field_instances['node-technology-field_user_refs'] = array(
    'bundle' => 'technology',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Link to the profile pages of the inventors.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
    'field_name' => 'field_user_refs',
    'label' => 'Inventor(s)',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Add references to other content. Useful for displaying related articles feeds in the sidebar.');
  t('Attach file(s). <i>note: these files will be <b>publicly</b> accessible</i>');
  t('Briefly describe the technology');
  t('Caption');
  t('Contact(s)');
  t('Contacts in order of precedence.');
  t('Description');
  t('File');
  t('Functional group/team (ex: Institute, Lab, Administration, Advisory Boards)');
  t('Gladstone Docket Number. e.g. GL2006-828');
  t('Image');
  t('Inventor(s)');
  t('Is this internal or external?');
  t('Link to the profile pages of the inventors.');
  t('Node Reference(s)');
  t('Operational Unit(s)');
  t('Patent citation(s)');
  t('Patent(s)');
  t('Reference Number');
  t('Research Tag(s)');
  t('Tag content with related terms here. <i>example: disease name, research areas, proteins, pathways, etc..</i>');
  t('Technology Type');

  return $field_instances;
}
