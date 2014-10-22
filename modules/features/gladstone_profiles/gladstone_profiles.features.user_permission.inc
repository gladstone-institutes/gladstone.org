<?php
/**
 * @file
 * gladstone_profiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gladstone_profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer profile types.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'superadmin' => 'superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: administer profiles.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any curriculum_vitae profile.
  $permissions['edit any curriculum_vitae profile'] = array(
    'name' => 'edit any curriculum_vitae profile',
    'roles' => array(
      'superadmin' => 'superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any leadership profile.
  $permissions['edit any leadership profile'] = array(
    'name' => 'edit any leadership profile',
    'roles' => array(
      'superadmin' => 'superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any profile profile.
  $permissions['edit any profile profile'] = array(
    'name' => 'edit any profile profile',
    'roles' => array(
      'superadmin' => 'superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own curriculum_vitae profile.
  $permissions['edit own curriculum_vitae profile'] = array(
    'name' => 'edit own curriculum_vitae profile',
    'roles' => array(
      'curriculum vitae' => 'curriculum vitae',
      'superadmin' => 'superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own leadership profile.
  $permissions['edit own leadership profile'] = array(
    'name' => 'edit own leadership profile',
    'roles' => array(
      'leadership' => 'leadership',
      'superadmin' => 'superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own profile profile.
  $permissions['edit own profile profile'] = array(
    'name' => 'edit own profile profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'superadmin' => 'superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any curriculum_vitae profile.
  $permissions['view any curriculum_vitae profile'] = array(
    'name' => 'view any curriculum_vitae profile',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'curriculum vitae' => 'curriculum vitae',
      'editor' => 'editor',
      'leadership' => 'leadership',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any leadership profile.
  $permissions['view any leadership profile'] = array(
    'name' => 'view any leadership profile',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'curriculum vitae' => 'curriculum vitae',
      'editor' => 'editor',
      'leadership' => 'leadership',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any profile profile.
  $permissions['view any profile profile'] = array(
    'name' => 'view any profile profile',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'curriculum vitae' => 'curriculum vitae',
      'editor' => 'editor',
      'leadership' => 'leadership',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own curriculum_vitae profile.
  $permissions['view own curriculum_vitae profile'] = array(
    'name' => 'view own curriculum_vitae profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'superadmin' => 'superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own leadership profile.
  $permissions['view own leadership profile'] = array(
    'name' => 'view own leadership profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'superadmin' => 'superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own profile profile.
  $permissions['view own profile profile'] = array(
    'name' => 'view own profile profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'superadmin' => 'superadmin',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
