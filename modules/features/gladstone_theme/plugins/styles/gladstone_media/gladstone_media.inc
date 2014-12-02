<?php


/**
* Implementation of hook_panels_styles().
*/

// Plugin definition
$plugin = array(  
  'title'              => t('Gladstone Media'),
  'description'        => t('Gladstone media pane style'),
  'render region'      => NULL, //exclude use on regions
  'settings form'      => NULL, //
  'render pane'        => 'gladstone_media_render_pane',
  'pane settings form' => 'gladstone_media_pane_settings_form',
  'hook theme' => array(
    'gladstone_media_theme_pane' => array(
      'template' => 'gladstone-media-pane',
      'path' => drupal_get_path('module','gladstone_theme').'/plugins/styles/gladstone_media',
      'variables' => array(
          'content' => NULL,
          'contextual_links' => NULL,
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
function theme_gladstone_media_render_pane($vars) {
  if (empty($vars['content']->content)) { return; }

  $ctype    = $vars['content']->type;
  $content  = $vars['content']->content;
  $entity   = (is_array($content) && array_key_exists('#'.$ctype,$content)) ? $content['#'.$ctype] : NULL;
  $pane     = $vars['pane'];
  $display  = $vars['display'];
  $settings = $vars['settings'];


  dpm($vars,'Pane');
  dpm($entity,'Ent');

  $title = $vars['content']->title;
  if (property_exists($entity, 'link') && $entity->link && !empty($entity->path)) {
    $alias = drupal_get_path_alias($entity->path);
    $link = ($alias) ? $alias : $entity->path;
  } elseif (!empty($settings['url'])) {
    $alias = drupal_get_path_alias($settings['url']);
    $link = ($alias) ? $alias : $settings['url'];
  } else {
    $link = NULL;
  }

  $contextual_links = $content['#contextual_links'];
  $content['#contextual_links'] = NULL;


  // dpm($content,"Contextual Links");

  $path = $vars['style']['path'];
  drupal_add_css($path.'/gladstone_media.css', array('group' => CSS_DEFAULT, 'every_page' => TRUE));

  // prep css classes for pane container
  $settings['css'] = implode(' ',array($settings['width'],$settings['float'],$settings['clear']));

  // apply feature box wrappers
  return theme('gladstone_media_theme_pane', 
            array( 'title' => $title,
                   'content' => render($content),
                   'contextual_links' => render($contextual_links),
                   'link' => $link,
                   'settings' => $settings,
            )
          );
}

/**
 * Settings form callback.
 */
function gladstone_media_pane_settings_form($style_settings) {

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
      'clear-left' => 'Clear left',
      'clear-right' => 'Clear right',
      'clear-both' => 'Clear both',
    ),
    '#default_value' => (isset($style_settings['clear'])) ? $style_settings['clear'] : NULL,
  );    

  $form['image_layout'] = array(
    '#title' => t('Image layout'),
    '#description' => t('Adjust how content flows around images'),
    '#type'  => 'select',
    '#options' => array(
    //'css class' => 'Selection display name'
      'image-full' => 'Full width',
      'image-float-left' => 'Image floats left, text flows around on right',
      'image-float-right' => 'Image floats right, text flows around on left',
    ),
    '#default_value' => (isset($style_settings['image_layout'])) ? $style_settings['image_layout'] : 'image-full',
  );      

  return $form;
}


