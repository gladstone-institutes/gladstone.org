<?php
/**
 * @file
 * Classy Panel Styles API include file.
 */

/**
 * Implements hook_classy_panel_styles().
 *
 * Provides a set of example Classy Panel Styles definitions.
 */
function cps_example_classy_panel_styles() {
  $export = array();
  $groups = serialize(array('cps_example'));

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'cps_example_width';
  $style->visibility = 1;
  $style->groups = $groups;
  $style->title = 'Pane Width';
  $style->required = FALSE;
  $style->description = 'Choose a width for the panel pane at the desktop size.';
  $style->options = serialize(array(
    'width-25' => '25% width',
    'width-33' => '33% width',
    'width-50' => '50% width',
    'width-50-100' => '50% width; mobile 100%',
    'width-66' => '66% width',
    'width-75' => '75% width',
    'width-100' => '100% width',
  ));
  $style->default_value = '';
  $style->layouts_setting = 0;
  $style->layouts = serialize(array());
  $export['cps_example_width'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'cps_example_image_layout';
  $style->visibility = 1;
  $style->groups = $groups;
  $style->title = 'Image Layout';
  $style->required = FALSE;
  $style->description = '';
  $style->options = serialize(array(
    'image-full' => 'Image is 100% width, no stretching',
    'image-float-right' => 'Image floats right, text flows around on left',
    'image-float-left' => 'Image floats left, text flows around on right',
  ));
  $style->default_value = '';
  $style->layouts_setting = 0;
  $style->layouts = serialize(array());
  $export['cps_example_image_layout'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'cps_example_panel_pane_float';
  $style->visibility = 1;
  $style->groups = $groups;
  $style->title = 'Panel Pane Float';
  $style->required = FALSE;
  $style->description = '';
  $style->options = serialize(array(
    'float-left' => 'Float Left',
    'float-right' => 'Float Right',
  ));
  $style->default_value = '';
  $style->layouts_setting = 0;
  $style->layouts = serialize(array());
  $export['cps_example_panel_pane_float'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'cps_example_clear_floats';
  $style->visibility = 1;
  $style->groups = $groups;
  $style->title = 'Clear Floats';
  $style->required = FALSE;
  $style->description = '';
  $style->options = serialize(array(
    'clear-left' => 'clear left',
    'clear-right' => 'clear right',
    'clear-both' => 'clear both',
  ));
  $style->default_value = '';
  $style->layouts_setting = 0;
  $style->layouts = serialize(array());
  $export['cps_example_clear_floats'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'cps_example_text_columns';
  $style->visibility = 1;
  $style->groups = $groups;
  $style->title = 'Text Columns';
  $style->required = FALSE;
  $style->description = '';
  $style->options = serialize(array(
    'text-columns-4' => 'Text flows into 4 columns',
    'text-columns-3' => 'Text flows into 3 columns',
    'text-columns-2' => 'Text flows into 2 columns',
  ));
  $style->default_value = '';
  $style->layouts_setting = 0;
  $style->layouts = serialize(array());
  $export['cps_example_text_columns'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'cps_example_background';
  $style->visibility = 1;
  $style->groups = $groups;
  $style->title = 'Background';
  $style->required = FALSE;
  $style->description = 'Add some color to your panel pane';
  $style->options = serialize(array(
    'bg-blue' => 'Blue with white text',
    'bg-black' => 'Black with white text',
    'bg-white' => 'White',
    'bg-gray' => 'Light Gray',
    'bg-green' => 'Green',
    'bg-borders' => 'Double Borders on top & bottom of pane',
    'bg-thin-border' => 'Thin Borders on all sides',
  ));
  $style->default_value = '';
  $style->layouts_setting = 0;
  $style->layouts = serialize(array());
  $export['cps_example_background'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'cps_example_region_color';
  $style->visibility = 2;
  $style->groups = $groups;
  $style->title = 'Region Background Color';
  $style->required = FALSE;
  $style->description = 'Choose a background color for the panel region';
  $style->options = serialize(array(
    'region-bg-black' => 'Black',
    'region-bg-white' => 'White',
    'region-bg-navy' => 'Navy',
  ));
  $style->default_value = '';
  $style->layouts_setting = 0;
  $style->layouts = serialize(array());
  $export['cps_example_region_color'] = $style;

  return $export;
}
