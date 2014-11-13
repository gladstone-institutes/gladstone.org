<?php

class GSInstitutionTerms extends DrupalTerm7Migration {
	protected $remap = array();
  protected $vocabs  = array();

	public function __construct(array $arguments) {
		$arguments['description'] = 'import institution terms';
		$arguments['source_vocabulary'] = 'institutions';
		$arguments['destination_vocabulary'] = 'institutions';
		parent::__construct($arguments);

	    $this->removeFieldMapping('parent');
	    $this->addUnmigratedDestinations(array(
	      'parent',
	    ));   
	}

  public function preImport() {

    $this->vocabs = taxonomy_vocabulary_get_names(); 

    // Create our remap associations
    if (empty($this->remap['institutions'])) {
      $filename = DRUPAL_ROOT.'/'.drupal_get_path('module', 'gladstone_migrate').'/remap/institutions.csv';
      $handle = fopen($filename, 'r');
      if ($handle) {
        while ($data = fgetcsv($handle)) {
          $legacy_name = $data[0];
          $new_name = empty($data[1]) ? NULL : $data[1];
          $op_unit  = empty($data[2]) ? NULL : $data[2];
          $this->remap['institutions'][$legacy_name] = $new_name;
          $this->remap['institution_op_unit'][$legacy_name] = $op_unit;
        }
        fclose($handle);
      }
    }
  }

  public function prepareRow($row) {
  	if (parent::prepareRow($row) === FALSE) {
    	return FALSE;
    }

    if( array_key_exists($row->name,$this->remap['institutions']) ) {
    	//remap terms
    	$new_name = !empty($this->remap['institutions'][$row->name]) ? $this->remap['institutions'][$row->name] : $row->name;

    	if(!empty($this->remap['institution_op_unit'][$row->name])) {
    		$op_unit = $this->remap['institution_op_unit'][$row->name];
        $term = taxonomy_get_term_by_name($op_unit,'institution_operational_unit');
    		
        if(empty($term)){
    			// create op unit term
          $term = new stdClass();
          $term->name = $op_unit;
          $term->vid = $this->vocabs['institution_operational_unit']->vid;
          $term->vocabulary_machine_name = 'institution_operational_unit';
          taxonomy_term_save($term);  
    		}
    	}

    	$row->name = $new_name;
    } else {
    	// skip unspeced terms
    	return FALSE;
    }

  }
}



