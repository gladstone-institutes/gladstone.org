<?php
/**
 * @file
 * Because the name of this file is the module name plus '.migrate.inc', when
 * hook_migrate_api is invoked by the Migrate module this file is automatically
 * loaded - thus, you don't need to implement your hook in the .module file.
 *
 * Use this for STATICALLY DEFINED migrations
 */

/**
 * Implements hook_migrate_api()
 *
 * Returns 'api' => 2 for the 7.x-2.x branch of Migrate.
 * Registers the migration classes for the 7.x-2.6 branch of Migrate (including
 * 7.x-2.6+xx-dev).
 */
// function gladstone_migrate_migrate_api() {
//   $api = array(
//     'api' => 2,
//     // Migrations can be organized into groups. The key used here will be the
//     // machine name of the group, which can be used in Drush:
//     //  drush migrate-import --group=GladstoneMigrate
//     // The title is a required argument which is displayed for the group in the
//     // UI. You may also have additional arguments for any other data which is
//     // common to all migrations in the group.
//     'groups' => array(
//       'GladstoneMigrate' => array(
//         'title' => t('Gladstone Migrations'),
//       ),
//     ),
//     // Here we register the individual migrations. The keys (gs_step1_user,
//     // etc.) are the machine names of the migrations, and the class_name
//     // argument is required. The group_name is optional (defaulting to 'default')
//     // but specifying it is a best practice.
//     'migrations' => array(
//       'gs_user' => array(
//         'class_name' => 'GSUserMigration',
//         'group_name' => 'GladstoneMigrate',
//       ),
//       // 'gs_profile' => array(
//       //   'class_name' => 'GS_Profile_Migration',
//       //   'group_name' => 'GladstoneMigrate',
//       ),
//     ),
//   );
//   return $api;
// }


/**
 * Abstract class as a base for all our migration classes
 *
 * based on: drupal.org/node/1269066#comment-4988994
 * and:      drupal.org/node/1190958#comment-4616032
 */
// abstract class GSMigration extends Migration {
//   public function __construct($arguments) {
//     // Always call the parent constructor first for basic setup
//     parent::__construct($arguments);
//     // Avoid known line ending issue: "Invalid data value"
//     // drupal.org/node/1152158#InvalidDataValue
//     ini_set('auto_detect_line_endings', TRUE);
//   }
// }




