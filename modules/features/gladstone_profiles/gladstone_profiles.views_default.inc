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
  /* Filter criterion: Field: Subscription (field_boolean) */
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
  $handler->display->display_options['pane_category']['name'] = 'Profile Widgets';
  $handler->display->display_options['pane_category']['weight'] = '0';
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
  $export['profile_widgets'] = $view;

  return $export;
}
