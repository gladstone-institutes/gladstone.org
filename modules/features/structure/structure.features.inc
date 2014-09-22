<?php
/**
 * @file
 * structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function structure_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function structure_node_info() {
  $items = array(
    'site_page' => array(
      'name' => t('Site Page'),
      'base' => 'node_content',
      'description' => t('Pages essential to site-map structure'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
