<?php
/**
 * @file
 * ontology.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ontology_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
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
  $display->layout = 'gs2_25_75';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs2_25_75_header' => NULL,
      'gs2_25_75_sidebar' => NULL,
      'gs2_25_75_inset' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '64cf99be-dae3-45a8-8d06-5e596ff4cf2a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cc4f55d8-f9cc-4933-a023-e3fca6d09626';
    $pane->panel = 'gs2_25_75_inset';
    $pane->type = 'term_list';
    $pane->subtype = 'term_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'title' => NULL,
      'type' => 'sibling',
      'list_type' => 'ul',
      'path' => 'taxonomy/term',
      'context' => 'argument_term_1',
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
    $pane->uuid = 'cc4f55d8-f9cc-4933-a023-e3fca6d09626';
    $display->content['new-cc4f55d8-f9cc-4933-a023-e3fca6d09626'] = $pane;
    $display->panels['gs2_25_75_inset'][0] = 'new-cc4f55d8-f9cc-4933-a023-e3fca6d09626';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cc4f55d8-f9cc-4933-a023-e3fca6d09626';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Honors and Awards',
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
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'honors_and_awards' => 'honors_and_awards',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs2_25_75';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs2_25_75_header' => NULL,
      'gs2_25_75_sidebar' => NULL,
      'gs2_25_75_inset' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '64cf99be-dae3-45a8-8d06-5e596ff4cf2a';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  return $export;
}
