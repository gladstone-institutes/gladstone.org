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
    'concentration_of_study' => array(
      'name' => 'Concentration of Study',
      'machine_name' => 'concentration_of_study',
      'description' => 'Area of study for degree conferred',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'institutions' => array(
      'name' => 'Institutions',
      'machine_name' => 'institutions',
      'description' => 'Name only',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'operational_roles' => array(
      'name' => 'Operational Roles',
      'machine_name' => 'operational_roles',
      'description' => 'Superclasses of Operational Titles',
      'hierarchy' => 1,
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
