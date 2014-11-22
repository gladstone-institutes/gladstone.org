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
  $mini->name = 'footer';
  $mini->category = 'Gladstone';
  $mini->admin_title = 'Footer';
  $mini->admin_description = 'Site wide footer widget';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'four_4x25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'four_first' => NULL,
      'four_second' => NULL,
      'four_third' => NULL,
      'four_fourth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '111caa4e-bc89-4b73-94d4-76a16e579d70';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-42e0975b-6286-4054-80f6-5edacd7e0c4b';
    $pane->panel = 'four_fourth';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Copyright',
      'title' => '',
      'body' => '© GLADSTONE INSTITUTES
ALL RIGHTS RESERVED',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '42e0975b-6286-4054-80f6-5edacd7e0c4b';
    $display->content['new-42e0975b-6286-4054-80f6-5edacd7e0c4b'] = $pane;
    $display->panels['four_fourth'][0] = 'new-42e0975b-6286-4054-80f6-5edacd7e0c4b';
    $pane = new stdClass();
    $pane->pid = 'new-4af1fecc-ee24-4ce8-9565-22c3aa52ad52';
    $pane->panel = 'four_second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-connect-with-us';
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
    $pane->uuid = '4af1fecc-ee24-4ce8-9565-22c3aa52ad52';
    $display->content['new-4af1fecc-ee24-4ce8-9565-22c3aa52ad52'] = $pane;
    $display->panels['four_second'][0] = 'new-4af1fecc-ee24-4ce8-9565-22c3aa52ad52';
    $pane = new stdClass();
    $pane->pid = 'new-d76d8763-735f-47aa-bd6b-4d829c83412a';
    $pane->panel = 'four_third';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu';
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
    $pane->uuid = 'd76d8763-735f-47aa-bd6b-4d829c83412a';
    $display->content['new-d76d8763-735f-47aa-bd6b-4d829c83412a'] = $pane;
    $display->panels['four_third'][0] = 'new-d76d8763-735f-47aa-bd6b-4d829c83412a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4af1fecc-ee24-4ce8-9565-22c3aa52ad52';
  $mini->display = $display;
  $export['footer'] = $mini;

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
