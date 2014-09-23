<?php
/**
 * @file
 * base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function base_node_info() {
  $items = array(
    'site_page' => array(
      'name' => t('Site Page'),
      'base' => 'node_content',
      'description' => t('Pages essential to site-map structure'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Site pages are essential to the backbone structure of the site and require elevated privileges to alter. If you need to make a change and do not have permission, contact the site admin.'),
    ),
  );
  return $items;
}
