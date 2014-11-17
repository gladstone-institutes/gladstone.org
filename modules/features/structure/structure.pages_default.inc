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
  $page->name = 'node_uuid';
  $page->task = 'page';
  $page->admin_title = 'Node UUID';
  $page->admin_description = 'Node UUID redirect';
  $page->path = 'uuid/%uuid';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'uuid' => array(
      'id' => 1,
      'identifier' => 'Node: UUID',
      'name' => 'entity_uuid:node',
      'settings' => array(),
    ),
  );
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_node_uuid_http_response';
  $handler->task = 'page';
  $handler->subtask = 'node_uuid';
  $handler->handler = 'http_response';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Redirect Disallowed Types',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => '%uuid:content-type:machine-name/node/%uuid:uuid',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'basic_page' => 'basic_page',
              'site_page' => 'site_page',
            ),
          ),
          'context' => 'argument_entity_uuid:node_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_node_uuid_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'node_uuid';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Standard Page',
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
  $display->uuid = '077b39bb-8e0e-487d-be4f-ed07918a00af';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c066c3aa-10a4-4a36-910f-a9c115905955';
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
    $pane->uuid = 'c066c3aa-10a4-4a36-910f-a9c115905955';
    $display->content['new-c066c3aa-10a4-4a36-910f-a9c115905955'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-c066c3aa-10a4-4a36-910f-a9c115905955';
    $pane = new stdClass();
    $pane->pid = 'new-0157a093-c683-4764-9f8e-3cedd62b61d6';
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
    $pane->uuid = '0157a093-c683-4764-9f8e-3cedd62b61d6';
    $display->content['new-0157a093-c683-4764-9f8e-3cedd62b61d6'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-0157a093-c683-4764-9f8e-3cedd62b61d6';
    $pane = new stdClass();
    $pane->pid = 'new-2d720905-5b4a-4fd3-9164-4f7ccaeb174b';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_uuid:node_1',
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
    $pane->uuid = '2d720905-5b4a-4fd3-9164-4f7ccaeb174b';
    $display->content['new-2d720905-5b4a-4fd3-9164-4f7ccaeb174b'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-2d720905-5b4a-4fd3-9164-4f7ccaeb174b';
    $pane = new stdClass();
    $pane->pid = 'new-aeae536c-a008-403e-8e63-d128122825c8';
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
      'context' => 'argument_entity_uuid:node_1',
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
    $pane->uuid = 'aeae536c-a008-403e-8e63-d128122825c8';
    $display->content['new-aeae536c-a008-403e-8e63-d128122825c8'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-aeae536c-a008-403e-8e63-d128122825c8';
    $pane = new stdClass();
    $pane->pid = 'new-0cf6f371-3ad5-4b0d-9217-ce6035dca54e';
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
    $pane->uuid = '0cf6f371-3ad5-4b0d-9217-ce6035dca54e';
    $display->content['new-0cf6f371-3ad5-4b0d-9217-ce6035dca54e'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-0cf6f371-3ad5-4b0d-9217-ce6035dca54e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0cf6f371-3ad5-4b0d-9217-ce6035dca54e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['node_uuid'] = $page;

  return $pages;

}
