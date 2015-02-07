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
  $view->name = 'directory_widgets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Directory Widgets';
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
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );

  /* Display: Grid (context aware) */
  $handler = $view->new_display('panel_pane', 'Grid (context aware)', 'directory_widget_grid_ca_pane');
  $handler->display->display_options['display_description'] = 'Display a directory in a grid of profile pictures';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_operational_units_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Example: GIND, GICD, GIVI, Administration, IT, Facilities',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_operational_roles_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Example: Investigator, Staff Scientist, Research Associate',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_operational_titles_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Example: Senior Investigator, Associate Investigator, Staff Research Scientist II',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'rich_text';
  $handler->display->display_options['exposed_form']['options']['token_details'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relationship: Field: Operational Title(s) (field_operational_titles) */
  $handler->display->display_options['relationships']['field_operational_titles_tid']['id'] = 'field_operational_titles_tid';
  $handler->display->display_options['relationships']['field_operational_titles_tid']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['relationships']['field_operational_titles_tid']['field'] = 'field_operational_titles_tid';
  /* Relationship: Profile: Operational Role(s) (field_operational_roles) */
  $handler->display->display_options['relationships']['field_operational_roles_tid']['id'] = 'field_operational_roles_tid';
  $handler->display->display_options['relationships']['field_operational_roles_tid']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['relationships']['field_operational_roles_tid']['field'] = 'field_operational_roles_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'profile_picture_directory',
    'image_link' => '',
  );
  /* Field: Profile: Realname Alias  */
  $handler->display->display_options['fields']['field_label_alias']['id'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['field'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['label'] = '';
  $handler->display->display_options['fields']['field_label_alias']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_label_alias']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_label_alias']['element_label_colon'] = FALSE;
  /* Field: Field: Operational Title(s) */
  $handler->display->display_options['fields']['field_operational_titles']['id'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['field'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['label'] = '';
  $handler->display->display_options['fields']['field_operational_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operational_titles']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_operational_titles']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_operational_titles']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_operational_titles']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_operational_roles_tid';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'field_operational_titles_tid';
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_realname_family']['id'] = 'field_realname_family';
  $handler->display->display_options['sorts']['field_realname_family']['table'] = 'field_data_field_realname';
  $handler->display->display_options['sorts']['field_realname_family']['field'] = 'field_realname_family';
  $handler->display->display_options['sorts']['field_realname_family']['relationship'] = 'user';
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
  /* Filter criterion: Field: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_fid']['group'] = 1;
  /* Filter criterion: Field: Operational Unit(s) (field_operational_units) */
  $handler->display->display_options['filters']['field_operational_units_tid']['id'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['table'] = 'field_data_field_operational_units';
  $handler->display->display_options['filters']['field_operational_units_tid']['field'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_units_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_operational_units_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['operator_id'] = 'field_operational_units_tid_op';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['label'] = 'Operational Unit(s)';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['description'] = 'Example: GIND, GICD, GIVI, Administration, IT, Facilities';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['operator'] = 'field_operational_units_tid_op';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['identifier'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_operational_units_tid']['vocabulary'] = 'operational_units';
  /* Filter criterion: Profile: Operational Role(s) (field_operational_roles) */
  $handler->display->display_options['filters']['field_operational_roles_tid']['id'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['filters']['field_operational_roles_tid']['field'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_roles_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_operational_roles_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['operator_id'] = 'field_operational_roles_tid_op';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['label'] = 'Operational Role(s)';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['description'] = 'Example: Investigator, Staff Scientist, Research Associate';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['operator'] = 'field_operational_roles_tid_op';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['identifier'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_operational_roles_tid']['vocabulary'] = 'operational_roles';
  /* Filter criterion: Field: Operational Title(s) (field_operational_titles) */
  $handler->display->display_options['filters']['field_operational_titles_tid']['id'] = 'field_operational_titles_tid';
  $handler->display->display_options['filters']['field_operational_titles_tid']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['filters']['field_operational_titles_tid']['field'] = 'field_operational_titles_tid';
  $handler->display->display_options['filters']['field_operational_titles_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_titles_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_operational_titles_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['operator_id'] = 'field_operational_titles_tid_op';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['label'] = 'Operational Title(s)';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['description'] = 'Example: Senior Investigator, Associate Investigator, Staff Research Scientist II';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['operator'] = 'field_operational_titles_tid_op';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['identifier'] = 'field_operational_titles_tid';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_operational_titles_tid']['vocabulary'] = 'operational_titles';
  /* Filter criterion: Profile: Operational Role(s) (field_operational_roles:delta) */
  $handler->display->display_options['filters']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['filters']['delta_1']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['filters']['delta_1']['field'] = 'delta';
  $handler->display->display_options['filters']['delta_1']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta_1']['group'] = 1;
  /* Filter criterion: Field: Operational Title(s) (field_operational_titles:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['group'] = 1;
  $handler->display->display_options['filters']['delta']['expose']['operator_id'] = 'delta_op';
  $handler->display->display_options['filters']['delta']['expose']['label'] = 'Operational Title(s) (field_operational_titles:delta)';
  $handler->display->display_options['filters']['delta']['expose']['operator'] = 'delta_op';
  $handler->display->display_options['filters']['delta']['expose']['identifier'] = 'delta';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_operational_units_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field: Operational Unit(s) (field_operational_units)',
    ),
  );

  /* Display: Feed (context aware) */
  $handler = $view->new_display('panel_pane', 'Feed (context aware)', 'directory_widget_feed_ca_pane');
  $handler->display->display_options['display_description'] = 'Display a directory in a feed of profile pictures and bios';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_operational_units_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Example: GIND, GICD, GIVI, Administration, IT, Facilities',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_operational_roles_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Example: Investigator, Staff Scientist, Research Associate',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_operational_titles_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Example: Senior Investigator, Associate Investigator, Staff Research Scientist II',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'rich_text';
  $handler->display->display_options['exposed_form']['options']['token_details'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relationship: Field: Operational Title(s) (field_operational_titles) */
  $handler->display->display_options['relationships']['field_operational_titles_tid']['id'] = 'field_operational_titles_tid';
  $handler->display->display_options['relationships']['field_operational_titles_tid']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['relationships']['field_operational_titles_tid']['field'] = 'field_operational_titles_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'profile_picture_medium',
    'image_link' => '',
  );
  /* Field: Profile: Realname Alias  */
  $handler->display->display_options['fields']['field_label_alias']['id'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['field'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['label'] = '';
  $handler->display->display_options['fields']['field_label_alias']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_label_alias']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_label_alias']['element_label_colon'] = FALSE;
  /* Field: Field: Operational Title(s) */
  $handler->display->display_options['fields']['field_operational_titles']['id'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['field'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['label'] = '';
  $handler->display->display_options['fields']['field_operational_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operational_titles']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_operational_titles']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_operational_titles']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_operational_titles']['delta_offset'] = '0';
  /* Field: Field: Biosketch */
  $handler->display->display_options['fields']['field_biography']['id'] = 'field_biography';
  $handler->display->display_options['fields']['field_biography']['table'] = 'field_data_field_biography';
  $handler->display->display_options['fields']['field_biography']['field'] = 'field_biography';
  $handler->display->display_options['fields']['field_biography']['label'] = '';
  $handler->display->display_options['fields']['field_biography']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_biography']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_biography']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'field_operational_titles_tid';
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_realname_family']['id'] = 'field_realname_family';
  $handler->display->display_options['sorts']['field_realname_family']['table'] = 'field_data_field_realname';
  $handler->display->display_options['sorts']['field_realname_family']['field'] = 'field_realname_family';
  $handler->display->display_options['sorts']['field_realname_family']['relationship'] = 'user';
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
  /* Filter criterion: Field: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_fid']['group'] = 1;
  /* Filter criterion: Field: Operational Unit(s) (field_operational_units) */
  $handler->display->display_options['filters']['field_operational_units_tid']['id'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['table'] = 'field_data_field_operational_units';
  $handler->display->display_options['filters']['field_operational_units_tid']['field'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_units_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_operational_units_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['operator_id'] = 'field_operational_units_tid_op';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['label'] = 'Operational Unit(s)';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['description'] = 'Example: GIND, GICD, GIVI, Administration, IT, Facilities';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['operator'] = 'field_operational_units_tid_op';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['identifier'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_operational_units_tid']['vocabulary'] = 'operational_units';
  /* Filter criterion: Profile: Operational Role(s) (field_operational_roles) */
  $handler->display->display_options['filters']['field_operational_roles_tid']['id'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['filters']['field_operational_roles_tid']['field'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_roles_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_operational_roles_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['operator_id'] = 'field_operational_roles_tid_op';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['label'] = 'Operational Role(s)';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['description'] = 'Example: Investigator, Staff Scientist, Research Associate';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['operator'] = 'field_operational_roles_tid_op';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['identifier'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_operational_roles_tid']['vocabulary'] = 'operational_roles';
  /* Filter criterion: Field: Operational Title(s) (field_operational_titles) */
  $handler->display->display_options['filters']['field_operational_titles_tid']['id'] = 'field_operational_titles_tid';
  $handler->display->display_options['filters']['field_operational_titles_tid']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['filters']['field_operational_titles_tid']['field'] = 'field_operational_titles_tid';
  $handler->display->display_options['filters']['field_operational_titles_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_titles_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_operational_titles_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['operator_id'] = 'field_operational_titles_tid_op';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['label'] = 'Operational Title(s)';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['description'] = 'Example: Senior Investigator, Associate Investigator, Staff Research Scientist II';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['operator'] = 'field_operational_titles_tid_op';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['identifier'] = 'field_operational_titles_tid';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_operational_titles_tid']['vocabulary'] = 'operational_titles';
  /* Filter criterion: Field: Operational Title(s) (field_operational_titles:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['expose']['operator_id'] = 'delta_op';
  $handler->display->display_options['filters']['delta']['expose']['label'] = 'Operational Title(s) (field_operational_titles:delta)';
  $handler->display->display_options['filters']['delta']['expose']['operator'] = 'delta_op';
  $handler->display->display_options['filters']['delta']['expose']['identifier'] = 'delta';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_operational_units_tid' => array(
      'type' => 'context',
      'context' => 'entity_uuid:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field: Operational Unit(s) (field_operational_units)',
    ),
  );

  /* Display: Role List (context aware) */
  $handler = $view->new_display('panel_pane', 'Role List (context aware)', 'directory_widget_role_list_ca_pane');
  $handler->display->display_options['display_description'] = 'Display a directory list grouped by ops role';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_operational_units_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Example: GIND, GICD, GIVI, Administration, IT, Facilities',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_operational_roles_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Example: Investigator, Staff Scientist, Research Associate',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_operational_titles_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Example: Senior Investigator, Associate Investigator, Staff Research Scientist II',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'rich_text';
  $handler->display->display_options['exposed_form']['options']['token_details'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_operational_roles',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relationship: Profile: Operational Role(s) (field_operational_roles) */
  $handler->display->display_options['relationships']['field_operational_roles_tid']['id'] = 'field_operational_roles_tid';
  $handler->display->display_options['relationships']['field_operational_roles_tid']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['relationships']['field_operational_roles_tid']['field'] = 'field_operational_roles_tid';
  /* Relationship: Field: Operational Title(s) (field_operational_titles) */
  $handler->display->display_options['relationships']['field_operational_titles_tid']['id'] = 'field_operational_titles_tid';
  $handler->display->display_options['relationships']['field_operational_titles_tid']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['relationships']['field_operational_titles_tid']['field'] = 'field_operational_titles_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  /* Field: Profile: Realname Alias  */
  $handler->display->display_options['fields']['field_label_alias']['id'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['field'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['label'] = '';
  $handler->display->display_options['fields']['field_label_alias']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_label_alias']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_label_alias']['element_label_colon'] = FALSE;
  /* Field: Profile: Operational Role(s) */
  $handler->display->display_options['fields']['field_operational_roles']['id'] = 'field_operational_roles';
  $handler->display->display_options['fields']['field_operational_roles']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['fields']['field_operational_roles']['field'] = 'field_operational_roles';
  $handler->display->display_options['fields']['field_operational_roles']['label'] = '';
  $handler->display->display_options['fields']['field_operational_roles']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_operational_roles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operational_roles']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_operational_roles']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_operational_roles']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_operational_roles_tid';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'field_operational_titles_tid';
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_realname_family']['id'] = 'field_realname_family';
  $handler->display->display_options['sorts']['field_realname_family']['table'] = 'field_data_field_realname';
  $handler->display->display_options['sorts']['field_realname_family']['field'] = 'field_realname_family';
  $handler->display->display_options['sorts']['field_realname_family']['relationship'] = 'user';
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
  /* Filter criterion: Field: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_fid']['group'] = 1;
  /* Filter criterion: Field: Operational Unit(s) (field_operational_units) */
  $handler->display->display_options['filters']['field_operational_units_tid']['id'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['table'] = 'field_data_field_operational_units';
  $handler->display->display_options['filters']['field_operational_units_tid']['field'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_units_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_operational_units_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['operator_id'] = 'field_operational_units_tid_op';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['label'] = 'Operational Unit(s)';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['description'] = 'Example: GIND, GICD, GIVI, Administration, IT, Facilities';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['operator'] = 'field_operational_units_tid_op';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['identifier'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_operational_units_tid']['vocabulary'] = 'operational_units';
  /* Filter criterion: Profile: Operational Role(s) (field_operational_roles) */
  $handler->display->display_options['filters']['field_operational_roles_tid']['id'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['filters']['field_operational_roles_tid']['field'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_roles_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_operational_roles_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['operator_id'] = 'field_operational_roles_tid_op';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['label'] = 'Operational Role(s)';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['description'] = 'Example: Investigator, Staff Scientist, Research Associate';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['operator'] = 'field_operational_roles_tid_op';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['identifier'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_operational_roles_tid']['vocabulary'] = 'operational_roles';
  /* Filter criterion: Profile: Operational Role(s) (field_operational_roles:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['group'] = 1;
  /* Filter criterion: Field: Operational Title(s) (field_operational_titles) */
  $handler->display->display_options['filters']['field_operational_titles_tid']['id'] = 'field_operational_titles_tid';
  $handler->display->display_options['filters']['field_operational_titles_tid']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['filters']['field_operational_titles_tid']['field'] = 'field_operational_titles_tid';
  $handler->display->display_options['filters']['field_operational_titles_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_titles_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_operational_titles_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['operator_id'] = 'field_operational_titles_tid_op';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['label'] = 'Operational Title(s)';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['description'] = 'Example: Senior Investigator, Associate Investigator, Staff Research Scientist II';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['operator'] = 'field_operational_titles_tid_op';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['identifier'] = 'field_operational_titles_tid';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_operational_titles_tid']['vocabulary'] = 'operational_titles';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_operational_units_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field: Operational Unit(s) (field_operational_units)',
    ),
  );

  /* Display: Operational Unit List */
  $handler = $view->new_display('panel_pane', 'Operational Unit List', 'directory_widget_ops_unit_list_pane');
  $handler->display->display_options['display_description'] = 'Display a list of members grouped by operational unit';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_operational_units',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  /* Field: Field: Operational Unit(s) */
  $handler->display->display_options['fields']['field_operational_units']['id'] = 'field_operational_units';
  $handler->display->display_options['fields']['field_operational_units']['table'] = 'field_data_field_operational_units';
  $handler->display->display_options['fields']['field_operational_units']['field'] = 'field_operational_units';
  $handler->display->display_options['fields']['field_operational_units']['label'] = '';
  $handler->display->display_options['fields']['field_operational_units']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operational_units']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_operational_units']['delta_offset'] = '0';
  /* Field: Profile: Operational Role(s) */
  $handler->display->display_options['fields']['field_operational_roles']['id'] = 'field_operational_roles';
  $handler->display->display_options['fields']['field_operational_roles']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['fields']['field_operational_roles']['field'] = 'field_operational_roles';
  $handler->display->display_options['fields']['field_operational_roles']['label'] = '';
  $handler->display->display_options['fields']['field_operational_roles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operational_roles']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_operational_roles']['delta_offset'] = '0';
  /* Field: Profile: Realname Alias  */
  $handler->display->display_options['fields']['field_label_alias']['id'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['field'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['label'] = '';
  $handler->display->display_options['fields']['field_label_alias']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_label_alias']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_label_alias']['element_label_colon'] = FALSE;
  /* Field: Profile: Public Email */
  $handler->display->display_options['fields']['field_public_email']['id'] = 'field_public_email';
  $handler->display->display_options['fields']['field_public_email']['table'] = 'field_data_field_public_email';
  $handler->display->display_options['fields']['field_public_email']['field'] = 'field_public_email';
  $handler->display->display_options['fields']['field_public_email']['label'] = '';
  $handler->display->display_options['fields']['field_public_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  /* Filter criterion: Field: Operational Unit(s) (field_operational_units) */
  $handler->display->display_options['filters']['field_operational_units_tid']['id'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['table'] = 'field_data_field_operational_units';
  $handler->display->display_options['filters']['field_operational_units_tid']['field'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_units_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['operator_id'] = 'field_operational_units_tid_op';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['label'] = 'Operational Unit(s)';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['operator'] = 'field_operational_units_tid_op';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['identifier'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_operational_units_tid']['vocabulary'] = 'operational_units';
  /* Filter criterion: Profile: Operational Role(s) (field_operational_roles) */
  $handler->display->display_options['filters']['field_operational_roles_tid']['id'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['filters']['field_operational_roles_tid']['field'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_roles_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['operator_id'] = 'field_operational_roles_tid_op';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['label'] = 'Operational Role(s)';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['operator'] = 'field_operational_roles_tid_op';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['identifier'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_operational_roles_tid']['vocabulary'] = 'operational_roles';
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: People (context aware) */
  $handler = $view->new_display('panel_pane', 'People (context aware)', 'directory_widget_people_ca_pane');
  $handler->display->display_options['display_description'] = 'Display a directory as a grid of profile pictures';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_operational_units_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Example: GIND, GICD, GIVI, Administration, IT, Facilities',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_operational_roles_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Example: Investigator, Staff Scientist, Research Associate',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_operational_titles_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Example: Senior Investigator, Associate Investigator, Staff Research Scientist II',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'rich_text';
  $handler->display->display_options['exposed_form']['options']['token_details'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'float-left';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relationship: Field: Operational Title(s) (field_operational_titles) */
  $handler->display->display_options['relationships']['field_operational_titles_tid']['id'] = 'field_operational_titles_tid';
  $handler->display->display_options['relationships']['field_operational_titles_tid']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['relationships']['field_operational_titles_tid']['field'] = 'field_operational_titles_tid';
  /* Relationship: Profile: Operational Role(s) (field_operational_roles) */
  $handler->display->display_options['relationships']['field_operational_roles_tid']['id'] = 'field_operational_roles_tid';
  $handler->display->display_options['relationships']['field_operational_roles_tid']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['relationships']['field_operational_roles_tid']['field'] = 'field_operational_roles_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'profile_picture_directory',
    'image_link' => '',
  );
  /* Field: Profile: Realname Alias  */
  $handler->display->display_options['fields']['field_label_alias']['id'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['field'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['label'] = '';
  $handler->display->display_options['fields']['field_label_alias']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_label_alias']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_label_alias']['element_label_colon'] = FALSE;
  /* Field: Field: Operational Title(s) */
  $handler->display->display_options['fields']['field_operational_titles']['id'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['field'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['label'] = '';
  $handler->display->display_options['fields']['field_operational_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operational_titles']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_operational_titles']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_operational_titles']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_operational_titles']['delta_offset'] = '0';
  /* Field: Field: Operational Unit(s) */
  $handler->display->display_options['fields']['field_operational_units']['id'] = 'field_operational_units';
  $handler->display->display_options['fields']['field_operational_units']['table'] = 'field_data_field_operational_units';
  $handler->display->display_options['fields']['field_operational_units']['field'] = 'field_operational_units';
  $handler->display->display_options['fields']['field_operational_units']['label'] = '';
  $handler->display->display_options['fields']['field_operational_units']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operational_units']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_operational_units']['delta_offset'] = '0';
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
  /* Filter criterion: Field: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_fid']['group'] = 1;
  /* Filter criterion: Field: Operational Unit(s) (field_operational_units) */
  $handler->display->display_options['filters']['field_operational_units_tid']['id'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['table'] = 'field_data_field_operational_units';
  $handler->display->display_options['filters']['field_operational_units_tid']['field'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_units_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_operational_units_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['operator_id'] = 'field_operational_units_tid_op';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['label'] = 'Operational Unit(s)';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['description'] = 'Example: GIND, GICD, GIVI, Administration, IT, Facilities';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['operator'] = 'field_operational_units_tid_op';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['identifier'] = 'field_operational_units_tid';
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_units_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_operational_units_tid']['vocabulary'] = 'operational_units';
  /* Filter criterion: Profile: Operational Role(s) (field_operational_roles) */
  $handler->display->display_options['filters']['field_operational_roles_tid']['id'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['filters']['field_operational_roles_tid']['field'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_roles_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_operational_roles_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['operator_id'] = 'field_operational_roles_tid_op';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['label'] = 'Operational Role(s)';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['description'] = 'Example: Investigator, Staff Scientist, Research Associate';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['operator'] = 'field_operational_roles_tid_op';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['identifier'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_operational_roles_tid']['vocabulary'] = 'operational_roles';
  /* Filter criterion: Field: Operational Title(s) (field_operational_titles) */
  $handler->display->display_options['filters']['field_operational_titles_tid']['id'] = 'field_operational_titles_tid';
  $handler->display->display_options['filters']['field_operational_titles_tid']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['filters']['field_operational_titles_tid']['field'] = 'field_operational_titles_tid';
  $handler->display->display_options['filters']['field_operational_titles_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_titles_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_operational_titles_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['operator_id'] = 'field_operational_titles_tid_op';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['label'] = 'Operational Title(s)';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['description'] = 'Example: Senior Investigator, Associate Investigator, Staff Research Scientist II';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['operator'] = 'field_operational_titles_tid_op';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['identifier'] = 'field_operational_titles_tid';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_operational_titles_tid']['vocabulary'] = 'operational_titles';
  /* Filter criterion: Profile: Operational Role(s) (field_operational_roles:delta) */
  $handler->display->display_options['filters']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['filters']['delta_1']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['filters']['delta_1']['field'] = 'delta';
  $handler->display->display_options['filters']['delta_1']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta_1']['group'] = 1;
  /* Filter criterion: Field: Operational Title(s) (field_operational_titles:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['group'] = 1;
  $handler->display->display_options['filters']['delta']['expose']['operator_id'] = 'delta_op';
  $handler->display->display_options['filters']['delta']['expose']['label'] = 'Operational Title(s) (field_operational_titles:delta)';
  $handler->display->display_options['filters']['delta']['expose']['operator'] = 'delta_op';
  $handler->display->display_options['filters']['delta']['expose']['identifier'] = 'delta';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_operational_units_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field: Operational Unit(s) (field_operational_units)',
    ),
  );

  /* Display: Spotlight */
  $handler = $view->new_display('panel_pane', 'Spotlight', 'profile_spotlight');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'profile_picture_large',
    'image_link' => '',
  );
  /* Field: Profile: Realname Alias  */
  $handler->display->display_options['fields']['field_label_alias']['id'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['field'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['label'] = '';
  $handler->display->display_options['fields']['field_label_alias']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['sorts']['random']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['random']['expose']['label'] = 'Random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  /* Filter criterion: Profile: Realname Alias  (field_label_alias) */
  $handler->display->display_options['filters']['field_label_alias_value']['id'] = 'field_label_alias_value';
  $handler->display->display_options['filters']['field_label_alias_value']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['filters']['field_label_alias_value']['field'] = 'field_label_alias_value';
  $handler->display->display_options['filters']['field_label_alias_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_label_alias_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['operator_id'] = 'field_label_alias_value_op';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['operator'] = 'field_label_alias_value_op';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['identifier'] = 'field_label_alias_value';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_min_chars'] = '3';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_field'] = 'field_label_alias';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Profile: Operational Role(s) (field_operational_roles) */
  $handler->display->display_options['filters']['field_operational_roles_tid']['id'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['filters']['field_operational_roles_tid']['field'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_roles_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['operator_id'] = 'field_operational_roles_tid_op';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['label'] = 'Operational Role(s)';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['operator'] = 'field_operational_roles_tid_op';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['identifier'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_roles_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_operational_roles_tid']['vocabulary'] = 'operational_roles';
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['directory_widgets'] = $view;

  $view = new view();
  $view->name = 'leadership_widgets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Leadership Widgets';
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
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';

  /* Display: Feed (context aware) */
  $handler = $view->new_display('panel_pane', 'Feed (context aware)', 'leadership_widget_feed_ca_pane');
  $handler->display->display_options['display_description'] = 'Display a leadershipdirectory in a feed of profile pictures and bios';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_operational_unit_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Example: GIND, GICD, GIVI, Administration, IT, Facilities',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_operational_role_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Example: Director, Trustee, Member*
*Member of the Operational Unit specified ',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_operational_title_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Example: Director, Trustee, Senior Investigator',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'rich_text';
  $handler->display->display_options['exposed_form']['options']['token_details'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['label'] = 'Leadership';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'leadership' => 'leadership',
  );
  /* Relationship: Profile: Leadership (field_leadership) */
  $handler->display->display_options['relationships']['field_leadership_value']['id'] = 'field_leadership_value';
  $handler->display->display_options['relationships']['field_leadership_value']['table'] = 'field_data_field_leadership';
  $handler->display->display_options['relationships']['field_leadership_value']['field'] = 'field_leadership_value';
  $handler->display->display_options['relationships']['field_leadership_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_leadership_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'profile_picture_medium',
    'image_link' => '',
  );
  /* Field: Field collection item: Operational Title */
  $handler->display->display_options['fields']['field_operational_title']['id'] = 'field_operational_title';
  $handler->display->display_options['fields']['field_operational_title']['table'] = 'field_data_field_operational_title';
  $handler->display->display_options['fields']['field_operational_title']['field'] = 'field_operational_title';
  $handler->display->display_options['fields']['field_operational_title']['relationship'] = 'field_leadership_value';
  $handler->display->display_options['fields']['field_operational_title']['label'] = '';
  $handler->display->display_options['fields']['field_operational_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operational_title']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Operational Unit */
  $handler->display->display_options['fields']['field_operational_unit']['id'] = 'field_operational_unit';
  $handler->display->display_options['fields']['field_operational_unit']['table'] = 'field_data_field_operational_unit';
  $handler->display->display_options['fields']['field_operational_unit']['field'] = 'field_operational_unit';
  $handler->display->display_options['fields']['field_operational_unit']['relationship'] = 'field_leadership_value';
  $handler->display->display_options['fields']['field_operational_unit']['label'] = '';
  $handler->display->display_options['fields']['field_operational_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operational_unit']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Profile: Realname Alias  */
  $handler->display->display_options['fields']['field_label_alias']['id'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['field'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['label'] = '';
  $handler->display->display_options['fields']['field_label_alias']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_label_alias']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_label_alias']['element_label_colon'] = FALSE;
  /* Field: Field: Biosketch */
  $handler->display->display_options['fields']['field_biography']['id'] = 'field_biography';
  $handler->display->display_options['fields']['field_biography']['table'] = 'field_data_field_biography';
  $handler->display->display_options['fields']['field_biography']['field'] = 'field_biography';
  $handler->display->display_options['fields']['field_biography']['relationship'] = 'field_leadership_value';
  $handler->display->display_options['fields']['field_biography']['label'] = '';
  $handler->display->display_options['fields']['field_biography']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_biography']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field collection item: Operational Unit (field_operational_unit) */
  $handler->display->display_options['arguments']['field_operational_unit_tid']['id'] = 'field_operational_unit_tid';
  $handler->display->display_options['arguments']['field_operational_unit_tid']['table'] = 'field_data_field_operational_unit';
  $handler->display->display_options['arguments']['field_operational_unit_tid']['field'] = 'field_operational_unit_tid';
  $handler->display->display_options['arguments']['field_operational_unit_tid']['relationship'] = 'field_leadership_value';
  $handler->display->display_options['arguments']['field_operational_unit_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_operational_unit_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_operational_unit_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_operational_unit_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  /* Filter criterion: Field collection item: Operational Unit (field_operational_unit) */
  $handler->display->display_options['filters']['field_operational_unit_tid']['id'] = 'field_operational_unit_tid';
  $handler->display->display_options['filters']['field_operational_unit_tid']['table'] = 'field_data_field_operational_unit';
  $handler->display->display_options['filters']['field_operational_unit_tid']['field'] = 'field_operational_unit_tid';
  $handler->display->display_options['filters']['field_operational_unit_tid']['relationship'] = 'field_leadership_value';
  $handler->display->display_options['filters']['field_operational_unit_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_unit_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_unit_tid']['expose']['operator_id'] = 'field_operational_unit_tid_op';
  $handler->display->display_options['filters']['field_operational_unit_tid']['expose']['label'] = 'Operational Unit (field_operational_unit)';
  $handler->display->display_options['filters']['field_operational_unit_tid']['expose']['operator'] = 'field_operational_unit_tid_op';
  $handler->display->display_options['filters']['field_operational_unit_tid']['expose']['identifier'] = 'field_operational_unit_tid';
  $handler->display->display_options['filters']['field_operational_unit_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_unit_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_operational_unit_tid']['vocabulary'] = 'operational_units';
  /* Filter criterion: Field collection item: Operational Role (field_operational_role) */
  $handler->display->display_options['filters']['field_operational_role_tid']['id'] = 'field_operational_role_tid';
  $handler->display->display_options['filters']['field_operational_role_tid']['table'] = 'field_data_field_operational_role';
  $handler->display->display_options['filters']['field_operational_role_tid']['field'] = 'field_operational_role_tid';
  $handler->display->display_options['filters']['field_operational_role_tid']['relationship'] = 'field_leadership_value';
  $handler->display->display_options['filters']['field_operational_role_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_role_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_role_tid']['expose']['operator_id'] = 'field_operational_role_tid_op';
  $handler->display->display_options['filters']['field_operational_role_tid']['expose']['label'] = 'Operational Role (field_operational_role)';
  $handler->display->display_options['filters']['field_operational_role_tid']['expose']['operator'] = 'field_operational_role_tid_op';
  $handler->display->display_options['filters']['field_operational_role_tid']['expose']['identifier'] = 'field_operational_role_tid';
  $handler->display->display_options['filters']['field_operational_role_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_role_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_operational_role_tid']['vocabulary'] = 'operational_roles';
  /* Filter criterion: Field collection item: Operational Title (field_operational_title) */
  $handler->display->display_options['filters']['field_operational_title_tid']['id'] = 'field_operational_title_tid';
  $handler->display->display_options['filters']['field_operational_title_tid']['table'] = 'field_data_field_operational_title';
  $handler->display->display_options['filters']['field_operational_title_tid']['field'] = 'field_operational_title_tid';
  $handler->display->display_options['filters']['field_operational_title_tid']['relationship'] = 'field_leadership_value';
  $handler->display->display_options['filters']['field_operational_title_tid']['value'] = '';
  $handler->display->display_options['filters']['field_operational_title_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_title_tid']['expose']['operator_id'] = 'field_operational_title_tid_op';
  $handler->display->display_options['filters']['field_operational_title_tid']['expose']['label'] = 'Operational Title (field_operational_title)';
  $handler->display->display_options['filters']['field_operational_title_tid']['expose']['operator'] = 'field_operational_title_tid_op';
  $handler->display->display_options['filters']['field_operational_title_tid']['expose']['identifier'] = 'field_operational_title_tid';
  $handler->display->display_options['filters']['field_operational_title_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_title_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_operational_title_tid']['vocabulary'] = 'operational_titles';
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_operational_unit_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field collection item: Operational Unit (field_operational_unit)',
    ),
  );

  /* Display: President & Directors */
  $handler = $view->new_display('panel_pane', 'President & Directors', 'leadership_widget_prez_dirs_pane');
  $handler->display->display_options['display_description'] = 'Current top level internal scientific leadership.';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['layout'] = 'two_33_66';
  $handler->display->display_options['row_options']['regions'] = array(
    'user' => 'two_33_66_top',
    'field_image' => 'two_33_66_first',
    'field_label_alias' => 'two_33_66_second',
    'field_operational_titles' => 'two_33_66_second',
    'field_fax' => 'two_33_66_second',
    'field_phone' => 'two_33_66_second',
    'field_public_email' => 'two_33_66_second',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Operational Title(s) (field_operational_titles) */
  $handler->display->display_options['relationships']['field_operational_titles_tid']['id'] = 'field_operational_titles_tid';
  $handler->display->display_options['relationships']['field_operational_titles_tid']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['relationships']['field_operational_titles_tid']['field'] = 'field_operational_titles_tid';
  /* Relationship: Profile: Operational Role(s) (field_operational_roles) */
  $handler->display->display_options['relationships']['field_operational_roles_tid']['id'] = 'field_operational_roles_tid';
  $handler->display->display_options['relationships']['field_operational_roles_tid']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['relationships']['field_operational_roles_tid']['field'] = 'field_operational_roles_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'profile_picture_medium',
    'image_link' => '',
  );
  /* Field: Profile: Realname Alias  */
  $handler->display->display_options['fields']['field_label_alias']['id'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['field'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['label'] = '';
  $handler->display->display_options['fields']['field_label_alias']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_label_alias']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_label_alias']['element_label_colon'] = FALSE;
  /* Field: Field: Operational Title(s) */
  $handler->display->display_options['fields']['field_operational_titles']['id'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['field'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['label'] = '';
  $handler->display->display_options['fields']['field_operational_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operational_titles']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_operational_titles']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_operational_titles']['delta_offset'] = '0';
  /* Field: Profile: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_fax']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_fax']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_fax']['delta_offset'] = '0';
  /* Field: Profile: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_phone']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_phone']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_phone']['delta_offset'] = '0';
  /* Field: Profile: Public Email */
  $handler->display->display_options['fields']['field_public_email']['id'] = 'field_public_email';
  $handler->display->display_options['fields']['field_public_email']['table'] = 'field_data_field_public_email';
  $handler->display->display_options['fields']['field_public_email']['field'] = 'field_public_email';
  $handler->display->display_options['fields']['field_public_email']['label'] = '';
  $handler->display->display_options['fields']['field_public_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_operational_titles_tid';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'field_operational_roles_tid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Operational Title(s) (field_operational_titles) */
  $handler->display->display_options['filters']['field_operational_titles_tid']['id'] = 'field_operational_titles_tid';
  $handler->display->display_options['filters']['field_operational_titles_tid']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['filters']['field_operational_titles_tid']['field'] = 'field_operational_titles_tid';
  $handler->display->display_options['filters']['field_operational_titles_tid']['value'] = array(
    0 => '102',
    1 => '109',
  );
  $handler->display->display_options['filters']['field_operational_titles_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['operator_id'] = 'field_operational_titles_tid_op';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['label'] = 'Operational Title(s) (field_operational_titles)';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['operator'] = 'field_operational_titles_tid_op';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['identifier'] = 'field_operational_titles_tid';
  $handler->display->display_options['filters']['field_operational_titles_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_operational_titles_tid']['vocabulary'] = 'operational_titles';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'profile';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Profile: Operational Role(s) (field_operational_roles) */
  $handler->display->display_options['filters']['field_operational_roles_tid']['id'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['table'] = 'field_data_field_operational_roles';
  $handler->display->display_options['filters']['field_operational_roles_tid']['field'] = 'field_operational_roles_tid';
  $handler->display->display_options['filters']['field_operational_roles_tid']['value'] = array(
    0 => '22',
    1 => '20',
  );
  $handler->display->display_options['filters']['field_operational_roles_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_operational_roles_tid']['vocabulary'] = 'operational_roles';
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Scientific Advisory Board (context aware) */
  $handler = $view->new_display('panel_pane', 'Scientific Advisory Board (context aware)', 'leadership_widget_sci_adv_board_ca_pane');
  $handler->display->display_options['display_description'] = 'Feed of external advisors';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Leadership: field_leadership */
  $handler->display->display_options['relationships']['field_leadership_value']['id'] = 'field_leadership_value';
  $handler->display->display_options['relationships']['field_leadership_value']['table'] = 'field_data_field_leadership';
  $handler->display->display_options['relationships']['field_leadership_value']['field'] = 'field_leadership_value';
  $handler->display->display_options['relationships']['field_leadership_value']['ui_name'] = 'Leadership: field_leadership';
  $handler->display->display_options['relationships']['field_leadership_value']['label'] = 'leadership_leadership';
  $handler->display->display_options['relationships']['field_leadership_value']['delta'] = '-1';
  /* Relationship: User */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['ui_name'] = 'User';
  $handler->display->display_options['relationships']['user']['label'] = 'user';
  /* Relationship: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['ui_name'] = 'Profile';
  $handler->display->display_options['relationships']['profile']['label'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Relationship: CV */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile_1']['ui_name'] = 'CV';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'cv';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'curriculum_vitae' => 'curriculum_vitae',
  );
  /* Relationship: External CV */
  $handler->display->display_options['relationships']['profile_2']['id'] = 'profile_2';
  $handler->display->display_options['relationships']['profile_2']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_2']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_2']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile_2']['ui_name'] = 'External CV';
  $handler->display->display_options['relationships']['profile_2']['label'] = 'minicv';
  $handler->display->display_options['relationships']['profile_2']['bundle_types'] = array(
    'external_cv' => 'external_cv',
  );
  /* Relationship: CV: Professional Titles */
  $handler->display->display_options['relationships']['field_professional_titles_value']['id'] = 'field_professional_titles_value';
  $handler->display->display_options['relationships']['field_professional_titles_value']['table'] = 'field_data_field_professional_titles';
  $handler->display->display_options['relationships']['field_professional_titles_value']['field'] = 'field_professional_titles_value';
  $handler->display->display_options['relationships']['field_professional_titles_value']['relationship'] = 'profile_1';
  $handler->display->display_options['relationships']['field_professional_titles_value']['ui_name'] = 'CV: Professional Titles';
  $handler->display->display_options['relationships']['field_professional_titles_value']['label'] = 'cv_prof_titles';
  $handler->display->display_options['relationships']['field_professional_titles_value']['delta'] = '-1';
  /* Relationship: External CV: Professional Titles */
  $handler->display->display_options['relationships']['field_professional_titles_value_1']['id'] = 'field_professional_titles_value_1';
  $handler->display->display_options['relationships']['field_professional_titles_value_1']['table'] = 'field_data_field_professional_titles';
  $handler->display->display_options['relationships']['field_professional_titles_value_1']['field'] = 'field_professional_titles_value';
  $handler->display->display_options['relationships']['field_professional_titles_value_1']['relationship'] = 'profile_2';
  $handler->display->display_options['relationships']['field_professional_titles_value_1']['ui_name'] = 'External CV: Professional Titles';
  $handler->display->display_options['relationships']['field_professional_titles_value_1']['label'] = 'minicv_prof_titles';
  $handler->display->display_options['relationships']['field_professional_titles_value_1']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Leadership: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['ui_name'] = 'Leadership: User uid';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  /* Field: Leadership: Realname Alias */
  $handler->display->display_options['fields']['field_label_alias']['id'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['field'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['ui_name'] = 'Leadership: Realname Alias';
  $handler->display->display_options['fields']['field_label_alias']['label'] = '';
  $handler->display->display_options['fields']['field_label_alias']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label_alias']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label_alias']['settings'] = array(
    'boolean' => '[user_1]',
    'target' => 'user/[user]',
  );
  /* Field: Realname (conditional linking) */
  $handler->display->display_options['fields']['user_1']['id'] = 'user_1';
  $handler->display->display_options['fields']['user_1']['table'] = 'profile';
  $handler->display->display_options['fields']['user_1']['field'] = 'user';
  $handler->display->display_options['fields']['user_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['user_1']['ui_name'] = 'Realname (conditional linking)';
  $handler->display->display_options['fields']['user_1']['label'] = '';
  $handler->display->display_options['fields']['user_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['user_1']['alter']['text'] = '[field_label_alias]';
  $handler->display->display_options['fields']['user_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['user_1']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['user_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user_1']['empty'] = '[field_label_alias]';
  $handler->display->display_options['fields']['user_1']['hide_empty'] = TRUE;
  /* Field: External CV: Prof Title */
  $handler->display->display_options['fields']['field_operational_titles']['id'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['field'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['relationship'] = 'field_professional_titles_value_1';
  $handler->display->display_options['fields']['field_operational_titles']['ui_name'] = 'External CV: Prof Title';
  $handler->display->display_options['fields']['field_operational_titles']['label'] = '';
  $handler->display->display_options['fields']['field_operational_titles']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_operational_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operational_titles']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_operational_titles']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_operational_titles']['delta_offset'] = '0';
  /* Field: External CV: Op Unit */
  $handler->display->display_options['fields']['field_institution_op_units']['id'] = 'field_institution_op_units';
  $handler->display->display_options['fields']['field_institution_op_units']['table'] = 'field_data_field_institution_op_units';
  $handler->display->display_options['fields']['field_institution_op_units']['field'] = 'field_institution_op_units';
  $handler->display->display_options['fields']['field_institution_op_units']['relationship'] = 'field_professional_titles_value_1';
  $handler->display->display_options['fields']['field_institution_op_units']['ui_name'] = 'External CV: Op Unit';
  $handler->display->display_options['fields']['field_institution_op_units']['label'] = '';
  $handler->display->display_options['fields']['field_institution_op_units']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_institution_op_units']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_op_units']['type'] = 'taxonomy_term_reference_plain';
  /* Field: External CV: Institution */
  $handler->display->display_options['fields']['field_institution']['id'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['table'] = 'field_data_field_institution';
  $handler->display->display_options['fields']['field_institution']['field'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['relationship'] = 'field_professional_titles_value_1';
  $handler->display->display_options['fields']['field_institution']['ui_name'] = 'External CV: Institution';
  $handler->display->display_options['fields']['field_institution']['label'] = '';
  $handler->display->display_options['fields']['field_institution']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution']['type'] = 'taxonomy_term_reference_plain';
  /* Field: CV: Prof Title */
  $handler->display->display_options['fields']['field_operational_titles_1']['id'] = 'field_operational_titles_1';
  $handler->display->display_options['fields']['field_operational_titles_1']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles_1']['field'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles_1']['relationship'] = 'field_professional_titles_value';
  $handler->display->display_options['fields']['field_operational_titles_1']['ui_name'] = 'CV: Prof Title';
  $handler->display->display_options['fields']['field_operational_titles_1']['label'] = '';
  $handler->display->display_options['fields']['field_operational_titles_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operational_titles_1']['empty'] = '[field_operational_titles]';
  $handler->display->display_options['fields']['field_operational_titles_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_operational_titles_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_operational_titles_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_operational_titles_1']['delta_offset'] = '0';
  /* Field: CV: Op Unit */
  $handler->display->display_options['fields']['field_institution_op_units_1']['id'] = 'field_institution_op_units_1';
  $handler->display->display_options['fields']['field_institution_op_units_1']['table'] = 'field_data_field_institution_op_units';
  $handler->display->display_options['fields']['field_institution_op_units_1']['field'] = 'field_institution_op_units';
  $handler->display->display_options['fields']['field_institution_op_units_1']['relationship'] = 'field_professional_titles_value';
  $handler->display->display_options['fields']['field_institution_op_units_1']['ui_name'] = 'CV: Op Unit';
  $handler->display->display_options['fields']['field_institution_op_units_1']['label'] = '';
  $handler->display->display_options['fields']['field_institution_op_units_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_op_units_1']['empty'] = '[field_institution_op_units]';
  $handler->display->display_options['fields']['field_institution_op_units_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_institution_op_units_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: CV: Institution */
  $handler->display->display_options['fields']['field_institution_1']['id'] = 'field_institution_1';
  $handler->display->display_options['fields']['field_institution_1']['table'] = 'field_data_field_institution';
  $handler->display->display_options['fields']['field_institution_1']['field'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution_1']['relationship'] = 'field_professional_titles_value';
  $handler->display->display_options['fields']['field_institution_1']['ui_name'] = 'CV: Institution';
  $handler->display->display_options['fields']['field_institution_1']['label'] = '';
  $handler->display->display_options['fields']['field_institution_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_1']['empty'] = '[field_institution]';
  $handler->display->display_options['fields']['field_institution_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_institution_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Biosketch */
  $handler->display->display_options['fields']['field_biography']['id'] = 'field_biography';
  $handler->display->display_options['fields']['field_biography']['table'] = 'field_data_field_biography';
  $handler->display->display_options['fields']['field_biography']['field'] = 'field_biography';
  $handler->display->display_options['fields']['field_biography']['relationship'] = 'field_leadership_value';
  $handler->display->display_options['fields']['field_biography']['label'] = '';
  $handler->display->display_options['fields']['field_biography']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field collection item: Operational Unit (field_operational_unit) */
  $handler->display->display_options['arguments']['field_operational_unit_tid']['id'] = 'field_operational_unit_tid';
  $handler->display->display_options['arguments']['field_operational_unit_tid']['table'] = 'field_data_field_operational_unit';
  $handler->display->display_options['arguments']['field_operational_unit_tid']['field'] = 'field_operational_unit_tid';
  $handler->display->display_options['arguments']['field_operational_unit_tid']['relationship'] = 'field_leadership_value';
  $handler->display->display_options['arguments']['field_operational_unit_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_operational_unit_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_operational_unit_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_operational_unit_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'leadership' => 'leadership',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Operational Role (field_operational_role) */
  $handler->display->display_options['filters']['field_operational_role_tid']['id'] = 'field_operational_role_tid';
  $handler->display->display_options['filters']['field_operational_role_tid']['table'] = 'field_data_field_operational_role';
  $handler->display->display_options['filters']['field_operational_role_tid']['field'] = 'field_operational_role_tid';
  $handler->display->display_options['filters']['field_operational_role_tid']['relationship'] = 'field_leadership_value';
  $handler->display->display_options['filters']['field_operational_role_tid']['value'] = array(
    0 => '24',
  );
  $handler->display->display_options['filters']['field_operational_role_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_operational_role_tid']['vocabulary'] = 'operational_roles';
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_operational_unit_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field collection item: Operational Unit (field_operational_unit)',
    ),
  );

  /* Display: Foundation */
  $handler = $view->new_display('panel_pane', 'Foundation', 'leadership_widget_foundation_pane');
  $handler->display->display_options['display_description'] = 'List of foundation members';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relationship: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['ui_name'] = 'Profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Relationship: Profile: Leadership (field_leadership) */
  $handler->display->display_options['relationships']['field_leadership_value']['id'] = 'field_leadership_value';
  $handler->display->display_options['relationships']['field_leadership_value']['table'] = 'field_data_field_leadership';
  $handler->display->display_options['relationships']['field_leadership_value']['field'] = 'field_leadership_value';
  $handler->display->display_options['relationships']['field_leadership_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Leadership: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['ui_name'] = 'Leadership: User uid';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  /* Field: Leadership: Realname alias */
  $handler->display->display_options['fields']['field_label_alias']['id'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['field'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['ui_name'] = 'Leadership: Realname alias';
  $handler->display->display_options['fields']['field_label_alias']['label'] = '';
  $handler->display->display_options['fields']['field_label_alias']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label_alias']['element_label_colon'] = FALSE;
  /* Field: Profile: Realname alias */
  $handler->display->display_options['fields']['field_label_alias_1']['id'] = 'field_label_alias_1';
  $handler->display->display_options['fields']['field_label_alias_1']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['fields']['field_label_alias_1']['field'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_label_alias_1']['ui_name'] = 'Profile: Realname alias';
  $handler->display->display_options['fields']['field_label_alias_1']['label'] = '';
  $handler->display->display_options['fields']['field_label_alias_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_label_alias_1']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_label_alias_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label_alias_1']['empty'] = '[field_label_alias]';
  $handler->display->display_options['fields']['field_label_alias_1']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'leadership' => 'leadership',
  );
  /* Filter criterion: Field collection item: Operational Unit (field_operational_unit) */
  $handler->display->display_options['filters']['field_operational_unit_tid']['id'] = 'field_operational_unit_tid';
  $handler->display->display_options['filters']['field_operational_unit_tid']['table'] = 'field_data_field_operational_unit';
  $handler->display->display_options['filters']['field_operational_unit_tid']['field'] = 'field_operational_unit_tid';
  $handler->display->display_options['filters']['field_operational_unit_tid']['relationship'] = 'field_leadership_value';
  $handler->display->display_options['filters']['field_operational_unit_tid']['value'] = array(
    0 => '47',
  );
  $handler->display->display_options['filters']['field_operational_unit_tid']['vocabulary'] = 'operational_units';
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['leadership_widgets'] = $view;

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

  /* Display: Publications (context aware) */
  $handler = $view->new_display('panel_pane', 'Publications (context aware)', 'profile_pubs_ca_pane');
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
    'biblio' => 'biblio',
  );
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
      'type' => 'user',
      'context' => 'entity_uuid:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Biblio: Drupal UserID',
    ),
  );

  /* Display: Honors and Awards (context aware) */
  $handler = $view->new_display('panel_pane', 'Honors and Awards (context aware)', 'profile_awads_ca_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Honors and Awards';
  $handler->display->display_options['display_description'] = 'Feed of a user\'s honors and award nodes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_date_mmyy' => 'field_date_mmyy',
    'field_honor_and_award' => 'field_honor_and_award',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: awarded to (node → profile2) */
  $handler->display->display_options['relationships']['relation_was_awarded_profile2']['id'] = 'relation_was_awarded_profile2';
  $handler->display->display_options['relationships']['relation_was_awarded_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_was_awarded_profile2']['field'] = 'relation_was_awarded_profile2';
  $handler->display->display_options['relationships']['relation_was_awarded_profile2']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_was_awarded_profile2']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_was_awarded_profile2']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Award Date */
  $handler->display->display_options['fields']['field_date_mmyy']['id'] = 'field_date_mmyy';
  $handler->display->display_options['fields']['field_date_mmyy']['table'] = 'field_data_field_date_mmyy';
  $handler->display->display_options['fields']['field_date_mmyy']['field'] = 'field_date_mmyy';
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
  $handler->display->display_options['fields']['field_honor_and_award']['label'] = '';
  $handler->display->display_options['fields']['field_honor_and_award']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Award Date (field_date_mmyy) */
  $handler->display->display_options['sorts']['field_date_mmyy_value']['id'] = 'field_date_mmyy_value';
  $handler->display->display_options['sorts']['field_date_mmyy_value']['table'] = 'field_data_field_date_mmyy';
  $handler->display->display_options['sorts']['field_date_mmyy_value']['field'] = 'field_date_mmyy_value';
  $handler->display->display_options['sorts']['field_date_mmyy_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['relationship'] = 'relation_was_awarded_profile2';
  $handler->display->display_options['arguments']['user']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
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
    'honors_and_awards' => 'honors_and_awards',
  );
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
    'user' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Profile: User uid',
    ),
  );
  $export['profile_user_content'] = $view;

  $view = new view();
  $view->name = 'profile_widgets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Profile Widgets';
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
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;

  /* Display: Professional titles (context aware) */
  $handler = $view->new_display('panel_pane', 'Professional titles (context aware)', 'profile_widget_prof_titles_ca_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Professional titles';
  $handler->display->display_options['display_description'] = 'List currently held titles';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_operational_titles' => 'field_operational_titles',
    'field_institution' => 'field_institution',
  );
  $handler->display->display_options['row_options']['separator'] = ',';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: Professional titles (field_professional_titles) */
  $handler->display->display_options['relationships']['field_professional_titles_value']['id'] = 'field_professional_titles_value';
  $handler->display->display_options['relationships']['field_professional_titles_value']['table'] = 'field_data_field_professional_titles';
  $handler->display->display_options['relationships']['field_professional_titles_value']['field'] = 'field_professional_titles_value';
  $handler->display->display_options['relationships']['field_professional_titles_value']['label'] = 'field collection from field_professional_titles';
  $handler->display->display_options['relationships']['field_professional_titles_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Operational Title(s) */
  $handler->display->display_options['fields']['field_operational_titles']['id'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['field'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['relationship'] = 'field_professional_titles_value';
  $handler->display->display_options['fields']['field_operational_titles']['label'] = '';
  $handler->display->display_options['fields']['field_operational_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operational_titles']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_operational_titles']['delta_offset'] = '0';
  /* Field: Field collection item: Institution */
  $handler->display->display_options['fields']['field_institution']['id'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['table'] = 'field_data_field_institution';
  $handler->display->display_options['fields']['field_institution']['field'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['relationship'] = 'field_professional_titles_value';
  $handler->display->display_options['fields']['field_institution']['label'] = '';
  $handler->display->display_options['fields']['field_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile: Profile ID */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'profile';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curriculum_vitae' => 'curriculum_vitae',
  );
  /* Filter criterion: Field: Current (field_boolean) */
  $handler->display->display_options['filters']['field_boolean_value']['id'] = 'field_boolean_value';
  $handler->display->display_options['filters']['field_boolean_value']['table'] = 'field_data_field_boolean';
  $handler->display->display_options['filters']['field_boolean_value']['field'] = 'field_boolean_value';
  $handler->display->display_options['filters']['field_boolean_value']['relationship'] = 'field_professional_titles_value';
  $handler->display->display_options['filters']['field_boolean_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_boolean_value']['expose']['operator_id'] = 'field_boolean_value_op';
  $handler->display->display_options['filters']['field_boolean_value']['expose']['label'] = 'Current';
  $handler->display->display_options['filters']['field_boolean_value']['expose']['operator'] = 'field_boolean_value_op';
  $handler->display->display_options['filters']['field_boolean_value']['expose']['identifier'] = 'field_boolean_value';
  $handler->display->display_options['filters']['field_boolean_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  $handler->display->display_options['pane_category']['name'] = 'Profile Widgets';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'pid' => array(
      'type' => 'context',
      'context' => 'entity:profile2.pid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Profile: Curriculum Vitae ID',
    ),
  );

  /* Display: Contact(s) (context aware) */
  $handler = $view->new_display('panel_pane', 'Contact(s) (context aware)', 'profile_widget_contact_ca_pane');
  $handler->display->display_options['display_description'] = 'List the contact information of the associated Profile';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_contacts_target_id']['id'] = 'field_contacts_target_id';
  $handler->display->display_options['relationships']['field_contacts_target_id']['table'] = 'field_data_field_contacts';
  $handler->display->display_options['relationships']['field_contacts_target_id']['field'] = 'field_contacts_target_id';
  $handler->display->display_options['relationships']['field_contacts_target_id']['label'] = 'Contact uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_contacts_target_id';
  $handler->display->display_options['relationships']['profile']['label'] = 'Contact profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['field_realname']['id'] = 'field_realname';
  $handler->display->display_options['fields']['field_realname']['table'] = 'field_data_field_realname';
  $handler->display->display_options['fields']['field_realname']['field'] = 'field_realname';
  $handler->display->display_options['fields']['field_realname']['relationship'] = 'field_contacts_target_id';
  $handler->display->display_options['fields']['field_realname']['label'] = '';
  $handler->display->display_options['fields']['field_realname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_realname']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_realname']['settings'] = array(
    'format' => 'professional',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Field: Operational Title(s) */
  $handler->display->display_options['fields']['field_operational_titles']['id'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['field'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_operational_titles']['label'] = '';
  $handler->display->display_options['fields']['field_operational_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operational_titles']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_operational_titles']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_operational_titles']['delta_offset'] = '0';
  /* Field: Profile: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['delta_offset'] = '0';
  /* Field: Profile: Public Email */
  $handler->display->display_options['fields']['field_public_email']['id'] = 'field_public_email';
  $handler->display->display_options['fields']['field_public_email']['table'] = 'field_data_field_public_email';
  $handler->display->display_options['fields']['field_public_email']['field'] = 'field_public_email';
  $handler->display->display_options['fields']['field_public_email']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_public_email']['label'] = '';
  $handler->display->display_options['fields']['field_public_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile: Profile ID */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'profile';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['pane_category']['name'] = 'Profile Widgets';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'pid' => array(
      'type' => 'context',
      'context' => 'entity:profile2.pid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Profile: Profile ID',
    ),
  );

  /* Display: Contact card */
  $handler = $view->new_display('panel_pane', 'Contact card', 'profile_widget_contact_card_pane');
  $handler->display->display_options['display_description'] = 'Generate a contact cards for a given user';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_label_alias_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Search by Contact Name (autocomplete)',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'delta' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Multiple ops titles? Enter one here. (first title id is 0)',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'delta_1' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Multiple phone numbers? Enter one here. (first phone id is 0)',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'rich_text';
  $handler->display->display_options['exposed_form']['options']['token_details'] = 0;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'profile_picture_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Profile: Realname Alias  */
  $handler->display->display_options['fields']['field_label_alias']['id'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['field'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['label'] = '';
  $handler->display->display_options['fields']['field_label_alias']['element_label_colon'] = FALSE;
  /* Field: Field: Operational Title(s) */
  $handler->display->display_options['fields']['field_operational_titles']['id'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['field'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['label'] = '';
  $handler->display->display_options['fields']['field_operational_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operational_titles']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_operational_titles']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_operational_titles']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_operational_titles']['delta_offset'] = '0';
  /* Field: Profile: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['delta_offset'] = '0';
  /* Field: Profile: Public Email */
  $handler->display->display_options['fields']['field_public_email']['id'] = 'field_public_email';
  $handler->display->display_options['fields']['field_public_email']['table'] = 'field_data_field_public_email';
  $handler->display->display_options['fields']['field_public_email']['field'] = 'field_public_email';
  $handler->display->display_options['fields']['field_public_email']['label'] = '';
  $handler->display->display_options['fields']['field_public_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Realname Alias  (field_label_alias) */
  $handler->display->display_options['filters']['field_label_alias_value']['id'] = 'field_label_alias_value';
  $handler->display->display_options['filters']['field_label_alias_value']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['filters']['field_label_alias_value']['field'] = 'field_label_alias_value';
  $handler->display->display_options['filters']['field_label_alias_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_label_alias_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['operator_id'] = 'field_label_alias_value_op';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['operator'] = 'field_label_alias_value_op';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['identifier'] = 'field_label_alias_value';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_min_chars'] = '3';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_field'] = 'field_label_alias';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_raw_suggestion'] = 0;
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_raw_dropdown'] = 0;
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Operational Title(s) (field_operational_titles:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['exposed'] = TRUE;
  $handler->display->display_options['filters']['delta']['expose']['operator_id'] = 'delta_op';
  $handler->display->display_options['filters']['delta']['expose']['label'] = 'Title id';
  $handler->display->display_options['filters']['delta']['expose']['description'] = 'Multiple ops titles? First title id is 0';
  $handler->display->display_options['filters']['delta']['expose']['operator'] = 'delta_op';
  $handler->display->display_options['filters']['delta']['expose']['identifier'] = 'delta';
  $handler->display->display_options['filters']['delta']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['delta']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Profile: Phone (field_phone:delta) */
  $handler->display->display_options['filters']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['filters']['delta_1']['table'] = 'field_data_field_phone';
  $handler->display->display_options['filters']['delta_1']['field'] = 'delta';
  $handler->display->display_options['filters']['delta_1']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['delta_1']['expose']['operator_id'] = 'delta_1_op';
  $handler->display->display_options['filters']['delta_1']['expose']['label'] = 'Phone id';
  $handler->display->display_options['filters']['delta_1']['expose']['description'] = 'Multiple phone numbers? First phone id is 0';
  $handler->display->display_options['filters']['delta_1']['expose']['operator'] = 'delta_1_op';
  $handler->display->display_options['filters']['delta_1']['expose']['identifier'] = 'delta_1';
  $handler->display->display_options['filters']['delta_1']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['delta_1']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Contact card (large) */
  $handler = $view->new_display('panel_pane', 'Contact card (large)', 'profile_widget_contact_card_lg_pane');
  $handler->display->display_options['display_description'] = 'Generate a jumbo contact cards for a given user';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_label_alias_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Search by Contact Name (autocomplete)',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'delta' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Multiple ops titles? Enter one here. (first title id is 0)',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'delta_1' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Multiple phone numbers? Enter one here. (first phone id is 0)',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'delta_2' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => 'Multiple phone numbers? First fax id is 0',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'rich_text';
  $handler->display->display_options['exposed_form']['options']['token_details'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['layout'] = 'two_33_66';
  $handler->display->display_options['row_options']['regions'] = array(
    'user' => 'two_33_66_second',
    'field_image' => 'two_33_66_first',
    'field_label_alias' => 'two_33_66_second',
    'field_operational_titles' => 'two_33_66_second',
    'field_phone' => 'two_33_66_second',
    'field_fax' => 'two_33_66_second',
    'field_public_email' => 'two_33_66_second',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'profile_picture_square',
    'image_link' => '',
  );
  /* Field: Profile: Realname Alias  */
  $handler->display->display_options['fields']['field_label_alias']['id'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['field'] = 'field_label_alias';
  $handler->display->display_options['fields']['field_label_alias']['label'] = '';
  $handler->display->display_options['fields']['field_label_alias']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_label_alias']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_label_alias']['element_label_colon'] = FALSE;
  /* Field: Field: Operational Title(s) */
  $handler->display->display_options['fields']['field_operational_titles']['id'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['field'] = 'field_operational_titles';
  $handler->display->display_options['fields']['field_operational_titles']['label'] = '';
  $handler->display->display_options['fields']['field_operational_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operational_titles']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_operational_titles']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_operational_titles']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_operational_titles']['delta_offset'] = '0';
  /* Field: Profile: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['delta_offset'] = '0';
  /* Field: Profile: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['delta_offset'] = '0';
  /* Field: Profile: Public Email */
  $handler->display->display_options['fields']['field_public_email']['id'] = 'field_public_email';
  $handler->display->display_options['fields']['field_public_email']['table'] = 'field_data_field_public_email';
  $handler->display->display_options['fields']['field_public_email']['field'] = 'field_public_email';
  $handler->display->display_options['fields']['field_public_email']['label'] = '';
  $handler->display->display_options['fields']['field_public_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Realname Alias  (field_label_alias) */
  $handler->display->display_options['filters']['field_label_alias_value']['id'] = 'field_label_alias_value';
  $handler->display->display_options['filters']['field_label_alias_value']['table'] = 'field_data_field_label_alias';
  $handler->display->display_options['filters']['field_label_alias_value']['field'] = 'field_label_alias_value';
  $handler->display->display_options['filters']['field_label_alias_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_label_alias_value']['group'] = 1;
  $handler->display->display_options['filters']['field_label_alias_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['operator_id'] = 'field_label_alias_value_op';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['operator'] = 'field_label_alias_value_op';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['identifier'] = 'field_label_alias_value';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_min_chars'] = '3';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_field'] = 'field_label_alias';
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_label_alias_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Operational Title(s) (field_operational_titles:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_operational_titles';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['group'] = 1;
  $handler->display->display_options['filters']['delta']['exposed'] = TRUE;
  $handler->display->display_options['filters']['delta']['expose']['operator_id'] = 'delta_op';
  $handler->display->display_options['filters']['delta']['expose']['label'] = 'Title id';
  $handler->display->display_options['filters']['delta']['expose']['description'] = 'Multiple ops titles? First title id is 0';
  $handler->display->display_options['filters']['delta']['expose']['operator'] = 'delta_op';
  $handler->display->display_options['filters']['delta']['expose']['identifier'] = 'delta';
  $handler->display->display_options['filters']['delta']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['delta']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  /* Filter criterion: Profile: Phone (field_phone:delta) */
  $handler->display->display_options['filters']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['filters']['delta_1']['table'] = 'field_data_field_phone';
  $handler->display->display_options['filters']['delta_1']['field'] = 'delta';
  $handler->display->display_options['filters']['delta_1']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta_1']['group'] = 1;
  $handler->display->display_options['filters']['delta_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['delta_1']['expose']['operator_id'] = 'delta_1_op';
  $handler->display->display_options['filters']['delta_1']['expose']['label'] = 'Phone id';
  $handler->display->display_options['filters']['delta_1']['expose']['description'] = 'Multiple phone numbers? First phone id is 0';
  $handler->display->display_options['filters']['delta_1']['expose']['operator'] = 'delta_1_op';
  $handler->display->display_options['filters']['delta_1']['expose']['identifier'] = 'delta_1';
  $handler->display->display_options['filters']['delta_1']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['delta_1']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Profile: Fax (field_fax:delta) */
  $handler->display->display_options['filters']['delta_2']['id'] = 'delta_2';
  $handler->display->display_options['filters']['delta_2']['table'] = 'field_data_field_fax';
  $handler->display->display_options['filters']['delta_2']['field'] = 'delta';
  $handler->display->display_options['filters']['delta_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['delta_2']['expose']['operator_id'] = 'delta_2_op';
  $handler->display->display_options['filters']['delta_2']['expose']['label'] = 'Fax id';
  $handler->display->display_options['filters']['delta_2']['expose']['description'] = 'Multiple phone numbers? First fax id is 0';
  $handler->display->display_options['filters']['delta_2']['expose']['operator'] = 'delta_2_op';
  $handler->display->display_options['filters']['delta_2']['expose']['identifier'] = 'delta_2';
  $handler->display->display_options['filters']['delta_2']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    1 => 0,
    7 => 0,
  );
  $handler->display->display_options['pane_category']['name'] = 'Gladstone';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $export['profile_widgets'] = $view;

  return $export;
}
