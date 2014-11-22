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
  // Exported menu: menu-connect-with-us.
  $menus['menu-connect-with-us'] = array(
    'menu_name' => 'menu-connect-with-us',
    'title' => 'Connect With Us',
    'description' => 'Links to various media channels',
  );
  // Exported menu: menu-donate.
  $menus['menu-donate'] = array(
    'menu_name' => 'menu-donate',
    'title' => 'Donate',
    'description' => 'Gladstone donation link',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => 'Links to display in the site-wide footer',
  );
  // Exported menu: menu-quick-menu.
  $menus['menu-quick-menu'] = array(
    'menu_name' => 'menu-quick-menu',
    'title' => 'Quick menu',
    'description' => 'Top page shortcuts, investigator dropdown, and donation link',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Connect With Us');
  t('Donate');
  t('Footer menu');
  t('Gladstone donation link');
  t('Links to display in the site-wide footer');
  t('Links to various media channels');
  t('Main menu');
  t('Primary navigation and sitemap. This is the backbone structure of the site; connecting the menu with page manager, passing needed context variables and content uuids');
  t('Quick menu');
  t('Top page shortcuts, investigator dropdown, and donation link');


  return $menus;
}
