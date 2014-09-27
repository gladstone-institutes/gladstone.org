<?php
/**
 * @file
 * tagging.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tagging_taxonomy_default_vocabularies() {
  return array(
    'operational_units' => array(
      'name' => 'Operational Units',
      'machine_name' => 'operational_units',
      'description' => 'Functional group/team (ex: Institute, Lab, Administration, Advisory Boards)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
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
