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
      'weight' => 17,
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
      'weight' => 14,
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
      'weight' => 13,
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
      'weight' => 11,
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
      'weight' => 10,
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
      'weight' => 12,
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
    'description' => 'Scientific Interests. <b>See the Research Focus</b> field under curriculum vitae for listing academic and industry specific focus.
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
      'weight' => 16,
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
      'weight' => 15,
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
  t('<b>Autocomplete</b> any honors and awards to the user CV here. If none exists, create a new entry using the button below.');
  t('Accomplishments');
  t('Address');
  t('Administrative Assistant(s)');
  t('Alternate Email(s)');
  t('Biography');
  t('Date Joined');
  t('Display Title');
  t('Displayed in order (primary, secondary, etc. )');
  t('Domain Expertise. <b>See the Educations and Postdoc Training</b> fields under curriculum vitae for listing academic and industry specific training.
<em>Note: this field is for "non-technical" copy targeted towards the general public.</em>');
  t('Email contact displayed on public site.');
  t('Externally accessible number(s).');
  t('Fax');
  t('Full name of user. <i>This will affect the <b>public</b> display of a user\'s profile</i>');
  t('Given a UCSF Profiles URL like <code>profiles.ucsf.edu/jeanette.brown</code>, the Profiles Name would be <strong>jeanette.brown</strong>');
  t('Lab and/or personal research websites');
  t('LinkedIn');
  t('Name');
  t('Noteworthy successes. <b>See the Achievements</b> field under curriculum vitae for listing academic and industry achievements.
<em>Note: this field is for "non-technical" copy targeted towards the general public.</em>');
  t('Official job title <b>without</b> credentials or affiliations.
<em>Sort order sensitive:</em> The first item will be used in directory views.
<i>examples:</i> Senior Staff Scientist, Visiting Investigator, Research Associate.');
  t('Operational Role(s)');
  t('Operational Title(s)');
  t('Operational Unit(s)');
  t('Phone');
  t('Profile picture');
  t('Public Email');
  t('Public mailing address');
  t('Realname Alias ');
  t('Recipient of');
  t('Research Interests');
  t('Scientific Interests. <b>See the Research Focus</b> field under curriculum vitae for listing academic and industry specific focus.
<em>Note: this field is for "non-technical" copy targeted towards the general public.</em>');
  t('Select a user profile picture to be displayed site-wide.');
  t('Summary: Abridged bio. Less technical details (for general web audience)
Full bio: Technical and domain specific details go here');
  t('Superclass of the Operational Titles
ex: Staff Research Investigator, Associate Investigator, and Visiting Investigator are all of the "Investigator" Role');
  t('Tag research areas, groups and units here.
<em>example:</em> GICD, Stem Cell, Intellectual Property');
  t('This field is dynamically computed from the User\'s Name field. Its needed to ensure any database level queries based on a "label" field still work. <b>DON\'T ALTER UNLESS YOURE A DEVELOPER</b>');
  t('Training');
  t('Twitter');
  t('UCSF Profiles Name');
  t('Website');
  t('Year the user joined Gladstone. <em>example: 2010</em>');
  t('i.e. secondary contact email, external to Gladstone, alumnus contact');

  return $field_instances;
}
