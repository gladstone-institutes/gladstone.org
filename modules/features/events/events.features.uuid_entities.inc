<?php
/**
 * @file
 * events.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function events_uuid_default_entities() {
  $entities = array();

  $entities['event_type_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/80e14088-e96c-4eb1-b552-b7f2042540ab',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Development',
    'url_alias' => array(),
    'uuid' => '80e14088-e96c-4eb1-b552-b7f2042540ab',
    'vocabulary_machine_name' => 'event_type',
    'weight' => 0,
  );
  $entities['event_type_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/2966aade-83df-4e2d-81ae-77f901f9e382',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Scientific',
    'url_alias' => array(),
    'uuid' => '2966aade-83df-4e2d-81ae-77f901f9e382',
    'vocabulary_machine_name' => 'event_type',
    'weight' => 0,
  );
  $entities['event_type_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/07904d79-8cda-4b25-b490-5c030778dc06',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Seminars',
    'url_alias' => array(),
    'uuid' => '07904d79-8cda-4b25-b490-5c030778dc06',
    'vocabulary_machine_name' => 'event_type',
    'weight' => 0,
  );
  $entities['event_type_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/098b0136-d1ec-4a2f-aef3-7de36d5bae6e',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Special',
    'url_alias' => array(),
    'uuid' => '098b0136-d1ec-4a2f-aef3-7de36d5bae6e',
    'vocabulary_machine_name' => 'event_type',
    'weight' => 0,
  );
  $entities['event_type_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/f18664e0-6b57-426d-a095-942833bb8779',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Symposia',
    'url_alias' => array(),
    'uuid' => 'f18664e0-6b57-426d-a095-942833bb8779',
    'vocabulary_machine_name' => 'event_type',
    'weight' => 0,
  );

  return $entities;
}
