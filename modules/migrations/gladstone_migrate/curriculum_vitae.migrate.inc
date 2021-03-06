<?php

class GSCurriculumVitae extends GSProfile2Base {
	protected $curriculum_vitae_rid;

	public function __construct(array $arguments) {
	  $arguments['description'] = 'import user profile2:curriculum_vitae';
	
	  // Pseudo sources
      $this->sourceFields += array(
      	'achievements' => t('aggregate achievements'),
      	'lab_focus' => t('aggregate lab focus multi-field'),
      	'field_areas_of_investigation_value' => t('text field'),
       );

	  parent::__construct($arguments);

      // make sure our roles are migrated first
      // add the machine name for the role migration class
      $this->dependencies[] = 'user';
      $this->dependencies[] = 'files';


      // the 'profile' argument is the machine name of the destination
      // profile type
      $this->destination = new MigrateDestinationProfile2('curriculum_vitae'); 

      // field mappings (destination, source) ------------------------
      $this->addFieldMapping('uid','uid')->sourceMigration('user');
      $this->addFieldMapping('language')->defaultValue('en'); 
      $this->addFieldMapping('field_achievements', 'achievements');
      $this->addFieldMapping('field_lab_focus', 'lab_focus');
      $this->addFieldMapping('field_research_interests','field_areas_of_investigation_value');
      $this->addFieldMapping('field_research_interests:format')->defaultValue('rich_text');

      // tell migrate to ignore these fields
      $this->addUnmigratedDestinations(array(
        'revision_uid',
        'field_achievements:language',
        'field_affiliations',
        'field_affiliations:revision_id',
        'field_education',
        'field_education:revision_id',
        'field_label_alias',
        'field_lab_focus:language',
        'field_research_interests:language',
        'field_node_refs',
        'field_professional_titles',
        'field_professional_titles:revision_id',
        'path',
        'field_honors_and_awards_rels',
      ));

      // $this->addUnmigratedSources(array(
      //   'field_profile_type',
      // )); 

	}

	public function preImport() {
    	// get the profile role id
    	$this->curriculum_vitae_rid = user_role_load_by_name('curriculum vitae')->rid; 
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

     $row->achievements = $this->field_achievements($row->pid);
     $row->lab_focus = $this->field_lab_focus($row->pid);
     
     // Assign a profile role if minimum fields are met
     if ( !empty($row->field_areas_of_investigation_value) || 
          !empty($row->lab_focus) ||
          !empty($row->achievements)
        ) {
            $query = db_select('migrate_map_user', 'u');
            $destid = $query->condition('sourceid1',$row->uid,'=')
                        ->fields('u', array('destid1'))
                        ->execute()
                        ->fetchField();

            // This has no roll-back
            db_query('INSERT IGNORE INTO users_roles (uid,rid) VALUES (:uid, :rid)',
             array(':uid' => $destid, ':rid' => $this->curriculum_vitae_rid)
            );

      } else {
        // skip profile creation if min fields are not met
        // return FALSE; //dont skip any cvs for all!
      }
  	}  	

  	protected function query() {

    	$query = parent::query();  	

    	$query->leftjoin('field_data_field_areas_of_investigation','aoi',
	      "aoi.entity_id=p.pid and aoi.entity_type='profile2' and aoi.bundle='profile'");
    	$query->fields('aoi',array('field_areas_of_investigation_value'));

    	return $query;
    }

    protected function field_achievements($pid) {
    	$data = Database::getConnection('legacy', $this->sourceConnection)
    				->select('field_data_field_achievements', 'a')
    				->fields('a', array('field_achievements_value'))
    				->condition('a.entity_id',$pid,'=')
    				->execute()
    				->fetchCol();
    	return $data;
    }

    protected function field_lab_focus($pid) {
    	$data = Database::getConnection('legacy', $this->sourceConnection)
    				->select('field_data_field_lab_focus', 'lf')
    				->fields('lf', array('field_lab_focus_value'))
    				->condition('lf.entity_id',$pid,'=')
    				->execute()
    				->fetchCol();    	
    	return $data;
    }

}

/**
 * Field Collection migration strategy based on 
 * source: https://www.drupal.org/node/1900640
 */
abstract class GSFieldCollectionBase extends DrupalMigration {
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
	      // we use the "item_id" from the infield collections since they serve 
	      // as a unique entity identifier amongs all field_colledction_items
	      MigrateDestinationFieldCollection::getKeySchema(), //source
	      MigrateDestinationFieldCollection::getKeySchema()  //dest
	    );
	}
}

class GSCurriculumVitaeAffiliations extends GSFieldCollectionBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'import field collection affiliations';
		
		$this->sourceFields += array(
			'in_op_unit' => t('Institute Op Unit via remap csv'),
			'display_title' => t('Edge case, custom title'),
		);

		parent::__construct($arguments);

		$this->dependencies[] = 'curriculum_vitae';
		$this->dependencies[] = 'institution';

		$this->destination = new MigrateDestinationFieldCollection(
			'field_affiliations',
      		array('host_entity_type' => 'profile2')
    	);

	  // field mappings (destination, source) ------------------------
      $this->addFieldMapping('host_entity_id','entity_id')->sourceMigration('curriculum_vitae');
      $this->addFieldMapping('field_institution','field_institution_target_id')->sourceMigration('institution');
      $this->addFieldMapping('field_institution:source_type')->defaultValue('tid');
      // $this->addFieldMapping('field_institution:create_term')->defaultValue(FALSE);
      // $this->addFieldMapping('field_institution:ignore_case')->defaultValue(TRUE);

      $this->addFieldMapping('field_operational_role','field_involvement_target_id')->sourceMigration('operational_role');
      $this->addFieldMapping('field_operational_role:source_type')->defaultValue('tid');
      // $this->addFieldMapping('field_operational_role:create_term')->defaultValue(TRUE);
      // $this->addFieldMapping('field_operational_role:ignore_case')->defaultValue(TRUE);

      $this->addFieldMapping('field_institution_op_units','in_op_unit');
      $this->addFieldMapping('field_institution_op_units:source_type')->defaultValue('name');
      $this->addFieldMapping('field_institution_op_units:create_term')->defaultValue(TRUE);
      $this->addFieldMapping('field_institution_op_units:ignore_case')->defaultValue(TRUE);

      $this->addFieldMapping('field_text','display_title');
      $this->addFieldMapping('field_text:language')->defaultValue(LANGUAGE_NONE);

   	  $this->addUnmigratedDestinations(array(
   	  	'path',
   	  ));

   	  // $this->addUnmigratedSources(array(
   	  // 	'field_affiliations_value',
   	  // ));


	}

	public function prepareRow($row) {
		if (parent::prepareRow($row) === FALSE) {
        	return FALSE;
      	}

		/** Clean up taxonomy terms **/
		$inv = $row->field_involvement_target_name;
		switch($inv) {
			case 'Advisory Board Member':
				$row->in_op_unit = 'Advisory Board';
				$row->field_involvement_target_name = 'Member';
				break;
			case 'Associate Investigator':
				$row->field_involvement_target_name = 'Investigator';
				break;							
			case 'Alpha Omega Alpha':
				$row->field_involvement_target_name = NULL;			
				$row->display_title = 'Alpha Omega Alpha';
				break;
			case 'Basic Science Council':
				$row->in_op_unit = 'Basic Science Council';
				$row->field_involvement_target_name = 'Member';
				break;
			case 'Board of Directors':
				$row->in_op_unit = 'Board of Directors';
				$row->field_involvement_target_name = 'Member';
				break;
			case 'Chair, Academic Medicine Advisory Council':
				$row->in_op_unit = 'Academic Medicine Advisory Council';
				$row->field_involvement_target_name = 'Chair';
				break;
			case 'Clinical Translation Committee':
				$row->in_op_unit = 'Clinical Translation Committee';
				$row->field_involvement_target_name = 'Member';
				break;
			case 'Editorial Board':
				$row->in_op_unit = 'Editorial Board';
				$row->field_involvement_target_name = 'Member';
				break;
			case 'Grant review panel':
				$row->in_op_unit = 'Grant review panel';
				$row->field_involvement_target_name = 'Member';
				break;
			case 'Internal Advisory Board':
				$row->in_op_unit = 'Internal Advisory Board';
				$row->field_involvement_target_name = 'Member';
				break;
			case 'Medical & Scientific Advisory Council Chair':
				$row->in_op_unit = 'Medical & Scientific Advisory Council';
				$row->field_involvement_target_name = 'Chair';
				break;
			case 'President, Board of Directors':
				$row->in_op_unit = 'Board of Directors';
				$row->field_involvement_target_name = 'President';
				break;
			case 'Scientific Advisory Board':
				$row->in_op_unit = 'Scientific Advisory Board';
				$row->field_involvement_target_name = 'Member';
				break;
			case 'Scientific Advisory Board Member':
				$row->in_op_unit = 'Scientific Advisory Board';
				$row->field_involvement_target_name = 'Member';
				break;
			case 'Senate':
				$row->in_op_unit = 'Senate';
				$row->field_involvement_target_name = 'Member';
				break;
			case 'Study Group 3A, Co-chair':
				$row->in_op_unit = 'Study Group 3A';
				$row->field_involvement_target_name = 'Co-chair';
				break;
		}

		$row->field_institution_target_id_dest = $this->mapId($row->field_institution_target_id,'institution');
	}

	protected function query() {
	    $query = Database::getConnection('legacy', $this->sourceConnection)
	      ->select('field_data_field_affiliations', 'a')
	      ->fields('a', array('entity_id','delta','field_affiliations_value'))
	      ->condition('a.entity_type','profile2', '=')
	      ->condition('a.bundle','profile','=');
	    $query->addField('a','field_affiliations_value','item_id');

	    $query->leftjoin('field_data_field_institution','i',
	    	"i.entity_id=a.field_affiliations_value and 
	    	 i.entity_type='field_collection_item' and 
	    	 i.bundle='field_affiliations'");
	    $query->fields('i',array('field_institution_target_id'));
	    $query->leftjoin('taxonomy_term_data','td1',
	    	"td1.tid=i.field_institution_target_id");
	    $query->addField('td1','name','field_institution_target_name');

	    $query->leftjoin('field_data_field_involvement','inv',
	    	"inv.entity_id=a.field_affiliations_value and 
	    	 inv.entity_type='field_collection_item' and 
	    	 inv.bundle='field_affiliations'");
	    $query->fields('inv',array('field_involvement_target_id'));	 
	    $query->leftjoin('taxonomy_term_data','td',
	    	"td.tid=inv.field_involvement_target_id");
	    $query->addField('td','name','field_involvement_target_name');


	    return $query;
	}

	private function mapId($old_id,$map_table) {
		return db_select('migrate_map_'.$map_table,'m')
				->fields('m',array('destid1'))
				->condition('sourceid1',$old_id)
				->execute()
				->fetchCol()[0];
	}	
}

class GSCurriculumVitaeEducation extends GSFieldCollectionBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'import field collection education';
		parent::__construct($arguments);

		$this->dependencies[] = 'curriculum_vitae';
		$this->dependencies[] = 'institution';

		$this->destination = new MigrateDestinationFieldCollection(
			'field_education',
      		array('host_entity_type' => 'profile2')
    	);

	  // field mappings (destination, source) ------------------------
      $this->addFieldMapping('host_entity_id','entity_id')->sourceMigration('curriculum_vitae');
      $this->addFieldMapping('field_institution','field_institution_target_id')->sourceMigration('institution');
      $this->addFieldMapping('field_institution:source_type')->defaultValue('tid');
      $this->addFieldMapping('field_institution:create_term')->defaultValue(FALSE);
      $this->addFieldMapping('field_institution:ignore_case')->defaultValue(FALSE);
      $this->addFieldMapping('field_date_yyyy','field_diploma_year_value');
      $this->addFieldMapping('field_degree','field_degree_value');


   	  $this->addUnmigratedDestinations(array(
   	  	'path',
   	  	'field_areas_of_concentration',
   	  	'field_areas_of_concentration:source_type',
   	  	'field_areas_of_concentration:create_term',
   	  	'field_areas_of_concentration:ignore_case',
   	  	'field_date_yyyy:timezone',
   	  	'field_date_yyyy:rrule',
   	  	'field_date_yyyy:to',
   	  ));

   	  $this->addUnmigratedSources(array(
   	  	'field_education_value',
   	  ));


	}

	protected function query() {
	    $query = Database::getConnection('legacy', $this->sourceConnection)
	      ->select('field_data_field_education', 'e')
	      ->fields('e', array('entity_id','delta','field_education_value'))
	      ->condition('e.entity_type','profile2', '=')
	      ->condition('e.bundle','profile','=');
	    $query->addField('e','field_education_value','item_id');

	    $query->leftjoin('field_data_field_institution','i',
	    	"i.entity_id=e.field_education_value and 
	    	 i.entity_type='field_collection_item' and 
	    	 i.bundle='field_education'");
	    $query->fields('i',array('field_institution_target_id'));

	    $query->leftjoin('field_data_field_diploma_year','y',
	    	"y.entity_id=e.field_education_value and 
	    	 y.entity_type='field_collection_item' and 
	    	 y.bundle='field_education'");
	    $query->fields('y',array('field_diploma_year_value'));

	    $query->leftjoin('field_data_field_degree','d',
	    	"d.entity_id=e.field_education_value and 
	    	 d.entity_type='field_collection_item' and 
	    	 d.bundle='field_education'");
	    $query->fields('d',array('field_degree_value'));

	    return $query;
	}
}

class GSCurriculumVitaeProfTitles extends GSFieldCollectionBase {
	
	protected $remap = array();

	public function __construct(array $arguments) {
		$arguments['description'] = 'import field collection professional titles';
		
		$this->sourceFields += array(
			'new_institute_name' => t('New name via remap csv file'),
			'institution_op_unit' => t('Institute Op Unit via remap csv'),
			'new_operational_title' => t('Ops Title via remap csv'),
			'display_title' => t('Edge case, custom title'),
		);

		parent::__construct($arguments);

		$this->dependencies[] = 'curriculum_vitae';
		$this->dependencies[] = 'institution';

		$this->destination = new MigrateDestinationFieldCollection(
			'field_professional_titles',
      		array('host_entity_type' => 'profile2')
    	);

	  // field mappings (destination, source) ------------------------
      $this->addFieldMapping('host_entity_id','entity_id')->sourceMigration('curriculum_vitae');
      $this->addFieldMapping('field_boolean')->defaultValue(TRUE);
      $this->addFieldMapping('field_text','display_title')->defaultValue(NULL);

      
      $this->addFieldMapping('field_institution','new_institute_name');
      $this->addFieldMapping('field_institution:source_type')->defaultValue('name');
      $this->addFieldMapping('field_institution:create_term')->defaultValue(FALSE);
      $this->addFieldMapping('field_institution:ignore_case')->defaultValue(TRUE);

      $this->addFieldMapping('field_institution_op_units','institution_op_unit');
      $this->addFieldMapping('field_institution_op_units:source_type')->defaultValue('name');
      $this->addFieldMapping('field_institution_op_units:create_term')->defaultValue(TRUE);
      $this->addFieldMapping('field_institution_op_units:ignore_case')->defaultValue(TRUE);
      
      $this->addFieldMapping('field_operational_titles','new_operational_title');
      // $this->addFieldMapping('field_operational_titles:source_type')->defaultValue('name');
      $this->addFieldMapping('field_operational_titles:create_term')->defaultValue(TRUE);
      $this->addFieldMapping('field_operational_titles:ignore_case')->defaultValue(TRUE);

   	  $this->addUnmigratedDestinations(array(
   	  	'path',
   	  	'field_text:language'
   	  ));

   	  // $this->addUnmigratedSources(array(
   	  // 	'field_professional_titles_value',
   	  // 	'old_institue_name',
   	  // 	'field_institution_target_id',
   	  // 	'old_operational_title',
   	  // 	'field_operational_title_target_id',
   	  // ));


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
	          $op_unit	= empty($data[2]) ? NULL : $data[2];
	          $this->remap['institutions'][$legacy_name] = $new_name;
	          $this->remap['institution_op_unit'][$legacy_name] = $op_unit;
	        }
	        fclose($handle);
	      }
	    }

	    if (empty($this->remap['ops_titles'])) {
	    	# cs input: old_title,new_title,instituion_op_unit,display_title
      		$filename = DRUPAL_ROOT.'/'.drupal_get_path('module', 'gladstone_migrate').'/remap/operational_titles.csv';
      		$handle = fopen($filename, 'r');
      		if ($handle) {
        		while ($data = fgetcsv($handle)) {
					$old_title = $data[0];
					$new_title = empty($data[1]) ? NULL : $data[1];
					$op_unit   = empty($data[2]) ? NULL : $data[2];
					$display_title = empty($data[3]) ? NULL : $data[3];
					$this->remap['ops_titles'][$old_title] = new stdClass();
					$this->remap['ops_titles'][$old_title]->new_title = $new_title;
					$this->remap['ops_titles'][$old_title]->op_unit = $op_unit;
					$this->remap['ops_titles'][$old_title]->display_title = $display_title;
        		}
        		fclose($handle);
        	}
	    }
   	}
  	
	public function prepareRow($row) {
		if (parent::prepareRow($row) === FALSE) {
			return FALSE;
		}

		$row->institution_op_unit = array();
		$row->new_operational_title = '';

		$row->display_title = $this->remap['ops_titles'][$row->old_operational_title]->display_title;

		// Clean up operational title terms -----
		if (array_key_exists($row->old_operational_title, $this->remap['ops_titles'])) {

			// set op title or set display title
			$title = $this->remap['ops_titles'][$row->old_operational_title]->new_title;		
			if (!empty($title)) {
				$row->new_operational_title = $title;
			} else {
				if (empty($row->display_title)) {
					$row->display_title = $row->old_operational_title;
				}
			}

			$op_unit = $this->remap['ops_titles'][$row->old_operational_title]->op_unit;
			if (!empty($op_unit)) {
				$row->institution_op_unit[] = $op_unit;
			} 
		} else {
			if (empty($row->display_title)) {
				$row->display_title = $row->old_operational_title;
			}
		}


		// Clean up institute taxonomy terms -----
		if(array_key_exists($row->old_institue_name, $this->remap['institutions'])) {

			if (!empty($this->remap['institutions'][$row->old_institue_name])) {
				$row->new_institute_name = $this->remap['institutions'][$row->old_institue_name];
				// $row->new_institute_tid = $this->getTid($row->new_institute_name,'institutions');
			} else {
				$row->new_institute_name = $row->old_institue_name;
				// $row->new_institute_tid = $this->getTid($row->old_institue_name,'institutions');
			}

			// assign a institution op unit if needed
			if(!empty($this->remap['institution_op_unit'][$row->old_institue_name])) {
				$op_unit = $this->remap['institution_op_unit'][$row->old_institue_name];
				$row->institution_op_unit[] = $op_unit;
			}
		} 
	
	}

	protected function query() {
	    $query = Database::getConnection('legacy', $this->sourceConnection)
	      ->select('field_data_field_professional_titles', 'pt')
	      ->fields('pt', array('entity_id','delta','field_professional_titles_value'))
	      ->condition('pt.entity_type','profile2', '=')
	      ->condition('pt.bundle','profile','=');
	    $query->addField('pt','field_professional_titles_value','item_id');

	    $query->leftjoin('field_data_field_institution','i',
	    	"i.entity_id=pt.field_professional_titles_value and 
	    	 i.entity_type='field_collection_item' and 
	    	 i.bundle='field_professional_titles'");
	    $query->fields('i',array('field_institution_target_id'));
	    $query->leftjoin('taxonomy_term_data','td',
	    	"td.tid=i.field_institution_target_id and
	    	 i.entity_type='field_collection_item' and
	    	 i.bundle='field_professional_titles'");
	    $query->addField('td','name','old_institue_name');

	   	$query->leftjoin('field_data_field_operational_title','ot',
	    	"ot.entity_id=pt.field_professional_titles_value and 
	    	 ot.entity_type='field_collection_item' and 
	    	 ot.bundle='field_professional_titles'");
	    $query->fields('ot',array('field_operational_title_target_id'));
	    $query->leftjoin('taxonomy_term_data','td2',
	    	"td2.tid=ot.field_operational_title_target_id and
	    	 ot.entity_type='field_collection_item' and
	    	 ot.bundle='field_professional_titles'");
	    $query->addField('td2','name','old_operational_title');


	    return $query;
	}

	private function getTid($term_name,$vocab) {
		$vid = $this->vocabs[$vocab]->vid;
		$query = db_select('taxonomy_term_data','td')
			->fields('td',array())
			->condition('td.vid',$vid)
			->condition('td.name',$term_name);
		return $query->execute()->fetchCol()[0];

	}
}

class GSHonorsAndAwardsRelations extends DrupalMigration {
	public function __construct(array $arguments) {
		$arguments['description'] = 'import honors and awards';
		parent::__construct($arguments);

		$this->dependencies[] = 'curriculum_vitae';
		$this->dependencies[] = 'honors_and_award';


		$this->sourceFields += array(
			'new_award_nid' => t('nid of honors_and_award node post migration'),
			'new_cv_pid' => t('pid of curriculum_vitae profile post migration'),
		);

		$this->source = new MigrateSourceSQL(
			$this->query(),
			$this->sourceFields,
			NULL,
			$this->sourceOptions
		);

		$this->destination = new MigrateDestinationRelation('was_awarded');

		$this->map = new MigrateSQLMap(
			$this->machineName,
			array(
				'field_honors_and_awards_target_id' => array(
					'type' => 'int',
					'unsigned' => TRUE,
					'not null' => TRUE,
					'description' => 'node id',
				),
				'entity_id' => array(
					'type' => 'int',
					'unsigned' => TRUE,
					'not null' => TRUE,
					'description' => 'profile2 id',
				),
				'delta' => array(
					'type' => 'int',
					'unsigned' => TRUE,
					'not null' => TRUE,
					'description' => 'index number in set',
				),
			), //source
			MigrateDestinationRelation::getKeySchema() //destination
		);


		$this->addFieldMapping('uid','uid')->sourceMigration('user');
		$this->addFieldMapping('is_new')->defaultValue(TRUE);
		// $this->addFieldMapping('endpoints:entity_id','field_honors_and_awards_target_id');
		// $this->addFieldMapping('endpoints:r_index',NULL);


		$this->addUnmigratedDestinations(array(
			'path',
			'created',
			'changed',
			'endpoints',
			'endpoints:entity_id',
			'endpoints:r_index'
		));

		$this->addUnmigratedSources(array(
			'new_award_nid',
			'new_cv_pid'
		));
	}

	public function postRollback() {
    	parent::postRollback();

    	// Clean up the relation_add:field_honors_and_awards_rel table
    	db_delete('field_data_field_honors_and_awards_rels')
    		->condition('entity_type', 'node')
    		->condition('bundle', 'honors_and_awards')
    		->execute();
    	db_delete('field_data_field_honors_and_awards_rels')
    		->condition('entity_type','profile2')
    		->condition('bundle','curriculum_vitae')
    		->execute();
    }


	//http://janezurevc.name/relation-migrate-integration-and-reference-upgrade-path
	public function prepare(stdClass $relation, stdClass $row) {

    	$query = db_select('migrate_map_honors_and_award','mha');
    	$query->addField('mha','destid1','new_award_nid');
    	$query->condition('mha.sourceid1',$row->field_honors_and_awards_target_id);
    	$query->range(0,1);
    	$nid = $query->execute()->fetchCol()[0];

       	$query = db_select('migrate_map_curriculum_vitae','mcv');
    	$query->addField('mcv','destid1','new_cv_pid');
    	$query->condition('mcv.sourceid1',$row->entity_id);
    	$query->range(0,1);
    	$pid = $query->execute()->fetchCol()[0];

    	// skip unmapped cv:pids
    	if (empty($pid)) { return FALSE;}

		$relation->endpoints[LANGUAGE_NONE] = array(
			array( 'entity_type' => 'profile2', 'entity_id' => $pid),		
			array( 'entity_type' => 'node',     'entity_id' => $nid),
		);
	}

	protected function query() {
	    $query = Database::getConnection('legacy', $this->sourceConnection)
			->select('field_data_field_honors_and_awards', 'ha')
			->fields('ha',array('field_honors_and_awards_target_id','entity_id','delta'))
			->condition('ha.entity_type','profile2','=')
			->condition('ha.bundle','profile','=');

		$query->leftjoin('node','n',
			"n.nid=ha.field_honors_and_awards_target_id and n.type='honors_and_awards'");
		$query->fields('n',array('uid'));

	    return $query;
	}
}



