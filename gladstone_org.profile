<?php
/**
 * @file
 * Enables modules and site configuration for the gladstoneinstitutes_org site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function gladstone_org_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = t('Gladstone Institutes');
}


/**
 * Implements hook_install_tasks_alter(&$tasks, $install_state)
 */
function gladstone_org_install_tasks_alter(&$tasks, $install_state) {
	$post_install_tasks = array();
	$post_install_tasks['adaptive_theme_initialization'] = array(
		'display' => TRUE,
		'display_name' => st('Initialize Adaptive theme files'),
		'type' => 'normal',
		'function' => 'adaptive_theme_initialization',
	);
	$post_install_tasks['mega_menu_initialization'] = array(
		'display' => TRUE,
		'display_name' => st('Initialize Mega menu'),
		'type' => 'normal',
		'function' => 'mega_menu_initialization',
	);

	$old_tasks = $tasks;
	$tasks = $old_tasks + $post_install_tasks;

}

/**
 * Task callback: Workaround for problematic Adaptive theme css generation 
 */
function adaptive_theme_initialization() {

	watchdog('@HACK Workaround', 'adaptive theme css generation');
	$form_id = 'system_theme_settings';
	$theme_name = 'gladstone_org';

	module_load_include('inc', 'system', 'system.admin');
	$form_state = form_state_defaults();
	$form_state['build_info']['args'][0] = $theme_name;
	$form_state['values'] = array();
	$form_state['values']['global_file_path'] = 'public_files';
	drupal_form_submit($form_id, $form_state);

	// Reinitialize theme settings, by injecting exported set
	$jsons = file_scan_directory(drupal_get_path('profile', 'gladstone_org'). '/exports/vars', '/.*\.json/');
	foreach ($jsons as $json) {
		$var = drupal_json_decode(file_get_contents($json->uri));
		variable_set($json->name, $var);
	}

}

/**
 * Task callback: Workaround for problematic Mega menu import
 */

function mega_menu_initialization() {
	global $theme;

	include_once drupal_get_path('module','md_megamenu').'/includes/md_megamenu.admin.inc';

	$serialized = drupal_get_path('profile', 'gladstone_org').'/exports/mega-menu.serialized';
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