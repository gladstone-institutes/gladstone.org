<?php
/**
 * @file
 * gladstone_profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gladstone_profiles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'profile_user_content';
  $view->description = 'Feeds of a given user\'s content';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profile User Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Publications */
  $handler = $view->new_display('panel_pane', 'Publications', 'profile_pubs_pane');
  $handler->display->display_options['display_description'] = 'Feed of a user biblio nodes';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '- No Results - 
<br>
*profile not configured';
  $handler->display->display_options['empty']['area']['format'] = 'rich_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Biblio: Biblio Citation */
  $handler->display->display_options['fields']['citation']['id'] = 'citation';
  $handler->display->display_options['fields']['citation']['table'] = 'biblio';
  $handler->display->display_options['fields']['citation']['field'] = 'citation';
  $handler->display->display_options['fields']['citation']['label'] = '';
  $handler->display->display_options['fields']['citation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['citation']['export_links'] = 0;
  $handler->display->display_options['fields']['citation']['open_url_link'] = 0;
  /* Field: Content: Research Tag(s) */
  $handler->display->display_options['fields']['field_research_tags']['id'] = 'field_research_tags';
  $handler->display->display_options['fields']['field_research_tags']['table'] = 'field_data_field_research_tags';
  $handler->display->display_options['fields']['field_research_tags']['field'] = 'field_research_tags';
  $handler->display->display_options['fields']['field_research_tags']['label'] = 'Tag(s)';
  $handler->display->display_options['fields']['field_research_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_research_tags']['delta_offset'] = '0';
  /* Field: Field: Operational Unit(s) */
  $handler->display->display_options['fields']['field_operational_units']['id'] = 'field_operational_units';
  $handler->display->display_options['fields']['field_operational_units']['table'] = 'field_data_field_operational_units';
  $handler->display->display_options['fields']['field_operational_units']['field'] = 'field_operational_units';
  $handler->display->display_options['fields']['field_operational_units']['label'] = 'Research Unit(s)';
  $handler->display->display_options['fields']['field_operational_units']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_operational_units']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Biblio: Date Published */
  $handler->display->display_options['sorts']['biblio_date']['id'] = 'biblio_date';
  $handler->display->display_options['sorts']['biblio_date']['table'] = 'biblio';
  $handler->display->display_options['sorts']['biblio_date']['field'] = 'biblio_date';
  $handler->display->display_options['sorts']['biblio_date']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Biblio: Drupal UserID */
  $handler->display->display_options['arguments']['drupal_uid']['id'] = 'drupal_uid';
  $handler->display->display_options['arguments']['drupal_uid']['table'] = 'biblio_contributor_data';
  $handler->display->display_options['arguments']['drupal_uid']['field'] = 'drupal_uid';
  $handler->display->display_options['arguments']['drupal_uid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['drupal_uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['drupal_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['drupal_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['drupal_uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['drupal_uid']['validate']['type'] = 'user';
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'drupal_uid' => array(
      'type' => 'context',
      'context' => 'entity_uuid:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Biblio: Drupal UserID',
    ),
  );
  $export['profile_user_content'] = $view;

  return $export;
}
