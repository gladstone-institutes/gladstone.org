<?php


/**
* Implementation of hook_panels_styles().
*/

// Plugin definition
$plugin = array(
  'title' => t('Feature Image'),
  'description' => t('Styles an image for display in the feature region'),
  'render region' => NULL, // prevent regions from using this style
  'settings form' => NULL, //
  'render pane'   => 'feature_image_render_pane',
  'pane settings form' => 'feature_image_pane_settings_form',
  'hook theme' => array(
    'feature_image_theme_pane' => array(
      'template' => 'feature-image-pane',
      'path' => drupal_get_path('theme','gladstone_org').'/styles/feature_image',
      'variables' => array(
          'content' => NULL,
          'title' => NULL,
          'image' => NULL,
          'caption' => NULL,
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
function theme_feature_image_render_pane($vars) {
  if (empty($vars['content']->content)) { return; }

  $ctype    = $vars['content']->type;
  $content  = $vars['content']->content;
  // $entity   = $content['#element'];
  $entity   = (is_array($content) && array_key_exists('#'.$ctype,$content)) ? $content['#'.$ctype] : NULL;
  $pane     = $vars['pane'];
  $display  = $vars['display'];
  $settings = $vars['settings'];

  if ( $ctype == 'fieldable_panels_pane' && $entity->bundle == 'image') {

    // dpm($vars);
    // dpm($entity);

    $caption = render($content['field_longtext']);
    $image   = render($content['field_image']);


    if (!empty($vars['content']->title)) {
      $style  = 'style="color:'.$settings['title_color'].';margin:0;"';
      $title  = '<'.$settings['title_tag'].' class="title" '.$style.'>';
      $title .= $vars['content']->title;
      $title .= '</'.$settings['title_tag'].'>';
    } else {
      $title = NULL;
    }

    if ($entity->link) {
      $alias = drupal_get_path_alias($entity->path);
      $link = ($alias) ? $alias : $entity->path;
    } else {
      $link = NULL;
    }

    $path = $vars['style']['hook theme']['feature_image_theme_pane']['path'];
    drupal_add_css($path.'/feature_image.css', array('group' => CSS_DEFAULT, 'every_page' => TRUE));
    

    $css = '.feature-image, .feature-image a { color:'.$settings['caption_color'].'; }'.
           '.feature-image .field-name-field-longtext { font-size:'.$settings['caption_size'].';}';
    drupal_add_css($css,array('type' => 'inline'));

    // apply feature box wrappers
    return theme('feature_image_theme_pane', 
              array(
                  'title' => $title,
                  'image' => $image,
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
function feature_image_pane_settings_form($style_settings) {

  $form['title_tag'] = array(
    '#title' => t('Title tag'),
    '#description' => t('Set the enclosing title tags'),
    '#type'  => 'select',
    '#options' => array(
      'h1' => 'h1',
      'h2' => 'h2',
      'h3' => 'h3',
      'h4' => 'h4',
      'h5' => 'h5',
      'h6' => 'h6',
      'p' => 'p',
      'span' => 'span',
    ),
    '#default_value' => (isset($style_settings['title_tag'])) ? $style_settings['title_tag'] : 'h3',
  );

  $form['title_color'] = array(
    '#title' => t('Title Color'),
    '#description' => t('Set the title color in hex e.g. #F00'),
    '#type'  => 'textfield',
    '#default_value' => (isset($style_settings['title_color'])) ? $style_settings['title_color'] : '#000',
  );  

  $form['caption_color'] = array(
    '#title' => t('Caption Color'),
    '#description' => t('Set the caption color in hex e.g. #F00'),
    '#type'  => 'textfield',
    '#default_value' => (isset($style_settings['caption_color'])) ? $style_settings['caption_color'] : '#000',
  );  

  $form['caption_size'] = array(
    '#title' => t('Caption Font Size'),
    '#description' => t('Set the caption size with units e.g 1em/12pt'),
    '#type'  => 'textfield',
    '#default_value' => (isset($style_settings['caption_size'])) ? $style_settings['caption_size'] : '1em',
  );    

  return $form;
}


