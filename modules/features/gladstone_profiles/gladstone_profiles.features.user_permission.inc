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

  // Exported permission: create field_biography.
  $permissions['create field_biography'] = array(
    'name' => 'create field_biography',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_operational_title.
  $permissions['create field_operational_title'] = array(
    'name' => 'create field_operational_title',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_operational_unit.
  $permissions['create field_operational_unit'] = array(
    'name' => 'create field_operational_unit',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'field_permissions',
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

  // Exported permission: edit any external_cv profile.
  $permissions['edit any external_cv profile'] = array(
    'name' => 'edit any external_cv profile',
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

  // Exported permission: edit field_biography.
  $permissions['edit field_biography'] = array(
    'name' => 'edit field_biography',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'leadership' => 'leadership',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_operational_title.
  $permissions['edit field_operational_title'] = array(
    'name' => 'edit field_operational_title',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_operational_unit.
  $permissions['edit field_operational_unit'] = array(
    'name' => 'edit field_operational_unit',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'field_permissions',
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

  // Exported permission: edit own field_biography.
  $permissions['edit own field_biography'] = array(
    'name' => 'edit own field_biography',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'superadmin' => 'superadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_operational_title.
  $permissions['edit own field_operational_title'] = array(
    'name' => 'edit own field_operational_title',
    'roles' => array(
      'superadmin' => 'superadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_operational_unit.
  $permissions['edit own field_operational_unit'] = array(
    'name' => 'edit own field_operational_unit',
    'roles' => array(
      'superadmin' => 'superadmin',
    ),
    'module' => 'field_permissions',
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

  // Exported permission: edit own external_cv profile.
  $permissions['edit own external_cv profile'] = array(
    'name' => 'edit own external_cv profile',
    'roles' => array(
      'external cv' => 'external cv',
      'superadmin' => 'superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own profile profile.
  $permissions['edit own profile profile'] = array(
    'name' => 'edit own profile profile',
    'roles' => array(
      'profile' => 'profile',
      'superadmin' => 'superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any curriculum_vitae profile.
  $permissions['view any curriculum_vitae profile'] = array(
    'name' => 'view any curriculum_vitae profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'curriculum vitae' => 'curriculum vitae',
      'leadership' => 'leadership',
      'superadmin' => 'superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any leadership profile.
  $permissions['view any leadership profile'] = array(
    'name' => 'view any leadership profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'curriculum vitae' => 'curriculum vitae',
      'leadership' => 'leadership',
      'superadmin' => 'superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any external_cv profile.
  $permissions['view any external_cv profile'] = array(
    'name' => 'view any external_cv profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any profile profile.
  $permissions['view any profile profile'] = array(
    'name' => 'view any profile profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'curriculum vitae' => 'curriculum vitae',
      'leadership' => 'leadership',
      'superadmin' => 'superadmin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view field_biography.
  $permissions['view field_biography'] = array(
    'name' => 'view field_biography',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'superadmin' => 'superadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_operational_title.
  $permissions['view field_operational_title'] = array(
    'name' => 'view field_operational_title',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'superadmin' => 'superadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_operational_unit.
  $permissions['view field_operational_unit'] = array(
    'name' => 'view field_operational_unit',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'superadmin' => 'superadmin',
    ),
    'module' => 'field_permissions',
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

  // Exported permission: view own field_biography.
  $permissions['view own field_biography'] = array(
    'name' => 'view own field_biography',
    'roles' => array(
      'leadership' => 'leadership',
      'superadmin' => 'superadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_operational_title.
  $permissions['view own field_operational_title'] = array(
    'name' => 'view own field_operational_title',
    'roles' => array(
      'superadmin' => 'superadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_operational_unit.
  $permissions['view own field_operational_unit'] = array(
    'name' => 'view own field_operational_unit',
    'roles' => array(
      'superadmin' => 'superadmin',
    ),
    'module' => 'field_permissions',
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

  // Exported permission: view own external_cv profile.
  $permissions['view own external_cv profile'] = array(
    'name' => 'view own external_cv profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
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
