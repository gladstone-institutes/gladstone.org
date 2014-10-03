<?php
/**
 * @file
 * gladstone_profiles.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gladstone_profiles_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-curriculum_vitae-field_honors_and_awards_rels'
  $field_instances['profile2-curriculum_vitae-field_honors_and_awards_rels'] = array(
    'bundle' => 'curriculum_vitae',
    'deleted' => 0,
    'description' => '<b>Autocomplete</b> any honors and awards to the user CV here. If none exists, create a new entry using the button below.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_add',
        'settings' => array(),
        'type' => 'relation_add_endpoints_and_fields',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_honors_and_awards_rels',
    'label' => 'Recipient of',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'relation_type' => array(
        'was_awarded' => 'was_awarded',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'endpoint',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 0,
      ),
      'type' => 'relation_add',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-curriculum_vitae-field_label_alias'
  $field_instances['profile2-curriculum_vitae-field_label_alias'] = array(
    'bundle' => 'curriculum_vitae',
    'deleted' => 0,
    'description' => 'This field is dynamically computed from the User\'s Name field. Its needed to ensure any database level queries based on a "label" field still work. <b>DON\'T ALTER UNLESS YOURE A DEVELOPER</b>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_label_alias',
    'label' => 'Realname Alias ',
    'required' => 0,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'user-user-field_name'
  $field_instances['user-user-field_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Full name of user. <i>This will affect the <b>public</b> display of a user\'s profile</i>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_name',
    'label' => 'Name',
    'required' => 1,
    'rubik_edit_field_display' => 'default',
    'settings' => array(
      'component_css' => '',
      'component_layout' => 'default',
      'components' => array(
        'credentials' => 0,
        'family' => 0,
        'generational' => 0,
        'given' => 0,
        'middle' => 0,
        'title' => 0,
      ),
      'credentials_inline' => 0,
      'field_type' => array(
        'credentials' => 'text',
        'family' => 'text',
        'generational' => 'select',
        'given' => 'text',
        'middle' => 'text',
        'title' => 'select',
      ),
      'generational_field' => 'select',
      'inline_css' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'labels' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'minimum_components' => array(
        'credentials' => 0,
        'family' => 0,
        'generational' => 0,
        'given' => 0,
        'middle' => 0,
        'title' => 0,
      ),
      'name_user_preferred' => 1,
      'override_format' => 'default',
      'show_component_required_marker' => 1,
      'size' => array(
        'credentials' => 35,
        'family' => 20,
        'generational' => 5,
        'given' => 20,
        'middle' => 20,
        'title' => 6,
      ),
      'title_display' => array(
        'credentials' => 'description',
        'family' => 'description',
        'generational' => 'description',
        'given' => 'description',
        'middle' => 'description',
        'title' => 'description',
      ),
      'title_field' => 'select',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'name',
      'settings' => array(),
      'type' => 'name_widget',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<b>Autocomplete</b> any honors and awards to the user CV here. If none exists, create a new entry using the button below.');
  t('Full name of user. <i>This will affect the <b>public</b> display of a user\'s profile</i>');
  t('Name');
  t('Realname Alias ');
  t('Recipient of');
  t('This field is dynamically computed from the User\'s Name field. Its needed to ensure any database level queries based on a "label" field still work. <b>DON\'T ALTER UNLESS YOURE A DEVELOPER</b>');

  return $field_instances;
}
