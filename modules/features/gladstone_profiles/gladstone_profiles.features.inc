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
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
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

  // Exported image style: profile_picture_medium.
  $styles['profile_picture_medium'] = array(
    'name' => 'profile_picture_medium',
    'label' => 'Profile picture medium',
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
          'width' => 180,
          'height' => 245,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_picture_square.
  $styles['profile_picture_square'] = array(
    'name' => 'profile_picture_square',
    'label' => 'Profile picture square',
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
          'height' => 220,
          'strength' => 'high',
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
  $minicv_rid = user_role_load_by_name("mini cv")->rid;
  $leadership_rid = user_role_load_by_name("leadership")->rid;
  $profile_rid = user_role_load_by_name("profile")->rid;

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
    "data" : { "registration" : 0, "roles" : { "8" : "8" } }
  }');
  $items['mini_cv'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "mini_cv",
    "label" : "Mini CV",
    "weight" : "0",
    "data" : { "registration" : 0, "roles" : { "'.$minicv_rid.'" : "'.$minicv_rid.'" } }
  }');
  $items['profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "profile",
    "label" : "Profile",
    "weight" : "0",
    "data" : { "registration" : 0, "roles" : { "'.$profile_rid.'" : "'.$profile_rid.'" } }
  }');
  return $items;
}
