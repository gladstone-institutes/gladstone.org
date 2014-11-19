<?php
/**
 * @file
 * institute.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function institute_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'institute';
  $page->task = 'page';
  $page->admin_title = 'Institute';
  $page->admin_description = 'Standardized display of institute pages ';
  $page->path = 'institute/%institute/%variant/%nid';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'institute' => array(
      'id' => 1,
      'identifier' => 'Institute',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          2 => '2',
          3 => 0,
          7 => 0,
          5 => 0,
          6 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          4 => 0,
          1 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 1,
      ),
    ),
    'variant' => array(
      'id' => 2,
      'identifier' => 'Variant',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          4 => '4',
          3 => 0,
          7 => 0,
          5 => 0,
          6 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          2 => 0,
          1 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 1,
      ),
    ),
    'nid' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_institute_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'institute';
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
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'term_uuid',
          'settings' => array(
            'vocabulary_machine_name' => 'structure',
            'research' => array(),
            'concentration_of_study' => array(),
            'event_type' => array(),
            'honors_and_awards' => array(),
            'institution_operational_unit' => array(),
            'institutions' => array(),
            'operational_roles' => array(),
            'operational_titles' => array(),
            'operational_units' => array(),
            'structure' => array(
              '2e99b285-9f9a-410c-a2b9-43a881ba10ab' => '2e99b285-9f9a-410c-a2b9-43a881ba10ab',
            ),
            'event_calendar_status' => array(),
          ),
          'context' => 'argument_term_2',
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
  $display->uuid = '2b337c17-d13f-495a-b064-3fc29cf642f8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
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
    $pane->uuid = '3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $display->content['new-3e44f9a7-1696-4abc-9b0a-687099c95a74'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $pane = new stdClass();
    $pane->pid = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
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
    $pane->uuid = '69104fa5-9c29-496a-8451-02a3fb44cca3';
    $display->content['new-69104fa5-9c29-496a-8451-02a3fb44cca3'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
    $pane = new stdClass();
    $pane->pid = 'new-2abf165e-b6d1-425b-8110-9f047c318c65';
    $pane->panel = 'gs3irc_inset';
    $pane->type = 'views_panes';
    $pane->subtype = 'directory_widgets-directory_widget_role_list_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'offset' => '0',
      'fields_override' => array(
        'user' => 1,
        'field_label_alias' => 1,
        'field_operational_roles' => 1,
      ),
      'exposed' => array(
        'field_operational_units_tid' => '',
        'field_operational_roles_tid' => 'Director, Associate Director, Investigator',
        'field_operational_titles_tid' => '',
      ),
      'context' => array(
        0 => 'argument_term_1',
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
    $pane->uuid = '2abf165e-b6d1-425b-8110-9f047c318c65';
    $display->content['new-2abf165e-b6d1-425b-8110-9f047c318c65'] = $pane;
    $display->panels['gs3irc_inset'][0] = 'new-2abf165e-b6d1-425b-8110-9f047c318c65';
    $pane = new stdClass();
    $pane->pid = 'new-91101530-9803-45aa-a145-2734336eb166';
    $pane->panel = 'gs3irc_inset';
    $pane->type = 'views_panes';
    $pane->subtype = 'biblio-publications_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '5',
      'offset' => '0',
      'fields_override' => array(
        'citation' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => '',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '91101530-9803-45aa-a145-2734336eb166';
    $display->content['new-91101530-9803-45aa-a145-2734336eb166'] = $pane;
    $display->panels['gs3irc_inset'][1] = 'new-91101530-9803-45aa-a145-2734336eb166';
    $pane = new stdClass();
    $pane->pid = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $display->content['new-c131e3ab-1418-460a-a869-67e9b6dfd94d'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $pane = new stdClass();
    $pane->pid = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $display->content['new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $pane = new stdClass();
    $pane->pid = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
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
    $pane->uuid = '8f8e58b3-3478-4030-b689-c82c207884a3';
    $display->content['new-8f8e58b3-3478-4030-b689-c82c207884a3'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_institute_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'institute';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Director\'s Vision',
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
          'name' => 'term_uuid',
          'settings' => array(
            'vocabulary_machine_name' => 'structure',
            'research' => array(),
            'concentration_of_study' => array(),
            'event_type' => array(),
            'honors_and_awards' => array(),
            'institution_operational_unit' => array(),
            'institutions' => array(),
            'operational_roles' => array(),
            'operational_titles' => array(),
            'operational_units' => array(),
            'structure' => array(
              '71dc946d-318f-45e6-a484-d1b2dbcfcca4' => '71dc946d-318f-45e6-a484-d1b2dbcfcca4',
            ),
            'event_calendar_status' => array(),
          ),
          'context' => 'argument_term_2',
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
  $display->uuid = '2b337c17-d13f-495a-b064-3fc29cf642f8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
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
    $pane->uuid = '3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $display->content['new-3e44f9a7-1696-4abc-9b0a-687099c95a74'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $pane = new stdClass();
    $pane->pid = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
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
    $pane->uuid = '69104fa5-9c29-496a-8451-02a3fb44cca3';
    $display->content['new-69104fa5-9c29-496a-8451-02a3fb44cca3'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
    $pane = new stdClass();
    $pane->pid = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $display->content['new-c131e3ab-1418-460a-a869-67e9b6dfd94d'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $pane = new stdClass();
    $pane->pid = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $display->content['new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $pane = new stdClass();
    $pane->pid = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
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
    $pane->uuid = '8f8e58b3-3478-4030-b689-c82c207884a3';
    $display->content['new-8f8e58b3-3478-4030-b689-c82c207884a3'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_institute_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'institute';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Areas of Investigation',
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
          'name' => 'term_uuid',
          'settings' => array(
            'vocabulary_machine_name' => 'structure',
            'research' => array(),
            'concentration_of_study' => array(),
            'event_type' => array(),
            'honors_and_awards' => array(),
            'institution_operational_unit' => array(),
            'institutions' => array(),
            'operational_roles' => array(),
            'operational_titles' => array(),
            'operational_units' => array(),
            'structure' => array(
              'f056f1a8-e1c6-4adf-b9af-63a9084cfe63' => 'f056f1a8-e1c6-4adf-b9af-63a9084cfe63',
            ),
            'event_calendar_status' => array(),
          ),
          'context' => 'argument_term_2',
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
  $display->uuid = '2b337c17-d13f-495a-b064-3fc29cf642f8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
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
    $pane->uuid = '3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $display->content['new-3e44f9a7-1696-4abc-9b0a-687099c95a74'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $pane = new stdClass();
    $pane->pid = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
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
    $pane->uuid = '69104fa5-9c29-496a-8451-02a3fb44cca3';
    $display->content['new-69104fa5-9c29-496a-8451-02a3fb44cca3'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
    $pane = new stdClass();
    $pane->pid = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $display->content['new-c131e3ab-1418-460a-a869-67e9b6dfd94d'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $pane = new stdClass();
    $pane->pid = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $display->content['new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $pane = new stdClass();
    $pane->pid = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
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
    $pane->uuid = '8f8e58b3-3478-4030-b689-c82c207884a3';
    $display->content['new-8f8e58b3-3478-4030-b689-c82c207884a3'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_institute_panel_context_4';
  $handler->task = 'page';
  $handler->subtask = 'institute';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Advisory Board',
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
          'name' => 'term_uuid',
          'settings' => array(
            'vocabulary_machine_name' => 'structure',
            'research' => array(),
            'concentration_of_study' => array(),
            'event_type' => array(),
            'honors_and_awards' => array(),
            'institution_operational_unit' => array(),
            'institutions' => array(),
            'operational_roles' => array(),
            'operational_titles' => array(),
            'operational_units' => array(),
            'structure' => array(
              'e3b94d32-ec1c-4903-b721-7de4207df68f' => 'e3b94d32-ec1c-4903-b721-7de4207df68f',
            ),
            'event_calendar_status' => array(),
          ),
          'context' => 'argument_term_2',
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
  $display->uuid = '2b337c17-d13f-495a-b064-3fc29cf642f8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
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
    $pane->uuid = '3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $display->content['new-3e44f9a7-1696-4abc-9b0a-687099c95a74'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $pane = new stdClass();
    $pane->pid = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
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
    $pane->uuid = '69104fa5-9c29-496a-8451-02a3fb44cca3';
    $display->content['new-69104fa5-9c29-496a-8451-02a3fb44cca3'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
    $pane = new stdClass();
    $pane->pid = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $display->content['new-c131e3ab-1418-460a-a869-67e9b6dfd94d'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $pane = new stdClass();
    $pane->pid = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $display->content['new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $pane = new stdClass();
    $pane->pid = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
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
    $pane->uuid = '8f8e58b3-3478-4030-b689-c82c207884a3';
    $display->content['new-8f8e58b3-3478-4030-b689-c82c207884a3'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_institute_panel_context_5';
  $handler->task = 'page';
  $handler->subtask = 'institute';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Research Centers',
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
          'name' => 'term_uuid',
          'settings' => array(
            'vocabulary_machine_name' => 'structure',
            'research' => array(),
            'concentration_of_study' => array(),
            'event_type' => array(),
            'honors_and_awards' => array(),
            'institution_operational_unit' => array(),
            'institutions' => array(),
            'operational_roles' => array(),
            'operational_titles' => array(),
            'operational_units' => array(),
            'structure' => array(
              '1b994441-32a4-4e24-96de-cb6a2dcbe62a' => '1b994441-32a4-4e24-96de-cb6a2dcbe62a',
            ),
            'event_calendar_status' => array(),
          ),
          'context' => 'argument_term_2',
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
  $display->uuid = '2b337c17-d13f-495a-b064-3fc29cf642f8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
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
    $pane->uuid = '3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $display->content['new-3e44f9a7-1696-4abc-9b0a-687099c95a74'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $pane = new stdClass();
    $pane->pid = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
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
    $pane->uuid = '69104fa5-9c29-496a-8451-02a3fb44cca3';
    $display->content['new-69104fa5-9c29-496a-8451-02a3fb44cca3'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
    $pane = new stdClass();
    $pane->pid = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $display->content['new-c131e3ab-1418-460a-a869-67e9b6dfd94d'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $pane = new stdClass();
    $pane->pid = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $display->content['new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $pane = new stdClass();
    $pane->pid = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
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
    $pane->uuid = '8f8e58b3-3478-4030-b689-c82c207884a3';
    $display->content['new-8f8e58b3-3478-4030-b689-c82c207884a3'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_institute_panel_context_6';
  $handler->task = 'page';
  $handler->subtask = 'institute';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Recent Advances',
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
          'name' => 'term_uuid',
          'settings' => array(
            'vocabulary_machine_name' => 'structure',
            'research' => array(),
            'concentration_of_study' => array(),
            'event_type' => array(),
            'honors_and_awards' => array(),
            'institution_operational_unit' => array(),
            'institutions' => array(),
            'operational_roles' => array(),
            'operational_titles' => array(),
            'operational_units' => array(),
            'structure' => array(
              '0c97f50d-5702-40ac-afd5-0f9667100d61' => '0c97f50d-5702-40ac-afd5-0f9667100d61',
            ),
            'event_calendar_status' => array(),
          ),
          'context' => 'argument_term_2',
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
  $display->uuid = '2b337c17-d13f-495a-b064-3fc29cf642f8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
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
    $pane->uuid = '3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $display->content['new-3e44f9a7-1696-4abc-9b0a-687099c95a74'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $pane = new stdClass();
    $pane->pid = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
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
    $pane->uuid = '69104fa5-9c29-496a-8451-02a3fb44cca3';
    $display->content['new-69104fa5-9c29-496a-8451-02a3fb44cca3'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
    $pane = new stdClass();
    $pane->pid = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $display->content['new-c131e3ab-1418-460a-a869-67e9b6dfd94d'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $pane = new stdClass();
    $pane->pid = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $display->content['new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $pane = new stdClass();
    $pane->pid = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
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
    $pane->uuid = '8f8e58b3-3478-4030-b689-c82c207884a3';
    $display->content['new-8f8e58b3-3478-4030-b689-c82c207884a3'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_institute_panel_context_7';
  $handler->task = 'page';
  $handler->subtask = 'institute';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'Honors & Awards',
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
          'name' => 'term_uuid',
          'settings' => array(
            'vocabulary_machine_name' => 'structure',
            'research' => array(),
            'concentration_of_study' => array(),
            'event_type' => array(),
            'honors_and_awards' => array(),
            'institution_operational_unit' => array(),
            'institutions' => array(),
            'operational_roles' => array(),
            'operational_titles' => array(),
            'operational_units' => array(),
            'structure' => array(
              '379f631e-2df1-4d0e-b53a-0c97b37636d5' => '379f631e-2df1-4d0e-b53a-0c97b37636d5',
            ),
            'event_calendar_status' => array(),
          ),
          'context' => 'argument_term_2',
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
  $display->uuid = '2b337c17-d13f-495a-b064-3fc29cf642f8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
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
    $pane->uuid = '3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $display->content['new-3e44f9a7-1696-4abc-9b0a-687099c95a74'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $pane = new stdClass();
    $pane->pid = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
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
    $pane->uuid = '69104fa5-9c29-496a-8451-02a3fb44cca3';
    $display->content['new-69104fa5-9c29-496a-8451-02a3fb44cca3'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
    $pane = new stdClass();
    $pane->pid = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $display->content['new-c131e3ab-1418-460a-a869-67e9b6dfd94d'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $pane = new stdClass();
    $pane->pid = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $display->content['new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $pane = new stdClass();
    $pane->pid = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
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
    $pane->uuid = '8f8e58b3-3478-4030-b689-c82c207884a3';
    $display->content['new-8f8e58b3-3478-4030-b689-c82c207884a3'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_institute_panel_context_8';
  $handler->task = 'page';
  $handler->subtask = 'institute';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'Publications',
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
          'name' => 'term_uuid',
          'settings' => array(
            'vocabulary_machine_name' => 'structure',
            'research' => array(),
            'concentration_of_study' => array(),
            'event_type' => array(),
            'honors_and_awards' => array(),
            'institution_operational_unit' => array(),
            'institutions' => array(),
            'operational_roles' => array(),
            'operational_titles' => array(),
            'operational_units' => array(),
            'structure' => array(
              'd3bc1352-edcf-404d-8284-74405d1cb251' => 'd3bc1352-edcf-404d-8284-74405d1cb251',
            ),
            'event_calendar_status' => array(),
          ),
          'context' => 'argument_term_2',
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
  $display->uuid = '2b337c17-d13f-495a-b064-3fc29cf642f8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
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
    $pane->uuid = '3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $display->content['new-3e44f9a7-1696-4abc-9b0a-687099c95a74'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $pane = new stdClass();
    $pane->pid = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
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
    $pane->uuid = '69104fa5-9c29-496a-8451-02a3fb44cca3';
    $display->content['new-69104fa5-9c29-496a-8451-02a3fb44cca3'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
    $pane = new stdClass();
    $pane->pid = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $display->content['new-c131e3ab-1418-460a-a869-67e9b6dfd94d'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $pane = new stdClass();
    $pane->pid = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $display->content['new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $pane = new stdClass();
    $pane->pid = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
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
    $pane->uuid = '8f8e58b3-3478-4030-b689-c82c207884a3';
    $display->content['new-8f8e58b3-3478-4030-b689-c82c207884a3'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_institute_panel_context_9';
  $handler->task = 'page';
  $handler->subtask = 'institute';
  $handler->handler = 'panel_context';
  $handler->weight = 8;
  $handler->conf = array(
    'title' => 'Events',
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
          'name' => 'term_uuid',
          'settings' => array(
            'vocabulary_machine_name' => 'structure',
            'research' => array(),
            'concentration_of_study' => array(),
            'event_type' => array(),
            'honors_and_awards' => array(),
            'institution_operational_unit' => array(),
            'institutions' => array(),
            'operational_roles' => array(),
            'operational_titles' => array(),
            'operational_units' => array(),
            'structure' => array(
              'affa8be3-05e2-482a-b203-2096e11a1dfd' => 'affa8be3-05e2-482a-b203-2096e11a1dfd',
            ),
            'event_calendar_status' => array(),
          ),
          'context' => 'argument_term_2',
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
  $display->uuid = '2b337c17-d13f-495a-b064-3fc29cf642f8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
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
    $pane->uuid = '3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $display->content['new-3e44f9a7-1696-4abc-9b0a-687099c95a74'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
    $pane = new stdClass();
    $pane->pid = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
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
    $pane->uuid = '69104fa5-9c29-496a-8451-02a3fb44cca3';
    $display->content['new-69104fa5-9c29-496a-8451-02a3fb44cca3'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-69104fa5-9c29-496a-8451-02a3fb44cca3';
    $pane = new stdClass();
    $pane->pid = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $display->content['new-c131e3ab-1418-460a-a869-67e9b6dfd94d'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-c131e3ab-1418-460a-a869-67e9b6dfd94d';
    $pane = new stdClass();
    $pane->pid = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $display->content['new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-5c404e9b-d6e0-4e49-83f0-1514b1a7d992';
    $pane = new stdClass();
    $pane->pid = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
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
    $pane->uuid = '8f8e58b3-3478-4030-b689-c82c207884a3';
    $display->content['new-8f8e58b3-3478-4030-b689-c82c207884a3'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-8f8e58b3-3478-4030-b689-c82c207884a3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3e44f9a7-1696-4abc-9b0a-687099c95a74';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['institute'] = $page;

  return $pages;

}
