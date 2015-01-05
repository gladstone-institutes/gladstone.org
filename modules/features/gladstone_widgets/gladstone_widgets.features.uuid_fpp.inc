<?php
/**
 * @file
 * gladstone_widgets.features.uuid_fpp.inc
 */

/**
 * Implements hook_uuid_features_default_fpps().
 */
function gladstone_widgets_uuid_features_default_fpps() {
  $fpps = array();

  $fpps[] = array(
    'timestamp' => 1418087832,
    'title' => '',
    'log' => '',
    'bundle' => 'image',
    'link' => 0,
    'path' => '',
    'reusable' => 1,
    'admin_title' => 'Contact',
    'admin_description' => '',
    'category' => 'Reusable Content',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1417662382,
    'uuid' => '6a35db60-b29e-4532-be1a-5978e3cd1e39',
    'language' => 'und',
    'field_formatter' => array(
      'und' => array(
        0 => array(
          'type' => 'image',
          'settings' => 'a:2:{s:11:"image_style";s:0:"";s:10:"image_link";s:0:"";}',
        ),
      ),
    ),
    'field_image' => array(),
    'field_longtext' => array(
      'und' => array(
        0 => array(
          'value' => '<p>1650 OWENS STREET<br />
SAN FRANCISCO, CA 94158<br />
415.734.2000</p>
',
          'format' => 'full_html',
          'safe_value' => '<p>1650 OWENS STREET<br />
SAN FRANCISCO, CA 94158<br />
415.734.2000</p>
',
        ),
      ),
    ),
  );
  return $fpps;
}
