<?php
/**
 * @file
 * events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'event';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event';
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
  /* Field: Content: Date(s) */
  $handler->display->display_options['fields']['event_calendar_date']['id'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['field'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['label'] = '';
  $handler->display->display_options['fields']['event_calendar_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['event_calendar_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Short title */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date(s) -  start date (event_calendar_date) */
  $handler->display->display_options['sorts']['event_calendar_date_value']['id'] = 'event_calendar_date_value';
  $handler->display->display_options['sorts']['event_calendar_date_value']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['sorts']['event_calendar_date_value']['field'] = 'event_calendar_date_value';
  /* Contextual filter: Content: Date(s) -  start date (event_calendar_date) */
  $handler->display->display_options['arguments']['event_calendar_date_value']['id'] = 'event_calendar_date_value';
  $handler->display->display_options['arguments']['event_calendar_date_value']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['arguments']['event_calendar_date_value']['field'] = 'event_calendar_date_value';
  $handler->display->display_options['arguments']['event_calendar_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['event_calendar_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['event_calendar_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['event_calendar_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['event_calendar_date_value']['summary_options']['items_per_page'] = '25';
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
    'event_calendar' => 'event_calendar',
  );
  /* Filter criterion: Content: Event Type(s) (field_event_types) */
  $handler->display->display_options['filters']['field_event_types_tid']['id'] = 'field_event_types_tid';
  $handler->display->display_options['filters']['field_event_types_tid']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['filters']['field_event_types_tid']['field'] = 'field_event_types_tid';
  $handler->display->display_options['filters']['field_event_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['operator_id'] = 'field_event_types_tid_op';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['label'] = 'Event Type(s)';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['operator'] = 'field_event_types_tid_op';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['identifier'] = 'field_event_types_tid';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_types_tid']['vocabulary'] = 'event_type';

  /* Display: Events */
  $handler = $view->new_display('panel_pane', 'Events', 'events_pane');
  $handler->display->display_options['display_description'] = 'List events filtered by operational unit';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Short title */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  /* Field: Content: Date(s) */
  $handler->display->display_options['fields']['event_calendar_date']['id'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['field'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['label'] = '';
  $handler->display->display_options['fields']['event_calendar_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['event_calendar_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date(s) -  start date (event_calendar_date) */
  $handler->display->display_options['sorts']['event_calendar_date_value']['id'] = 'event_calendar_date_value';
  $handler->display->display_options['sorts']['event_calendar_date_value']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['sorts']['event_calendar_date_value']['field'] = 'event_calendar_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Operational Unit(s) (field_operational_units) */
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
  $handler->display->display_options['arguments']['field_operational_units_tid']['break_phrase'] = TRUE;
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
    'event_calendar' => 'event_calendar',
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
    1 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_research_tags_tid']['vocabulary'] = 'research';
  /* Filter criterion: Content: Event Type(s) (field_event_types) */
  $handler->display->display_options['filters']['field_event_types_tid']['id'] = 'field_event_types_tid';
  $handler->display->display_options['filters']['field_event_types_tid']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['filters']['field_event_types_tid']['field'] = 'field_event_types_tid';
  $handler->display->display_options['filters']['field_event_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['operator_id'] = 'field_event_types_tid_op';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['label'] = 'Event Type(s)';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['operator'] = 'field_event_types_tid_op';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['identifier'] = 'field_event_types_tid';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_types_tid']['vocabulary'] = 'event_type';
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

  /* Display: Month */
  $handler = $view->new_display('panel_pane', 'Month', 'event_month_pane');
  $handler->display->display_options['display_description'] = 'List events in a monthly calendar format';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'basic_page' => '#ffffff',
    'biblio' => '#ffffff',
    'event_calendar' => '#ffffff',
    'honors_and_awards' => '#ffffff',
    'in_the_news' => '#ffffff',
    'news' => '#ffffff',
    'press_release' => '#ffffff',
    'site_page' => '#ffffff',
    'technology' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date(s) */
  $handler->display->display_options['fields']['event_calendar_date']['id'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['field'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['label'] = '';
  $handler->display->display_options['fields']['event_calendar_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['event_calendar_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Short title */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date(s) -  start date (event_calendar_date) */
  $handler->display->display_options['sorts']['event_calendar_date_value']['id'] = 'event_calendar_date_value';
  $handler->display->display_options['sorts']['event_calendar_date_value']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['sorts']['event_calendar_date_value']['field'] = 'event_calendar_date_value';
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
    'event_calendar' => 'event_calendar',
  );
  /* Filter criterion: Content: Event Type(s) (field_event_types) */
  $handler->display->display_options['filters']['field_event_types_tid']['id'] = 'field_event_types_tid';
  $handler->display->display_options['filters']['field_event_types_tid']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['filters']['field_event_types_tid']['field'] = 'field_event_types_tid';
  $handler->display->display_options['filters']['field_event_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['operator_id'] = 'field_event_types_tid_op';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['label'] = 'Event Type(s)';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['operator'] = 'field_event_types_tid_op';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['identifier'] = 'field_event_types_tid';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_types_tid']['vocabulary'] = 'event_type';
  /* Filter criterion: Content: Operational Unit(s) (field_operational_units) */
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
    1 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_operational_units_tid']['vocabulary'] = 'operational_units';
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'event_calendar_date_value' => array(
      'type' => 'panel',
      'context' => 'entity:file.field-file-image-alt-text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Date(s) -  start date (event_calendar_date)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Week */
  $handler = $view->new_display('panel_pane', 'Week', 'event_week_pane');
  $handler->display->display_options['display_description'] = 'List events in a weekly calendar format';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '2';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'basic_page' => '#ffffff',
    'biblio' => '#ffffff',
    'event_calendar' => '#ffffff',
    'honors_and_awards' => '#ffffff',
    'in_the_news' => '#ffffff',
    'news' => '#ffffff',
    'press_release' => '#ffffff',
    'site_page' => '#ffffff',
    'technology' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'event_calendar_date_value' => array(
      'type' => 'panel',
      'context' => 'entity:file.field-file-image-alt-text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Date(s) -  start date (event_calendar_date)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Month (context aware) */
  $handler = $view->new_display('panel_pane', 'Month (context aware)', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Context aware monthly event calendar';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'basic_page' => '#ffffff',
    'biblio' => '#ffffff',
    'event_calendar' => '#ffffff',
    'honors_and_awards' => '#ffffff',
    'in_the_news' => '#ffffff',
    'news' => '#ffffff',
    'press_release' => '#ffffff',
    'site_page' => '#ffffff',
    'technology' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Date(s) -  start date (event_calendar_date) */
  $handler->display->display_options['arguments']['event_calendar_date_value']['id'] = 'event_calendar_date_value';
  $handler->display->display_options['arguments']['event_calendar_date_value']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['arguments']['event_calendar_date_value']['field'] = 'event_calendar_date_value';
  $handler->display->display_options['arguments']['event_calendar_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['event_calendar_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['event_calendar_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['event_calendar_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['event_calendar_date_value']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Operational Unit(s) (field_operational_units) */
  $handler->display->display_options['arguments']['field_operational_units_tid']['id'] = 'field_operational_units_tid';
  $handler->display->display_options['arguments']['field_operational_units_tid']['table'] = 'field_data_field_operational_units';
  $handler->display->display_options['arguments']['field_operational_units_tid']['field'] = 'field_operational_units_tid';
  $handler->display->display_options['arguments']['field_operational_units_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_operational_units_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_operational_units_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_operational_units_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_operational_units_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_operational_units_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_operational_units_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_operational_units_tid']['validate_options']['vocabularies'] = array(
    'operational_units' => 'operational_units',
  );
  $handler->display->display_options['arguments']['field_operational_units_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_operational_units_tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'event_calendar_date_value' => array(
      'type' => 'panel',
      'context' => 'entity:file.field-file-image-alt-text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Date(s) -  start date (event_calendar_date)',
    ),
    'field_operational_units_tid' => array(
      'type' => 'context',
      'context' => 'entity_uuid:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Operational Unit(s) (field_operational_units)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['event'] = $view;

  return $export;
}
