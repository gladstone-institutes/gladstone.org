<?php


/**
* Implementation of hook_panels_styles().
*/

// Plugin definition
$plugin = array(  
  'title'              => t('Gladstone Quote'),
  'description'        => t('"Quote" pane style'),
  'render region'      => NULL, //exclude use on regions
  'settings form'      => NULL, //
  'render pane'        => 'gladstone_quote_render_pane',
  'pane settings form' => 'gladstone_quote_pane_settings_form',
  'hook theme' => array(
    'gladstone_quote_theme_pane' => array(
      'template' => 'gladstone-quote-pane',
      'path' => drupal_get_path('module','gladstone_theme').'/plugins/styles/gladstone_quote',
      'variables' => array(
          'caption' => NULL,
          'title' => NULL,
          'link' => NULL,
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
function theme_gladstone_quote_render_pane($vars) {
  if (empty($vars['content']->content)) { return; }

  $ctype    = $vars['content']->type;
  $content  = $vars['content']->content;
  $entity   = (is_array($content) && array_key_exists('#'.$ctype,$content)) ? $content['#'.$ctype] : NULL;
  $pane     = $vars['pane'];
  $display  = $vars['display'];
  $settings = $vars['settings'];

  // dpm($vars,'Pane');
  // dpm($entity,'Ent');


  if ( $ctype == 'fieldable_panels_pane' && $entity->bundle == 'image') {

    $settings['fpid'] = $entity->fpid;
    
    $title = $vars['content']->title;
    if (!empty($settings['url'])) {
      $alias = drupal_get_path_alias($settings['url']);
      $link = ($alias) ? $alias : $settings['url'];
    } else {
      $link = NULL;
    }

    // create  relative url for our css background image
    global $base_url;          
    $bg_image_url = file_create_url($entity->field_image['und'][0]['uri']);
    // make path relative, this fails for sites in a subdir
    // $bg_image_url = preg_replace('#' . $base_url . '#', '', $bg_image_url);

    $caption = $entity->field_longtext['und'][0]['safe_value'];

    $path = $vars['style']['path'];
    drupal_add_css($path.'/gladstone_quote.css', array('group' => CSS_DEFAULT, 'every_page' => TRUE));

    $css = '.gladstone-quote.fpp-id-'.$entity->fpid.' { background-image: url('.$bg_image_url.');}';
    drupal_add_css($css,array('type' => 'inline'));    

    // prep css classes for pane container
    $settings['clear'] = ($settings['clear'] == 'null') ? NULL : $settings['clear'];
    $settings['css'] = implode(' ',array($settings['width'],$settings['float'],$settings['clear']));
    $settings['bg_image_url'] = $bg_image_url;

    // apply feature box wrappers
    return theme('gladstone_quote_theme_pane', 
              array( 'title' => $title,
                     'caption' => $caption,
                     'link' => $link,
                     'settings' => $settings,
              )
            );

  } else {    
    $message = 'This style is meant for use with Image widgets only.';
    drupal_set_message($message,'warning',FALSE);
    return '<div class="messages warning"><h2>'.$message.'</h2></div>';
  }
}

/**
 * Settings form callback.
 */
function gladstone_quote_pane_settings_form($style_settings) {

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


