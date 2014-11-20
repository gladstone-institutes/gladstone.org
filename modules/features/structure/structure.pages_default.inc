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
  $page->access = array();
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
    'pipeline' => 'standard',
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
  $handler->name = 'page_panelize_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'panelize';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
    $display->content['new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-6baa05bd-5ffb-43e6-bffb-b6fd941126c7';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
    $display->content['new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-40cbe226-8ceb-47b4-95eb-b1ab801cf34c';
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
