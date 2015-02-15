<?php

/**
 * Menu callback for general reporting.
 */
function biblio_ucsf_profiles_report_page() {

  $header = array(
    array('data' => t('Name'),         'field' => 'field_realname_family', 'sort' => 'asc'),
    array('data' => t('API ID'),       'field' => 'ucsf_id'),
    array('data' => t('Status'),       'field' => 'status'),
    array('data' => t('Last Checked'), 'field' => 'timestamp'),
  );

  // Build pager query.
  $query =  db_select('users','u')
              ->fields('u',array('uid','name'))
              ->condition('u.status',0,'<>')
              ->condition('u.uid', 1, '>')
              ->extend('PagerDefault')
              ->limit(150)
              ->extend('TableSort')
              ->orderByHeader($header);
  $query->leftjoin('field_data_field_realname','rn',
              "rn.entity_id = u.uid AND rn.bundle = 'user' AND rn.entity_type = 'user'");
  $query->fields('rn',array('field_realname_given','field_realname_family'));
  $query->leftjoin('field_data_field_text','t',
              "t.entity_id = u.uid AND t.bundle = 'user' AND t.entity_type = 'user'");
  $query->addField('t','field_text_value','ucsf_id');
  $query->leftjoin('biblio_ucsf_profiles','b','b.uid = u.uid');
  $query->addField('b','ucsf_id','last_used_ucsf_id'); 
  $query->fields('b',array('status','timestamp'));
        
  
  $profiles = $query->execute();


  $rows = array();
  while ($profile = $profiles->fetchObject()) {

    $display_name = "$profile->field_realname_given $profile->field_realname_family";
    if ( strlen($display_name) <= 1) {
      $display_name = $profile->name;
    }

    $rows[] = array(
      'data' => array(
        l($display_name,"user/$profile->uid/edit"),
         $profile->ucsf_id,
         $profile->status,
         format_date($profile->timestamp, 'medium'),
      ),
      'class' => array(($profile->status == 'error') ? 'error' : NULL,), 
    );

  }

  $build['biblio_ucsf_profiles_table'] = array(
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
    '#empty' => t('No UCSF Profiles accounts found'),
  );
  $build['biblio_ucsf_profiles_pager'] = array('#theme' => 'pager');

  return $build;
}
