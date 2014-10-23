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
