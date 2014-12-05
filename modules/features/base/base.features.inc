<?php
/**
 * @file
 * base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function base_image_default_styles() {
  $styles = array();

  // Exported image style: feature_image_cover.
  $styles['feature_image_cover'] = array(
    'name' => 'feature_image_cover',
    'label' => 'Feature Image (960x320)',
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
          'width' => 960,
          'height' => 320,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: feature_image_page.
  $styles['feature_image_page'] = array(
    'name' => 'feature_image_page',
    'label' => 'Feature Image (710x250)',
    'effects' => array(
      2 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 710,
          'height' => 250,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function base_node_info() {
  $items = array(
    'basic_page' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => t('Generic pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Basic pages are for use anywhere you wan to add content as a standalone page or managed by page manager. They contain only the essential fields necessary for any page manager to work.'),
    ),
    'site_page' => array(
      'name' => t('Site Page'),
      'base' => 'node_content',
      'description' => t('Pages essential to site-map structure'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Site pages are essential to the backbone structure of the site and require elevated privileges to alter. If you need to make a change and do not have permission, contact the site admin.'),
    ),
  );
  return $items;
}
