<?php

/**
 * Implements hook_drush_command().
 *
 * @see http://www.sitepoint.com/drupal-create-drush-command/
 */
function gladstone_dev_drush_command() {

  $items['generate-theme-files'] = array(
    'description' => 'Generate Gladstone adaptive theme style files.',
    'aliases' => array('gsgen'),
    'callback' => '_gs_org_settings_injections'
  );

  return $items;
}



/**
 * Callback to inject a serialized config into the variables table
 * workaround until programmatic form submit can be worked out for 
 * build automation
 */
function _gs_org_settings_injections() {

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
 * Callback to submint the theme settings form
 */
function _gs_org_settings_programmatic_submit() {

	// Rebuild responsive CSS files when the cache is cleared.
	// For more background, see https://drupal.org/node/1995938

	// Nicked strait from commons_install() with mods to get
	// all enabled AT subthemes since we don't know which ones to clear.
	$themes_array = array('adaptivetheme');
	$themes = list_themes(TRUE);

	foreach ($themes as $key => $theme_name) {
	  if ($key == 'adaptivetheme') {
	    foreach ($theme_name->sub_themes as $sub_theme_key => $sub_theme_name) {
	      $array[] = $sub_theme_key;
	    }
	  }

	  foreach ($array as $name) {
	    if ($name == $key) {
	      if ($theme_name->status == 1) {
	        $themes_array[] = $key;
	      }
	    }
	  }
	}

	// module_load_include('inc','at_core','at_core.submit');
	module_load_include('inc', 'system', 'system.admin');
	
	$form_id = 'system_theme_settings';
	$theme_name = 'gladstone_org';

	$info = at_get_info($theme_name);
	$form_state = form_state_defaults();
	$form_state['values'] = array();

	$form_state['build_info']['args'][0] = $theme_name;
	$form = drupal_retrieve_form($form_id,$form_state);
	$form['#defaults_loaded'] = FALSE;

	// drupal_prepare_form($form_id, $form, $form_state);
	form_builder($form_id, $form, $form_state);


	array_merge($form_state['values'], $info['settings']);
	$form_state['values']['global_file_path'] = 'public_files';
	$form_state['values']['op'] = $form['actions']['submit']['#value'];

 	$form_state['input'] = $form_state['values'];
 	$form_state['input']['form_id'] = $form_id;
  	$form_state['programmed'] = TRUE;
  	// Programmed forms are always submitted.
  	$form_state['submitted'] = TRUE;

  	// Reset form validation.
  	$form_state['must_validate'] = TRUE;
  	// form_clear_error();

	
	// drupal_process_form($form_id, $form, $form_state);
	// print_r($form_state);

	drupal_form_submit($form_id, $form_state);


}
