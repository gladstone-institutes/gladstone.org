<?php

class GSProfile2Base extends DrupalMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->source = new MigrateSourceSQL(
          $this->query(), 
          $this->sourceFields,
          NULL, 
          $this->sourceOptions
    );

    $this->map = new MigrateSQLMap(
      $this->machineName,
      MigrateDestinationProfile2::getKeySchema(), //source
      MigrateDestinationProfile2::getKeySchema()  //dest
    );

  }

  protected function query() {
    $query = Database::getConnection('legacy', $this->sourceConnection)
      ->select('profile', 'p')
      ->fields('p', array('pid','uid','label'));
    return $query;
  }
}

class GSProfile extends GSProfile2Base {
  public function __construct(array $arguments) {
      $arguments['description'] = 'import user profile2:profiles';

      $this->sourceFields += array(
        'op_units' => t('Operational Units'),
        'op_roles' => t('Operational Roles'),
        'op_titles' => t('Operational Titles'),
        'alternate_emails' => t('secondary email contacts'),
        'urls_url' => t('website urls'),
        'urls_title' => t('website titles'),
        'urls_attr' => t('website attributes'),
      );

      parent::__construct($arguments);

      // make sure our roles are migrated first
      // add the machine name for the role migration class
      $this->dependencies[] = 'user';
      $this->dependencies[] = 'files';
      $this->dependencies[] = 'operational_unit';
      $this->dependencies[] = 'operational_role';
      $this->dependencies[] = 'operational_title';

      // the 'profile' argument is the machine name of the destination
      // profile type
      $this->destination = new MigrateDestinationProfile2('profile'); 


      // field mappings (destination, source) ------------------------
      $this->addFieldMapping('uid','uid')->sourceMigration('user');
      $this->addFieldMapping('language')->defaultValue('en');

      $this->addFieldMapping('field_accomplishments','field_accomplishments_value');
      $this->addFieldMapping('field_accomplishments:format')->defaultValue('rich_text');
      $this->addFieldMapping('field_address','field_address_value');
      $this->addFieldMapping('field_biography','field_biography_value');
      $this->addFieldMapping('field_biography:summary','field_biography_summary');
      $this->addFieldMapping('field_biography:format')->defaultValue('rich_text');

      $this->addFieldMapping('field_date_yyyy','field_date_yyyy_value');
      $this->addFieldMapping('field_display_title','field_display_title_value');
      $this->addFieldMapping('field_fax','field_fax_value');
      $this->addFieldMapping('field_image','field_image_fid')->sourceMigration('files');
      $this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');
      $this->addFieldMapping('field_image:preserve_files')->defaultValue(TRUE);
      $this->addFieldMapping('field_image:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
      $this->addFieldMapping('field_image:language')->defaultValue(LANGUAGE_NONE);
      $this->addFieldMapping('field_linkedin', 'field_linkedin_url');
      $this->addFieldMapping('field_linkedin:title', 'field_linkedin_title');
      $this->addFieldMapping('field_linkedin:attributes', 'field_linkedin_attributes');
      $this->addFieldMapping('field_longtext', 'field_longtext_value');
      $this->addFieldMapping('field_longtext:format')->defaultValue('rich_text');
      $this->addFieldMapping('field_phone','field_phone_value');
      $this->addFieldMapping('field_public_email','field_public_email_email');
      $this->addFieldMapping('field_alternate_email','alternate_emails');
      $this->addFieldMapping('field_research_interests','field_research_interests_value');
      $this->addFieldMapping('field_research_interests:format')->defaultValue('rich_text');
      $this->addFieldMapping('field_training','field_training_value');
      $this->addFieldMapping('field_training:format')->defaultValue('rich_text');
      $this->addFieldMapping('field_twitter', 'field_twitter_url');
      $this->addFieldMapping('field_twitter:title', 'field_twitter_title');
      $this->addFieldMapping('field_twitter:attributes', 'field_twitter_attributes');
      $this->addFieldMapping('field_urls', 'urls_url');
      $this->addFieldMapping('field_urls:title', 'urls_title');
      $this->addFieldMapping('field_urls:attributes', 'urls_attr');
      $this->addFieldMapping('field_label_alias', 'field_label_alias_value');

      // map a multi-valued source into a multi-valued destination
      // source: https://www.drupal.org/node/1012810
      $this->addFieldMapping('field_contacts','contacts')->separator(',')->sourceMigration('user');
      
      $this->addFieldMapping('field_operational_roles','op_roles')->sourceMigration('operational_role');
      $this->addFieldMapping('field_operational_roles:source_type')->defaultValue('tid');
      $this->addFieldMapping('field_operational_roles:create_term')->defaultValue(FALSE);
      $this->addFieldMapping('field_operational_roles:ignore_case')->defaultValue(TRUE);

      $this->addFieldMapping('field_operational_titles','op_titles')->sourceMigration('operational_title');
      $this->addFieldMapping('field_operational_titles:source_type')->defaultValue('tid');
      $this->addFieldMapping('field_operational_titles:create_term')->defaultValue(FALSE);
      $this->addFieldMapping('field_operational_titles:ignore_case')->defaultValue(TRUE);

      $this->addFieldMapping('field_operational_units','op_units')->sourceMigration('operational_unit');
      $this->addFieldMapping('field_operational_units:source_type')->defaultValue('tid');
      $this->addFieldMapping('field_operational_units:create_term')->defaultValue(FALSE);
      $this->addFieldMapping('field_operational_units:ignore_case')->defaultValue(TRUE);

      // tell migrate to ignore these fields
      $this->addUnmigratedDestinations(array(
        'revision_uid',
        'field_accomplishments:language',
        'field_address:language',
        'field_biography:language',
        'field_date_yyyy:timezone',
        'field_date_yyyy:rrule',
        'field_date_yyyy:to',
        'field_display_title:language',
        'field_image:destination_dir',
        'field_image:destination_file',
        'field_image:source_dir',
        'field_image:urlencode',
        'field_linkedin:language',
        'field_longtext:language',
        'field_research_interests:language',
        'field_training:language',
        'field_twitter:language',
        'field_urls:language',

        'field_image:alt',
        'field_image:title',
        'path'
      ));
      // $this->addUnmigratedSources(array(
      //   'field_profile_type',
      //   'field_publish',
      // ));          


  }
  
  public function postImport() {
    // update computed name indexes "field_label_alias"
    if (module_exists('computed_field_tools')) {
      $field_info_fields = field_info_fields();
      $entities_by_type = $field_info_fields['field_label_alias']['bundles'];
      $batch = _computed_field_tools_setup_batch_args('field_label_alias', $entities_by_type, 500);
      batch_set($batch);
    }
  }

  public function prepareRow($row) {    
      if (parent::prepareRow($row) === FALSE) {
        return FALSE;
      }

      $row->op_roles  = $this->op_roles($row->pid);
      $row->op_units  = $this->op_units($row->pid);
      $row->op_titles = $this->op_titles($row->pid);
      $row->alternate_emails = $this->alt_emails($row->pid);
      $urls = $this->urls($row->pid);
      $row->urls_url = $urls['url'];
      $row->urls_title = $urls['title'];
      $row->urls_attr = $urls['attr'];

  }

  protected function query() {

    $query = parent::query();

    // get data from a "single-valued" field
    $query->leftjoin('field_data_field_accomplishments','acc', 
      "acc.entity_id=p.pid and acc.entity_type='profile2' and acc.bundle='profile'");
    $query->fields('acc',array('field_accomplishments_value'));

    $query->leftjoin('field_data_field_address','addy', 
      "addy.entity_id=p.pid and addy.entity_type='profile2' and addy.bundle='profile'");
    $query->fields('addy',array('field_address_value'));

    $query->leftjoin('field_data_field_biography','bio', 
      "bio.entity_id=p.pid and bio.entity_type='profile2' and bio.bundle='profile'");
    $query->fields('bio',array('field_biography_value','field_biography_summary'));

    $query->leftjoin('field_data_field_date_yyyy','year', 
      "year.entity_id=p.pid and year.entity_type='profile2' and year.bundle='profile'");
    $query->fields('year',array('field_date_yyyy_value'));

    $query->leftjoin('field_data_field_display_title','dt', 
      "dt.entity_id=p.pid and dt.entity_type='profile2' and dt.bundle='profile'");
    $query->fields('dt',array('field_display_title_value'));

    $query->leftjoin('field_data_field_fax','fax', 
      "fax.entity_id=p.pid and fax.entity_type='profile2' and fax.bundle='profile' and fax.delta=0");
    $query->fields('fax',array('field_fax_value'));

    $query->leftjoin('field_data_field_image','pic', 
      "pic.entity_id=p.pid and pic.entity_type='profile2' and pic.bundle='profile' and pic.delta=0");
    $query->fields('pic',array('field_image_fid'));

    $query->leftjoin('field_data_field_linkedin','lin', 
      "lin.entity_id=p.pid and lin.entity_type='profile2' and lin.bundle='profile' and lin.delta=0");
    $query->fields('lin',array('field_linkedin_url','field_linkedin_title','field_linkedin_attributes'));

    $query->leftjoin('field_data_field_longtext','lt', 
      "lt.entity_id=p.pid and lt.entity_type='profile2' and lt.bundle='profile'");
    $query->fields('lt',array('field_longtext_value'));

    $query->leftjoin('field_data_field_phone','ph', 
      "ph.entity_id=p.pid and ph.entity_type='profile2' and ph.bundle='profile' and ph.delta=0");
    $query->fields('ph',array('field_phone_value'));

    $query->leftjoin('field_data_field_public_email','pemail', 
      "pemail.entity_id=p.pid and pemail.entity_type='profile2' and pemail.bundle='profile' and pemail.delta=0");
    $query->fields('pemail',array('field_public_email_email'));

    $query->leftjoin('field_data_field_research_interests','ri', 
      "ri.entity_id=p.pid and ri.entity_type='profile2' and ri.bundle='profile'");
    $query->fields('ri',array('field_research_interests_value'));

    $query->leftjoin('field_data_field_training','train', 
      "train.entity_id=p.pid and train.entity_type='profile2' and train.bundle='profile'");
    $query->fields('train',array('field_training_value'));

    $query->leftjoin('field_data_field_twitter','twttr', 
      "twttr.entity_id=p.pid and twttr.entity_type='profile2' and twttr.bundle='profile' and twttr.delta=0");
    $query->fields('twttr',array('field_twitter_url','field_twitter_title','field_twitter_attributes'));

    $query->leftjoin('field_data_field_label_alias','label', 
      "label.entity_id=p.pid and label.entity_type='profile2' and label.bundle='profile' and label.delta=0");
    $query->fields('label',array('field_label_alias_value'));

    // get data from a "multi-valued" field 
    // example: a profile can have multiple administrative contacts,
    //          being sure to convert from on pid targets to the newer uid 
    $query->leftjoin('field_data_field_contacts','contact', 
      "contact.entity_id=p.pid and contact.entity_type='profile2' and contact.bundle='profile'");
    $query->addExpression('GROUP_CONCAT(DISTINCT contact.field_contacts_target_id)', 'contacts');
    $query->groupBy('p.pid');   

    // filter condition
    $query->condition('p.type','profile');
    return $query;
  }

  private function op_titles($id) {
    $query = Database::getConnection('legacy', $this->sourceConnection)
      ->select('field_data_field_operational_titles', 'ot')
      ->condition('ot.entity_id',$id)
      ->condition('ot.entity_type','profile2')
      ->condition('ot.bundle','profile');
    $query->fields('ot',array('field_operational_titles_tid'));
    return $query->execute()->fetchCol();   
  } 

  private function op_roles($id) {
    $query = Database::getConnection('legacy', $this->sourceConnection)
      ->select('field_data_field_operational_roles', 'opr')
      ->condition('opr.entity_id',$id)
      ->condition('opr.entity_type','profile2')
      ->condition('opr.bundle','profile');
    $query->fields('opr',array('field_operational_roles_tid'));
    return $query->execute()->fetchCol();   
  }  

  private function op_units($id) {
    $query = Database::getConnection('legacy', $this->sourceConnection)
      ->select('field_data_field_operational_units', 'ou')
      ->condition('ou.entity_id',$id)
      ->condition('ou.entity_type','profile2')
      ->condition('ou.bundle','profile');
    $query->fields('ou',array('field_operational_units_tid'));
    return $query->execute()->fetchCol();
  }  

  private function alt_emails($pid) {
    $query = Database::getConnection('legacy', $this->sourceConnection)
      ->select('field_data_field_alternate_email', 'ae')
      ->condition('ae.entity_id',$pid)
      ->condition('ae.entity_type','profile2')
      ->condition('ae.bundle','profile');
    $query->fields('ae',array('field_alternate_email_email'));
    return $query->execute()->fetchCol();    
  }

  private function urls($pid) {
    $query = Database::getConnection('legacy', $this->sourceConnection)
      ->select('field_data_field_urls', 'urls')
      ->condition('urls.entity_id',$pid)
      ->condition('urls.entity_type','profile2')
      ->condition('urls.bundle','profile');
    $query->fields('urls',array('field_urls_url','field_urls_title','field_urls_attributes'));
    $result = array();
    $result['url'] = $query->execute()->fetchCol(0);
    $result['title'] = $query->execute()->fetchCol(1);
    $result['attr'] = $query->execute()->fetchCol(2);
    return $result;     
  }

}
