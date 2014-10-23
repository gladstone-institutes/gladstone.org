<?php
/**
 * @file
 * gladstone_profiles.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gladstone_profiles_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_affiliations-field_institution'
  $field_instances['field_collection_item-field_affiliations-field_institution'] = array(
    'bundle' => 'field_affiliations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_institution',
    'label' => 'Institution',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_affiliations-field_operational_role'
  $field_instances['field_collection_item-field_affiliations-field_operational_role'] = array(
    'bundle' => 'field_affiliations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Functional role <em>example: Investigator, Advisor, Professor</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_operational_role',
    'label' => 'Involvement',
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

  // Exported field_instance: 'field_collection_item-field_editorial_board-field_institution'
  $field_instances['field_collection_item-field_editorial_board-field_institution'] = array(
    'bundle' => 'field_editorial_board',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_institution',
    'label' => 'Institution',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_editorial_board-field_operational_role'
  $field_instances['field_collection_item-field_editorial_board-field_operational_role'] = array(
    'bundle' => 'field_editorial_board',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_operational_role',
    'label' => 'Involvement',
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

  // Exported field_instance: 'field_collection_item-field_education-field_areas_of_concentration'
  $field_instances['field_collection_item-field_education-field_areas_of_concentration'] = array(
    'bundle' => 'field_education',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<b>Autocomplete:</b>Major/Area of study for degree conferred. If multiple degrees/areas order them respectively.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_areas_of_concentration',
    'label' => 'Area of Concentration',
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

  // Exported field_instance: 'field_collection_item-field_education-field_date_yyyy'
  $field_instances['field_collection_item-field_education-field_date_yyyy'] = array(
    'bundle' => 'field_education',
    'deleted' => 0,
    'description' => '',
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
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_date_yyyy',
    'label' => 'Diploma Year',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
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
      'type' => 'date_text',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_education-field_degree'
  $field_instances['field_collection_item-field_education-field_degree'] = array(
    'bundle' => 'field_education',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_degree',
    'label' => 'Degree',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_education-field_institution'
  $field_instances['field_collection_item-field_education-field_institution'] = array(
    'bundle' => 'field_education',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_institution',
    'label' => 'Institution',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_leadership-field_biography'
  $field_instances['field_collection_item-field_leadership-field_biography'] = array(
    'bundle' => 'field_leadership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use the <strong>Summary</strong> to enter an abridged biosketch for use in mini-feeds',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_biography',
    'label' => 'Biosketch',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_leadership-field_operational_title'
  $field_instances['field_collection_item-field_leadership-field_operational_title'] = array(
    'bundle' => 'field_leadership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The display title as defined by Human Resources',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_operational_title',
    'label' => 'Operational Title',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_leadership-field_operational_unit'
  $field_instances['field_collection_item-field_leadership-field_operational_unit'] = array(
    'bundle' => 'field_leadership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What unit does this leadership role belong to?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_operational_unit',
    'label' => 'Operational Unit',
    'required' => 1,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_professional_titles-field_boolean'
  $field_instances['field_collection_item-field_professional_titles-field_boolean'] = array(
    'bundle' => 'field_professional_titles',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_boolean',
    'label' => 'Current',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_professional_titles-field_institution'
  $field_instances['field_collection_item-field_professional_titles-field_institution'] = array(
    'bundle' => 'field_professional_titles',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Where was the above title held?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_institution',
    'label' => 'Institution',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_professional_titles-field_operational_titles'
  $field_instances['field_collection_item-field_professional_titles-field_operational_titles'] = array(
    'bundle' => 'field_professional_titles',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Title of position held. <strong>Add multiple titles sparingly</strong>, use only if many titles were held simultaneously at this institution.

',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_operational_titles',
    'label' => 'Operational Title(s)',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'profile2-curriculum_vitae-field_achievements'
  $field_instances['profile2-curriculum_vitae-field_achievements'] = array(
    'bundle' => 'curriculum_vitae',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the more technical, domain specific, description of "Accomplishments" from the general public profile.
<em>Bulleted list, with one field entry per bullet. Do not add bullet point glyphs, they will be added automatically.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_achievements',
    'label' => 'Achievements',
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
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-curriculum_vitae-field_affiliations'
  $field_instances['profile2-curriculum_vitae-field_affiliations'] = array(
    'bundle' => 'curriculum_vitae',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_affiliations',
    'label' => 'Affiliations',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-curriculum_vitae-field_editorial_board'
  $field_instances['profile2-curriculum_vitae-field_editorial_board'] = array(
    'bundle' => 'curriculum_vitae',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_editorial_board',
    'label' => 'Editorial Board',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-curriculum_vitae-field_education'
  $field_instances['profile2-curriculum_vitae-field_education'] = array(
    'bundle' => 'curriculum_vitae',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Institutions attended. (sortable list)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_education',
    'label' => 'Education',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'profile2-curriculum_vitae-field_honors_and_awards_rels'
  $field_instances['profile2-curriculum_vitae-field_honors_and_awards_rels'] = array(
    'bundle' => 'curriculum_vitae',
    'deleted' => 0,
    'description' => '<b>Autocomplete</b> any honors and awards to the user CV here. If none exists, create a new entry using the button below.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_add',
        'settings' => array(),
        'type' => 'relation_add_endpoints_and_fields',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_honors_and_awards_rels',
    'label' => 'Recipient of',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'relation_type' => array(
        'was_awarded' => 'was_awarded',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'endpoint',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'profile2-curriculum_vitae-field_institutions'
  $field_instances['profile2-curriculum_vitae-field_institutions'] = array(
    'bundle' => 'curriculum_vitae',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Comma separated list of institutions names (autocomplete) where postdoc work was done.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_institutions',
    'label' => 'Postdoctoral Training',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'profile2-curriculum_vitae-field_lab_focus'
  $field_instances['profile2-curriculum_vitae-field_lab_focus'] = array(
    'bundle' => 'curriculum_vitae',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Bulleted list, with one field entry per bullet. Do not add bullet point glyphs, they will be added automatically.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_lab_focus',
    'label' => 'Lab Focus',
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
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'profile2-curriculum_vitae-field_label_alias'
  $field_instances['profile2-curriculum_vitae-field_label_alias'] = array(
    'bundle' => 'curriculum_vitae',
    'deleted' => 0,
    'description' => 'This field is dynamically computed from the User\'s Name field. Its needed to ensure any database level queries based on a "label" field still work. <b>DON\'T ALTER UNLESS YOURE A DEVELOPER</b>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_label_alias',
    'label' => 'Realname Alias ',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-curriculum_vitae-field_node_refs'
  $field_instances['profile2-curriculum_vitae-field_node_refs'] = array(
    'bundle' => 'curriculum_vitae',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Attach "back-links" to relevant "press" nodes in this <strong>autocomplete</strong> field.',
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
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_node_refs',
    'label' => 'Press Reference(s)',
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
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-curriculum_vitae-field_professional_titles'
  $field_instances['profile2-curriculum_vitae-field_professional_titles'] = array(
    'bundle' => 'curriculum_vitae',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Additional employed titles held (work history). These will only be displayed on the profile page, and not used elsewhere in the site.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_professional_titles',
    'label' => 'Professional titles',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'profile2-curriculum_vitae-field_research_interests'
  $field_instances['profile2-curriculum_vitae-field_research_interests'] = array(
    'bundle' => 'curriculum_vitae',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the more technical, domain specific, description of "Research Interests" from the general public profile.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_research_interests',
    'label' => 'Areas of Investigation',
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

  // Exported field_instance: 'profile2-leadership-field_leadership'
  $field_instances['profile2-leadership-field_leadership'] = array(
    'bundle' => 'leadership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use these micro-bios to create alternative copy for use in the Leadership directories.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_leadership',
    'label' => 'Leadership',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_collection_tabs_widget',
      'settings' => array(
        'fctw_add_new_tab_hover' => 'Add a new tab',
        'fctw_add_new_tab_title' => 'Add+',
        'fctw_empty_tab_title' => 'No Title',
        'fctw_hide_first_blank_tab' => 1,
        'fctw_new_tab_title' => 'New',
        'fctw_title_field' => 'field_operational_unit',
        'fctw_title_field_formatter' => 'taxonomy_term_reference_plain',
      ),
      'type' => 'field_collection_tabs',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_accomplishments'
  $field_instances['profile2-profile-field_accomplishments'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Noteworthy successes. <b>See the Achievements</b> field under curriculum vitae for listing academic and industry achievements.
<em>Note: this field is for "non-technical" copy targeted towards the general public.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_accomplishments',
    'label' => 'Accomplishments',
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
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_address'
  $field_instances['profile2-profile-field_address'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Public mailing address',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_address',
    'label' => 'Address',
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
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_alternate_email'
  $field_instances['profile2-profile-field_alternate_email'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'i.e. secondary contact email, external to Gladstone, alumnus contact',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_alternate_email',
    'label' => 'Alternate Email(s)',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_biography'
  $field_instances['profile2-profile-field_biography'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Summary: Abridged bio. Less technical details (for general web audience)
Full bio: Technical and domain specific details go here',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_biography',
    'label' => 'Biography',
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
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_contacts'
  $field_instances['profile2-profile-field_contacts'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Displayed in order (primary, secondary, etc. )',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_contacts',
    'label' => 'Administrative Assistant(s)',
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
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_date_yyyy'
  $field_instances['profile2-profile-field_date_yyyy'] = array(
    'bundle' => 'profile',
    'deleted' => 0,
    'description' => 'Year the user joined Gladstone. <em>example: 2010</em>',
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
        'weight' => 20,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_date_yyyy',
    'label' => 'Date Joined',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
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
      'type' => 'date_text',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_display_title'
  $field_instances['profile2-profile-field_display_title'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_display_title',
    'label' => 'Display Title',
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
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_fax'
  $field_instances['profile2-profile-field_fax'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Externally accessible number(s).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_fax',
    'label' => 'Fax',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'phone_country_code' => 0,
      'phone_default_country_code' => 1,
      'phone_int_max_length' => 15,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_image'
  $field_instances['profile2-profile-field_image'] = array(
    'bundle' => 'profile',
    'deleted' => 0,
    'description' => 'Select a user profile picture to be displayed site-wide.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_image',
    'label' => 'Profile picture',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'profile_pictures',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '960x320',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_linkedin'
  $field_instances['profile2-profile-field_linkedin'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_linkedin',
    'label' => 'LinkedIn',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'LinkedIn',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_longtext'
  $field_instances['profile2-profile-field_longtext'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_longtext',
    'label' => 'Why Gladstone',
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
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_operational_roles'
  $field_instances['profile2-profile-field_operational_roles'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Superclass of the Operational Titles
ex: Staff Research Investigator, Associate Investigator, and Visiting Investigator are all of the "Investigator" Role',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_operational_roles',
    'label' => 'Operational Role(s)',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_operational_titles'
  $field_instances['profile2-profile-field_operational_titles'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Official job title <b>without</b> credentials or affiliations.
<em>Sort order sensitive:</em> The first item will be used in directory views.
<i>examples:</i> Senior Staff Scientist, Visiting Investigator, Research Associate.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_operational_titles',
    'label' => 'Operational Title(s)',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_operational_units'
  $field_instances['profile2-profile-field_operational_units'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Tag research areas, groups and units here.
<em>example:</em> GICD, Stem Cell, Intellectual Property',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'profile2',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_phone'
  $field_instances['profile2-profile-field_phone'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Externally accessible number(s).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_phone',
    'label' => 'Phone',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'phone_country_code' => 0,
      'phone_default_country_code' => 1,
      'phone_int_max_length' => 15,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_public_email'
  $field_instances['profile2-profile-field_public_email'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Email contact displayed on public site.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_public_email',
    'label' => 'Public Email',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_research_interests'
  $field_instances['profile2-profile-field_research_interests'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Scientific Interests. <b>See the Areas of Investigation</b> field under curriculum vitae for listing academic and industry specific focus.
<em>Note: this field is for "non-technical" copy targeted towards the general public.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_research_interests',
    'label' => 'Research Interests',
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
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_training'
  $field_instances['profile2-profile-field_training'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Domain Expertise. <b>See the Educations and Postdoc Training</b> fields under curriculum vitae for listing academic and industry specific training.
<em>Note: this field is for "non-technical" copy targeted towards the general public.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_training',
    'label' => 'Training',
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
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_twitter'
  $field_instances['profile2-profile-field_twitter'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_twitter',
    'label' => 'Twitter',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Twitter',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-profile-field_urls'
  $field_instances['profile2-profile-field_urls'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Lab and/or personal research websites',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_urls',
    'label' => 'Website',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'user-user-field_name'
  $field_instances['user-user-field_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Full name of user. <i>This will affect the <b>public</b> display of a user\'s profile</i>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_name',
    'label' => 'Name',
    'required' => 1,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'component_css' => '',
      'component_layout' => 'default',
      'components' => array(
        'credentials' => 0,
        'family' => 0,
        'generational' => 0,
        'given' => 0,
        'middle' => 0,
        'title' => 0,
      ),
      'credentials_inline' => 0,
      'field_type' => array(
        'credentials' => 'text',
        'family' => 'text',
        'generational' => 'select',
        'given' => 'text',
        'middle' => 'text',
        'title' => 'select',
      ),
      'generational_field' => 'select',
      'inline_css' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'labels' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'minimum_components' => array(
        'credentials' => 0,
        'family' => 0,
        'generational' => 0,
        'given' => 0,
        'middle' => 0,
        'title' => 0,
      ),
      'name_user_preferred' => 1,
      'override_format' => 'default',
      'show_component_required_marker' => 1,
      'size' => array(
        'credentials' => 35,
        'family' => 20,
        'generational' => 5,
        'given' => 20,
        'middle' => 20,
        'title' => 6,
      ),
      'title_display' => array(
        'credentials' => 'description',
        'family' => 'description',
        'generational' => 'description',
        'given' => 'description',
        'middle' => 'description',
        'title' => 'description',
      ),
      'title_field' => 'select',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'name',
      'settings' => array(),
      'type' => 'name_widget',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'user-user-field_text'
  $field_instances['user-user-field_text'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Given a UCSF Profiles URL like <code>profiles.ucsf.edu/jeanette.brown</code>, the Profiles Name would be <strong>jeanette.brown</strong>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_text',
    'label' => 'UCSF Profiles Name',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
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

  // Translatables
  // Included for use with string extractors like potx.
  t('<b>Autocomplete:</b>Major/Area of study for degree conferred. If multiple degrees/areas order them respectively.');
  t('<b>Autocomplete</b> any honors and awards to the user CV here. If none exists, create a new entry using the button below.');
  t('Accomplishments');
  t('Achievements');
  t('Additional employed titles held (work history). These will only be displayed on the profile page, and not used elsewhere in the site.');
  t('Address');
  t('Administrative Assistant(s)');
  t('Affiliations');
  t('Alternate Email(s)');
  t('Area of Concentration');
  t('Areas of Investigation');
  t('Attach "back-links" to relevant "press" nodes in this <strong>autocomplete</strong> field.');
  t('Biography');
  t('Biosketch');
  t('Bulleted list, with one field entry per bullet. Do not add bullet point glyphs, they will be added automatically.');
  t('Comma separated list of institutions names (autocomplete) where postdoc work was done.');
  t('Current');
  t('Date Joined');
  t('Degree');
  t('Diploma Year');
  t('Display Title');
  t('Displayed in order (primary, secondary, etc. )');
  t('Domain Expertise. <b>See the Educations and Postdoc Training</b> fields under curriculum vitae for listing academic and industry specific training.
<em>Note: this field is for "non-technical" copy targeted towards the general public.</em>');
  t('Editorial Board');
  t('Education');
  t('Email contact displayed on public site.');
  t('Externally accessible number(s).');
  t('Fax');
  t('Full name of user. <i>This will affect the <b>public</b> display of a user\'s profile</i>');
  t('Functional role <em>example: Investigator, Advisor, Professor</em>');
  t('Given a UCSF Profiles URL like <code>profiles.ucsf.edu/jeanette.brown</code>, the Profiles Name would be <strong>jeanette.brown</strong>');
  t('Institution');
  t('Institutions attended. (sortable list)');
  t('Involvement');
  t('Lab Focus');
  t('Lab and/or personal research websites');
  t('Leadership');
  t('LinkedIn');
  t('Name');
  t('Noteworthy successes. <b>See the Achievements</b> field under curriculum vitae for listing academic and industry achievements.
<em>Note: this field is for "non-technical" copy targeted towards the general public.</em>');
  t('Official job title <b>without</b> credentials or affiliations.
<em>Sort order sensitive:</em> The first item will be used in directory views.
<i>examples:</i> Senior Staff Scientist, Visiting Investigator, Research Associate.');
  t('Operational Role(s)');
  t('Operational Title');
  t('Operational Title(s)');
  t('Operational Unit');
  t('Operational Unit(s)');
  t('Phone');
  t('Postdoctoral Training');
  t('Press Reference(s)');
  t('Professional titles');
  t('Profile picture');
  t('Public Email');
  t('Public mailing address');
  t('Realname Alias ');
  t('Recipient of');
  t('Research Interests');
  t('Scientific Interests. <b>See the Areas of Investigation</b> field under curriculum vitae for listing academic and industry specific focus.
<em>Note: this field is for "non-technical" copy targeted towards the general public.</em>');
  t('Select a user profile picture to be displayed site-wide.');
  t('Summary: Abridged bio. Less technical details (for general web audience)
Full bio: Technical and domain specific details go here');
  t('Superclass of the Operational Titles
ex: Staff Research Investigator, Associate Investigator, and Visiting Investigator are all of the "Investigator" Role');
  t('Tag research areas, groups and units here.
<em>example:</em> GICD, Stem Cell, Intellectual Property');
  t('The display title as defined by Human Resources');
  t('This field is dynamically computed from the User\'s Name field. Its needed to ensure any database level queries based on a "label" field still work. <b>DON\'T ALTER UNLESS YOURE A DEVELOPER</b>');
  t('This is the more technical, domain specific, description of "Accomplishments" from the general public profile.
<em>Bulleted list, with one field entry per bullet. Do not add bullet point glyphs, they will be added automatically.</em>');
  t('This is the more technical, domain specific, description of "Research Interests" from the general public profile.');
  t('Title of position held. <strong>Add multiple titles sparingly</strong>, use only if many titles were held simultaneously at this institution.

');
  t('Training');
  t('Twitter');
  t('UCSF Profiles Name');
  t('Use the <strong>Summary</strong> to enter an abridged biosketch for use in mini-feeds');
  t('Use these micro-bios to create alternative copy for use in the Leadership directories.');
  t('Website');
  t('What unit does this leadership role belong to?');
  t('Where was the above title held?');
  t('Why Gladstone');
  t('Year the user joined Gladstone. <em>example: 2010</em>');
  t('i.e. secondary contact email, external to Gladstone, alumnus contact');

  return $field_instances;
}
