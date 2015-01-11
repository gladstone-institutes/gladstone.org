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
  $view->base_table = 'relation';
  $view->human_name = 'Honors and Awards';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Relation: Rid */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'relation';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'was_awarded' => 'was_awarded',
  );

  /* Display: Honors and Awards (context aware) */
  $handler = $view->new_display('panel_pane', 'Honors and Awards (context aware)', 'awards_ca');
  $handler->display->display_options['display_description'] = 'Retrieve a list of relavent awards';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_label_alias',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Relation: Relation: awarded to (relation → profile2) */
  $handler->display->display_options['relationships']['relation_base_was_awarded_profile2']['id'] = 'relation_base_was_awarded_profile2';
  $handler->display->display_options['relationships']['relation_base_was_awarded_profile2']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_was_awarded_profile2']['field'] = 'relation_base_was_awarded_profile2';
  $handler->display->display_options['relationships']['relation_base_was_awarded_profile2']['label'] = 'Recipient';
  $handler->display->display_options['relationships']['relation_base_was_awarded_profile2']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_base_was_awarded_profile2']['entity_deduplication_right'] = 1;
  /* Relationship: Relation: Relation: was awarded (relation → node) */
  $handler->display->display_options['relationships']['relation_base_was_awarded_node']['id'] = 'relation_base_was_awarded_node';
  $handler->display->display_options['relationships']['relation_base_was_awarded_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_was_awarded_node']['field'] = 'relation_base_was_awarded_node';
  $handler->display->display_options['relationships']['relation_base_was_awarded_node']['label'] = 'Award';
  $handler->display->display_options['relationships']['relation_base_was_awarded_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_base_was_awarded_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_base_was_awarded_node']['entity_deduplication_right'] = 0;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'relation_base_was_awarded_profile2';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  /* Relationship: Profile: Operational Role(s) (field_operational_roles) */
  $handler->display->display_options['relationships']['field_operational_roles_tid']['id'] = 'field_operational_roles_tid';
  $handler->display->display_options['relationships']['field_operational_roles_tid']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['relationships']['field_operational_roles_tid']['field'] = 'field_operational_roles_tid';
  $handler->display->display_options['relationships']['field_operational_roles_tid']['relationship'] = 'profile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Realname Alias  */
  $handler->display->display_options['fields']['field_label_alias']['id'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['field'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['relationship'] = 'relation_base_was_awarded_profile2';
  $handler->display->display_options['fields']['field_label_alias']['label'] = '';
  $handler->display->display_options['fields']['field_label_alias']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label_alias']['element_label_colon'] = FALSE;
  /* Field: Content: Award Date */
  $handler->display->display_options['fields']['field_date_mmyy']['id'] = 'field_date_mmyy';
  $handler->display->display_options['fields']['field_date_mmyy']['table'] = 'field_data_field_date_mmyy';
  $handler->display->display_options['fields']['field_date_mmyy']['field'] = 'field_date_mmyy';
  $handler->display->display_options['fields']['field_date_mmyy']['relationship'] = 'relation_base_was_awarded_node';
  $handler->display->display_options['fields']['field_date_mmyy']['label'] = '';
  $handler->display->display_options['fields']['field_date_mmyy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_mmyy']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_honor_and_award']['id'] = 'field_honor_and_award';
  $handler->display->display_options['fields']['field_honor_and_award']['table'] = 'field_data_field_honor_and_award';
  $handler->display->display_options['fields']['field_honor_and_award']['field'] = 'field_honor_and_award';
  $handler->display->display_options['fields']['field_honor_and_award']['relationship'] = 'relation_base_was_awarded_node';
  $handler->display->display_options['fields']['field_honor_and_award']['label'] = '';
  $handler->display->display_options['fields']['field_honor_and_award']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_operational_roles_tid';
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_realname_family']['id'] = 'field_realname_family';
  $handler->display->display_options['sorts']['field_realname_family']['table'] = 'field_data_field_realname';
  $handler->display->display_options['sorts']['field_realname_family']['field'] = 'field_realname_family';
  $handler->display->display_options['sorts']['field_realname_family']['relationship'] = 'user';
  /* Sort criterion: Content: Award Date (field_date_mmyy) */
  $handler->display->display_options['sorts']['field_date_mmyy_value']['id'] = 'field_date_mmyy_value';
  $handler->display->display_options['sorts']['field_date_mmyy_value']['table'] = 'field_data_field_date_mmyy';
  $handler->display->display_options['sorts']['field_date_mmyy_value']['field'] = 'field_date_mmyy_value';
  $handler->display->display_options['sorts']['field_date_mmyy_value']['relationship'] = 'relation_base_was_awarded_node';
  $handler->display->display_options['sorts']['field_date_mmyy_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Operational Unit(s) (field_operational_units) */
  $handler->display->display_options['arguments']['field_operational_units_tid']['id'] = 'field_operational_units_tid';
  $handler->display->display_options['arguments']['field_operational_units_tid']['table'] = 'field_data_field_operational_units';
  $handler->display->display_options['arguments']['field_operational_units_tid']['field'] = 'field_operational_units_tid';
  $handler->display->display_options['arguments']['field_operational_units_tid']['relationship'] = 'relation_base_was_awarded_node';
  $handler->display->display_options['arguments']['field_operational_units_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_operational_units_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_operational_units_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_operational_units_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field: Operational Unit(s) (field_operational_units) */
  $handler->display->display_options['arguments']['field_operational_units_tid_1']['id'] = 'field_operational_units_tid_1';
  $handler->display->display_options['arguments']['field_operational_units_tid_1']['table'] = 'field_data_field_operational_units';
  $handler->display->display_options['arguments']['field_operational_units_tid_1']['field'] = 'field_operational_units_tid';
  $handler->display->display_options['arguments']['field_operational_units_tid_1']['relationship'] = 'profile';
  $handler->display->display_options['arguments']['field_operational_units_tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_operational_units_tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_operational_units_tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_operational_units_tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_operational_units_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field: Operational Unit(s) (field_operational_units)',
    ),
    'field_operational_units_tid_1' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field: Operational Unit(s) (field_operational_units)',
    ),
  );
  $export['honors_and_awards'] = $view;

  return $export;
}
