<?php
/**
 * @file
 * events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
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
function events_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function events_node_info() {
  $items = array(
    'event_calendar' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Events for display on the event calendar.'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => t('Use this content type to create events with details that will display in a calendar (yearly, monthly, weekly, daily) format.'),
    ),
  );
  return $items;
}
