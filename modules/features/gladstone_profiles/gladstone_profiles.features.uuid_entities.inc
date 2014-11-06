<?php
/**
 * @file
 * gladstone_profiles.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function gladstone_profiles_uuid_default_entities() {
  $entities = array();

  $entities['profile_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
      'cause' => 'taxonomy_term/dd473bde-e5d3-4b59-ac37-e08e3b22addd',
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Variants',
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/variants',
        'language' => 'und',
      ),
    ),
    'uuid' => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    'vocabulary_machine_name' => 'structure',
    'weight' => 6,
  );
  $entities['profile_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/dd473bde-e5d3-4b59-ac37-e08e3b22addd',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Directors and Investigators',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/directors-and-investigators',
        'language' => 'und',
      ),
    ),
    'uuid' => 'dd473bde-e5d3-4b59-ac37-e08e3b22addd',
    'vocabulary_machine_name' => 'structure',
    'weight' => 4,
  );
  $entities['profile_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/45b858d9-6a4d-4878-bd63-bcb9f80513e0',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'People',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/people',
        'language' => 'und',
      ),
    ),
    'uuid' => '45b858d9-6a4d-4878-bd63-bcb9f80513e0',
    'vocabulary_machine_name' => 'structure',
    'weight' => 5,
  );

  return $entities;
}
