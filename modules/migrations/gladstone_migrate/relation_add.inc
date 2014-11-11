<?php


/**
 * Implements hook_migrate_api().
 */
// function relation_add_migrate_api() {
//   $api = array(
//     'api' => 2,
//     'field handlers' => array('MigrateRelationAddFieldHandler'),
//   );
//   return $api;
// }

// http://drupal.stackexchange.com/questions/74284/migrate-to-data-field-with-multiple-values
// class MigrateRelationAddFieldHandler extends MigrateFieldHandler {
// 	public function __construct() {
// 		$this->registerTypes(array('relation_add'));
// 	}

//   public function fields($type) {
//     // Declare our arguments to also be available as subfields.
//     $fields = array(
//       'entity_type'   => t('Subfield: Currency code for the field'),
//       'bundle'        => t('Subfield: Min Qty for the field'),
//       'entity_id'     => t('Subfield: Max Qty for the field'),
//     );
//     return $fields;
//   }
// }
