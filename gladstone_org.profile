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

	$post_install_tasks['adaptive_theme_initialization'] = array(
		'display' => TRUE,
		'display_name' => st('Initialize Adaptive theme files'),
		'type' => 'normal',
		'function' => 'adaptive_theme_initialization'
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