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
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function gladstone_profiles_default_profile2_type() {
  $items = array();
  $items['curriculum_vitae'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "curriculum_vitae",
    "label" : "Curriculum Vitae",
    "weight" : "1",
    "data" : { "registration" : 0, "roles" : { "3" : "3" } }
  }');
  $items['leadership'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "leadership",
    "label" : "Leadership",
    "weight" : "2",
    "data" : {
      "registration" : 0,
      "roles" : { "3" : "3", "6" : "6", "4" : "4", "5" : "5", "2" : "2" }
    }
  }');
  $items['profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "profile",
    "label" : "Profile",
    "weight" : "0",
    "data" : {
      "registration" : 1,
      "roles" : { "3" : "3", "6" : "6", "4" : "4", "5" : "5", "2" : "2" }
    }
  }');
  return $items;
}
