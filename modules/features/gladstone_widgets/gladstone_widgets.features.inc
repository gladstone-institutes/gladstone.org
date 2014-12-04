<?php
/**
 * @file
 * gladstone_widgets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gladstone_widgets_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gladstone_widgets_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function gladstone_widgets_image_default_styles() {
  $styles = array();

  // Exported image style: minifeed_thumbnail.
  $styles['minifeed_thumbnail'] = array(
    'name' => 'minifeed_thumbnail',
    'label' => 'Minifeed thumbnail (122x67)',
    'effects' => array(
      1 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 122,
          'height' => 67,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
