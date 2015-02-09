<?php


/**
* Implementation of hook_panels_styles().
*/

// Plugin definition
$plugin = array(  
  'title'              => t('Gladstone Overlay'),
  'description'        => t('Caption overlays full background image'),
  'render region'      => NULL, //exclude use on regions
  'settings form'      => NULL, //
  'render pane'        => 'gladstone_overlay_render_pane',
  'pane settings form' => 'gladstone_overlay_pane_settings_form',
  'hook theme' => array(
    'gladstone_overlay_theme_pane' => array(
      'template' => 'gladstone-overlay-pane',
      'path' => drupal_get_path('theme','gladstone_org').'/styles/gladstone_overlay',
      'variables' => array(
          'content' => NULL,
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
function theme_gladstone_overlay_render_pane($vars) {
  if (empty($vars['content']->content)) { return; }

  $ctype    = $vars['content']->type;
  $content  = $vars['content']->content;
  $entity   = (is_array($content) && array_key_exists('#'.$ctype,$content)) ? $content['#'.$ctype] : NULL;
  $pane     = $vars['pane'];
  $display  = $vars['display'];
  $settings = $vars['settings'];
  
  if ( $ctype == 'fieldable_panels_pane' && $entity->bundle == 'image') {


    $title = $vars['content']->title;
    if (!empty($settings['url'])) {
      $alias = drupal_get_path_alias($settings['url']);
      $link = ($alias) ? $alias : $settings['url'];
    } else {
      $link = NULL;
    }

    $settings['fpid'] = $entity->fpid;
    $settings['css'] = implode(' ',array($settings['width'],$settings['float'],$settings['clear']));    
    $caption =  drupal_render($content['field_longtext']);
    $background = drupal_render($content['field_image']);


    return theme('gladstone_overlay_theme_pane', 
              array( 'title' => $title,
                     'content' => $caption,
                     'link' => $link,
                     'settings' => $settings,
                     'background' => $background,
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
function gladstone_overlay_pane_settings_form($style_settings) {

  $form['url'] = array(
    '#title' => t('URL'),
    '#description' => t('link target for title/icon'),
    '#type'  => 'textfield',
    '#default_value' => (isset($style_settings['url'])) ? $style_settings['url'] : NULL,
  );    

  $form['icon'] = array(
    '#title' => t('Font Awesome Icon Class'),
    '#description' => t('Set the icon class e.g. "fa-close"'),
    '#type'  => 'textfield',
    '#default_value' => (isset($style_settings['icon'])) ? $style_settings['icon'] : NULL,
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


