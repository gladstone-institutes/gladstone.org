<?php
/**
 * @file
 * press_release.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function press_release_ctools_plugin_api() {
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
function press_release_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function press_release_node_info() {
  $items = array(
    'press_release' => array(
      'name' => t('Press Release'),
      'base' => 'node_content',
      'description' => t('Content for external media syndication.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use the press release content type to create content for external media syndication.'),
    ),
  );
  return $items;
}
