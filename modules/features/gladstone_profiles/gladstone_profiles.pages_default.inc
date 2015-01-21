<?php
/**
 * @file
 * gladstone_profiles.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function gladstone_profiles_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Standard',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '.tabs.panels-ajax-tab li { width: 20% !important; }
.pane-panels-ajax-tab-tabs { text-align: left !important; }
.tabs.panels-ajax-tab li:after {   right: -0.5em; border-width: 0 .7em 1.7em 0; }',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Profile',
        'keyword' => 'profile',
        'name' => 'profile2',
        'type' => 'profile',
        'context' => 'argument_entity_id:user_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'logic' => 'and',
    ),
    'panels_css_js_files_css' => '[theme]/css/page_manager/profile.css',
    'panels_css_js_files_js' => '',
    'panels_css_js_code_css' => '',
    'panels_css_js_code_js' => '',
    'panels_css_js_code_js_wrapper' => '0',
    'pathalias' => 'our-science/people/[user:name-field-realname:component-given]-[user:name-field-realname:component-family]',
  );
  $display = new panels_display();
  $display->layout = 'gs3_25_25_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3_25_25_50_header' => NULL,
      'gs3_25_25_50_top' => NULL,
      'gs3_25_25_50_sidebar' => NULL,
      'gs3_25_25_50_middle' => NULL,
      'gs3_25_25_50_inset' => NULL,
      'gs3_25_25_50_bottom' => NULL,
      'gs3_25_25_50_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9da07ae8-bd99-4e86-be1d-d5a1e73c2ecf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0841bc6b-c146-4c64-a56a-674b7b644e75';
    $pane->panel = 'gs3_25_25_50_header';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0841bc6b-c146-4c64-a56a-674b7b644e75';
    $display->content['new-0841bc6b-c146-4c64-a56a-674b7b644e75'] = $pane;
    $display->panels['gs3_25_25_50_header'][0] = 'new-0841bc6b-c146-4c64-a56a-674b7b644e75';
    $pane = new stdClass();
    $pane->pid = 'new-8f0eddf7-ac4e-489e-a861-482be9a10aa1';
    $pane->panel = 'gs3_25_25_50_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8f0eddf7-ac4e-489e-a861-482be9a10aa1';
    $display->content['new-8f0eddf7-ac4e-489e-a861-482be9a10aa1'] = $pane;
    $display->panels['gs3_25_25_50_header'][1] = 'new-8f0eddf7-ac4e-489e-a861-482be9a10aa1';
    $pane = new stdClass();
    $pane->pid = 'new-d0356c78-aa83-493c-ac25-cd4e4e319e17';
    $pane->panel = 'gs3_25_25_50_inset';
    $pane->type = 'panels_ajax_tab_tabs';
    $pane->subtype = 'panels_ajax_tab_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mini_panels' => array(
        'sidebar' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'profile_tab' => array(
          'selected' => 1,
          'tab_title' => 'Profile',
          'url_id' => 'bio',
          'weight' => '-10',
        ),
        'curriculum_vitae_tab' => array(
          'selected' => 0,
          'tab_title' => 'Curriculum Vitae',
          'url_id' => 'cv',
          'weight' => '-9',
        ),
        'publications_tab' => array(
          'selected' => 0,
          'tab_title' => 'Publications',
          'url_id' => 'pubs',
          'weight' => '-8',
        ),
      ),
      'container_id' => 'profiletabs',
      'url_enabled' => 1,
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pull-left',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd0356c78-aa83-493c-ac25-cd4e4e319e17';
    $display->content['new-d0356c78-aa83-493c-ac25-cd4e4e319e17'] = $pane;
    $display->panels['gs3_25_25_50_inset'][0] = 'new-d0356c78-aa83-493c-ac25-cd4e4e319e17';
    $pane = new stdClass();
    $pane->pid = 'new-8cdc8ec3-ae6f-4f52-a963-05d9d43cff8f';
    $pane->panel = 'gs3_25_25_50_inset';
    $pane->type = 'panels_ajax_tab_container';
    $pane->subtype = 'panels_ajax_tab_container';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'container_id' => 'profiletabs',
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8cdc8ec3-ae6f-4f52-a963-05d9d43cff8f';
    $display->content['new-8cdc8ec3-ae6f-4f52-a963-05d9d43cff8f'] = $pane;
    $display->panels['gs3_25_25_50_inset'][1] = 'new-8cdc8ec3-ae6f-4f52-a963-05d9d43cff8f';
    $pane = new stdClass();
    $pane->pid = 'new-e21a495f-a55c-4e94-9705-2aa53eab0ee7';
    $pane->panel = 'gs3_25_25_50_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'profile_picture_large',
        'image_link' => '',
      ),
      'context' => 'relationship_profile2_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e21a495f-a55c-4e94-9705-2aa53eab0ee7';
    $display->content['new-e21a495f-a55c-4e94-9705-2aa53eab0ee7'] = $pane;
    $display->panels['gs3_25_25_50_middle'][0] = 'new-e21a495f-a55c-4e94-9705-2aa53eab0ee7';
    $pane = new stdClass();
    $pane->pid = 'new-62b4f9c8-0883-4629-abc8-965a02dd28e6';
    $pane->panel = 'gs3_25_25_50_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_widgets-profile_widget_prof_titles_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'pid' => '',
      ),
      'fields_override' => array(
        'field_operational_titles' => 1,
        'field_institution' => 1,
      ),
      'exposed' => array(
        'field_boolean_value' => '1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Other Professional Titles',
      'context' => array(
        0 => 'relationship_profile2_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '62b4f9c8-0883-4629-abc8-965a02dd28e6';
    $display->content['new-62b4f9c8-0883-4629-abc8-965a02dd28e6'] = $pane;
    $display->panels['gs3_25_25_50_middle'][1] = 'new-62b4f9c8-0883-4629-abc8-965a02dd28e6';
    $pane = new stdClass();
    $pane->pid = 'new-52721e96-7f77-4cd9-857f-57c500eb8c3a';
    $pane->panel = 'gs3_25_25_50_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_public_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'email_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '52721e96-7f77-4cd9-857f-57c500eb8c3a';
    $display->content['new-52721e96-7f77-4cd9-857f-57c500eb8c3a'] = $pane;
    $display->panels['gs3_25_25_50_middle'][2] = 'new-52721e96-7f77-4cd9-857f-57c500eb8c3a';
    $pane = new stdClass();
    $pane->pid = 'new-78df283d-72e9-4933-a6f8-0f9368caa005';
    $pane->panel = 'gs3_25_25_50_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'phone',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 1,
      'override_title_text' => 'Phone',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '78df283d-72e9-4933-a6f8-0f9368caa005';
    $display->content['new-78df283d-72e9-4933-a6f8-0f9368caa005'] = $pane;
    $display->panels['gs3_25_25_50_middle'][3] = 'new-78df283d-72e9-4933-a6f8-0f9368caa005';
    $pane = new stdClass();
    $pane->pid = 'new-dfa0b871-a9c7-49de-90ca-cb076db79137';
    $pane->panel = 'gs3_25_25_50_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_fax';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'phone',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 1,
      'override_title_text' => 'Fax',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'dfa0b871-a9c7-49de-90ca-cb076db79137';
    $display->content['new-dfa0b871-a9c7-49de-90ca-cb076db79137'] = $pane;
    $display->panels['gs3_25_25_50_middle'][4] = 'new-dfa0b871-a9c7-49de-90ca-cb076db79137';
    $pane = new stdClass();
    $pane->pid = 'new-19664999-dd7e-40cb-a11a-b35bd7039560';
    $pane->panel = 'gs3_25_25_50_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_widgets-profile_widget_contact_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_profile2_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Assistant',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '19664999-dd7e-40cb-a11a-b35bd7039560';
    $display->content['new-19664999-dd7e-40cb-a11a-b35bd7039560'] = $pane;
    $display->panels['gs3_25_25_50_middle'][5] = 'new-19664999-dd7e-40cb-a11a-b35bd7039560';
    $pane = new stdClass();
    $pane->pid = 'new-b6895660-4ac6-4c84-91ee-ed9e418fb450';
    $pane->panel = 'gs3_25_25_50_sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b6895660-4ac6-4c84-91ee-ed9e418fb450';
    $display->content['new-b6895660-4ac6-4c84-91ee-ed9e418fb450'] = $pane;
    $display->panels['gs3_25_25_50_sidebar'][0] = 'new-b6895660-4ac6-4c84-91ee-ed9e418fb450';
    $pane = new stdClass();
    $pane->pid = 'new-886ef288-7584-4600-a2ae-bcec9e74e61a';
    $pane->panel = 'gs3_25_25_50_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_realname';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'name_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'markup' => 0,
        'output' => 'default',
        'format' => 'professional',
        'multiple' => 'default',
        'multiple_delimiter' => ', ',
        'multiple_and' => 'text',
        'multiple_delimiter_precedes_last' => 'never',
        'multiple_el_al_min' => '3',
        'multiple_el_al_first' => '1',
      ),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'realname',
      'css_class' => 'page-heading',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '886ef288-7584-4600-a2ae-bcec9e74e61a';
    $display->content['new-886ef288-7584-4600-a2ae-bcec9e74e61a'] = $pane;
    $display->panels['gs3_25_25_50_top'][0] = 'new-886ef288-7584-4600-a2ae-bcec9e74e61a';
    $pane = new stdClass();
    $pane->pid = 'new-a6afb725-0ef4-4f33-aa26-afda8aeaecf2';
    $pane->panel = 'gs3_25_25_50_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_display_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'display-title',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a6afb725-0ef4-4f33-aa26-afda8aeaecf2';
    $display->content['new-a6afb725-0ef4-4f33-aa26-afda8aeaecf2'] = $pane;
    $display->panels['gs3_25_25_50_top'][1] = 'new-a6afb725-0ef4-4f33-aa26-afda8aeaecf2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0841bc6b-c146-4c64-a56a-674b7b644e75';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context_2';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Curriculum Vitae',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Profile',
        'keyword' => 'profile',
        'name' => 'profile2',
        'type' => 'profile',
        'context' => 'argument_entity_id:user_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Curriculum Vitae',
        'keyword' => 'Curriculum Vitae',
        'name' => 'profile2',
        'type' => 'curriculum_vitae',
        'context' => 'argument_entity_id:user_1',
        'id' => 2,
      ),
    ),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 7,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
      ),
    ),
    'panels_css_js_files_css' => '[theme]/css/page_manager/profile.css',
    'panels_css_js_files_js' => '',
    'panels_css_js_code_css' => '',
    'panels_css_js_code_js' => '',
    'panels_css_js_code_js_wrapper' => '0',
    'pathalias' => 'our-science/people/[user:name-field-realname:component-given]-[user:name-field-realname:component-family]',
  );
  $display = new panels_display();
  $display->layout = 'gs3_25_25_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3_25_25_50_header' => NULL,
      'gs3_25_25_50_top' => NULL,
      'gs3_25_25_50_sidebar' => NULL,
      'gs3_25_25_50_middle' => NULL,
      'gs3_25_25_50_inset' => NULL,
      'gs3_25_25_50_bottom' => NULL,
      'gs3_25_25_50_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9da07ae8-bd99-4e86-be1d-d5a1e73c2ecf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0841bc6b-c146-4c64-a56a-674b7b644e75';
    $pane->panel = 'gs3_25_25_50_header';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0841bc6b-c146-4c64-a56a-674b7b644e75';
    $display->content['new-0841bc6b-c146-4c64-a56a-674b7b644e75'] = $pane;
    $display->panels['gs3_25_25_50_header'][0] = 'new-0841bc6b-c146-4c64-a56a-674b7b644e75';
    $pane = new stdClass();
    $pane->pid = 'new-8f0eddf7-ac4e-489e-a861-482be9a10aa1';
    $pane->panel = 'gs3_25_25_50_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8f0eddf7-ac4e-489e-a861-482be9a10aa1';
    $display->content['new-8f0eddf7-ac4e-489e-a861-482be9a10aa1'] = $pane;
    $display->panels['gs3_25_25_50_header'][1] = 'new-8f0eddf7-ac4e-489e-a861-482be9a10aa1';
    $pane = new stdClass();
    $pane->pid = 'new-d0356c78-aa83-493c-ac25-cd4e4e319e17';
    $pane->panel = 'gs3_25_25_50_inset';
    $pane->type = 'panels_ajax_tab_tabs';
    $pane->subtype = 'panels_ajax_tab_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mini_panels' => array(
        'sidebar' => array(
          'selected' => 0,
          'tab_title' => '',
          'url_id' => '',
          'weight' => '-10',
        ),
        'profile_tab' => array(
          'selected' => 1,
          'tab_title' => 'Profile',
          'url_id' => 'bio',
          'weight' => '-10',
        ),
        'curriculum_vitae_tab' => array(
          'selected' => 1,
          'tab_title' => 'Curriculum Vitae',
          'url_id' => 'cv',
          'weight' => '-9',
        ),
        'publications_tab' => array(
          'selected' => 1,
          'tab_title' => 'Publications',
          'url_id' => 'pubs',
          'weight' => '-8',
        ),
      ),
      'container_id' => 'profiletabs',
      'url_enabled' => 1,
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd0356c78-aa83-493c-ac25-cd4e4e319e17';
    $display->content['new-d0356c78-aa83-493c-ac25-cd4e4e319e17'] = $pane;
    $display->panels['gs3_25_25_50_inset'][0] = 'new-d0356c78-aa83-493c-ac25-cd4e4e319e17';
    $pane = new stdClass();
    $pane->pid = 'new-8cdc8ec3-ae6f-4f52-a963-05d9d43cff8f';
    $pane->panel = 'gs3_25_25_50_inset';
    $pane->type = 'panels_ajax_tab_container';
    $pane->subtype = 'panels_ajax_tab_container';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'container_id' => 'profiletabs',
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8cdc8ec3-ae6f-4f52-a963-05d9d43cff8f';
    $display->content['new-8cdc8ec3-ae6f-4f52-a963-05d9d43cff8f'] = $pane;
    $display->panels['gs3_25_25_50_inset'][1] = 'new-8cdc8ec3-ae6f-4f52-a963-05d9d43cff8f';
    $pane = new stdClass();
    $pane->pid = 'new-e21a495f-a55c-4e94-9705-2aa53eab0ee7';
    $pane->panel = 'gs3_25_25_50_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'profile_picture_large',
        'image_link' => '',
      ),
      'context' => 'relationship_profile2_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e21a495f-a55c-4e94-9705-2aa53eab0ee7';
    $display->content['new-e21a495f-a55c-4e94-9705-2aa53eab0ee7'] = $pane;
    $display->panels['gs3_25_25_50_middle'][0] = 'new-e21a495f-a55c-4e94-9705-2aa53eab0ee7';
    $pane = new stdClass();
    $pane->pid = 'new-62b4f9c8-0883-4629-abc8-965a02dd28e6';
    $pane->panel = 'gs3_25_25_50_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_widgets-profile_widget_prof_titles_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'pid' => '',
      ),
      'fields_override' => array(
        'field_operational_titles' => 1,
        'field_institution' => 1,
      ),
      'exposed' => array(
        'field_boolean_value' => '1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Other Professional Titles',
      'context' => array(
        0 => 'relationship_profile2_2',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '62b4f9c8-0883-4629-abc8-965a02dd28e6';
    $display->content['new-62b4f9c8-0883-4629-abc8-965a02dd28e6'] = $pane;
    $display->panels['gs3_25_25_50_middle'][1] = 'new-62b4f9c8-0883-4629-abc8-965a02dd28e6';
    $pane = new stdClass();
    $pane->pid = 'new-52721e96-7f77-4cd9-857f-57c500eb8c3a';
    $pane->panel = 'gs3_25_25_50_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_public_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'email_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 1,
      'override_title_text' => 'Contact Information',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '52721e96-7f77-4cd9-857f-57c500eb8c3a';
    $display->content['new-52721e96-7f77-4cd9-857f-57c500eb8c3a'] = $pane;
    $display->panels['gs3_25_25_50_middle'][2] = 'new-52721e96-7f77-4cd9-857f-57c500eb8c3a';
    $pane = new stdClass();
    $pane->pid = 'new-78df283d-72e9-4933-a6f8-0f9368caa005';
    $pane->panel = 'gs3_25_25_50_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'phone',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 1,
      'override_title_text' => 'Phone',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '78df283d-72e9-4933-a6f8-0f9368caa005';
    $display->content['new-78df283d-72e9-4933-a6f8-0f9368caa005'] = $pane;
    $display->panels['gs3_25_25_50_middle'][3] = 'new-78df283d-72e9-4933-a6f8-0f9368caa005';
    $pane = new stdClass();
    $pane->pid = 'new-dfa0b871-a9c7-49de-90ca-cb076db79137';
    $pane->panel = 'gs3_25_25_50_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_fax';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'phone',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 1,
      'override_title_text' => 'Fax',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'dfa0b871-a9c7-49de-90ca-cb076db79137';
    $display->content['new-dfa0b871-a9c7-49de-90ca-cb076db79137'] = $pane;
    $display->panels['gs3_25_25_50_middle'][4] = 'new-dfa0b871-a9c7-49de-90ca-cb076db79137';
    $pane = new stdClass();
    $pane->pid = 'new-19664999-dd7e-40cb-a11a-b35bd7039560';
    $pane->panel = 'gs3_25_25_50_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_widgets-profile_widget_contact_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_profile2_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Assistant',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '19664999-dd7e-40cb-a11a-b35bd7039560';
    $display->content['new-19664999-dd7e-40cb-a11a-b35bd7039560'] = $pane;
    $display->panels['gs3_25_25_50_middle'][5] = 'new-19664999-dd7e-40cb-a11a-b35bd7039560';
    $pane = new stdClass();
    $pane->pid = 'new-38e57986-0791-466d-9403-f35901230090';
    $pane->panel = 'gs3_25_25_50_sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_widgets-contact_card_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_image' => 1,
        'field_label_alias' => 1,
        'field_operational_titles' => 1,
        'field_phone' => 1,
        'field_public_email' => 1,
      ),
      'exposed' => array(
        'field_label_alias_value' => 'Justin Nand, PhD',
        'delta' => '0',
        'delta_1' => '0',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '38e57986-0791-466d-9403-f35901230090';
    $display->content['new-38e57986-0791-466d-9403-f35901230090'] = $pane;
    $display->panels['gs3_25_25_50_sidebar'][0] = 'new-38e57986-0791-466d-9403-f35901230090';
    $pane = new stdClass();
    $pane->pid = 'new-b6895660-4ac6-4c84-91ee-ed9e418fb450';
    $pane->panel = 'gs3_25_25_50_sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b6895660-4ac6-4c84-91ee-ed9e418fb450';
    $display->content['new-b6895660-4ac6-4c84-91ee-ed9e418fb450'] = $pane;
    $display->panels['gs3_25_25_50_sidebar'][1] = 'new-b6895660-4ac6-4c84-91ee-ed9e418fb450';
    $pane = new stdClass();
    $pane->pid = 'new-886ef288-7584-4600-a2ae-bcec9e74e61a';
    $pane->panel = 'gs3_25_25_50_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_realname';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'name_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'markup' => 0,
        'output' => 'default',
        'format' => 'professional',
        'multiple' => 'default',
        'multiple_delimiter' => ', ',
        'multiple_and' => 'text',
        'multiple_delimiter_precedes_last' => 'never',
        'multiple_el_al_min' => '3',
        'multiple_el_al_first' => '1',
      ),
      'context' => 'argument_entity_id:user_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'realname',
      'css_class' => 'page-heading',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '886ef288-7584-4600-a2ae-bcec9e74e61a';
    $display->content['new-886ef288-7584-4600-a2ae-bcec9e74e61a'] = $pane;
    $display->panels['gs3_25_25_50_top'][0] = 'new-886ef288-7584-4600-a2ae-bcec9e74e61a';
    $pane = new stdClass();
    $pane->pid = 'new-a6afb725-0ef4-4f33-aa26-afda8aeaecf2';
    $pane->panel = 'gs3_25_25_50_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_display_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'display-title',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a6afb725-0ef4-4f33-aa26-afda8aeaecf2';
    $display->content['new-a6afb725-0ef4-4f33-aa26-afda8aeaecf2'] = $pane;
    $display->panels['gs3_25_25_50_top'][1] = 'new-a6afb725-0ef4-4f33-aa26-afda8aeaecf2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0841bc6b-c146-4c64-a56a-674b7b644e75';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context_2'] = $handler;

  return $export;
}
