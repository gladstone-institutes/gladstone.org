<?php
/**
 * @file
 * structure.mega_menu.inc
 */

/**
 * Workaround for importing a mega menu during build
 */
function mega_menu_defaults() {

	global $theme;
	include_once drupal_get_path('module','md_megamenu').'/includes/md_megamenu.admin.inc';

	$serialized = drupal_get_path('module', 'build').'/mega-menu.serialized';
	$import_menu = unserialize( file_get_contents($serialized) );


	if (md_megamenu_check_machine_name($import_menu['machine_name'])) {
		// drupal_set_message(t('A MegaMenu by that machine name already exists; please choose a different machine name'), 'error',FALSE);
		return;
	}

	// HACK: update megs menu structure with current block ids
	// @todo
	// @see
	foreach ($import_menu['tabs'] as $t => $tab) {
		foreach ($tab['items'] as $r => $row) {
			foreach ($row as $c => $col) {
				foreach ($col as $i => $item) {
					$block = db_query('SELECT * FROM {block} WHERE module = :module AND delta = :delta AND theme = :theme', 
								array(	':module' => $item->block_module, 
										':delta' => $item->block_id,
										':theme' => $theme)
								)->fetchObject();
					$import_menu['tabs'][$t][$r][$c][$i]->block_bid = $block->bid;
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
		drupal_set_message(t('Megamenu: Import failed. Please check data and try again'), 'error', FALSE);
		return false;
	}

   // update tab block children
	foreach ($import_menu['tabs'] as $tab) {
		MDMegaTab::create($menu->mid, $tab['position'], $tab['items'], $tab['settings']);
	}



	// Place mega menu into menu_bar region
    $mega_menu = array(
		'module' => 'md_megamenu',
		'delta' => 1,
		'theme' => $theme,
		'status' => 1,
		'weight' => 0,
		'region' => 'menu_bar',
		'pages' => '',
		'cache' => -1,
    );

    db_insert('block')
		->fields(array_keys($mega_menu))
		->values($mega_menu)
		->execute();
}








