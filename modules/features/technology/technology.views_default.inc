<?php
/**
 * @file
 * technology.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function technology_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'technology';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Technology';
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
  /* Field: Content: User Reference(s) */
  $handler->display->display_options['fields']['field_user_refs']['id'] = 'field_user_refs';
  $handler->display->display_options['fields']['field_user_refs']['table'] = 'field_data_field_user_refs';
  $handler->display->display_options['fields']['field_user_refs']['field'] = 'field_user_refs';
  $handler->display->display_options['fields']['field_user_refs']['label'] = 'Inventor(s';
  $handler->display->display_options['fields']['field_user_refs']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_user_refs']['delta_offset'] = '0';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'technology' => 'technology',
  );

  /* Display: Technologies (context aware) */
  $handler = $view->new_display('panel_pane', 'Technologies (context aware)', 'tech_ca_pane');
  $handler->display->display_options['display_description'] = 'List of available technologies';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Operational Unit(s) (field_operational_units) */
  $handler->display->display_options['arguments']['field_operational_units_tid']['id'] = 'field_operational_units_tid';
  $handler->display->display_options['arguments']['field_operational_units_tid']['table'] = 'field_data_field_operational_units';
  $handler->display->display_options['arguments']['field_operational_units_tid']['field'] = 'field_operational_units_tid';
  $handler->display->display_options['arguments']['field_operational_units_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_operational_units_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_operational_units_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_operational_units_tid']['summary_options']['items_per_page'] = '25';
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
    'technology' => 'technology',
  );
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
  /* Filter criterion: Content: Technology Type (field_technology_type) */
  $handler->display->display_options['filters']['field_technology_type_value']['id'] = 'field_technology_type_value';
  $handler->display->display_options['filters']['field_technology_type_value']['table'] = 'field_data_field_technology_type';
  $handler->display->display_options['filters']['field_technology_type_value']['field'] = 'field_technology_type_value';
  $handler->display->display_options['filters']['field_technology_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_technology_type_value']['expose']['operator_id'] = 'field_technology_type_value_op';
  $handler->display->display_options['filters']['field_technology_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_technology_type_value']['expose']['operator'] = 'field_technology_type_value_op';
  $handler->display->display_options['filters']['field_technology_type_value']['expose']['identifier'] = 'field_technology_type_value';
  $handler->display->display_options['filters']['field_technology_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
  );
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_operational_units_tid' => array(
      'type' => 'context',
      'context' => 'terms.tids',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field: Operational Unit(s) (field_operational_units)',
    ),
  );
  $export['technology'] = $view;

  return $export;
}
