<?php
/**
 * @file
 * site_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function site_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
}
