<?php
/**
 * @file
 * base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
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
  t('Footer menu');
  t('Links to display in the site-wide footer');
  t('Main menu');
  t('Quick menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Top page shortcuts, investigator dropdown, and donation link');


  return $menus;
}
