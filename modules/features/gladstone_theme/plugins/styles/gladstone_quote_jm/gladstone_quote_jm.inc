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
      'path' => drupal_get_path('module','gladstone_theme').'/plugins/styles/gladstone_quote_jm',
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

  // dpm($vars,'Pane');
  // dpm($entity,'Ent');


  if ( $ctype == 'fieldable_panels_pane' && $entity->bundle == 'jump_menu') {

    $settings['fpid'] = $entity->fpid;
    
    $title = $vars['content']->title;
    if (!empty($settings['url'])) {
      $alias = drupal_get_path_alias($settings['url']);
      $link = ($alias) ? $alias : $settings['url'];
    } else {
      $link = NULL;
    }

    $caption = $entity->field_longtext['und'][0]['safe_value'];

    // create  relative url for our css background image
    global $base_url;          
    $bg_image_url = file_create_url($entity->field_image['und'][0]['uri']);
    // make path relative, this fails for sites in a subdir
    // $bg_image_url = preg_replace('#' . $base_url . '#', '', $bg_image_url);
    $settings['bg_image_url'] = $bg_image_url;
    $css = '.gladstone-quote-jm.fpp-id-'.$entity->fpid.' .content-wrapper { background: rgb(0, 40, 61) url('.$bg_image_url.') no-repeat;}';
    drupal_add_css($css,array('type' => 'inline'));  

    $path = $vars['style']['path'];
    drupal_add_css($path.'/gladstone_quote_jm.css', array('group' => CSS_DEFAULT, 'every_page' => TRUE));

    // prep css classes for pane container
    $settings['clear'] = ($settings['clear'] == 'null') ? NULL : $settings['clear'];
    $settings['css'] = implode(' ',array($settings['width'],$settings['float'],$settings['clear']));

    // create jump menu
    $menu = _gladstone_quote_build_jump_menu($entity->field_urls[LANGUAGE_NONE]);
    
    // add rollover binding
    $js = '(function ($) {
            Drupal.behaviors.gladstoneQuoteJumpMenu = {
              attach: function (context, settings) {
                $(".gladstone-quote-jm.rollover").hover( function(){
                    $(".rollover",this).toggle();
                  }
                );
              }
            };
          })(jQuery);';
    drupal_add_js($js,array('type' => 'inline', 'scope' => 'footer'));

    // apply feature box wrappers
    return theme('gladstone_quote_jm_theme_pane', 
              array( 'title' => $title,
                     'content' => $caption,
                     'menu' => $menu,
                     'settings' => $settings,
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


