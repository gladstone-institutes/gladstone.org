<?php


/**
* Implementation of hook_panels_styles().
*/

// Plugin definition
$plugin = array(  
  'title'              => t('Masonry (WILL BREAK IPE)'),
  'description'        => t('Style blocks for masonry like stacking'),
  'render region'      => 'masonry_render_region',
  'settings form'      => 'masonry_region_settings_form', 
  'render pane'        => 'masonry_render_pane',
  'pane settings form' => 'masonry_pane_settings_form',
  'hook theme' => array(
    'masonry_theme_region' => array(
      'template' => 'masonry-pane',
      'path' => drupal_get_path('module','gladstone_theme').'/plugins/styles/masonry',
      'variables' => array(
          'content' => NULL,
          'title' => NULL,
          'settings' => NULL,
      )
    ),
    'masonry_theme_pane' => array(
      'template' => 'masonry-pane',
      'path' => drupal_get_path('module','gladstone_theme').'/plugins/styles/masonry',
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
 * Render callback.
 *
 * render called for a region, can also render each individual pane
 * NOTE: that it does not call _render_pane but instead theme() directly
 *
 * @ingroup themeable
 */
function theme_masonry_render_region($vars) {
  $display    = $vars['display'];
  $owner_id   = $vars['owner_id'];
  $region_id  = $vars['region_id'];
  $panes      = $vars['panes'];
  $settings   = $vars['settings'];
  $style      = $vars['style'];


  $first_pane_id = array_keys($panes)[0];

  $masonry_conf = "data-masonry-options='{ ".
                  '"columnWidth": 60,'.
                  // '"containerStyle": null,'.
                  // '"isFitWidth": true,'.
                  '"itemSelector": ".masonry-pane"'.
                  "}'";

  $output = '<div id="masonry-'.$region_id.'" class="js-masonry" '.$masonry_conf.'>';
  foreach ($panes as $pane_id => $pane) {
      $output .= $pane;
  }

  dpm($vars,'Region');
  
  // Add js files
  $masonryjs = drupal_get_path('module','gladstone_theme').'/js/masonry.pkgd.min.js';
  drupal_add_js($masonryjs, 'file');

  return $output.'</div>';
}

/**
 * Render callback for a single pane.
 *
 * render called by a single styled pane
 */
function theme_masonry_render_pane($vars) {
  if (empty($vars['content']->content)) { return; }

  $ctype    = $vars['content']->type;
  $content  = $vars['content']->content;
  $entity   = $content['#'.$ctype];
  $pane     = $vars['pane'];
  $display  = $vars['display'];
  $settings = $vars['settings'];


  dpm($vars,'Pane');
  dpm($entity,'Ent');


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
  }

  $path = $vars['style']['hook theme']['masonry_theme_pane']['path'];
  drupal_add_css($path.'/masonry.css', array('group' => CSS_DEFAULT, 'every_page' => TRUE));
  

  // $css = '.feature-image, .feature-image a { color:'.$settings['caption_color'].'; }'.
  //        '.feature-image .field-name-field-longtext { font-size:'.$settings['caption_size'].';}';
  // drupal_add_css($css,array('type' => 'inline'));

  // apply feature box wrappers
  return theme('masonry_theme_pane', 
            array( 'title' => $title,
                   'content' => render($content),
                   'link' => $link,
                   'settings' => $settings,
            )
          );
}


/**
 * Implements template_preprocess_HOOK().
 *
 * Adds our classes to Panels' default array.
 */
// function template_preprocess_masonry_render_pane(&$vars) {

//   dpm($vars,'Preproc');
// }

/**
 * Settings form callback.
 */
function masonry_region_settings_form($style_settings) {

}

/**
 * Settings form callback.
 */
function masonry_pane_settings_form($style_settings) {

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

  $form['icon'] = array(
    '#title' => t('Font Awesome Icon Class'),
    '#description' => t('Set the icon class e.g. "fa-close"'),
    '#type'  => 'textfield',
    '#default_value' => (isset($style_settings['icon'])) ? $style_settings['icon'] : NULL,
  );    

  return $form;
}


