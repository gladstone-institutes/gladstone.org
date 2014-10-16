<?php
/**
 * @file
 * events.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function events_taxonomy_default_vocabularies() {
  return array(
    'event_type' => array(
      'name' => 'Event Type',
      'machine_name' => 'event_type',
      'description' => 'Scientific, Special, Seminar etc...',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
