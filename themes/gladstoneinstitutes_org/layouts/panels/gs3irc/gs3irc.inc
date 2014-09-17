<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function gladstoneinstitutes_org_gs3irc_panels_layouts() {
  $items['gs3irc'] = array(
    'title'    => t('GS 3 Inset Right Centered'),
    'category' => t('Gladstone'),
    'icon'     => 'gs3irc.png',
    'theme'    => 'gs3irc',
    'admin css' => 'gs3irc.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'gs3irc_header'  => t('Header (conditional)'),
      'gs3irc_top'     => t('Top (conditional)'),
      'gs3irc_sidebar' => t('Left'),
      'gs3irc_middle'  => t('Center'),
      'gs3irc_inset'   => t('Right'),
      'gs3irc_bottom'  => t('Bottom (conditional)'),
      'gs3irc_footer'  => t('Footer (conditional)')
    ),
    // AT Core
    'type' => 'inset',
    'options' => array(
      'gs3irc' => 'default',
      'gs3irc-wrap' => 'wrap',
      'gs3irc-stack' => 'stack',
    ),
    'styles' => array(
      'gs3irc' => array(
        'css' => array(
          '25' => array('.gs3irc > .region-gs3irc-sidebar' => 'width:25%'),
          '75fl' => array('.gs3irc > .inset-wrapper' => 'width:75%;float:left'),
          '33' => array('.gs3irc > .inset-wrapper > div.region-gs3irc-inset' => 'width:33.333333%'),
          '66' => array('.gs3irc > .inset-wrapper > div.region-gs3irc-middle' => 'width:66.666666%'),
          '100' => array('.gs3irc > .inset-wrapper > .region' => 'width:100%'),
        ),
      ),
      'gs3irc-wrap' => array(
        'css' => array(
          '25'   => array('.gs3irc > .region-gs3irc-sidebar' => 'width:25%'),
          '75fl' => array('.gs3irc > .inset-wrapper' => 'width:75%;float:left'),
          'fdw'  => array(
              '.gs3irc > .region-gs3irc-header,'.
              '.gs3irc > .region-gs3irc-top,'.
              '.gs3irc > .region-gs3irc-footer,'.
              '.gs3irc > .inset-wrapper > .region' => 'float:none;display:block;width:100%;clear:both'
          ),
        ),
      ),
      'gs3irc-stack' => array(
        'css' => array(
          'fdw' => array(
              '.gs3irc > .region-gs3irc-header,'.
              '.gs3irc > .region-gs3irc-top,'.
              '.gs3irc > .region-gs3irc-footer,'.
              '.gs3irc > .region-gs3irc-middle,'.
              '.gs3irc > .inset-wrapper,'.
              '.gs3irc > .inset-wrapper > .region,'.
              '.gs3irc > .region-gs3irc-sidebar' => 'float:none;display:block;width:100%;clear:both'
          ),
        ),
      ),
    ),
  );

  return $items;
}

/**
 * Preprocess variables for gs3irc.tpl.php
 */
function template_preprocess_gs3irc(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
