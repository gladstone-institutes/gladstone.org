<?php
/**
 * @file
 * press_release.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function press_release_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'press_release';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Press Release';
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
  /* Field: Content: Blurb */
  $handler->display->display_options['fields']['field_blurb']['id'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['table'] = 'field_data_field_blurb';
  $handler->display->display_options['fields']['field_blurb']['field'] = 'field_blurb';
  $handler->display->display_options['fields']['field_blurb']['label'] = '';
  $handler->display->display_options['fields']['field_blurb']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Sub headline */
  $handler->display->display_options['fields']['field_longtext']['id'] = 'field_longtext';
  $handler->display->display_options['fields']['field_longtext']['table'] = 'field_data_field_longtext';
  $handler->display->display_options['fields']['field_longtext']['field'] = 'field_longtext';
  $handler->display->display_options['fields']['field_longtext']['ui_name'] = 'Content: Sub headline';
  $handler->display->display_options['fields']['field_longtext']['label'] = '';
  $handler->display->display_options['fields']['field_longtext']['element_label_colon'] = FALSE;
  /* Field: Field: Headline */
  $handler->display->display_options['fields']['field_display_title']['id'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['table'] = 'field_data_field_display_title';
  $handler->display->display_options['fields']['field_display_title']['field'] = 'field_display_title';
  $handler->display->display_options['fields']['field_display_title']['label'] = '';
  $handler->display->display_options['fields']['field_display_title']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Release Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Sort criterion: Content: Release Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'press_release' => 'press_release',
  );

  /* Display: Press Release (context aware) */
  $handler = $view->new_display('panel_pane', 'Press Release (context aware)', 'press_release_ca_pane');
  $handler->display->display_options['display_description'] = 'List/blog of press releases for media syndication';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Operational Unit(s) (field_operational_units) */
  $handler->display->display_options['arguments']['field_operational_units_tid']['id'] = 'field_operational_units_tid';
  $handler->display->display_options['arguments']['field_operational_units_tid']['table'] = 'field_data_field_operational_units';
  $handler->display->display_options['arguments']['field_operational_units_tid']['field'] = 'field_operational_units_tid';
  $handler->display->display_options['arguments']['field_operational_units_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_operational_units_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_operational_units_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_operational_units_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_operational_units_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_operational_units_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_operational_units_tid']['validate_options']['vocabularies'] = array(
    'operational_units' => 'operational_units',
  );
  $handler->display->display_options['arguments']['field_operational_units_tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['field_operational_units_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'press_release' => 'press_release',
  );
  /* Filter criterion: Field: Operational Unit(s) (field_operational_units) */
  $handler->display->display_options['filters']['field_operational_units_tid']['id'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['table'] = 'field_data_field_operational_units';
  $handler->display->display_options['filters']['field_operational_units_tid']['field'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_units_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['operator_id'] = 'field_operational_units_tid_op';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['label'] = 'Group';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['description'] = 'Filter by institute, department, admin team, etc.';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['operator'] = 'field_operational_units_tid_op';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['identifier'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_operational_units_tid']['vocabulary'] = 'operational_units';
  /* Filter criterion: Content: Research Tag(s) (field_research_tags) */
  $handler->display->display_options['filters']['field_research_tags_tid']['id'] = 'field_research_tags_tid';
  $handler->display->display_options['filters']['field_research_tags_tid']['table'] = 'field_data_field_research_tags';
  $handler->display->display_options['filters']['field_research_tags_tid']['field'] = 'field_research_tags_tid';
  $handler->display->display_options['filters']['field_research_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_research_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_research_tags_tid']['expose']['operator_id'] = 'field_research_tags_tid_op';
  $handler->display->display_options['filters']['field_research_tags_tid']['expose']['label'] = 'Research Tag(s)';
  $handler->display->display_options['filters']['field_research_tags_tid']['expose']['operator'] = 'field_research_tags_tid_op';
  $handler->display->display_options['filters']['field_research_tags_tid']['expose']['identifier'] = 'field_research_tags_tid';
  $handler->display->display_options['filters']['field_research_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_research_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['filters']['field_research_tags_tid']['vocabulary'] = 'research';
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_operational_units_tid' => array(
      'type' => 'context',
      'context' => 'terms.tids',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Operational Unit(s) (field_operational_units)',
    ),
  );
  $export['press_release'] = $view;

  return $export;
}
