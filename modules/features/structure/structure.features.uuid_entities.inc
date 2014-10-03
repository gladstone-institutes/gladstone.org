<?php
/**
 * @file
 * structure.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function structure_uuid_default_entities() {
  $entities = array();

  $entities['superstruct_structure_taxonomy'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
      'cause' => 'taxonomy_term/2e99b285-9f9a-410c-a2b9-43a881ba10ab',
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
  $entities['superstruct_structure_taxonomy'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/2e99b285-9f9a-410c-a2b9-43a881ba10ab',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Home',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/home',
        'language' => 'und',
      ),
    ),
    'uuid' => '2e99b285-9f9a-410c-a2b9-43a881ba10ab',
    'vocabulary_machine_name' => 'structure',
    'weight' => 0,
  );

  return $entities;
}
