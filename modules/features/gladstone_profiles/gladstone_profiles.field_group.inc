<?php
/**
 * @file
 * gladstone_profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gladstone_profiles_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_awards|profile2|curriculum_vitae|form';
  $field_group->group_name = 'group_awards';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'curriculum_vitae';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Honors and Awards',
    'weight' => '7',
    'children' => array(
      0 => 'field_honors_and_awards_rels',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-awards field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_awards|profile2|curriculum_vitae|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|profile2|profile|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '9',
    'children' => array(
      0 => 'field_address',
      1 => 'field_alternate_email',
      2 => 'field_contacts',
      3 => 'field_fax',
      4 => 'field_linkedin',
      5 => 'field_phone',
      6 => 'field_public_email',
      7 => 'field_twitter',
      8 => 'field_urls',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_contact|profile2|profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cv|profile2|curriculum_vitae|form';
  $field_group->group_name = 'group_cv';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'curriculum_vitae';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'CV',
    'weight' => '5',
    'children' => array(
      0 => 'field_research_interests',
      1 => 'field_achievements',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cv field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_cv|profile2|curriculum_vitae|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edu_training|profile2|curriculum_vitae|form';
  $field_group->group_name = 'group_edu_training';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'curriculum_vitae';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Education and Training',
    'weight' => '6',
    'children' => array(
      0 => 'field_institutions',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-edu-training field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_edu_training|profile2|curriculum_vitae|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile|profile2|profile|form';
  $field_group->group_name = 'group_profile';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Profile',
    'weight' => '7',
    'children' => array(
      0 => 'field_accomplishments',
      1 => 'field_biography',
      2 => 'field_image',
      3 => 'field_longtext',
      4 => 'field_operational_roles',
      5 => 'field_operational_titles',
      6 => 'field_operational_units',
      7 => 'field_research_interests',
      8 => 'field_training',
      9 => 'field_date_yyyy',
      10 => 'field_display_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-profile field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_profile|profile2|profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|profile2|curriculum_vitae|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'curriculum_vitae';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_awards',
      1 => 'group_cv',
      2 => 'group_edu_training',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tabs|profile2|curriculum_vitae|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|profile2|profile|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_contact',
      1 => 'group_profile',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_tabs|profile2|profile|form'] = $field_group;

  return $export;
}
