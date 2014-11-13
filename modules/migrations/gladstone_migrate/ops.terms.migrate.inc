<?php

class GSOpsRoleTerms extends DrupalTerm7Migration {
  // associate array for remapping terms
  protected $remap = array();

  public function __construct(array $arguments) {
    $arguments['description'] = 'import ops role terms';
    $arguments['source_vocabulary'] = 'operational_roles';
    $arguments['destination_vocabulary'] = 'operational_roles';    
    parent::__construct($arguments);

    $this->removeFieldMapping('parent');
    $this->addUnmigratedDestinations(array(
      'parent',
    ));
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
          $op_unit = empty($data[2]) ? NULL : $data[2];
          $this->remap['operational_roles'][$legacy_name] = $new_name;
          $this->remap['operational_units'][$legacy_name] = $op_unit;
        }
        fclose($handle);
      }
    }

  }

  public function prepareRow($row) {    
      if (parent::prepareRow($row) === FALSE) {
        return FALSE;
      }

      if(array_key_exists($row->name,$this->remap['operational_roles']) &&
         !empty($this->remap['operational_roles'][$row->name])) {
          // remap the term
          $new_name = $this->remap['operational_roles'][$row->name];

          if(!empty($this->remap['operational_units'][$row->name])) {
            $op_unit = $this->remap['operational_units'][$row->name];
            if(taxonomy_get_term_by_name($op_unit,'operational_units')) {
              // op unit term exits, skip
            } else {
              // create op unit term
              $term = new stdClass();
              $term->name = $op_unit;
              $term->vocabulary_machine_name = 'operational_units';
              taxonomy_term_save($term);
            }
          }

          $row->name = $new_name;
      } else {
          // skip unspecified terms
        return FALSE;
      }
  }
}


class GSOpsTitleTerms extends DrupalTerm7Migration {
  // associate array for remapping terms
  protected $remap = array();

  public function __construct(array $arguments) {
    $arguments['description'] = 'import ops title terms';
    $arguments['source_vocabulary'] = 'operational_titles';
    $arguments['destination_vocabulary'] = 'operational_titles';    
    parent::__construct($arguments);

    $this->removeFieldMapping('parent');
    $this->addUnmigratedDestinations(array(
      'parent',
    ));
  }

  public function preImport() {

    // Create our remap associations
    if (empty($this->remap)) {
      # cs input: old_title,new_title,instituion_op_unit,display_title
      $filename = DRUPAL_ROOT.'/'.drupal_get_path('module', 'gladstone_migrate').'/remap/operational_titles.csv';
      $handle = fopen($filename, 'r');
      if ($handle) {
        while ($data = fgetcsv($handle)) {
          $old_title = $data[0];
          $new_title = empty($data[1]) ? NULL : $data[1];
          $op_unit = empty($data[2]) ? NULL : $data[2];
          $display_title = empty($data[3]) ? NULL : $data[3];          
          $this->remap[$old_title] = new stdClass();
          $this->remap[$old_title]->title   = $new_title;
          $this->remap[$old_title]->op_unit = $op_unit;
          $this->remap[$old_title]->display_title = $display_title;
        }
        fclose($handle);
      }
    }

  }

  public function prepareRow($row) {    
      if (parent::prepareRow($row) === FALSE) {
        return FALSE;
      }

      if(array_key_exists($row->name,$this->remap)) {

        $key = $row->name;

        // create an institution_operational_unit term in specified
        // and one does not already exist
        if(!empty($this->remap[$key]->op_unit) &&
          !taxonomy_get_term_by_name($this->remap[$key]->op_unit,'institution_operational_unit')
        ) {
          $term = new stdClass();
          $term->name = $this->remap->op_unit;
          $term->vocabulary_machine_name = 'institution_operational_unit';
          taxonomy_term_save($term);
        }

        if(!empty($this->remap[$key]->title)) {
          $row->name = $this->remap[$key]->title;
        }

      } else {
          // skip unspecified terms
        return FALSE;
      }
  }

}


