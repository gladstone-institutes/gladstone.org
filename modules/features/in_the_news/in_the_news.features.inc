<?php
/**
 * @file
 * in_the_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function in_the_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
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
function in_the_news_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function in_the_news_node_info() {
  $items = array(
    'in_the_news' => array(
      'name' => t('In the News'),
      'base' => 'node_content',
      'description' => t('External mentions/citations to Gladstone.'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => t('Use this content type to add new external mentions/citations to Gladstone.'),
    ),
  );
  return $items;
}
