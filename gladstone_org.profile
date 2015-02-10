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

	// This does not work correctly becasue the themes are not availble
	// to the task, AT theme ends up generating css without the subtheme
	// specifc layout css.

	// See the drush task 'gsgen' in gladstone_dev for the workaround


}