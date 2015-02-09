<?php


/**
* Implementation of hook_panels_styles().
*/

// Plugin definition
$plugin = array(  
  'title'              => t('Gladstone Quote Jump Menu'),
  'description'        => t('Same as Gladstone Quote, but with a roll over menu'),
  'render region'      => NULL, //exclude use on regions
  'settings form'      => NULL, //
  'render pane'        => 'gladstone_quote_jm_render_pane',
  'pane settings form' => 'gladstone_quote_jm_pane_settings_form',
  'hook theme' => array(
    'gladstone_quote_jm_theme_pane' => array(
      'template' => 'gladstone-quote-jm',
      'path' => drupal_get_path('theme','gladstone_org').'/styles/gladstone_quote_jm',
      'variables' => array(
          'content' => NULL,
          'title' => NULL,
          'link' => NULL,
          'menu' => NULL,
          'settings' => NULL,
      ),
    ),
  ),
);

/**
 * Render callback for a single pane.
 *
 * render called by a single styled pane
 */
function theme_gladstone_quote_jm_render_pane($vars) {
  if (empty($vars['content']->content)) { return; }

  $ctype    = $vars['content']->type;
  $content  = $vars['content']->content;
  $entity   = (is_array($content) && array_key_exists('#'.$ctype,$content)) ? $content['#'.$ctype] : NULL;
  $pane     = $vars['pane'];
  $display  = $vars['display'];
  $settings = $vars['settings'];


  if ( $ctype == 'fieldable_panels_pane' && $entity->bundle == 'jump_menu') {

    
    $title = $vars['content']->title;
    if (!empty($settings['url'])) {
      $alias = drupal_get_path_alias($settings['url']);
      $link = ($alias) ? $alias : $settings['url'];
    } else {
      $link = NULL;
    }      

    $css = '.gladstone-jump-menu .roll-toggle{ display: none;}';
    drupal_add_css($css,array('type' => 'inline'));  

    $settings['fpid'] = $entity->fpid;
    $settings['clear'] = ($settings['clear'] == 'null') ? NULL : $settings['clear'];
    $settings['css'] = implode(' ',array($settings['width'],$settings['float'],$settings['clear']));
    $caption = $entity->field_longtext['und'][0]['safe_value'];
    $background = drupal_render($content['field_image']);

    // create jump menu
    $menu = _gladstone_quote_build_jump_menu($entity->field_urls[LANGUAGE_NONE]);
    
    // apply feature box wrappers
    return theme('gladstone_quote_jm_theme_pane', 
              array( 'title' => $title,
                     'content' => $caption,
                     'menu' => $menu,
                     'settings' => $settings,
                     'background' => $background,
              )
            );

  } else {    
    $message = 'This style is meant for use with Jump menu widgets only.';
    drupal_set_message($message,'warning',FALSE);
    return '<div class="messages warning"><h2>'.$message.'</h2></div>';
  }
}

/**
 * Settings form callback.
 */
function gladstone_quote_jm_pane_settings_form($style_settings) {

  $form['url'] = array(
    '#title' => t('URL'),
    '#description' => t('link target for title/icon'),
    '#type'  => 'textfield',
    '#default_value' => (isset($style_settings['url'])) ? $style_settings['url'] : NULL,
  );    
  
  $form['width'] = array(
    '#title' => t('Width'),
    '#description' => t('Percent width of parent container'),
    '#type'  => 'select',
    '#options' => array(
    //'css class' => 'Selection display name'
      'width-25' => '25% width',
      'width-50' => '50% width',
      'width-100' => '100% width',
    ),
    '#default_value' => (isset($style_settings['width'])) ? $style_settings['width'] : 'width-100',
  );   

  $form['float'] = array(
    '#title' => t('Float'),
    '#description' => t('Panel pane float'),
    '#type'  => 'select',
    '#options' => array(
    //'css class' => 'Selection display name'
      'float-left' => 'Float left',
      'float-right' => 'Float right',
    ),
    '#default_value' => (isset($style_settings['float'])) ? $style_settings['float'] : NULL,
  ); 

  $form['clear'] = array(
    '#title' => t('Clear'),
    '#description' => t('Clear floats'),
    '#type'  => 'select',
    '#options' => array(
    //'css class' => 'Selection display name'
      'null' => 'No Clear',
      'clear-left' => 'Clear left',
      'clear-right' => 'Clear right',
      'clear-both' => 'Clear both',
    ),
    '#default_value' => (isset($style_settings['clear'])) ? $style_settings['clear'] : NULL,
  );    

     

  return $form;
}

/**
 * Build the jump menu
 */
function _gladstone_quote_build_jump_menu($urls) {
  global $base_url;

  $menu = '<ul class="jump-menu">';
  foreach ($urls as $uid => $url) {
    // make path relative, this fails for sites in a subdir
    // use "#" instead of "/" to wrap the regex expression, it auto-escapes '/' literals
    $rel_url = preg_replace('#' . $base_url . '/?#', '', $url['display_url']);
    $classes = array_key_exists('class',$url['attributes']) ? ' '.$url['attributes']['class'] : NULL;

    $li  = '<li class="leaf">';
    $li .= '<a href="'.$rel_url.'" class="button '.$classes.'">';
    $li .= '<span>'.$url['title'].'</span><i class="fa fa-angle-right fa-lg"></i>';
    $li .= '</a></li>';

    $menu .= $li;
  }
  $menu .= '</ul>';

  return $menu;
}


