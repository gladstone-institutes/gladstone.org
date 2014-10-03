<?php
/**
 * @file
 * base.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function base_uuid_default_entities() {
  $entities = array();

  $entities['structure_taxonomy'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d777e490-c349-4ddb-babd-eb503152c84b',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'full_html',
    'name' => 'Control',
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/control',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd777e490-c349-4ddb-babd-eb503152c84b',
    'vocabulary_machine_name' => 'structure',
    'weight' => 0,
  );
  $entities['structure_taxonomy'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'full_html',
    'name' => 'Variants',
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/variants',
        'language' => 'und',
      ),
    ),
    'uuid' => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    'vocabulary_machine_name' => 'structure',
    'weight' => 1,
  );

  return $entities;
}
