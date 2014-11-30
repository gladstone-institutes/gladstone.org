<?php

/**
 * @file
 * Classy Panel Styles plugin file.
 */

// Define the parent plugin.
$plugin = array(
  'title'              => 'CPS ' . t('Parent Style'),
  'description'        => 'CPS ' . t('parent style providing user-defined substyles'),
  'get child'          => 'classy_panel_styles_get_substyle',
  'get children'       => 'classy_panel_styles_get_substyles',
  'settings form'      => 'classy_panel_styles_settings_form',
  'pane settings form' => 'classy_panel_styles_settings_form',
);

/**
 * Implements template_preprocess_HOOK().
 *
 * Adds our CPS classes to Panels' default array.
 */
function template_preprocess_classy_panel_styles_render_pane(&$vars) {
  // Add Classy Panels CSS.
  _classy_panel_styles_add_css();

  // For IPE, let javascript inject the classes.
  if ($vars['display']->renderer_handler instanceof panels_renderer_ipe) {
    drupal_add_js(drupal_get_path('module', 'classy_panel_styles')
      . '/js/classy_panel_styles.js');
    _classy_panel_styles_apply(
      'pane',
      $vars['pane']->pid,
      'classy_panel_styles',
      $vars['settings'],
      'panels_renderer_ipe'
    );
    return;
  }

  // Add the CPS classes to the standard Panels template variables.
  $classes = _classy_panel_styles_filter_conf($vars['settings']);
  $vars['classes_array']
    = array_unique(array_merge($vars['classes_array'], $classes));
}

/**
 * Renders Panels regions.
 *
 * Wraps CPS styles around a default region style.
 */
function theme_classy_panel_styles_render_region($vars) {
  // Add Classy Panels CSS.
  _classy_panel_styles_add_css();

  // Determine in which style to render this region.
  $hook = variable_get(CLASSY_PANEL_STYLES_REGION_STYLE,
    'panels_default_style_render_region');
  // Generate the standard region markup.
  $markup = theme($hook, $vars);

  // For IPE, let javascript inject the classes.
  if ($vars['display']->renderer_handler instanceof panels_renderer_ipe) {
    drupal_add_js(drupal_get_path('module', 'classy_panel_styles')
      . '/js/classy_panel_styles.js');
    _classy_panel_styles_apply(
      'region',
      $vars['region_id'],
      'classy_panel_styles',
      $vars['settings'],
      'panels_renderer_ipe'
    );
    return $markup;
  }

  // Wrap our CPS classes around the region.
  $classes_array = array_filter($vars['settings']);
  $classes = drupal_attributes(array('class' => $classes_array));
  return '<div' . $classes . '>'
       . $markup
       . '</div>';
}

/**
 * Returns the settings form for panes and regions.
 *
 * @return array
 *   The settings form.
 */
function classy_panel_styles_settings_form($settings, $panel_obj, $pane_id, $type, $form_state) {
  $form = array();

  // Get the pane/region mask.
  switch ($type) {
    case 'pane':
      $bitmask = CLASSY_PANEL_STYLES_PANE_MASK;
      break;

    case 'region':
    case 'display':
      $type    = 'region';
      $bitmask = CLASSY_PANEL_STYLES_REGION_MASK;
      break;

    default:
      // Default to both panes and regions.
      $bitmask
        = CLASSY_PANEL_STYLES_PANE_MASK | CLASSY_PANEL_STYLES_REGION_MASK;
  }

  // Add admin CSS file.
  $admin_css_path = drupal_get_path('module', 'classy_panel_styles')
    . '/admin_styles/css/classy_panel_styles.admin.css';
  $form['#attached']['css'][] = $admin_css_path;

  // Load the Classy Panel Styles objects.
  ctools_include('export');
  $styles = ctools_export_load_object('classy_panel_styles');

  // Get the layout name.
  $layout = $panel_obj->layout;

  // Add style settings to form.
  foreach ($styles as $name => $style) {
    // Skip if this style is disabled.
    if (!empty($style->disabled)) {
      continue;
    }
    // Skip if this style does not apply to this type (pane/region).
    if (!($style->visibility & $bitmask)) {
      continue;
    }
    // Skip if this style does not apply to this layout.
    if ($layouts_setting = $style->layouts_setting) {
      $layouts  = unserialize($style->layouts);
      $in_array = in_array($layout, $layouts);
      if ((CLASSY_PANEL_STYLES_LAYOUTS_EXCLUDE == $layouts_setting && $in_array) ||
          (CLASSY_PANEL_STYLES_LAYOUTS_INCLUDE == $layouts_setting && !$in_array)) {
        continue;
      }
    }
    // Add the form element.
    $form[$name] = array(
      '#type'          => 'select',
      '#title'         => check_plain($style->title),
      '#required'      => $style->required,
      '#description'   => filter_xss($style->description),
      '#options'       => unserialize($style->options),
      '#default_value' => isset($settings[$name]) ? $settings[$name] : $style->default_value,
      '#empty_option'  => $style->required ? '- Select -' : '- None -',
    );
  }
  // Add a textbox for additional CSS classes.
  $form[CLASSY_PANEL_STYLES_CUSTOM_CLASSES] = array(
    '#type' => 'textfield',
    '#title' => t('Additional CSS classes'),
    '#description' => t('Space-separated, please. For example: float-left clearfix make-pretty'),
    '#required' => FALSE,
    '#default_value' => isset($settings[CLASSY_PANEL_STYLES_CUSTOM_CLASSES]) ? $settings[CLASSY_PANEL_STYLES_CUSTOM_CLASSES] : '',
  );
  $form['classy_panel_styles_flag'] = array(
    '#type'  => 'value',
    '#value' => "classy-panel-styles $type",
  );
  return $form;
}

/**
 * Adds Classy Panel Styles CSS to output.
 */
function _classy_panel_styles_add_css() {
  $runonce = &drupal_static(__FUNCTION__);
  if (isset($runonce)) {
    return;
  }
  $runonce = TRUE;

  // Add custom CSS file.
  $css_path = variable_get(CLASSY_PANEL_STYLES_CSS_PATH, FALSE);

  $css_path = explode(',', strtr($css_path, array(
    '%b' => base_path(),
    '%t' => drupal_get_path('theme', variable_get('theme_default', NULL))))
  );
  $css_path = implode($css_path);

  if ($css_path && file_exists($css_path)) {
    drupal_add_css($css_path);
    return;
  }

  drupal_set_message(t('Missing or invalid Classy Panel Styles CSS path.'),
    'warning');
}

/**
 * Provides the list of substyles.
 *
 * @param string $substyle_name
 *   The name of the substyle to return. If not specified, returns all
 *   substyles.
 *
 * @return array
 *   Either a single substyle definition or an array of all substyles.
 *
 * @TODO Load the CPS styles' groups instead of hard-coding.
 */
function classy_panel_styles_load_substyles($substyle_name = NULL) {
  $substyles = drupal_static(__FUNCTION__);
  if (!isset($substyles)) {
    $substyles = array(
      'cps_default' => array(
        'name' => 'cps_default',
        'title' => 'Custom Panel Styles',
        'description' => t('Thin panel pane and region wrappers with custom classes.'),
        'weight' => -99,
      ),
    );
  }
  if ($substyle_name) {
    return $substyles[$substyle_name];
  }
  return $substyles;
}

/**
 * CTools style plugin callback: Provides a single substyle.
 */
function classy_panel_styles_get_substyle($plugin, $style_name, $substyle_name) {
  $substyle = classy_panel_styles_load_substyles($substyle_name);
  return classy_panel_styles_merge_plugin($plugin, $style_name, $substyle);
}

/**
 * CTools style plugin callback: Provides all substyles.
 */
function classy_panel_styles_get_substyles($plugin, $style_name) {
  $data = classy_panel_styles_load_substyles();
  $substyles = array();
  foreach ($data as $substyle_name => $substyle) {
    $substyles[$style_name . ':' . $substyle_name]
      = classy_panel_styles_merge_plugin($plugin, $style_name, $substyle);
  }
  return $substyles;
}

/**
 * Merges the main style plugin with a substyle to create a sub-plugin.
 *
 * @param array $plugin
 *   The plugin array to be modified.
 * @param string $style_name
 *   The name of the parent style plugin.
 * @param array $substyle
 *   The substyle definition from classy_panel_styles_load_substyles().
 *
 * @return array
 *   The result of merging the parent plugin with the sub-style definition.
 */
function classy_panel_styles_merge_plugin(array $plugin, $style_name, array $substyle) {
  $plugin['name'] = $style_name . ':' . $substyle['name'];
  $plugin['title'] = check_plain($substyle['title']);
  $plugin['substyle'] = $substyle;
  $plugin['description'] = check_plain($substyle['description']);
  $plugin['weight'] = $substyle['weight'];

  $plugin['render pane'] = 'classy_panel_styles_render_pane';
  $plugin['render region'] = 'classy_panel_styles_render_region';

  return $plugin;
}
