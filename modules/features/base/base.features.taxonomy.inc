<?php
/**
 * @file
 * base.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function base_taxonomy_default_vocabularies() {
  return array(
    'research' => array(
      'name' => 'Research',
      'machine_name' => 'research',
      'description' => 'Research topics, areas, terms, ontologies and classifications',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
    ),
  );
}
