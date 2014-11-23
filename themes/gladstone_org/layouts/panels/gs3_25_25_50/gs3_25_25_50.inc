<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function gladstone_org_gs3_25_25_50_panels_layouts() {
  $items['gs3_25_25_50'] = array(
    'title'    => t('GS Three column 25/25/50'),
    'category' => t('Gladstone'),
    'icon'     => 'gs3_25_25_50.png',
    'theme'    => 'gs3_25_25_50',
    'admin css' => 'gs3_25_25_50.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'gs3_25_25_50_header'  => t('Feature (conditional)'),
      'gs3_25_25_50_top'     => t('Top (conditional)'),
      'gs3_25_25_50_sidebar' => t('Left'),
      'gs3_25_25_50_middle'  => t('Center'),
      'gs3_25_25_50_inset'   => t('Right'),
      'gs3_25_25_50_bottom'  => t('Bottom (conditional)'),
    ),
    // AT Core
    'type' => 'inset',
    'options' => array(
      'gs3-25-25-50' => 'default',
      'gs3-25-25-50-wrap' => 'wrap',
      'gs3-25-25-50-stack' => 'stack',
    ),
    'styles' => array(
      'gs3-25-25-50' => array(
        'css' => array(
          '25' => array('.gs3-25-25-50 .container > .region-gs3-25-25-50-sidebar' => 'width:25%'),
          '75fl' => array('.gs3-25-25-50 .container > .inset-wrapper' => 'width:75%;float:left'),
          '33' => array('.gs3-25-25-50 .container > .inset-wrapper > div.region-gs3-25-25-50-middle' => 'width:33.333333%'),
          '66' => array('.gs3-25-25-50 .container > .inset-wrapper > div.region-gs3-25-25-50-inset' => 'width:66.666666%'),
          '100' => array('.gs3-25-25-50 .container > .inset-wrapper > .region' => 'width:100%'),
        ),
      ),
      'gs3-25-25-50-wrap' => array(
        'css' => array(
          '25'   => array('.gs3-25-25-50 .container > .region-gs3-25-25-50-sidebar' => 'width:25%'),
          '75fl' => array('.gs3-25-25-50 .container > .inset-wrapper' => 'width:75%;float:left'),
          'fdw'  => array(
              '.gs3-25-25-50 .container > .region-gs3-25-25-50-header,'.
              '.gs3-25-25-50 .container > .region-gs3-25-25-50-top,'.
              '.gs3-25-25-50 .container > .region-gs3-25-25-50-footer,'.
              '.gs3-25-25-50 .container > .inset-wrapper > .region' => 'float:none;display:block;width:100%;clear:both'
          ),
        ),
      ),
      'gs3-25-25-50-stack' => array(
        'css' => array(
          'fdw' => array(
              '.gs3-25-25-50 .container > .region-gs3-25-25-50-header,'.
              '.gs3-25-25-50 .container > .region-gs3-25-25-50-top,'.
              '.gs3-25-25-50 .container > .region-gs3-25-25-50-middle,'.
              '.gs3-25-25-50 .container > .inset-wrapper,'.
              '.gs3-25-25-50 .container > .inset-wrapper > .region,'.
              '.gs3-25-25-50 .container > .region-gs3-25-25-50-sidebar' => 'float:none;display:block;width:100%;clear:both'
          ),
        ),
      ),
    ),
  );

  return $items;
}

/**
 * Preprocess variables for gs3-25-25-50.tpl.php
 */
function template_preprocess_gs3_25_25_50(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
