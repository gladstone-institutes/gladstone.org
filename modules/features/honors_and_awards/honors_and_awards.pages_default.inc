<?php
/**
 * @file
 * honors_and_awards.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function honors_and_awards_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'honors_and_awards';
  $page->task = 'page';
  $page->admin_title = 'Honors and Awards';
  $page->admin_description = '';
  $page->path = 'honors_and_awards/%variant/%uuid';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'variant' => array(
      'id' => 1,
      'identifier' => 'Variant',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          3 => '3',
          2 => 0,
          5 => 0,
          6 => 0,
          1 => 0,
          4 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 1,
      ),
    ),
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
  $handler->name = 'page_honors_and_awards_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'honors_and_awards';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Node',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'or',
      'plugins' => array(
        0 => array(
          'name' => 'term_uuid',
          'settings' => array(
            'vocabulary_machine_name' => 'structure',
            'research' => array(),
            'event_type' => array(),
            'honors_and_awards' => array(),
            'operational_units' => array(),
            'structure' => array(
              'f6c4eda2-4491-4fbf-9831-3a78f0b69b14' => 'f6c4eda2-4491-4fbf-9831-3a78f0b69b14',
            ),
            'event_calendar_status' => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs2irr';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs2irr_header' => NULL,
      'gs2irr_top' => NULL,
      'gs2irr_sidebar' => NULL,
      'gs2irr_inset' => NULL,
      'gs2irr_bottom' => NULL,
      'gs2irr_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '78930a66-75bb-4a3a-8713-7e875c70c981';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cd2c07ae-9e34-403e-beb2-2a74e1791859';
    $pane->panel = 'gs2irr_header';
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
    $pane->uuid = 'cd2c07ae-9e34-403e-beb2-2a74e1791859';
    $display->content['new-cd2c07ae-9e34-403e-beb2-2a74e1791859'] = $pane;
    $display->panels['gs2irr_header'][0] = 'new-cd2c07ae-9e34-403e-beb2-2a74e1791859';
    $pane = new stdClass();
    $pane->pid = 'new-0fe2cd39-284e-48e0-8cc9-5504aed9118a';
    $pane->panel = 'gs2irr_header';
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
    $pane->uuid = '0fe2cd39-284e-48e0-8cc9-5504aed9118a';
    $display->content['new-0fe2cd39-284e-48e0-8cc9-5504aed9118a'] = $pane;
    $display->panels['gs2irr_header'][1] = 'new-0fe2cd39-284e-48e0-8cc9-5504aed9118a';
    $pane = new stdClass();
    $pane->pid = 'new-cc080b81-b481-4185-bb3c-4a4b35685975';
    $pane->panel = 'gs2irr_inset';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'cc080b81-b481-4185-bb3c-4a4b35685975';
    $display->content['new-cc080b81-b481-4185-bb3c-4a4b35685975'] = $pane;
    $display->panels['gs2irr_inset'][0] = 'new-cc080b81-b481-4185-bb3c-4a4b35685975';
    $pane = new stdClass();
    $pane->pid = 'new-fee9a22f-d917-41fc-a8f0-2ed119d7c114';
    $pane->panel = 'gs2irr_sidebar';
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
    $pane->uuid = 'fee9a22f-d917-41fc-a8f0-2ed119d7c114';
    $display->content['new-fee9a22f-d917-41fc-a8f0-2ed119d7c114'] = $pane;
    $display->panels['gs2irr_sidebar'][0] = 'new-fee9a22f-d917-41fc-a8f0-2ed119d7c114';
    $pane = new stdClass();
    $pane->pid = 'new-c579445e-ba6b-41bb-beb0-1035b4ef84d0';
    $pane->panel = 'gs2irr_top';
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
    $pane->uuid = 'c579445e-ba6b-41bb-beb0-1035b4ef84d0';
    $display->content['new-c579445e-ba6b-41bb-beb0-1035b4ef84d0'] = $pane;
    $display->panels['gs2irr_top'][0] = 'new-c579445e-ba6b-41bb-beb0-1035b4ef84d0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_honors_and_awards_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'honors_and_awards';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Directory (all awards)',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_uuid',
          'settings' => array(
            'vocabulary_machine_name' => 'structure',
            'research' => array(),
            'event_type' => array(),
            'honors_and_awards' => array(),
            'operational_units' => array(),
            'structure' => array(
              '8d3c4af2-7287-4db4-ae58-0241ee539f1e' => '8d3c4af2-7287-4db4-ae58-0241ee539f1e',
            ),
            'event_calendar_status' => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
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
  $display->uuid = '4ea07e71-a370-4182-825f-13dd482d1f97';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b5b627d1-e214-4dcc-8949-4ae77c36ebe9';
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
    $pane->uuid = 'b5b627d1-e214-4dcc-8949-4ae77c36ebe9';
    $display->content['new-b5b627d1-e214-4dcc-8949-4ae77c36ebe9'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-b5b627d1-e214-4dcc-8949-4ae77c36ebe9';
    $pane = new stdClass();
    $pane->pid = 'new-52674c34-ec70-494f-b793-bda9ea941503';
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
    $pane->uuid = '52674c34-ec70-494f-b793-bda9ea941503';
    $display->content['new-52674c34-ec70-494f-b793-bda9ea941503'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-52674c34-ec70-494f-b793-bda9ea941503';
    $pane = new stdClass();
    $pane->pid = 'new-3ad61a68-972d-479c-acda-7a1215911925';
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
    $pane->uuid = '3ad61a68-972d-479c-acda-7a1215911925';
    $display->content['new-3ad61a68-972d-479c-acda-7a1215911925'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-3ad61a68-972d-479c-acda-7a1215911925';
    $pane = new stdClass();
    $pane->pid = 'new-4a96522b-c35b-49c2-b30e-0eb64c614041';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'honors_and_awards-awards_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'offset' => '0',
      'fields_override' => array(
        'title' => 1,
        'nid' => 1,
        'field_honor_and_award' => 1,
        'field_date_mmyy' => 1,
        'field_honors_and_awards_rels' => 1,
        'body' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => '',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4a96522b-c35b-49c2-b30e-0eb64c614041';
    $display->content['new-4a96522b-c35b-49c2-b30e-0eb64c614041'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-4a96522b-c35b-49c2-b30e-0eb64c614041';
    $pane = new stdClass();
    $pane->pid = 'new-1bcb8a5d-c94a-46f2-a53a-6f99aa8dbbfe';
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
    $pane->uuid = '1bcb8a5d-c94a-46f2-a53a-6f99aa8dbbfe';
    $display->content['new-1bcb8a5d-c94a-46f2-a53a-6f99aa8dbbfe'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-1bcb8a5d-c94a-46f2-a53a-6f99aa8dbbfe';
    $pane = new stdClass();
    $pane->pid = 'new-bcfd8b05-7530-4252-9873-8f69b59e0ba1';
    $pane->panel = 'gs3irc_top';
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
    $pane->uuid = 'bcfd8b05-7530-4252-9873-8f69b59e0ba1';
    $display->content['new-bcfd8b05-7530-4252-9873-8f69b59e0ba1'] = $pane;
    $display->panels['gs3irc_top'][0] = 'new-bcfd8b05-7530-4252-9873-8f69b59e0ba1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['honors_and_awards'] = $page;

  return $pages;

}
