<?php

class GSUser extends DrupalUser7Migration {
  public function __construct(array $arguments) {
      $arguments['description'] = 'import user data';
      
      $this->sourceFields += array('roles' => t('list of role ids'));

      parent::__construct($arguments);

      $this->dependencies[] = 'role';

      // map the fields as (destination, source)
      $this->addFieldMapping('role_names','role_names',FALSE);
      $this->addFieldMapping('field_realname','field_realname:given');
      $this->addSimpleMappings(array(
        'field_realname:given',
        'field_realname:middle',
        'field_realname:family',
        'field_realname:generational',
        'field_realname:credentials',
        'field_text'
        ));      

  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    $row->role_names = $this->role_names($row->uid);
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

  /* stub for future join of biblio tables
  protected function query() {
    // join in our name data
    $query = parent::query();
    return $query;
  }
  */

  private function role_names($uid) {
    $query = Database::getConnection('legacy', $this->sourceConnection)
      ->select('users_roles', 'ur')
      ->condition('ur.uid',$uid);
    $query->leftjoin('role','r','r.rid=ur.rid');
    $query->fields('r',array('name'));
    return $query->execute()->fetchCol();         
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




