<?php
/**
 * @file
 * gladstone_profiles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gladstone_profiles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_profile2_curriculum_vitae';
  $strongarm->value = '[profile2:user:realname]';
  $export['auto_entitylabel_pattern_profile2_curriculum_vitae'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_profile2_curriculum_vitae';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_profile2_curriculum_vitae'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_profile2_curriculum_vitae';
  $strongarm->value = '1';
  $export['auto_entitylabel_profile2_curriculum_vitae'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_profile2__curriculum_vitae';
  $strongarm->value = array(
    'view_modes' => array(
      'account' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_profile2__curriculum_vitae'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'ckeditor' => array(
          'weight' => '6',
        ),
        'profile_profile' => array(
          'weight' => '3',
        ),
        'account' => array(
          'weight' => '2',
        ),
        'timezone' => array(
          'weight' => '5',
        ),
        'overlay_control' => array(
          'weight' => '4',
        ),
        'biblio_fieldset' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  return $export;
}
