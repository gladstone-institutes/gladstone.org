<?php
/**
 * @file
 * structure.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function structure_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'user';
  $pm_existing_page->label = 'User';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'user';
  $export['user'] = $pm_existing_page;

  return $export;
}
