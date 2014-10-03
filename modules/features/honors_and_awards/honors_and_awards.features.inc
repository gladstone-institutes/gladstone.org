<?php
/**
 * @file
 * honors_and_awards.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function honors_and_awards_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "relation" && $api == "relation_type_default") {
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
function honors_and_awards_node_info() {
  $items = array(
    'honors_and_awards' => array(
      'name' => t('Honors and Awards'),
      'base' => 'node_content',
      'description' => t('Honors and Awards presented to Gladstone and/or its researchers.'),
      'has_title' => '1',
      'title_label' => t('Display title'),
      'help' => t('Use this content type for awards presented to Gladstone and/or its researchers. Remember to tag any user profiles under the Recipient(s) field.'),
    ),
  );
  return $items;
}
