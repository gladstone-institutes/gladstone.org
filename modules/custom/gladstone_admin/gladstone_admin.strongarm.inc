<?php
/**
 * @file
 * gladstone_admin.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gladstone_admin_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'coffee_settings_menus';
  $strongarm->value = array(
    'management' => 'management',
    'user-menu' => 'user-menu',
    'devel' => 0,
    'menu-footer-menu' => 0,
    'main-menu' => 0,
    'navigation' => 0,
    'menu-quick-menu' => 0,
  );
  $export['coffee_settings_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_edit_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_edit_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_blocks_global';
  $strongarm->value = array(
    0 => 'format',
  );
  $export['simplify_blocks_global'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_basic_page';
  $strongarm->value = array();
  $export['simplify_nodes_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_biblio';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'path',
  );
  $export['simplify_nodes_biblio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_event_calendar';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'path',
  );
  $export['simplify_nodes_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_global';
  $strongarm->value = array(
    0 => 'format',
  );
  $export['simplify_nodes_global'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_honors_and_awards';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'path',
  );
  $export['simplify_nodes_honors_and_awards'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_in_the_news';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'path',
  );
  $export['simplify_nodes_in_the_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_news';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'path',
  );
  $export['simplify_nodes_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_press_release';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'path',
  );
  $export['simplify_nodes_press_release'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_site_page';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'path',
  );
  $export['simplify_nodes_site_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_technology';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'path',
  );
  $export['simplify_nodes_technology'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_taxonomy_global';
  $strongarm->value = array(
    0 => 'format',
    1 => 'path',
  );
  $export['simplify_taxonomy_global'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_users_global';
  $strongarm->value = array(
    0 => 'format',
    1 => 'overlay',
  );
  $export['simplify_users_global'] = $strongarm;

  return $export;
}
