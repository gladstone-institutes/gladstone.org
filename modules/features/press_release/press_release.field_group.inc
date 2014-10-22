<?php
/**
 * @file
 * press_release.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function press_release_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_common_lang|node|press_release|form';
  $field_group->group_name = 'group_common_lang';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_release';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Common Language',
    'weight' => '2',
    'children' => array(
      0 => 'field_text',
      1 => 'field_blurb',
      2 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-common-lang field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_common_lang|node|press_release|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related|node|press_release|form';
  $field_group->group_name = 'group_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_release';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Related',
    'weight' => '1',
    'children' => array(
      0 => 'field_biblio_refs',
      1 => 'field_urls',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_related|node|press_release|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_release|node|press_release|form';
  $field_group->group_name = 'group_release';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_release';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Release',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_display_title',
      2 => 'field_longtext',
      3 => 'field_date',
      4 => 'field_image',
      5 => 'field_contacts',
      6 => 'field_files',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-release field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_release|node|press_release|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|press_release|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_release';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_release',
      1 => 'group_common_lang',
      2 => 'group_related',
      3 => 'group_tagging',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_tabs|node|press_release|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tagging|node|press_release|form';
  $field_group->group_name = 'group_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_release';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Tagging',
    'weight' => '3',
    'children' => array(
      0 => 'field_node_refs',
      1 => 'field_operational_units',
      2 => 'field_research_tags',
      3 => 'field_user_refs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tagging field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_tagging|node|press_release|form'] = $field_group;

  return $export;
}
