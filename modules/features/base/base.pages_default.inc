<?php
/**
 * @file
 * base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function base_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_http_response';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Redirect Disallowed Types',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => '%node:content-type:machine-name/node/%node:uuid',
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
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_view_http_response'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'gs3_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3_25_50_25_header' => NULL,
      'gs3_25_50_25_top' => NULL,
      'gs3_25_50_25_sidebar' => NULL,
      'gs3_25_50_25_middle' => NULL,
      'gs3_25_50_25_inset' => NULL,
      'gs3_25_50_25_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f841ad28-4617-4f46-882b-0a45d6a95e7e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-36dc5df3-2aed-401f-aadb-87de5b9c78d3';
    $pane->panel = 'gs3_25_50_25_header';
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
    $pane->uuid = '36dc5df3-2aed-401f-aadb-87de5b9c78d3';
    $display->content['new-36dc5df3-2aed-401f-aadb-87de5b9c78d3'] = $pane;
    $display->panels['gs3_25_50_25_header'][0] = 'new-36dc5df3-2aed-401f-aadb-87de5b9c78d3';
    $pane = new stdClass();
    $pane->pid = 'new-115df164-5146-4b66-9a38-e261d1c3c1d5';
    $pane->panel = 'gs3_25_50_25_inset';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
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
    $pane->uuid = '115df164-5146-4b66-9a38-e261d1c3c1d5';
    $display->content['new-115df164-5146-4b66-9a38-e261d1c3c1d5'] = $pane;
    $display->panels['gs3_25_50_25_inset'][0] = 'new-115df164-5146-4b66-9a38-e261d1c3c1d5';
    $pane = new stdClass();
    $pane->pid = 'new-dd768b8d-a1a8-4dc0-9277-20ef249ec6fc';
    $pane->panel = 'gs3_25_50_25_middle';
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
    $pane->uuid = 'dd768b8d-a1a8-4dc0-9277-20ef249ec6fc';
    $display->content['new-dd768b8d-a1a8-4dc0-9277-20ef249ec6fc'] = $pane;
    $display->panels['gs3_25_50_25_middle'][0] = 'new-dd768b8d-a1a8-4dc0-9277-20ef249ec6fc';
    $pane = new stdClass();
    $pane->pid = 'new-848181ad-3974-4f21-890e-5b188fa9f048';
    $pane->panel = 'gs3_25_50_25_sidebar';
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
    $pane->uuid = '848181ad-3974-4f21-890e-5b188fa9f048';
    $display->content['new-848181ad-3974-4f21-890e-5b188fa9f048'] = $pane;
    $display->panels['gs3_25_50_25_sidebar'][0] = 'new-848181ad-3974-4f21-890e-5b188fa9f048';
    $pane = new stdClass();
    $pane->pid = 'new-f7eac49d-595b-4618-97eb-cfff180efef5';
    $pane->panel = 'gs3_25_50_25_top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
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
    $pane->uuid = 'f7eac49d-595b-4618-97eb-cfff180efef5';
    $display->content['new-f7eac49d-595b-4618-97eb-cfff180efef5'] = $pane;
    $display->panels['gs3_25_50_25_top'][0] = 'new-f7eac49d-595b-4618-97eb-cfff180efef5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-848181ad-3974-4f21-890e-5b188fa9f048';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
