<?php
/**
 * @file
 * honors_and_awards.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function honors_and_awards_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'honors_and_awards';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Honors and Awards';
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
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Display title (autolabel) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Display title (autolabel)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_honor_and_award']['id'] = 'field_honor_and_award';
  $handler->display->display_options['fields']['field_honor_and_award']['table'] = 'field_data_field_honor_and_award';
  $handler->display->display_options['fields']['field_honor_and_award']['field'] = 'field_honor_and_award';
  $handler->display->display_options['fields']['field_honor_and_award']['label'] = '';
  $handler->display->display_options['fields']['field_honor_and_award']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_honor_and_award']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_honor_and_award']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_honor_and_award']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Award Date */
  $handler->display->display_options['fields']['field_date_mmyy']['id'] = 'field_date_mmyy';
  $handler->display->display_options['fields']['field_date_mmyy']['table'] = 'field_data_field_date_mmyy';
  $handler->display->display_options['fields']['field_date_mmyy']['field'] = 'field_date_mmyy';
  $handler->display->display_options['fields']['field_date_mmyy']['label'] = '';
  $handler->display->display_options['fields']['field_date_mmyy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_mmyy']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_date_mmyy']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Recipient(s) */
  $handler->display->display_options['fields']['field_honors_and_awards_rels']['id'] = 'field_honors_and_awards_rels';
  $handler->display->display_options['fields']['field_honors_and_awards_rels']['table'] = 'field_data_field_honors_and_awards_rels';
  $handler->display->display_options['fields']['field_honors_and_awards_rels']['field'] = 'field_honors_and_awards_rels';
  $handler->display->display_options['fields']['field_honors_and_awards_rels']['ui_name'] = 'Recipient(s)';
  $handler->display->display_options['fields']['field_honors_and_awards_rels']['label'] = '';
  $handler->display->display_options['fields']['field_honors_and_awards_rels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_honors_and_awards_rels']['delta_offset'] = '0';
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
  /* Sort criterion: Content: Award Date (field_date_mmyy) */
  $handler->display->display_options['sorts']['field_date_mmyy_value']['id'] = 'field_date_mmyy_value';
  $handler->display->display_options['sorts']['field_date_mmyy_value']['table'] = 'field_data_field_date_mmyy';
  $handler->display->display_options['sorts']['field_date_mmyy_value']['field'] = 'field_date_mmyy_value';
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
    'honors_and_awards' => 'honors_and_awards',
  );

  /* Display: Awards */
  $handler = $view->new_display('panel_pane', 'Awards', 'awards_pane');
  $handler->display->display_options['display_description'] = 'List awards filtered by operational unit';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Operational Unit(s) (field_operational_units) */
  $handler->display->display_options['arguments']['field_operational_units_tid']['id'] = 'field_operational_units_tid';
  $handler->display->display_options['arguments']['field_operational_units_tid']['table'] = 'field_data_field_operational_units';
  $handler->display->display_options['arguments']['field_operational_units_tid']['field'] = 'field_operational_units_tid';
  $handler->display->display_options['arguments']['field_operational_units_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_operational_units_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_operational_units_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_operational_units_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_operational_units_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $export['honors_and_awards'] = $view;

  return $export;
}
