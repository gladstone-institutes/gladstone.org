<?php
/**
 * @file
 * structure.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function structure_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 2,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  // Exported role: webadmin.
  $roles['webadmin'] = array(
    'name' => 'webadmin',
    'weight' => 1,
  );

  return $roles;
}
