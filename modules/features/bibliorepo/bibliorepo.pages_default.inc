<?php
/**
 * @file
 * bibliorepo.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function bibliorepo_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_biblio_panel_context';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'biblio';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Author Publications',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Biblio Author',
        'keyword' => 'biblio_cid',
        'name' => 'query_string',
        'key' => 'f[author]',
        'fallback_value' => '',
        'id' => 1,
      ),
    ),
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
  $display->title = 'Publications';
  $display->uuid = 'bc970728-2fde-4ff2-8f22-91f42579d968';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ae167e41-76b6-411d-9299-1c6f13974b72';
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
    $pane->uuid = 'ae167e41-76b6-411d-9299-1c6f13974b72';
    $display->content['new-ae167e41-76b6-411d-9299-1c6f13974b72'] = $pane;
    $display->panels['gs2_25_75_header'][0] = 'new-ae167e41-76b6-411d-9299-1c6f13974b72';
    $pane = new stdClass();
    $pane->pid = 'new-4ebd33ee-c423-472c-8844-6e17bd67c4ed';
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
    $pane->uuid = '4ebd33ee-c423-472c-8844-6e17bd67c4ed';
    $display->content['new-4ebd33ee-c423-472c-8844-6e17bd67c4ed'] = $pane;
    $display->panels['gs2_25_75_header'][1] = 'new-4ebd33ee-c423-472c-8844-6e17bd67c4ed';
    $pane = new stdClass();
    $pane->pid = 'new-106f8c9c-9bb0-4c75-b4c9-e5ea0e359047';
    $pane->panel = 'gs2_25_75_inset';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Title',
      'title' => '',
      'body' => '<h2>Publications</h2>',
      'format' => 'php_code',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '106f8c9c-9bb0-4c75-b4c9-e5ea0e359047';
    $display->content['new-106f8c9c-9bb0-4c75-b4c9-e5ea0e359047'] = $pane;
    $display->panels['gs2_25_75_inset'][0] = 'new-106f8c9c-9bb0-4c75-b4c9-e5ea0e359047';
    $pane = new stdClass();
    $pane->pid = 'new-ddeb7b54-2c30-4580-a1d7-955448c02d07';
    $pane->panel = 'gs2_25_75_inset';
    $pane->type = 'views_panes';
    $pane->subtype = 'biblio-cid_nodes_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_query_string_1',
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
    $pane->uuid = 'ddeb7b54-2c30-4580-a1d7-955448c02d07';
    $display->content['new-ddeb7b54-2c30-4580-a1d7-955448c02d07'] = $pane;
    $display->panels['gs2_25_75_inset'][1] = 'new-ddeb7b54-2c30-4580-a1d7-955448c02d07';
    $pane = new stdClass();
    $pane->pid = 'new-917cfca5-6d84-4252-a1f0-933f5645ee52';
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
    $pane->uuid = '917cfca5-6d84-4252-a1f0-933f5645ee52';
    $display->content['new-917cfca5-6d84-4252-a1f0-933f5645ee52'] = $pane;
    $display->panels['gs2_25_75_sidebar'][0] = 'new-917cfca5-6d84-4252-a1f0-933f5645ee52';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_biblio_panel_context'] = $handler;

  return $export;
}

