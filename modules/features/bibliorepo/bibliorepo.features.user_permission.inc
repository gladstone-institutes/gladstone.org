<?php
/**
 * @file
 * bibliorepo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bibliorepo_user_default_permissions() {
  $permissions = array();

  // Exported permission: access biblio content.
  $permissions['access biblio content'] = array(
    'name' => 'access biblio content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'superadmin' => 'superadmin',
    ),
    'module' => 'biblio',
  );

  return $permissions;
}
