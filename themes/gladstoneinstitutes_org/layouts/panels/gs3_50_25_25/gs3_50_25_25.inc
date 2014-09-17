<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function gladstoneinstitutes_org_gs3_50_25_25_panels_layouts() {
  $items['gs3_50_25_25'] = array(
    'title'    => t('GS 3 Col (50,25,25) full'),
    'category' => t('Gladstone'),
    'icon'     => 'gs3_50_25_25.png',
    'theme'    => 'gs3_50_25_25',
    'admin css' => 'gs3_50_25_25.admin.css',
    // 'css' => 'gs3_50_25_25.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'gs3_50_25_25_top'    => t('Top (conditional)'),
      'gs3_50_25_25_first'  => t('Left'),
      'gs3_50_25_25_second' => t('Center'),
      'gs3_50_25_25_third'  => t('Right'),
      'gs3_50_25_25_bottom' => t('Bottom (conditional)'),
    ),
    // AT Core
    'type' => 'three',
    'options' => array(
      'gs3-50-25-25' => 'default',
      'gs3-50-25-25-stack-bottom' => 'stack bottom',
      'gs3-50-25-25-stack-top' => 'stack top',
      'gs3-50-25-25-stack' => 'stack',
    ),
    'styles' => array(
      'gs3-50-25-25' => array(
        'css' => array(
          '25' => array('.content-box > .region' => 'width:24%; margin-right:1%;'),
          '25x' => array('.content-box > div.region-gs3-50-25-25-third' => 'width:24%; margin-right:0;'),
          '50' => array('.content-box > div.region-gs3-50-25-25-first' => 'width:49%; margin-right:1%'),
        ),
      ),
      'gs3-50-25-25-stack-bottom' => array(
        'css' => array(
          '75' => array('.content-box > div.region-gs3-50-25-25-first' => 'width:74%; margin-right:1%;'),
          '25' => array('.content-box > div.region-gs3-50-25-25-second' => 'width:24%; margin-right:1%;'),
          'fdw' => array('.content-box > .region-gs3-50-25-25-third' => 'float:none;display:block;width:100%;clear:both;margin-right:0;'),
        ),
      ),
      'gs3-50-25-25-stack-top' => array(
        'css' => array(
          '50' => array('.content-box > .region-gs3-50-25-25-second,.content-box .region-gs3-50-25-25-third' => 'width:50%'),
          'fdw' => array('.content-box > .region-gs3-50-25-25-first' => 'float:none;display:block;width:100%;clear:both'),
        ),
      ),
      'gs3-50-25-25-stack' => array(
        'css' => array(
          'fdw' => array('.gs3-50-25-25 .region' => 'float:none;display:block;width:100%;clear:both'),
        ),
      ),
    ),
  );

  return $items;
}

/**
 * Preprocess variables for gs3-50-25-25.tpl.php
 */
function template_preprocess_gs3_50_25_25(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
