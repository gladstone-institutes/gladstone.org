<?php
/**
 * @file
 * base.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function base_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:basic_page:default';
  $panelizer->title = 'Basic Page Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'basic_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
  $display->title = '%node:title';
  $display->uuid = 'd47af320-7684-45db-9482-9bedbf30c752';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-996bc1de-861b-4958-b06c-0d0be6f3d36e';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '996bc1de-861b-4958-b06c-0d0be6f3d36e';
    $display->content['new-996bc1de-861b-4958-b06c-0d0be6f3d36e'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-996bc1de-861b-4958-b06c-0d0be6f3d36e';
    $pane = new stdClass();
    $pane->pid = 'new-f3808480-de9d-48db-8843-b578141ab0a8';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_node_refs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f3808480-de9d-48db-8843-b578141ab0a8';
    $display->content['new-f3808480-de9d-48db-8843-b578141ab0a8'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-f3808480-de9d-48db-8843-b578141ab0a8';
    $pane = new stdClass();
    $pane->pid = 'new-fe33232b-a939-48c1-9527-da706b25e3fc';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_files';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fe33232b-a939-48c1-9527-da706b25e3fc';
    $display->content['new-fe33232b-a939-48c1-9527-da706b25e3fc'] = $pane;
    $display->panels['gs3irc_middle'][2] = 'new-fe33232b-a939-48c1-9527-da706b25e3fc';
    $pane = new stdClass();
    $pane->pid = 'new-6f02a6d8-01db-4247-8b8c-bde4bf4bb00b';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_operational_units';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6f02a6d8-01db-4247-8b8c-bde4bf4bb00b';
    $display->content['new-6f02a6d8-01db-4247-8b8c-bde4bf4bb00b'] = $pane;
    $display->panels['gs3irc_middle'][3] = 'new-6f02a6d8-01db-4247-8b8c-bde4bf4bb00b';
    $pane = new stdClass();
    $pane->pid = 'new-955c0797-bee7-43fc-a0de-b702b14ae578';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_research_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '955c0797-bee7-43fc-a0de-b702b14ae578';
    $display->content['new-955c0797-bee7-43fc-a0de-b702b14ae578'] = $pane;
    $display->panels['gs3irc_middle'][4] = 'new-955c0797-bee7-43fc-a0de-b702b14ae578';
    $pane = new stdClass();
    $pane->pid = 'new-897dce94-64a5-4fb9-b650-2769d9efbf9f';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_user_refs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '897dce94-64a5-4fb9-b650-2769d9efbf9f';
    $display->content['new-897dce94-64a5-4fb9-b650-2769d9efbf9f'] = $pane;
    $display->panels['gs3irc_middle'][5] = 'new-897dce94-64a5-4fb9-b650-2769d9efbf9f';
    $pane = new stdClass();
    $pane->pid = 'new-3f758581-613a-4af7-815e-5f09b298535d';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '3f758581-613a-4af7-815e-5f09b298535d';
    $display->content['new-3f758581-613a-4af7-815e-5f09b298535d'] = $pane;
    $display->panels['gs3irc_middle'][6] = 'new-3f758581-613a-4af7-815e-5f09b298535d';
    $pane = new stdClass();
    $pane->pid = 'new-67eae3eb-58f7-4a5b-b54d-f66d6a19ac9d';
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
    $pane->uuid = '67eae3eb-58f7-4a5b-b54d-f66d6a19ac9d';
    $display->content['new-67eae3eb-58f7-4a5b-b54d-f66d6a19ac9d'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-67eae3eb-58f7-4a5b-b54d-f66d6a19ac9d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-996bc1de-861b-4958-b06c-0d0be6f3d36e';
  $panelizer->display = $display;
  $export['node:basic_page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:site_page:default';
  $panelizer->title = 'Site Page Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'site_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
  $display->title = '%node:title';
  $display->uuid = 'c55c66b7-b680-4bcb-aad3-6d4c666641ee';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-13daa690-5368-4415-9fe4-bc2d12ebd9e4';
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
    $pane->uuid = '13daa690-5368-4415-9fe4-bc2d12ebd9e4';
    $display->content['new-13daa690-5368-4415-9fe4-bc2d12ebd9e4'] = $pane;
    $display->panels['gs3irc_header'][0] = 'new-13daa690-5368-4415-9fe4-bc2d12ebd9e4';
    $pane = new stdClass();
    $pane->pid = 'new-bd86da3d-af3a-4567-ba1e-02f2d43e44ed';
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
    $pane->uuid = 'bd86da3d-af3a-4567-ba1e-02f2d43e44ed';
    $display->content['new-bd86da3d-af3a-4567-ba1e-02f2d43e44ed'] = $pane;
    $display->panels['gs3irc_header'][1] = 'new-bd86da3d-af3a-4567-ba1e-02f2d43e44ed';
    $pane = new stdClass();
    $pane->pid = 'new-9a545b0d-ea38-45e8-b9dc-6b105503076d';
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
      'context' => 'panelizer',
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
    $pane->uuid = '9a545b0d-ea38-45e8-b9dc-6b105503076d';
    $display->content['new-9a545b0d-ea38-45e8-b9dc-6b105503076d'] = $pane;
    $display->panels['gs3irc_middle'][0] = 'new-9a545b0d-ea38-45e8-b9dc-6b105503076d';
    $pane = new stdClass();
    $pane->pid = 'new-c92c051e-551a-446d-8c5f-558e10b4625c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c92c051e-551a-446d-8c5f-558e10b4625c';
    $display->content['new-c92c051e-551a-446d-8c5f-558e10b4625c'] = $pane;
    $display->panels['gs3irc_middle'][1] = 'new-c92c051e-551a-446d-8c5f-558e10b4625c';
    $pane = new stdClass();
    $pane->pid = 'new-3fce3546-cc03-43bc-927f-5575715709e4';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_node_refs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3fce3546-cc03-43bc-927f-5575715709e4';
    $display->content['new-3fce3546-cc03-43bc-927f-5575715709e4'] = $pane;
    $display->panels['gs3irc_middle'][2] = 'new-3fce3546-cc03-43bc-927f-5575715709e4';
    $pane = new stdClass();
    $pane->pid = 'new-ed91ff1c-d54c-4a9b-8ea5-ae1e618b2493';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_files';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ed91ff1c-d54c-4a9b-8ea5-ae1e618b2493';
    $display->content['new-ed91ff1c-d54c-4a9b-8ea5-ae1e618b2493'] = $pane;
    $display->panels['gs3irc_middle'][3] = 'new-ed91ff1c-d54c-4a9b-8ea5-ae1e618b2493';
    $pane = new stdClass();
    $pane->pid = 'new-09eb06d7-0b8d-4674-ab10-5b2dfae2cebc';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_operational_units';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '09eb06d7-0b8d-4674-ab10-5b2dfae2cebc';
    $display->content['new-09eb06d7-0b8d-4674-ab10-5b2dfae2cebc'] = $pane;
    $display->panels['gs3irc_middle'][4] = 'new-09eb06d7-0b8d-4674-ab10-5b2dfae2cebc';
    $pane = new stdClass();
    $pane->pid = 'new-1e4d545d-6355-4b4a-b655-dacb3703ce4c';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_research_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '1e4d545d-6355-4b4a-b655-dacb3703ce4c';
    $display->content['new-1e4d545d-6355-4b4a-b655-dacb3703ce4c'] = $pane;
    $display->panels['gs3irc_middle'][5] = 'new-1e4d545d-6355-4b4a-b655-dacb3703ce4c';
    $pane = new stdClass();
    $pane->pid = 'new-1acfe6f0-c34e-466c-b780-041267482898';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_user_refs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '1acfe6f0-c34e-466c-b780-041267482898';
    $display->content['new-1acfe6f0-c34e-466c-b780-041267482898'] = $pane;
    $display->panels['gs3irc_middle'][6] = 'new-1acfe6f0-c34e-466c-b780-041267482898';
    $pane = new stdClass();
    $pane->pid = 'new-ea11f4d5-01d0-4a0f-81ba-c822c3077e58';
    $pane->panel = 'gs3irc_middle';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'ea11f4d5-01d0-4a0f-81ba-c822c3077e58';
    $display->content['new-ea11f4d5-01d0-4a0f-81ba-c822c3077e58'] = $pane;
    $display->panels['gs3irc_middle'][7] = 'new-ea11f4d5-01d0-4a0f-81ba-c822c3077e58';
    $pane = new stdClass();
    $pane->pid = 'new-648d7c74-37da-4607-9cec-9c014641f212';
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
    $pane->uuid = '648d7c74-37da-4607-9cec-9c014641f212';
    $display->content['new-648d7c74-37da-4607-9cec-9c014641f212'] = $pane;
    $display->panels['gs3irc_sidebar'][0] = 'new-648d7c74-37da-4607-9cec-9c014641f212';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c92c051e-551a-446d-8c5f-558e10b4625c';
  $panelizer->display = $display;
  $export['node:site_page:default'] = $panelizer;

  return $export;
}
