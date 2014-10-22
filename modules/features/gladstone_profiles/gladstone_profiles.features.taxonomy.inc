<?php
/**
 * @file
 * gladstone_profiles.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gladstone_profiles_taxonomy_default_vocabularies() {
  return array(
    'operational_roles' => array(
      'name' => 'Operational Roles',
      'machine_name' => 'operational_roles',
      'description' => 'Superclasses of Operational Titles',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'operational_titles' => array(
      'name' => 'Operational Titles',
      'machine_name' => 'operational_titles',
      'description' => 'Internal titles as assigned by human resources.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
