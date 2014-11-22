<?php
/**
 * @file
 * structure.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function structure_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-connect-with-us'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-connect-with-us',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'gladstone_org' => array(
        'region' => 'leaderboard',
        'status' => 1,
        'theme' => 'gladstone_org',
        'weight' => -14,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-donate'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-donate',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'gladstone_org' => array(
        'region' => 'leaderboard',
        'status' => 1,
        'theme' => 'gladstone_org',
        'weight' => -13,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-quick-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-quick-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'gladstone_org' => array(
        'region' => 'leaderboard',
        'status' => 1,
        'theme' => 'gladstone_org',
        'weight' => -15,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
