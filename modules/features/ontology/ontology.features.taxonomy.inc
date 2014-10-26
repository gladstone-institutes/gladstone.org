<?php
/**
 * @file
 * ontology.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ontology_taxonomy_default_vocabularies() {
  return array(
    'operational_units' => array(
      'name' => 'Operational Units',
      'machine_name' => 'operational_units',
      'description' => 'Functional group/team (ex: Institute, Lab, Administration, Advisory Boards)',
      'hierarchy' => 1,
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
