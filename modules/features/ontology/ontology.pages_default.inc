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
    'contexts' => array(
      0 => array(
        'identifier' => 'Taxonomy term (UUID)',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_uuid:taxonomy_term',
        'uuid' => '379f631e-2df1-4d0e-b53a-0c97b37636d5',
        'id' => 1,
      ),
    ),
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
    $pane = new stdClass();
    $pane->pid = 'new-5ed639ec-b682-4d49-b87c-cbc07d3fea6d';
    $pane->panel = 'gs2_25_75_header';
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
    $pane->uuid = '5ed639ec-b682-4d49-b87c-cbc07d3fea6d';
    $display->content['new-5ed639ec-b682-4d49-b87c-cbc07d3fea6d'] = $pane;
    $display->panels['gs2_25_75_header'][0] = 'new-5ed639ec-b682-4d49-b87c-cbc07d3fea6d';
    $pane = new stdClass();
    $pane->pid = 'new-bd227db2-882c-454e-a8c7-4b48fb7f78dd';
    $pane->panel = 'gs2_25_75_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 0,
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
    $pane->uuid = 'bd227db2-882c-454e-a8c7-4b48fb7f78dd';
    $display->content['new-bd227db2-882c-454e-a8c7-4b48fb7f78dd'] = $pane;
    $display->panels['gs2_25_75_header'][1] = 'new-bd227db2-882c-454e-a8c7-4b48fb7f78dd';
    $pane = new stdClass();
    $pane->pid = 'new-caeb39c2-e6fc-4b8e-9826-83ff61cc7f37';
    $pane->panel = 'gs2_25_75_inset';
    $pane->type = 'views_panes';
    $pane->subtype = 'honors_and_awards_terms-award_recipients_by_term';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'caeb39c2-e6fc-4b8e-9826-83ff61cc7f37';
    $display->content['new-caeb39c2-e6fc-4b8e-9826-83ff61cc7f37'] = $pane;
    $display->panels['gs2_25_75_inset'][0] = 'new-caeb39c2-e6fc-4b8e-9826-83ff61cc7f37';
    $pane = new stdClass();
    $pane->pid = 'new-b28308db-3692-4dcf-97b8-ef254c92dadb';
    $pane->panel = 'gs2_25_75_sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'b28308db-3692-4dcf-97b8-ef254c92dadb';
    $display->content['new-b28308db-3692-4dcf-97b8-ef254c92dadb'] = $pane;
    $display->panels['gs2_25_75_sidebar'][0] = 'new-b28308db-3692-4dcf-97b8-ef254c92dadb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  return $export;
}
