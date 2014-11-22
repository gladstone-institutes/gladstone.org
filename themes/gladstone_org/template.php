<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "gladstone_org" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "gladstone_org".
 * 2. Uncomment the required function to use.
 */


/**
 * Preprocess variables for the html template.
 */
function gladstone_org_preprocess_html(&$vars) {
  global $theme_key;

  // Minimalist Typekit Integration, to avoid FontYourFace
  // @todo add theme setting field for configuring api key
  drupal_add_js('http://use.typekit.com/nnk8pxv.js');
  drupal_add_js('try{Typekit.load();}catch(e){}', array('type' => 'inline', 'scope' => 'header', 'weight' => -10));

  // Add font awesome
  drupal_add_css(drupal_get_path('theme', 'gladstone_org').'/css/font-awesome/font-awesome.css');

  // Two examples of adding custom classes to the body.
  
  // Add a body class for the active theme name.
  // $vars['classes_array'][] = drupal_html_class($theme_key);

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome etc.
  // $vars['classes_array'][] = css_browser_selector();

}
// */

/**
 * Remove meta tag from the head that reads "Drupal 7"...
 */
function gladstone_org_html_head_alter(&$head_elements) {
  unset($head_elements['system_meta_generator']);
}

/**
 * Process menu links
 */
function gladstone_org_menu_link(array $variables) {

  // Rewrite "icon" links
  $attrs = $variables['element']['#localized_options']['attributes'];
  if (array_key_exists('class',$attrs) && in_array('icon-only',$attrs['class'])) {
    $title = $variables['element']['#title'];
    $href = $variables['element']['#href'];
    $classes = implode(' ', $attrs['class']);
    return '<li class="'.implode(' ',$variables['element']['#attributes']['class']).'">'.
           '<a href="'.$href.'" class="'.$classes.'" title="'.$title.'"></a></li>';
  } else { 
    // Return default link
    return theme_menu_link($variables);
  }
}
/**
 * Process variables for the html template.
 */
/* -- Delete this line if you want to use this function
function gladstone_org_process_html(&$vars) {
}
// */


/**
 * Override or insert variables for the page templates.
 */
/* -- Delete this line if you want to use these functions
function gladstone_org_preprocess_page(&$vars) {
}
function gladstone_org_process_page(&$vars) {
}
// */


/**
 * Override or insert variables into the node templates.
 */
/* -- Delete this line if you want to use these functions
function gladstone_org_preprocess_node(&$vars) {
}
function gladstone_org_process_node(&$vars) {
}
// */


/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
function gladstone_org_preprocess_comment(&$vars) {
}
function gladstone_org_process_comment(&$vars) {
}
// */


/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
function gladstone_org_preprocess_block(&$vars) {
}
function gladstone_org_process_block(&$vars) {
}
// */
