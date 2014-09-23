<?php

// Plugin definition.
$plugin = array(
  'title' => t('GS 2 Col (65,35) stack'),
  'category' => t('Gladstone'),
  'icon' => 'ga_editing.png',
  'theme' => 'ga_editing',
  'css' => 'ga_editing.css',
  'admin css' => 'ga_editing.admin.css',
  'regions' => array(
    'header' => t('Header (conditional)'),
    'top' => t('Top (conditional)'),
    'left' => t('Left'),
    'right' => t('Right'),
    'footer' => t('Footer (conditional)'),
  ),
);
