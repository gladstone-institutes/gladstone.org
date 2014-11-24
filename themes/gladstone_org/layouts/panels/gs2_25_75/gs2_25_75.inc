<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function gladstone_org_gs2_25_75_panels_layouts() {
  $items['gs2_25_75'] = array(
    'title'    => t('GS Two column 25/75'),
    'category' => t('Gladstone'),
    'icon'     => 'gs2_25_75.png',
    'theme'    => 'gs2_25_75',
    'admin css' => 'gs2_25_75.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'gs2_25_75_header'  => t('Feature (conditional)'),
      'gs2_25_75_sidebar' => t('Left'),
      'gs2_25_75_inset'   => t('Right'),
    ),
    // AT Core
    'type' => 'two',
    'options' => array(
      'gs2-25-75' => 'default',
      'gs2-25-75-stack' => 'stack',
    ),
    'styles' => array(
      'gs2-25-75' => array(
        'css' => array(
          '25' => array('.gs2-25-75 .container > .region-gs2-25-75-sidebar' => 'width:25%'),
          '75fl' => array('.gs2-25-75 .container > .inset-wrapper' => 'width:75%;float:left'),
          '100' => array('.gs2-25-75 .container > .inset-wrapper > .region' => 'width:100%'),
        ),
      ),
      'gs2-25-75-stack' => array(
        'css' => array(
          'fdw' => array(
              '.gs2-25-75 .container .region' => 'float:none;display:block;width:100%;clear:both'
          ),
        ),
      ),
    ),
  );

  return $items;
}

/**
 * Preprocess variables for gs2-25-75.tpl.php
 */
function template_preprocess_gs2_25_75(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
