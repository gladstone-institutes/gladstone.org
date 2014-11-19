<?php
/**
 * @file
 * gladstone_admin.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function gladstone_admin_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Edit form',
        'keyword' => 'edit_form',
        'name' => 'node_edit_form_from_node',
        'context' => 'argument_node_edit_1',
        'id' => 1,
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'ga_editing';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'aae93323-4f64-4068-b1f0-9c42af80010a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c1fcc9f3-5897-4828-aa5a-6a60b571cdd6';
    $pane->panel = 'left';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = 'c1fcc9f3-5897-4828-aa5a-6a60b571cdd6';
    $display->content['new-c1fcc9f3-5897-4828-aa5a-6a60b571cdd6'] = $pane;
    $display->panels['left'][0] = 'new-c1fcc9f3-5897-4828-aa5a-6a60b571cdd6';
    $pane = new stdClass();
    $pane->pid = 'new-69c35428-ed1e-4e0d-ad07-105af8eb4f21';
    $pane->panel = 'right';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '69c35428-ed1e-4e0d-ad07-105af8eb4f21';
    $display->content['new-69c35428-ed1e-4e0d-ad07-105af8eb4f21'] = $pane;
    $display->panels['right'][0] = 'new-69c35428-ed1e-4e0d-ad07-105af8eb4f21';
    $pane = new stdClass();
    $pane->pid = 'new-923f3a95-a5f6-426c-b9c3-e3fb76522f40';
    $pane->panel = 'right';
    $pane->type = 'node_form_publishing';
    $pane->subtype = 'node_form_publishing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '923f3a95-a5f6-426c-b9c3-e3fb76522f40';
    $display->content['new-923f3a95-a5f6-426c-b9c3-e3fb76522f40'] = $pane;
    $display->panels['right'][1] = 'new-923f3a95-a5f6-426c-b9c3-e3fb76522f40';
    $pane = new stdClass();
    $pane->pid = 'new-3d71a2c4-7074-4cc4-8fab-636a20bcba5a';
    $pane->panel = 'right';
    $pane->type = 'node_form_menu';
    $pane->subtype = 'node_form_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '3d71a2c4-7074-4cc4-8fab-636a20bcba5a';
    $display->content['new-3d71a2c4-7074-4cc4-8fab-636a20bcba5a'] = $pane;
    $display->panels['right'][2] = 'new-3d71a2c4-7074-4cc4-8fab-636a20bcba5a';
    $pane = new stdClass();
    $pane->pid = 'new-0fafebac-29ff-4e3d-82ee-9e3935e15a0f';
    $pane->panel = 'right';
    $pane->type = 'node_form_log';
    $pane->subtype = 'node_form_log';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0fafebac-29ff-4e3d-82ee-9e3935e15a0f';
    $display->content['new-0fafebac-29ff-4e3d-82ee-9e3935e15a0f'] = $pane;
    $display->panels['right'][3] = 'new-0fafebac-29ff-4e3d-82ee-9e3935e15a0f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  return $export;
}
