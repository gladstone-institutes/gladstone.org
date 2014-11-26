<?php
/**
 * @file
 * gladstone_widgets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gladstone_widgets_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gladstone_widgets_views_api() {
  return array("api" => "3.0");
}
