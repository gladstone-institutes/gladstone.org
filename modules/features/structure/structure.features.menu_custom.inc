<?php
/**
 * @file
 * structure.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function structure_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'Primary navigation and sitemap. This is the backbone structure of the site; connecting the menu with page manager, passing needed context variables and content uuids',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Primary navigation and sitemap. This is the backbone structure of the site; connecting the menu with page manager, passing needed context variables and content uuids');


  return $menus;
}
