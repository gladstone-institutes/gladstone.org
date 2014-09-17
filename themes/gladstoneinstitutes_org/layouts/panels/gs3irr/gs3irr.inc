<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function gladstoneinstitutes_org_gs3irr_panels_layouts() {
  $items['gs3irr'] = array(
    'title'    => t('GS 3 Inset Right Right Aligned'),
    'category' => t('Gladstone'),
    'icon'     => 'gs3irr.png',
    'theme'    => 'gs3irr',
    'admin css' => 'gs3irr.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'gs3irr_header'  => t('Header (conditional)'),
      'gs3irr_top'     => t('Top (conditional)'),
      'gs3irr_sidebar' => t('Left'),
      'gs3irr_middle'  => t('Center'),
      'gs3irr_inset'   => t('Right'),
      'gs3irr_bottom'  => t('Bottom (conditional)'),
      'gs3irr_footer'  => t('Footer (conditional)')
    ),
    // AT Core
    'type' => 'inset',
    'options' => array(
      'gs3irr' => 'default',
      'gs3irr-wrap' => 'wrap',
      'gs3irr-stack' => 'stack',
    ),
    'styles' => array(
      'gs3irr' => array(
        'css' => array(
          '25' => array('.gs3irr > .region-gs3irr-sidebar' => 'width:25%'),
          '75fl' => array('.gs3irr > .inset-wrapper' => 'width:75%;float:left'),
          '33' => array('.gs3irr > .inset-wrapper > div.region-gs3irr-middle' => 'width:33.333333%'),
          '66' => array('.gs3irr > .inset-wrapper > div.region-gs3irr-inset' => 'width:66.666666%'),
          '100' => array('.gs3irr > .inset-wrapper > .region' => 'width:100%'),
        ),
      ),
      'gs3irr-wrap' => array(
        'css' => array(
          '25'   => array('.gs3irr > .region-gs3irr-sidebar' => 'width:25%'),
          '75fl' => array('.gs3irr > .inset-wrapper' => 'width:75%;float:left'),
          'fdw'  => array(
              '.gs3irr > .region-gs3irr-header,'.
              '.gs3irr > .region-gs3irr-top,'.
              '.gs3irr > .region-gs3irr-footer,'.
              '.gs3irr > .inset-wrapper > .region' => 'float:none;display:block;width:100%;clear:both'
          ),
        ),
      ),
      'gs3irr-stack' => array(
        'css' => array(
          'fdw' => array(
              '.gs3irr > .region-gs3irr-header,'.
              '.gs3irr > .region-gs3irr-top,'.
              '.gs3irr > .region-gs3irr-footer,'.
              '.gs3irr > .region-gs3irr-middle,'.
              '.gs3irr > .inset-wrapper,'.
              '.gs3irr > .inset-wrapper > .region,'.
              '.gs3irr > .region-gs3irr-sidebar' => 'float:none;display:block;width:100%;clear:both'
          ),
        ),
      ),
    ),
  );

  return $items;
}

/**
 * Preprocess variables for gs3irr.tpl.php
 */
function template_preprocess_gs3irr(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
