<?php

class GSUser extends DrupalUser7Migration {
  public function __construct(array $arguments) {
      $arguments['description'] = 'import user data';

      // migrate should expect these fields
      $this->sourceFields += array(
          'field_full_name_given' => t('First name'),
          'field_full_name_middle'  => t('Middle name'),
          'field_full_name_family'  => t('Last name'),
          'field_full_name_generational'  => t('Generation'),
          'field_full_name_credentials'  => t('Credentials'),
          'ucsf_profiles_name'  => t('UCSF profiles uname'),
      );

      parent::__construct($arguments);

      // make sure our roles are migrated first
      // add the machine name for the role migration class
      $this->dependencies[] = 'role';

      // map the fields as (destination, source)
      $this->addFieldMapping('field_realname', 'field_full_name_given');
      $this->addFieldMapping('field_realname:given','field_full_name_given');
      $this->addFieldMapping('field_realname:middle','field_full_name_middle');
      $this->addFieldMapping('field_realname:family','field_full_name_family');
      $this->addFieldMapping('field_realname:generational','field_full_name_generational');
      $this->addFieldMapping('field_realname:credentials','field_full_name_credentials');
      $this->addFieldMapping('field_text', 'ucsf_profiles_name');
      $this->addFieldMapping('field_text:language')->defaultValue('und');

      // tell migrate to ignore these fields
      $this->addUnmigratedSources(array(
        'field_profile_type',
        'field_publish',
      ));
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // create a pseudo source from name data for the profiles username
    $first_name = strtolower($row->field_full_name_given);
    $last_name  = strtolower($row->field_full_name_family);
    $ucsf_profiles_name = $first_name.'.'.$last_name;
    $row->ucsf_profiles_name = $ucsf_profiles_name;
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

  public function complete($entity, $row) {
    // Reset password hash back to the source hash; when Migrate saves the user
    // entity after the prepare() method is complete, Drupal hashes the hash,
    // meaning we need to set it back to the original hash.
    // SEE: https://drupal.org/node/1349758
    db_update('users')
      ->fields(array('pass' => $row->pass))
      ->condition('uid', $entity->uid)
      ->execute();
  }  

  protected function query() {

    // join in our name data
    $query = parent::query();
    $query->leftjoin('profile','p', 'u.uid = p.uid');
    $query->fields('p');
    $query->condition('p.type','profile', '=');
    $query->leftjoin('field_data_field_full_name', 'fn', 'p.pid = fn.entity_id');
    $query->fields('fn', array(
      'field_full_name_given',
      'field_full_name_middle',
      'field_full_name_family',
      'field_full_name_generational',
      'field_full_name_credentials'
      ));
    $query->condition('fn.entity_type', 'profile2', '=')
          ->condition('fn.bundle', 'profile', '=');

    return $query;
  }
}

class GSRole extends DrupalRole7Migration {
  public function __construct(array $arguments) {
    $arguments['description'] = t('Map incoming roles');
    $arguments['role_mappings'] = array(
      'authenticated user' => 'authenticated user',
      'superadmin'  => 'superadmin',
      'webadmin'    => 'webadmin',
      'admin'       => 'admin',
      'editor'      => 'editor',
      'leadership'  => 'leadership',
    );

    parent::__construct($arguments);
  }
}




