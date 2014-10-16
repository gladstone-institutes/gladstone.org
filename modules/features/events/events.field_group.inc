<?php
/**
 * @file
 * events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function events_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|event_calendar|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_calendar';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'event_calendar_date',
      2 => 'event_calendar_status',
      3 => 'field_blurb',
      4 => 'field_event_types',
      5 => 'field_files',
      6 => 'field_headline',
      7 => 'field_image',
      8 => 'field_location',
      9 => 'field_longtext',
      10 => 'field_text',
      11 => 'title',
      12 => 'path',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_content|node|event_calendar|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|event_calendar|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_calendar';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_tagging',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_tabs|node|event_calendar|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tagging|node|event_calendar|form';
  $field_group->group_name = 'group_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_calendar';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Tagging',
    'weight' => '1',
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
  $export['group_tagging|node|event_calendar|form'] = $field_group;

  return $export;
}
