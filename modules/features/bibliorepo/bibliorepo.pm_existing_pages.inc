<?php
/**
 * @file
 * bibliorepo.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function bibliorepo_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'biblio';
  $pm_existing_page->label = 'Biblio';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'biblio';
  $export['biblio'] = $pm_existing_page;

  return $export;
}
