<?php
/**
 * @file
 * structure.menu_block.inc
 */

/**
 * Implements hook_menu_block_defaults().
 */
function structure_menu_block_defaults() {
  $export = array();

  $menu_block = new stdClass();
  $menu_block->disabled = FALSE; /* Edit this to true to make a default menu_block disabled initially */
  $menu_block->api_version = 1;
  $menu_block->name = 'mega_menu_about_us';
  $menu_block->label = 'Mega menu: About Us';
  $menu_block->description = '';
  $menu_block->depth = 1;
  $menu_block->expanded = 0;
  $menu_block->follow = '0';
  $menu_block->level = 1;
  $menu_block->parent = 'main-menu:898';
  $menu_block->sort = 0;
  $menu_block->title_link = 0;
  $export['mega_menu_about_us'] = $menu_block;

  $menu_block = new stdClass();
  $menu_block->disabled = FALSE; /* Edit this to true to make a default menu_block disabled initially */
  $menu_block->api_version = 1;
  $menu_block->name = 'mega_menu_connect';
  $menu_block->label = 'Mega menu: Connect';
  $menu_block->description = '';
  $menu_block->depth = 1;
  $menu_block->expanded = 0;
  $menu_block->follow = '0';
  $menu_block->level = 1;
  $menu_block->parent = 'main-menu:832';
  $menu_block->sort = 0;
  $menu_block->title_link = 0;
  $export['mega_menu_connect'] = $menu_block;

  $menu_block = new stdClass();
  $menu_block->disabled = FALSE; /* Edit this to true to make a default menu_block disabled initially */
  $menu_block->api_version = 1;
  $menu_block->name = 'mega_menu_our_science';
  $menu_block->label = 'Mega menu: Our Science';
  $menu_block->description = '';
  $menu_block->depth = 1;
  $menu_block->expanded = 0;
  $menu_block->follow = '0';
  $menu_block->level = 1;
  $menu_block->parent = 'main-menu:823';
  $menu_block->sort = 0;
  $menu_block->title_link = 0;
  $export['mega_menu_our_science'] = $menu_block;

  return $export;
}
