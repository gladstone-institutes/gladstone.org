<?php
/**
 * @file
 * structure.mega_menu.inc
 */

/**
 * Workaroudn for importing a mega menu during build
 */
function structure_mega_menu_defaults() {

	include_once drupal_get_path('module','md_megamenu').'/includes/md_megamenu.admin.inc';

	$json = drupal_get_path('module', 'structure').'/mega-menu-config.json';
	$import_menu = drupal_json_decode( file_get_contents($json) );


	if (md_megamenu_check_machine_name($import_menu['machine_name'])) {
		// drupal_set_message(t('A MegaMenu by that machine name already exists; please choose a different machine name'), 'error',FALSE);
		return;
	}

	// HACK: update megs menu structure with current block ids
	// @todo
	// @see
	foreach ($import_menu['tabs'] as &$tab) {
		foreach ($tab['items'] as &$row) {
			foreach ($row as &$col) {
				foreach ($col as &$item) {
					$block = block_load($item['block_module'], $item['block_id']);
					$item['block_bid'] = $block->bid;
				}
			}
		}
	}

	$menu = MDMegaMenu::create( $import_menu['title'], 
								$import_menu['description'], 
								$import_menu['machine_name'], 
								$import_menu['settings']
			);

	if (!$menu) {
		// drupal_set_message(t('Megamenu: Import failed. Please check data and try again'), 'error', FALSE);
		return false;
	}


   // update tab block children

	foreach ($import_menu['tabs'] as $tab) {
		MDMegaTab::create($menu->mid, $tab['position'], $tab['items'], $tab['settings']);
	}

	// drupal_set_message(t('MD Megamenu: Import success.'),'status',FALSE);


}