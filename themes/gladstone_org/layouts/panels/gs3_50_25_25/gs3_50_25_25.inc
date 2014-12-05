<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function gladstone_org_gs3_50_25_25_panels_layouts() {
  $items['gs3_50_25_25'] = array(
    'title'    => t('GS Three column 50/25/25'),
    'category' => t('Gladstone'),
    'icon'     => 'gs3_50_25_25.png',
    'theme'    => 'gs3_50_25_25',
    'css'      => 'gs3_50_25_25.css',
    'admin css' => 'gs3_50_25_25.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'gs3_50_25_25_top'    => t('Feature (conditional)'),
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
          '25' => array('.gs3-50-25-25 .container > .region' => 'width:25%'),
          '50' => array('.gs3-50-25-25 .container > div.region-gs3-50-25-25-first' => 'width:50%'),
          'fdw' => array('.gs3-50-25-25 .container > .region-gs3-50-25-25-top,'. 
                         '.gs3-50-25-25 .container > .region-gs3-50-25-25-bottom'
                         => 'float:none;display:block;width:100%;clear:both'),
        ),
      ),
      'gs3-50-25-25-stack-bottom' => array(
        'css' => array(
          '75' => array('.gs3-50-25-25 .container > div.region-gs3-50-25-25-first' => 'width:75%'),
          '25' => array('.gs3-50-25-25 .container > div.region-gs3-50-25-25-second' => 'width:25%'),
          'fdw' => array('.gs3-50-25-25 .container > .region-gs3-50-25-25-third' => 'float:none;display:block;width:100%;clear:both'),
        ),
      ),
      'gs3-50-25-25-stack-top' => array(
        'css' => array(
          '50' => array('.gs3-50-25-25 .container > .region-gs3-50-25-25-second,.gs3-50-25-25 .region-gs3-50-25-25-third' => 'width:50%'),
          'fdw' => array('.gs3-50-25-25 .container > .region-gs3-50-25-25-first' => 'float:none;display:block;width:100%;clear:both'),
        ),
      ),
      'gs3-50-25-25-stack' => array(
        'css' => array(
          'fdw' => array('.gs3-50-25-25 .container > .region' => 'float:none;display:block;width:100%;clear:both'),
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
