<?php
/**
 * @file
 * honors_and_awards.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function honors_and_awards_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_honors_and_awards';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_honors_and_awards'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_honors_and_awards';
  $strongarm->value = '[node:field-honor-and-award:name] ([node:field-date-mmyy:custom:M, Y])';
  $export['auto_entitylabel_pattern_node_honors_and_awards'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_honors_and_awards';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_honors_and_awards'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__honors_and_awards';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__honors_and_awards'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_honors_and_awards';
  $strongarm->value = array();
  $export['menu_options_honors_and_awards'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_honors_and_awards';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_honors_and_awards'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_honors_and_awards';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_honors_and_awards'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_honors_and_awards';
  $strongarm->value = '1';
  $export['node_preview_honors_and_awards'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_honors_and_awards';
  $strongarm->value = 0;
  $export['node_submitted_honors_and_awards'] = $strongarm;

  return $export;
}
