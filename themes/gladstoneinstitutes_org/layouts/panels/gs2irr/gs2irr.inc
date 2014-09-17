<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function gladstoneinstitutes_org_gs2irr_panels_layouts() {
  $items['gs2irr'] = array(
    'title'    => t('GS 2 Col (25full, 75stack)'),
    'category' => t('Gladstone'),
    'icon'     => 'gs2irr.png',
    'theme'    => 'gs2irr',
    'admin css' => 'gs2irr.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'gs2irr_header'  => t('Header (conditional)'),
      'gs2irr_top'     => t('Top (conditional)'),
      'gs2irr_sidebar' => t('Left'),
      'gs2irr_inset'   => t('Right'),
      'gs2irr_bottom'  => t('Bottom (conditional)'),
      'gs2irr_footer'  => t('Footer (conditional)')
    ),
    // AT Core
    'type' => 'inset',
    'options' => array(
      'gs2irr' => 'default',
      'gs2irr-wrap' => 'wrap',
      'gs2irr-stack' => 'stack',
    ),
    'styles' => array(
      'gs2irr' => array(
        'css' => array(
          '25' => array('.gs2irr > .region-gs2irr-sidebar' => 'width:25%'),
          '75fl' => array('.gs2irr > .inset-wrapper' => 'width:75%;float:left'),
          '100' => array(
                    '.gs2irr > .inset-wrapper > div.region-gs2irr-inset,'.
                    '.gs2irr > .inset-wrapper > .region' => 'width:100%'
          ),
        ),
      ),
      'gs2irr-wrap' => array(
        'css' => array(
          '25'   => array('.gs2irr > .region-gs2irr-sidebar' => 'width:25%'),
          '75fl' => array('.gs2irr > .inset-wrapper' => 'width:75%;float:left'),
          'fdw'  => array(
              '.gs2irr > .region-gs2irr-header,'.
              '.gs2irr > .region-gs2irr-top,'.
              '.gs2irr > .region-gs2irr-footer,'.
              '.gs2irr > .inset-wrapper > .region' => 'float:none;display:block;width:100%;clear:both'
          ),
        ),
      ),
      'gs2irr-stack' => array(
        'css' => array(
          'fdw' => array(
              '.gs2irr > .region-gs2irr-header,'.
              '.gs2irr > .region-gs2irr-top,'.
              '.gs2irr > .region-gs2irr-footer,'.
              '.gs2irr > .inset-wrapper,'.
              '.gs2irr > .inset-wrapper > .region,'.
              '.gs2irr > .region-gs2irr-sidebar' => 'float:none;display:block;width:100%;clear:both'
          ),
        ),
      ),
    ),
  );

  return $items;
}

/**
 * Preprocess variables for gs2irr.tpl.php
 */
function template_preprocess_gs2irr(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
