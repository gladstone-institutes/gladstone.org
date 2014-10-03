<?php
/**
 * @file
 * honors_and_awards.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function honors_and_awards_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_honor_and_award'
  $field_bases['field_honor_and_award'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_honor_and_award',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'honors_and_awards',
          'parent' => 0,
        ),
      ),
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_honors_and_awards_rels'
  $field_bases['field_honors_and_awards_rels'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_honors_and_awards_rels',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'relation_add',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'relation_add',
  );

  return $field_bases;
}
