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
      ->fields('p', array('pid','uid'))
      ->condition('p.type','profile', '=');
    return $query;
  }
}

class GSProfile extends GSProfile2Base {

  protected $profile_rid;

  public function __construct(array $arguments) {
      $arguments['description'] = 'import user profile2:profiles';
      parent::__construct($arguments);

      // make sure our roles are migrated first
      // add the machine name for the role migration class
      $this->dependencies[] = 'user';
      $this->dependencies[] = 'files';

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

      // map a multi-valued source into a multi-valued destination
      // source: https://www.drupal.org/node/1012810
      $this->addFieldMapping('field_contacts','contacts')->separator(',')->sourceMigration('user');
      $this->addFieldMapping('field_date_yyyy','field_year_joined_value');
      $this->addFieldMapping('field_display_title','field_sub_headline_value');
      $this->addFieldMapping('field_fax','field_fax_value');
      $this->addFieldMapping('field_image','field_profile_picture_fid')->sourceMigration('files');
      $this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');
      $this->addFieldMapping('field_image:preserve_files')->defaultValue(TRUE);
      $this->addFieldMapping('field_image:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
      $this->addFieldMapping('field_image:language')->defaultValue(LANGUAGE_NONE);
      $this->addFieldMapping('field_linkedin', 'field_linkedin_url');
      $this->addFieldMapping('field_longtext', 'field_why_gladstone_value');
      $this->addFieldMapping('field_longtext:format')->defaultValue('rich_text');
      $this->addFieldMapping('field_phone','field_phone_value');
      $this->addFieldMapping('field_public_email','field_public_email_email');
      $this->addFieldMapping('field_research_interests','field_research_interests_value');
      $this->addFieldMapping('field_research_interests:format')->defaultValue('rich_text');
      $this->addFieldMapping('field_training','field_training_value');
      $this->addFieldMapping('field_training:format')->defaultValue('rich_text');
      $this->addFieldMapping('field_twitter', 'field_twitter_url');
      $this->addFieldMapping('field_twitter:title', 'field_twitter_title');
      $this->addFieldMapping('field_urls', 'field_website_url');
      $this->addFieldMapping('field_urls:title', 'field_website_title');

      // tell migrate to ignore these fields
      $this->addUnmigratedDestinations(array(
        'revision_uid',
        'field_accomplishments:language',
        'field_address:language',
        'field_alternate_email', //source data empty
        'field_biography:language',
        'field_date_yyyy:timezone',
        'field_date_yyyy:rrule',
        'field_date_yyyy:to',
        'field_display_title:language',
        'field_image:title',
        'field_image:alt',
        'field_image:destination_dir',
        'field_image:destination_file',
        'field_image:source_dir',
        'field_image:urlencode',
        'field_label_alias',
        'field_linkedin:title',
        'field_linkedin:attributes',
        'field_linkedin:language',
        'field_longtext:language',
        'field_research_interests:language',
        'field_training:language',
        'field_twitter:attributes',
        'field_twitter:language',
        'field_urls:attributes',
        'field_urls:language',
        'path',
        // skip these for now
        'field_operational_roles',
        'field_operational_roles:source_type',
        'field_operational_roles:create_term',
        'field_operational_roles:ignore_case',
        'field_operational_titles',
        'field_operational_titles:source_type',
        'field_operational_titles:create_term',
        'field_operational_titles:ignore_case',
        'field_operational_units',
        'field_operational_units:source_type',
        'field_operational_units:create_term',
        'field_operational_units:ignore_case',
      ));
      // $this->addUnmigratedSources(array(
      //   'field_profile_type',
      //   'field_publish',
      // ));          


  }

  public function preImport() {
    // get the profile role id
    $this->profile_rid = user_role_load_by_name('profile')->rid; 
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

      // Assing a profile role if minimum fields are met
      if (!empty($row->field_biography_value) || 
          !empty($row->field_research_interests_value) ||
          !empty($row->field_accomplishments_value) ||
          !empty($row->field_training_value)
        ) {
            $query = db_select('migrate_map_user', 'u');
            $destid = $query->condition('sourceid1',$this->uid,'=')
                        ->fields('u', array('destid1'))
                        ->execute()
                        ->fetchField();

            // This has no roll-back
            db_query('INSERT IGNORE INTO users_roles (uid,rid) VALUES (:uid, :rid)',
             array(':uid' => $row->uid, ':rid' => $this->profile_rid));
      } else {
        // skip profile creation if min fields are not met
        // return FALSE; // dont skip any rows since contact is part of profile
      }
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

    // get data from a "multi-valued" field 
    // example: a profile can have multiple administrative contacts,
    //          being sure to convert from on pid targets to the newer uid
    $query->leftjoin('field_data_field_contact','contact', 
      "contact.entity_id=p.pid and contact.entity_type='profile2' and contact.bundle='profile'");
    $query->leftjoin('profile', 'contact_profile',
      "contact_profile.pid=contact.field_contact_target_id and contact_profile.type='profile'");
    $query->addExpression('GROUP_CONCAT(DISTINCT contact_profile.uid)', 'contacts');
    $query->groupBy('p.pid');    

    $query->leftjoin('field_data_field_year_joined','year', 
      "year.entity_id=p.pid and year.entity_type='profile2' and year.bundle='profile'");
    $query->fields('year',array('field_year_joined_value'));

    $query->leftjoin('field_data_field_sub_headline','sub', 
      "sub.entity_id=p.pid and sub.entity_type='profile2' and sub.bundle='profile'");
    $query->fields('sub',array('field_sub_headline_value'));

    $query->leftjoin('field_data_field_fax','fax', 
      "fax.entity_id=p.pid and fax.entity_type='profile2' and fax.bundle='profile' and fax.delta=0");
    $query->fields('fax',array('field_fax_value'));

    $query->leftjoin('field_data_field_profile_picture','pic', 
      "pic.entity_id=p.pid and pic.entity_type='profile2' and pic.bundle='profile' and pic.delta=0");
    $query->fields('pic',array('field_profile_picture_fid'));

    $query->leftjoin('field_data_field_linkedin','lin', 
      "lin.entity_id=p.pid and lin.entity_type='profile2' and lin.bundle='profile' and lin.delta=0");
    $query->fields('lin',array('field_linkedin_url'));

    $query->leftjoin('field_data_field_why_gladstone','wg', 
      "wg.entity_id=p.pid and wg.entity_type='profile2' and wg.bundle='profile'");
    $query->fields('wg',array('field_why_gladstone_value'));

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
    $query->fields('twttr',array('field_twitter_url','field_twitter_title'));

    $query->leftjoin('field_data_field_website','website', 
      "website.entity_id=p.pid and website.entity_type='profile2' and website.bundle='profile' and website.delta=0");
    $query->fields('website',array('field_website_url','field_website_title'));

    return $query;
  }

}
