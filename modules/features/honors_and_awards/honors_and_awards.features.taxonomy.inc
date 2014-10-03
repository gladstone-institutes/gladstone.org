<?php
/**
 * @file
 * honors_and_awards.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function honors_and_awards_taxonomy_default_vocabularies() {
  return array(
    'honors_and_awards' => array(
      'name' => 'Honors and Awards',
      'machine_name' => 'honors_and_awards',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
