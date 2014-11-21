<?php
/**
 * @file
 * structure.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function structure_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = 'Gladstone front page.';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'variant',
        'keyword' => 'variant',
        'name' => 'entity_uuid:taxonomy_term',
        'uuid' => '2e99b285-9f9a-410c-a2b9-43a881ba10ab',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3_50_25_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3_50_25_25_top' => NULL,
      'gs3_50_25_25_first' => NULL,
      'gs3_50_25_25_second' => NULL,
      'gs3_50_25_25_third' => NULL,
      'gs3_50_25_25_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8859286b-edb2-44c1-ac26-bfcc93e8d41e';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'panelize';
  $page->task = 'page';
  $page->admin_title = 'Panelize';
  $page->admin_description = 'Workaround for exportable panelized nodes since panelizer fails on import of per node configuration (see: https://www.drupal.org/node/1623536)';
  $page->path = 'z/%nid';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'nid' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
      'keyword' => 'nid',
    ),
  );
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'President and Scientific Directors',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/69',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-4fe29b8d-6922-4de5-b0c0-9564f2a5b5f7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'leadership_widgets-leadership_widget_prez_dirs_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4fe29b8d-6922-4de5-b0c0-9564f2a5b5f7';
    $display->content['new-4fe29b8d-6922-4de5-b0c0-9564f2a5b5f7'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-4fe29b8d-6922-4de5-b0c0-9564f2a5b5f7';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][2] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Trustees',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/81',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-418db808-23f2-451d-addb-1080d1226f47';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'directory_widgets-directory_widget_ops_unit_list_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'fields_override' => array(
        'user' => 1,
        'field_operational_units' => 1,
        'field_operational_roles' => 1,
        'field_label_alias' => 1,
        'field_public_email' => 1,
      ),
      'exposed' => array(
        'field_operational_units_tid' => 'Trustees',
        'field_operational_roles_tid' => '',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '418db808-23f2-451d-addb-1080d1226f47';
    $display->content['new-418db808-23f2-451d-addb-1080d1226f47'] = $pane;
    $display->panels['gs3irc_middle'][2] = 'new-418db808-23f2-451d-addb-1080d1226f47';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Administration',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/91',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-922ad44d-7156-4f8b-96c6-9f0267d6b04d';
    $pane->panel = 'gs3irc_inset';
    $pane->type = 'views_panes';
    $pane->subtype = 'directory_widgets-directory_widget_ops_unit_list_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'fields_override' => array(
        'user' => 1,
        'field_operational_units' => 1,
        'field_operational_roles' => 1,
        'field_label_alias' => 1,
        'field_public_email' => 1,
      ),
      'exposed' => array(
        'field_operational_units_tid' => 'Finance',
        'field_operational_roles_tid' => '',
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
    $pane->uuid = '922ad44d-7156-4f8b-96c6-9f0267d6b04d';
    $display->content['new-922ad44d-7156-4f8b-96c6-9f0267d6b04d'] = $pane;
    $display->panels['gs3irc_inset'][0] = 'new-922ad44d-7156-4f8b-96c6-9f0267d6b04d';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-418db808-23f2-451d-addb-1080d1226f47';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'directory_widgets-directory_widget_ops_unit_list_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'fields_override' => array(
        'user' => 1,
        'field_operational_units' => 1,
        'field_operational_roles' => 1,
        'field_label_alias' => 1,
        'field_public_email' => 1,
      ),
      'exposed' => array(
        'field_operational_units_tid' => 'Administration',
        'field_operational_roles_tid' => '',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '418db808-23f2-451d-addb-1080d1226f47';
    $display->content['new-418db808-23f2-451d-addb-1080d1226f47'] = $pane;
    $display->panels['gs3irc_middle'][2] = 'new-418db808-23f2-451d-addb-1080d1226f47';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_4';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Gladstone Foundation',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/76',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-922ad44d-7156-4f8b-96c6-9f0267d6b04d';
    $pane->panel = 'gs3irc_inset';
    $pane->type = 'views_panes';
    $pane->subtype = 'directory_widgets-directory_widget_ops_unit_list_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'fields_override' => array(
        'user' => 1,
        'field_operational_units' => 1,
        'field_operational_roles' => 1,
        'field_label_alias' => 1,
        'field_public_email' => 1,
      ),
      'exposed' => array(
        'field_operational_units_tid' => 'Finance',
        'field_operational_roles_tid' => '',
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
    $pane->uuid = '922ad44d-7156-4f8b-96c6-9f0267d6b04d';
    $display->content['new-922ad44d-7156-4f8b-96c6-9f0267d6b04d'] = $pane;
    $display->panels['gs3irc_inset'][0] = 'new-922ad44d-7156-4f8b-96c6-9f0267d6b04d';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-4f133ad2-d88d-4fb8-ad81-4737971bb1af';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'leadership_widgets-leadership_widget_foundation_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4f133ad2-d88d-4fb8-ad81-4737971bb1af';
    $display->content['new-4f133ad2-d88d-4fb8-ad81-4737971bb1af'] = $pane;
    $display->panels['gs3irc_middle'][2] = 'new-4f133ad2-d88d-4fb8-ad81-4737971bb1af';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_5';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'History',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/77',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-cfc971f7-0809-48c6-9dec-4d93e1abc2d9';
    $pane->panel = 'gs3irc_inset';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Text',
      'title' => 'Finance',
      'body' => '<p style="margin: 0px 0px 1.5em; color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">Established in 1971, The Gladstone Trust is a 501(c)(3) tax-exempt charity from the estate of J. David Gladstone. Valued at about $8 million at the time of Mr. Gladstone’s death, this original bequest has since multiplied more than 20-times its original value and has supported more than three decades of biomedical research and training.</p>

<p style="margin: 0px 0px 1.5em; color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">The trust’s value quickly grew and by 1979 was sufficient to found the Gladstone Institutes. Today, in addition to funds from the trust, Gladstone has annual revenues in excess of $70 million, derived from a variety of sources.</p>

<p style="margin: 0px 0px 1.5em; color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">Gladstone relies on grants from the National Institutes of Health (NIH) and other federal agencies as a major source of support. Due to the caliber of our science, our ability to obtain funding from the NIH was 60 percent better than the national average—in 2011, we won funding for 32 percent of the grants we applied for, compared to the national average of 20 percent. Gladstone is classified in the top 6 percent—in both national and state rankings—of NIH-funded organizations, based on the amount of grant funding received.&nbsp;</p>

<p style="margin: 0px 0px 1.5em; color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">Foundations and private donors contribute other significant funding which is critical towards advancing our mission to overcome some of the world’s most devastating diseases such as heart failure, HIV/AIDS and Alzheimer’s disease. Private foundations that have provided important support include the&nbsp;<a href="http://sdbjrfoundation.org/" style="text-decoration: none; color: rgb(12, 74, 101);">S.D. Bechtel, Jr. Foundation</a>,&nbsp;<a href="http://roddenberryfoundation.org/" style="text-decoration: none; color: rgb(12, 74, 101);">The Roddenberry Foundation</a>,&nbsp;<a href="http://www.taubephilanthropies.org/" style="text-decoration: none; color: rgb(12, 74, 101);">Taube Philanthropies</a>and the&nbsp;<a href="http://koret.org/" style="text-decoration: none; color: rgb(12, 74, 101);">Koret Foundation&nbsp;</a>among many others. For information on making a contribution, see&nbsp;<a href="http://today.gladstone.internal:8888/current/builds/demo/node/46" style="text-decoration: none; color: rgb(12, 74, 101);">Giving to Gladstone</a>.</p>

<p style="margin: 0px 0px 1.5em; color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">Gladstone also actively derives income from industry partnerships. For more information, see&nbsp;<a href="http://today.gladstone.internal:8888/current/builds/demo/node/2473" style="text-decoration: none; color: rgb(12, 74, 101);">Translational Research</a>.</p>
',
      'format' => 'limited_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cfc971f7-0809-48c6-9dec-4d93e1abc2d9';
    $display->content['new-cfc971f7-0809-48c6-9dec-4d93e1abc2d9'] = $pane;
    $display->panels['gs3irc_inset'][0] = 'new-cfc971f7-0809-48c6-9dec-4d93e1abc2d9';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_6';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'For Journalists',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/67',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-dd67b770-0534-47bf-bb53-9dba2f52174b';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_widgets-profile_widget_contact_card_pane';
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
        'field_label_alias_value' => '',
        'delta' => '0',
        'delta_1' => '0',
      ),
      'override_title' => 1,
      'override_title_text' => 'Please Contact',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'dd67b770-0534-47bf-bb53-9dba2f52174b';
    $display->content['new-dd67b770-0534-47bf-bb53-9dba2f52174b'] = $pane;
    $display->panels['gs3irc_middle'][2] = 'new-dd67b770-0534-47bf-bb53-9dba2f52174b';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_7';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Press Releases',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/63',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-ac5e9dff-71f0-4bdf-a30d-8880d8095b6a';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'press_release-press_release_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'fields_override' => array(
        'title' => 1,
        'field_blurb' => 1,
        'body' => 1,
        'field_longtext' => 1,
        'field_display_title' => 1,
        'field_image' => 1,
        'field_date' => 1,
      ),
      'context' => array(
        0 => 'empty',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ac5e9dff-71f0-4bdf-a30d-8880d8095b6a';
    $display->content['new-ac5e9dff-71f0-4bdf-a30d-8880d8095b6a'] = $pane;
    $display->panels['gs3irc_middle'][2] = 'new-ac5e9dff-71f0-4bdf-a30d-8880d8095b6a';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_8';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'Media Coverage',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/64',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-86653860-2c63-4adc-b48e-927c49bad213';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'in_the_news-media_coverage_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'fields_override' => array(
        'title' => 1,
        'field_date' => 1,
        'body' => 1,
      ),
      'context' => array(
        0 => 'empty',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '86653860-2c63-4adc-b48e-927c49bad213';
    $display->content['new-86653860-2c63-4adc-b48e-927c49bad213'] = $pane;
    $display->panels['gs3irc_middle'][2] = 'new-86653860-2c63-4adc-b48e-927c49bad213';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_9';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'All Directors & Investigators',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/64',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-5fc6df2c-d635-41af-a313-090931522ea8';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'directory_widgets-directory_widget_grid_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'offset' => '0',
      'fields_override' => array(
        'user' => 1,
        'field_image' => 1,
        'field_label_alias' => 1,
        'field_operational_titles' => 1,
      ),
      'exposed' => array(
        'field_operational_units_tid' => 'GICD',
        'field_operational_roles_tid' => 'Director, Associate Director, Investigator',
        'field_operational_titles_tid' => '',
      ),
      'context' => array(
        0 => 'empty',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5fc6df2c-d635-41af-a313-090931522ea8';
    $display->content['new-5fc6df2c-d635-41af-a313-090931522ea8'] = $pane;
    $display->panels['gs3irc_middle'][2] = 'new-5fc6df2c-d635-41af-a313-090931522ea8';
    $pane = new stdClass();
    $pane->pid = 'new-71af4523-fd02-41a6-9e9e-822e92a463db';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'directory_widgets-directory_widget_grid_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'offset' => '0',
      'fields_override' => array(
        'user' => 1,
        'field_image' => 1,
        'field_label_alias' => 1,
        'field_operational_titles' => 1,
      ),
      'exposed' => array(
        'field_operational_units_tid' => 'GIVI',
        'field_operational_roles_tid' => 'Director, Associate Director, Investigator',
        'field_operational_titles_tid' => '',
      ),
      'context' => array(
        0 => 'empty',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '71af4523-fd02-41a6-9e9e-822e92a463db';
    $display->content['new-71af4523-fd02-41a6-9e9e-822e92a463db'] = $pane;
    $display->panels['gs3irc_middle'][3] = 'new-71af4523-fd02-41a6-9e9e-822e92a463db';
    $pane = new stdClass();
    $pane->pid = 'new-baa4c994-0670-4d00-900b-9c636c6ec886';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'directory_widgets-directory_widget_grid_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'offset' => '0',
      'fields_override' => array(
        'user' => 1,
        'field_image' => 1,
        'field_label_alias' => 1,
        'field_operational_titles' => 1,
      ),
      'exposed' => array(
        'field_operational_units_tid' => 'GIND',
        'field_operational_roles_tid' => 'Director, Associate Director, Investigator',
        'field_operational_titles_tid' => '',
      ),
      'context' => array(
        0 => 'empty',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'baa4c994-0670-4d00-900b-9c636c6ec886';
    $display->content['new-baa4c994-0670-4d00-900b-9c636c6ec886'] = $pane;
    $display->panels['gs3irc_middle'][4] = 'new-baa4c994-0670-4d00-900b-9c636c6ec886';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_10';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Technologies Available',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/9',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-ece8a05c-3ce6-4357-a30c-470aafa52285';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'technology-tech_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'empty',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ece8a05c-3ce6-4357-a30c-470aafa52285';
    $display->content['new-ece8a05c-3ce6-4357-a30c-470aafa52285'] = $pane;
    $display->panels['gs3irc_middle'][2] = 'new-ece8a05c-3ce6-4357-a30c-470aafa52285';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_11';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -19;
  $handler->conf = array(
    'title' => 'Scientific Publications',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/5',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-88c8c63b-d834-4a3d-b070-69510ec84177';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'biblio-publications_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'offset' => '0',
      'fields_override' => array(
        'citation' => 1,
      ),
      'context' => array(
        0 => 'empty',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '88c8c63b-d834-4a3d-b070-69510ec84177';
    $display->content['new-88c8c63b-d834-4a3d-b070-69510ec84177'] = $pane;
    $display->panels['gs3irc_middle'][2] = 'new-88c8c63b-d834-4a3d-b070-69510ec84177';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_12';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -18;
  $handler->conf = array(
    'title' => 'People',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/17',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-9662a316-efd4-4bb2-bdf4-94d845529400';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'directory_widgets-directory_widget_grid_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'offset' => '0',
      'fields_override' => array(
        'user' => 1,
        'field_image' => 1,
        'field_label_alias' => 1,
        'field_operational_titles' => 1,
      ),
      'exposed' => array(
        'field_operational_units_tid' => '',
        'field_operational_roles_tid' => '',
        'field_operational_titles_tid' => '',
      ),
      'context' => array(
        0 => 'empty',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9662a316-efd4-4bb2-bdf4-94d845529400';
    $display->content['new-9662a316-efd4-4bb2-bdf4-94d845529400'] = $pane;
    $display->panels['gs3irc_middle'][2] = 'new-9662a316-efd4-4bb2-bdf4-94d845529400';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_13';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -17;
  $handler->conf = array(
    'title' => 'Why Give to Gladstone',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/34',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-0effa9ac-5415-41b3-8390-51f7f4cb0712';
    $pane->panel = 'gs3irc_inset';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><img alt="Bill Price" class="image-style-large" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/styles/large/public/general/Price-Bill-1400.jpg?itok=60VCKVKG" style="border: 0px; height: auto; max-width: 100%;" title="" /></p>

<p>Gladstone is focused on solving the most important diseases to the human race. They’re not just looking at incremental change or managing a condition, they’re looking at eliminating the disease within a reasonable time frame. And they know that to be innovative you have to break through established lanes. You have to go out on a limb.</p>

<p>&nbsp;</p>

<p style="margin: 0px 0px 1.5em;"><strong>William S. Price III</strong>, Chair,<br />
Gladstone Foundation Board<br />
Founding Partner, TPG Capital</p>
',
      'format' => 'limited_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0effa9ac-5415-41b3-8390-51f7f4cb0712';
    $display->content['new-0effa9ac-5415-41b3-8390-51f7f4cb0712'] = $pane;
    $display->panels['gs3irc_inset'][0] = 'new-0effa9ac-5415-41b3-8390-51f7f4cb0712';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_14';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -16;
  $handler->conf = array(
    'title' => 'Ways to Give',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/32',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-0effa9ac-5415-41b3-8390-51f7f4cb0712';
    $pane->panel = 'gs3irc_inset';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<img alt="Robin Richards-Donohoe" class="image-style-large" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/styles/large/public/general/Donohoe-Robin-750.jpg?itok=PUaWMaiF" style="border: 0px; height: auto; max-width: 100%;" title="" />


<p style="margin: 0px 0px 1.5em;">An investment in Gladstone is really an investment in the future of science, healthcare, and technology. If you’re interested in advancing these areas, you couldn’t put your resources anywhere better than Gladstone</p>

<p style="margin: 0px 0px 1.5em;"><strong>Robin Richards-Donohoe</strong><br />
Director, Gladstone Foundation<br />
Managing Director, Draper Intl.</p>

',
      'format' => 'limited_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0effa9ac-5415-41b3-8390-51f7f4cb0712';
    $display->content['new-0effa9ac-5415-41b3-8390-51f7f4cb0712'] = $pane;
    $display->panels['gs3irc_inset'][0] = 'new-0effa9ac-5415-41b3-8390-51f7f4cb0712';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_15';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -15;
  $handler->conf = array(
    'title' => 'Our Sponsors',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/33',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-0effa9ac-5415-41b3-8390-51f7f4cb0712';
    $pane->panel = 'gs3irc_inset';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><img alt="Rod Roddenberry" class="image-style-large" height="480" src="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/styles/large/public/general/Roddenberry-Rod-Portrait-1400.jpg?itok=fLTU3FqJ" style="border: 0px; height: auto; max-width: 100%;" width="386" /></p>

<p>Coming to Gladstone, seeing what they’re doing and talking to the scientists—so passionate and dedicated—it inspires me. They’re making breakthroughs by leaps and bounds. They give me hope.</p>

<p>&nbsp;</p>

<p style="margin: 0px 0px 1.5em;"><strong>Rod Roddenberry</strong><br />
Director, Roddenberry Foundation</p>
',
      'format' => 'limited_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0effa9ac-5415-41b3-8390-51f7f4cb0712';
    $display->content['new-0effa9ac-5415-41b3-8390-51f7f4cb0712'] = $pane;
    $display->panels['gs3irc_inset'][0] = 'new-0effa9ac-5415-41b3-8390-51f7f4cb0712';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_16';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -14;
  $handler->conf = array(
    'title' => 'Events for Scientists',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/35',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-29d00e74-b882-4892-850f-bf2a9948fa8f';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'event-event_month_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => '',
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
    $pane->uuid = '29d00e74-b882-4892-850f-bf2a9948fa8f';
    $display->content['new-29d00e74-b882-4892-850f-bf2a9948fa8f'] = $pane;
    $display->panels['gs3irc_middle'][2] = 'new-29d00e74-b882-4892-850f-bf2a9948fa8f';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_17';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -13;
  $handler->conf = array(
    'title' => 'Careers',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/55',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-5c93d459-f9d3-4a34-8c25-7ee90050373e';
    $pane->panel = 'gs3irc_inset';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="panels-ipe-portlet-wrapper panels-ipe-portlet-marker" id="panels-ipe-paneid-219" style="color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">
<div class="panels-ipe-portlet-content">
<section class="contextual-links-region panel-pane pane-fieldable-panels-pane pane-uuid-9e53d45d-aa31-4e0e-a676-d828a1f9a01f pane-bundle-quick-links block" style="outline: none; position: relative;">
<div class="block-inner clearfix" style="zoom: 1;">
<h2 class="pane-title block-title" style="margin: 0px; color: rgb(12, 74, 101);">Postdoc links</h2>

<div class="block-content">
<div class="fieldable-panels-pane">
<div class="field field-name-field-quick-links-links field-type-link-field field-label-hidden view-mode-full">
<div class="field-items">
<div class="field-item even"><a href="https://careers-gladstoneinstitutes.icims.com/" style="text-decoration: none; color: rgb(12, 74, 101);">Available Positions</a></div>

<div class="field-item odd"><a href="http://gladstonegala.ucsf.edu/connect/postdocs" style="text-decoration: none; color: rgb(12, 74, 101);">Office of Postdoctoral Affairs</a></div>

<div class="field-item even"><a href="http://gladstonegala.ucsf.edu/connect/postdocs" style="text-decoration: none; color: rgb(12, 74, 101);">Gladstone Benefit Summary</a></div>
</div>
</div>
</div>
</div>
</div>
</section>
</div>
</div>

<div class="panel-separator" style="color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">&nbsp;</div>

<div class="panels-ipe-portlet-wrapper panels-ipe-portlet-marker" id="panels-ipe-paneid-220" style="color: rgb(0, 0, 0); font-family: \'Trebuchet MS\', \'Helvetica Neue\', Arial, Helvetica, sans-serif; font-size: 14px; line-height: 21px;">
<div class="panels-ipe-portlet-content">
<section class="contextual-links-region panel-pane pane-fieldable-panels-pane pane-uuid-c87df1bf-9ff6-4a46-9a07-82ad13fca467 pane-bundle-basic-file block" style="outline: none; position: relative;">
<div class="block-inner clearfix" style="zoom: 1;">
<div class="contextual-links-wrapper contextual-links-processed" style="font-size: 13px; position: absolute; right: 5px; top: 2px; z-index: 999;"><a class="contextual-links-trigger" href="http://today.gladstone.internal:8888/current/builds/demo/node/30#" style="text-decoration: none; border: 1px solid transparent; display: block; height: 18px; margin: 0px; padding: 0px 2px; outline: none; text-indent: 34px; width: 28px; overflow: hidden; border-top-left-radius: 4px; border-top-right-radius: 4px; border-bottom-right-radius: 4px; border-bottom-left-radius: 4px; color: rgb(12, 74, 101); background: url(http://today.gladstone.internal:8888/current/builds/demo/modules/contextual/images/gear-select.png) 2px 0px no-repeat transparent;">Configure</a></div>

<h2 class="pane-title block-title" style="margin: 0px; color: rgb(12, 74, 101);">Download Gladstone Benefits Summary</h2>

<div class="block-content">
<div class="fieldable-panels-pane">
<div class="field field-name-field-basic-file-file field-type-file field-label-hidden view-mode-full">
<div class="field-items">
<div class="field-item even"><span class="file"><img alt="" class="file-icon" src="http://today.gladstone.internal:8888/current/builds/demo/modules/file/icons/application-pdf.png" style="border: 0px; height: auto; max-width: 100%; vertical-align: middle;" title="application/pdf" />&nbsp;<a href="http://today.gladstone.internal:8888/current/builds/demo/sites/default/files/general/Gladstone-2014-2015-Benefit-Summary.pdf" style="text-decoration: none; color: rgb(12, 74, 101);" type="application/pdf; length=847593">Gladstone-2014-2015-Benefit-Summary.pdf</a></span></div>
</div>
</div>
</div>
</div>
</div>
</section>
</div>
</div>
',
      'format' => 'limited_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5c93d459-f9d3-4a34-8c25-7ee90050373e';
    $display->content['new-5c93d459-f9d3-4a34-8c25-7ee90050373e'] = $pane;
    $display->panels['gs3irc_inset'][0] = 'new-5c93d459-f9d3-4a34-8c25-7ee90050373e';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelize_panel_context_18';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -12;
  $handler->conf = array(
    'title' => 'News and Highlights',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'z/92',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3irc';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3irc_header' => NULL,
      'gs3irc_top' => NULL,
      'gs3irc_sidebar' => NULL,
      'gs3irc_middle' => NULL,
      'gs3irc_inset' => NULL,
      'gs3irc_bottom' => NULL,
      'gs3irc_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47787ae9-c063-445d-af4f-cc95c56ac383';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane->panel = 'gs3irc_header';
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
    $pane->uuid = 'e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $display->content['new-e758fad8-9de1-40c0-bf53-1cdfb23615fb'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
    $pane = new stdClass();
    $pane->pid = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane->panel = 'gs3irc_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
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
    $pane->uuid = '76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $display->content['new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-76d49242-6b4c-49e3-aa07-e94f8f2cc75e';
    $pane = new stdClass();
    $pane->pid = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $pane = new stdClass();
    $pane->pid = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $pane = new stdClass();
    $pane->pid = 'new-e5b615c1-d290-4fa7-8874-cdc8a553d2a0';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-news_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'fields_override' => array(
        'field_text' => 1,
        'title' => 1,
        'body' => 1,
      ),
      'context' => array(
        0 => 'empty',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e5b615c1-d290-4fa7-8874-cdc8a553d2a0';
    $display->content['new-e5b615c1-d290-4fa7-8874-cdc8a553d2a0'] = $pane;
    $display->panels['gs3irc_middle'][2] = 'new-e5b615c1-d290-4fa7-8874-cdc8a553d2a0';
    $pane = new stdClass();
    $pane->pid = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $pane->panel = 'gs3irc_sidebar';
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
    $pane->uuid = 'ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
    $display->content['new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-ccdfc11b-ee2f-4356-89bd-57827c5adb0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e758fad8-9de1-40c0-bf53-1cdfb23615fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['panelize'] = $page;

  return $pages;

}
