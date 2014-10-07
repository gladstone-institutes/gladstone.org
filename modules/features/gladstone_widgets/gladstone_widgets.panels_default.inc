<?php
/**
 * @file
 * gladstone_widgets.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function gladstone_widgets_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'sidebar';
  $mini->category = 'Gladstone';
  $mini->admin_title = 'Sidebar';
  $mini->admin_description = 'Site-wide sidebar. Mainly used for navigation tree';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b0c36764-294c-405e-b03c-fad4984f8df6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-11e7ad1a-2e3c-4495-a5a5-9b6f5a5e987b';
    $pane->panel = 'one_main';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => 'Main Menu',
      'level' => '2',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
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
    $pane->uuid = '11e7ad1a-2e3c-4495-a5a5-9b6f5a5e987b';
    $display->content['new-11e7ad1a-2e3c-4495-a5a5-9b6f5a5e987b'] = $pane;
    $display->panels['one_main'][0] = 'new-11e7ad1a-2e3c-4495-a5a5-9b6f5a5e987b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-11e7ad1a-2e3c-4495-a5a5-9b6f5a5e987b';
  $mini->display = $display;
  $export['sidebar'] = $mini;

  return $export;
}
