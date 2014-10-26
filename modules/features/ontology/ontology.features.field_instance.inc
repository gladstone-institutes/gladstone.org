<?php
/**
 * @file
 * ontology.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ontology_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-operational_units-field_text'
  $field_instances['taxonomy_term-operational_units-field_text'] = array(
    'bundle' => 'operational_units',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_text',
    'label' => 'Display Name',
    'required' => 1,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'limited_html' => 'limited_html',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => -8,
            ),
            'limited_html' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'rich_text' => array(
              'weight' => -10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Display Name');

  return $field_instances;
}
