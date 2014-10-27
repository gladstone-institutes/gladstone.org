<?php
/**
 * @file
 * gladstone_profiles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function gladstone_profiles_user_default_roles() {
  $roles = array();

  // Exported role: curriculum vitae.
  $roles['curriculum vitae'] = array(
    'name' => 'curriculum vitae',
    'weight' => 5,
  );

  // Exported role: leadership.
  $roles['leadership'] = array(
    'name' => 'leadership',
    'weight' => 4,
  );

  // Exported role: mini cv.
  $roles['mini cv'] = array(
    'name' => 'mini cv',
    'weight' => 6,
  );

  // Exported role: profile.
  $roles['profile'] = array(
    'name' => 'profile',
    'weight' => 7,
  );

  return $roles;
}
