<?php

/**
 * Stub class for migrating operations control taxonomy
 *
 */
class GSProfileOpsRole extends DrupalTerm7Migration {
  // associate array for remapping terms
  protected $remap = array();

  public function __construct(array $arguments) {
    parent::__construct($arguments);

      // multi-value term migrations
      // $this->addFieldMapping('field_operational_roles')->separator(',')->callbacks(array($this,'remapTerm'));
      // $this->addFieldMapping('field_operational_roles:source_type')->defaultValue('name');
      // $this->addFieldMapping('field_operational_roles:create_term')->defaultValue(FALSE);
      // $this->addFieldMapping('field_operational_roles:ignore_case')->defaultValue(TRUE);

  }

  public function preImport() {

    // Create our remap associations
    if (empty($this->remap['operational_roles'])) {
      $filename = DRUPAL_ROOT.'/'.drupal_get_path('module', 'gladstone_migrate').'/remap/operational_roles.csv';
      $handle = fopen($filename, 'r');
      if ($handle) {
        while ($data = fgetcsv($handle)) {
          $legacy_name = $data[0];
          $new_name = $data[1];
          $this->remap['operational_roles'][$legacy_name] = $new_name;
        }
        fclose($handle);
      }
    }

  }

  public function prepareRow($row) {    
      if (parent::prepareRow($row) === FALSE) {
        return FALSE;
      }

  }

  protected function remapTerm($vocab, $name) {
    dsm($this);
    dsm($vocab);
    dsm($name);
    exit;
      if (isset($this->remap[$vocab]) && isset($this->remap[$vocab][$name])) {
        return $this->remap[$vocab][$name];
      } else {
        return $name;
      }
  }

  protected function query() {
    $query = parent::query();

    // get names for multi-valued term field
    $query->leftjoin('field_data_field_operational','or', 
      "or.entity_id=p.pid and or.entity_type='profile2' and or.bundle='profile'");
    $query->leftjoin('profile', 'contact_profile',
      "contact_profile.pid=contact.field_contact_target_id and contact_profile.type='profile'");
    $query->addExpression('GROUP_CONCAT(DISTINCT contact_profile.uid)', 'contacts');
    $query->groupBy('p.pid');  

    return $query;
  }
}
