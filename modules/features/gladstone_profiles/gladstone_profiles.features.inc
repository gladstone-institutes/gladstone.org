<?php
/**
 * @file
 * gladstone_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gladstone_profiles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gladstone_profiles_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function gladstone_profiles_image_default_styles() {
  $styles = array();

  // Exported image style: profile_picture_directory.
  $styles['profile_picture_directory'] = array(
    'name' => 'profile_picture_directory',
    'label' => 'Profile picture directory',
    'effects' => array(
      2 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 160,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_picture_large.
  $styles['profile_picture_large'] = array(
    'name' => 'profile_picture_large',
    'label' => 'Profile picture large',
    'effects' => array(
      1 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 300,
          'strength' => 'medium',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_picture_thumbnail.
  $styles['profile_picture_thumbnail'] = array(
    'name' => 'profile_picture_thumbnail',
    'label' => 'Profile picture thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 80,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_name_default_formats().
 */
function gladstone_profiles_name_default_formats() {
  $formats = array();

  // Exported format: Professional
  $formats['professional'] = array(
    'name' => 'Professional',
    'machine_name' => 'professional',
    'format' => 't(((ig)+if)+jc)',
  );

  return $formats;
}

/**
 * Implements hook_default_profile2_type().
 */
function gladstone_profiles_default_profile2_type() {
  //HACK: fix role config on import
  $cv_rid = user_role_load_by_name("curriculum vitae")->rid;
  $leadership_rid = user_role_load_by_name("leadership")->rid;
  $auth_rid = user_role_load_by_name("authenticated user")->rid;

  $items = array();
  $items['curriculum_vitae'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "curriculum_vitae",
    "label" : "Curriculum Vitae",
    "weight" : "1",
    "data" : { "registration" : 0, "roles" : { "'.$cv_rid.'" : "'.$cv_rid.'" } }
  }');
  $items['leadership'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "leadership",
    "label" : "Leadership",
    "weight" : "2",
    "data" : { "registration" : 0, "roles" : { "'.$leadership_rid.'" : "'.$leadership_rid.'" } }
  }');
  $items['profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "profile",
    "label" : "Profile",
    "weight" : "0",
    "data" : { "registration" : 1, "roles" : { "'.$auth_rid.'" : "'.$auth_rid.'" } }
  }');
  return $items;
}
