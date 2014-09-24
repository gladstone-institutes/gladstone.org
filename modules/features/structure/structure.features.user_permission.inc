<?php
/**
 * @file
 * structure.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function structure_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'superadmin' => 'superadmin',
    ),
    'module' => 'system',
  );

  // Exported permission: access coffee.
  $permissions['access coffee'] = array(
    'name' => 'access coffee',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'coffee',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: access overlay.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'superadmin' => 'superadmin',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'admin' => 'admin',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'system',
  );

  // Exported permission: access toolbar.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'user',
  );

  // Exported permission: administer advanced pane settings.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'block',
  );

  // Exported permission: administer ckeditor.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'superadmin' => 'superadmin',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'image',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer mini panels.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: administer pane access.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels layouts.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels styles.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'search',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'user',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'system',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'admin' => 'admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'user',
  );

  // Exported permission: change layouts in place editing.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'admin' => 'admin',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'user',
  );

  // Exported permission: create mini panels.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'admin' => 'admin',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'path',
  );

  // Exported permission: customize ckeditor.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'superadmin' => 'superadmin',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: menu edit main-menu.
  $permissions['menu edit main-menu'] = array(
    'name' => 'menu edit main-menu',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: menu edit management.
  $permissions['menu edit management'] = array(
    'name' => 'menu edit management',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: menu edit navigation.
  $permissions['menu edit navigation'] = array(
    'name' => 'menu edit navigation',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: menu edit user-menu.
  $permissions['menu edit user-menu'] = array(
    'name' => 'menu edit user-menu',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'admin' => 'admin',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'search',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'search',
  );

  // Exported permission: use ipe with page manager.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'admin' => 'admin',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: use page manager.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use panels caching features.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels locks.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: view pane admin links.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'panels',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'superadmin' => 'superadmin',
      'webadmin' => 'webadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'superadmin' => 'superadmin',
    ),
    'module' => 'system',
  );

  return $permissions;
}
