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

  $entities['base_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
      'cause' => 'taxonomy_term/f6c4eda2-4491-4fbf-9831-3a78f0b69b14',
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
    'weight' => 5,
  );
  $entities['base_structure_terms'][] = (object) array(
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
    'url_alias' => array(),
    'uuid' => '2e99b285-9f9a-410c-a2b9-43a881ba10ab',
    'vocabulary_machine_name' => 'structure',
    'weight' => 1,
  );
  $entities['base_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/f6c4eda2-4491-4fbf-9831-3a78f0b69b14',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Node',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/node',
        'language' => 'und',
      ),
    ),
    'uuid' => 'f6c4eda2-4491-4fbf-9831-3a78f0b69b14',
    'vocabulary_machine_name' => 'structure',
    'weight' => 0,
  );
  $entities['base_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/ab33a885-28b0-4e11-b7f9-64f12fc12ab4',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Institute',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/institute',
        'language' => 'und',
      ),
    ),
    'uuid' => 'ab33a885-28b0-4e11-b7f9-64f12fc12ab4',
    'vocabulary_machine_name' => 'structure',
    'weight' => 2,
  );
  $entities['base_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/8d3c4af2-7287-4db4-ae58-0241ee539f1e',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Directory',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/directory',
        'language' => 'und',
      ),
    ),
    'uuid' => '8d3c4af2-7287-4db4-ae58-0241ee539f1e',
    'vocabulary_machine_name' => 'structure',
    'weight' => 3,
  );

  return $entities;
}
