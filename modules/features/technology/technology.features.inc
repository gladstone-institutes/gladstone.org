<?php
/**
 * @file
 * technology.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function technology_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function technology_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function technology_node_info() {
  $items = array(
    'technology' => array(
      'name' => t('Technology'),
      'base' => 'node_content',
      'description' => t('Resources and innovations available at/from Gladstone.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use the technology content type to create new resources and innovations available at and from Gladstone.'),
    ),
  );
  return $items;
}
