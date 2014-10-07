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
    'structure' => array(
      'name' => 'Structure',
      'machine_name' => 'structure',
      'description' => 'Terms used as selectors in subsystems like views, paths, contexts...',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
