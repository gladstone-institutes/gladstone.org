<?php
/**
 *
 * See http://www.metaltoad.com/blog/drupal-7-tutorial-creating-custom-formatters
 *
 */

/**
 * Implements hook_field_formatter_info().
 */
function gladstone_profiles_field_formatter_info() {
  return array(
    'conditional_link' => array( //Machine name of the formatter
      'label' => t('Conditional Link'),
      'field types' => array('computed'), //This will only be available to computed fields
      'settings'  => array( //Array of the settings we'll create
        'boolean' => 0, //give a default value for when the form is first loaded
        'target' => '', //ditto
      ),
    ),
  );
}

/**
 * Implements hook_field_formatter_settings_form().
 */
function gladstone_profiles_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
  $element = array(); 

  //Add your select box
  $element['boolean'] = array(
    '#type'           => 'textfield',
    '#title'          => t('Value'),
    '#description'    => t('Conditionally test, tokens are evaluated (see: available replacements)'),
    '#default_value'  => $settings['boolean'],
  );
  $element['target'] = array(
    '#type'           => 'textfield',                     
    '#title'          => t('Target'),                 
    '#description'    => t('Target url, tokens are evaluated (see: available replacements'),
    '#default_value'  => $settings['target'],         
  );
  return $element;
}

/**
 * Implements hook_field_formatter_settings_summary().
 */
function gladstone_profiles_field_formatter_settings_summary($field, $instance, $view_mode) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
  $summary = t('Link to @target if @boolean is true', array(
    '@boolean' => $settings['boolean'],
    '@target'  => $settings['target'],
  ));
  return $summary;
}

/**
 * Implements hook_field_formatter_view().
 */
function gladstone_profiles_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element  = array();
  $settings = $display['settings']; 
  $bool     = $settings['boolean']; 
  $target   = $settings['target'];

  dsm($entity_type);
  dsm($entity);
  dsm($field);
  dsm($instance);
  dsm($langcode);
  dsm($items);
  dsm($display);


  if ($bool) {
  	$item = array_shift($items);
  	$data = array( $entity_type => $entity, 'item' => $item);
  	$href = token_replace($target, $data);
  	$output = '<a href="'.$href.'">'.'</a>';
  	
  	$options = array(
    	'html' => TRUE,
    	'attributes'  => array(
    		'title' => ''
      	),
    );
  	$link = l($item['value'],$href,$options);
  	$element[0]['#markup'] = $link;
  } else {
  	$element[0]['#markup'] = $item['value'];
  }
  dsm($element);
  return $element;
}

