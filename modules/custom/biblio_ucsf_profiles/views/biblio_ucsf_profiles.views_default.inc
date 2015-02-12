<?php
/**
 * @file
 * An administrative view for the publication nodes created by ucsf_profiles.
 */

/**
 * Implements hook_views_default_views().
 */
function biblio_ucsf_profiles_views_default_views() {
	$view = new view();
	$view->name = 'biblio_ucsf_profiles';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'users';
	$view->human_name = 'Biblio UCSF Profiles';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

	/* Display: Master */
	$handler = $view->new_display('default', 'Master', 'default');
	$handler->display->display_options['use_more_always'] = FALSE;
	$handler->display->display_options['access']['type'] = 'perm';
	$handler->display->display_options['access']['perm'] = 'access user profiles';
	$handler->display->display_options['cache']['type'] = 'none';
	$handler->display->display_options['query']['type'] = 'views_query';
	$handler->display->display_options['exposed_form']['type'] = 'basic';
	$handler->display->display_options['pager']['type'] = 'none';
	$handler->display->display_options['pager']['options']['offset'] = '0';
	$handler->display->display_options['style_plugin'] = 'default';
	$handler->display->display_options['row_plugin'] = 'fields';
	/* Field: User: Name */
	$handler->display->display_options['fields']['name']['id'] = 'name';
	$handler->display->display_options['fields']['name']['table'] = 'users';
	$handler->display->display_options['fields']['name']['field'] = 'name';
	$handler->display->display_options['fields']['name']['label'] = '';
	$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
	$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
	/* Field: Field: Short title */
	$handler->display->display_options['fields']['field_text']['id'] = 'field_text';
	$handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
	$handler->display->display_options['fields']['field_text']['field'] = 'field_text';
	$handler->display->display_options['fields']['field_text']['label'] = 'UCSF Profiles name';
	$handler->display->display_options['fields']['field_text']['element_type'] = 'span';
	/* Field: User: Uid */
	$handler->display->display_options['fields']['uid']['id'] = 'uid';
	$handler->display->display_options['fields']['uid']['table'] = 'users';
	$handler->display->display_options['fields']['uid']['field'] = 'uid';
	$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
	/* Filter criterion: User: Active */
	$handler->display->display_options['filters']['status']['id'] = 'status';
	$handler->display->display_options['filters']['status']['table'] = 'users';
	$handler->display->display_options['filters']['status']['field'] = 'status';
	$handler->display->display_options['filters']['status']['value'] = '1';
	$handler->display->display_options['filters']['status']['group'] = 1;
	$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

	$views[$view->name] = $view;
	return $views;
}