<?php

class GSCurriculumVitae extends GSProfile2Base {
	protected $curriculum_vitae_rid;

	public function __construct(array $arguments) {
	  $arguments['description'] = 'import user profile2:curriculum_vitae';
	
	  // Pseudo sources
	  $this->sourceFields += array(
		'achievements' => t('aggregate achievements'),
		'lab_focus' => t('aggregate lab focus multi-field'),
		'node_refs' => t('Node references'),
	   );

	  parent::__construct($arguments);

	  // make sure our roles are migrated first
	  // add the machine name for the role migration class
	  $this->dependencies[] = 'user';
	  $this->dependencies[] = 'files';
	  $this->dependencies[] = 'nodes';


	  // the 'profile' argument is the machine name of the destination
	  // profile type
	  $this->destination = new MigrateDestinationProfile2('curriculum_vitae'); 

	  // field mappings (destination, source) ------------------------
	  $this->addFieldMapping('uid','uid')->sourceMigration('user');
	  $this->addFieldMapping('language')->defaultValue('en');
	  $this->addFieldMapping('field_label_alias','field_label_alias_value');
	  $this->addFieldMapping('field_research_interests','field_research_interests_value');
	  $this->addFieldMapping('field_research_interests:format')->defaultValue('rich_text');
	  $this->addFieldMapping('field_achievements', 'achievements');
	  $this->addFieldMapping('field_lab_focus', 'lab_focus');
	  $this->addFieldMapping('field_node_refs', 'node_refs')->sourceMigration('nodes');

	  // tell migrate to ignore these fields
	  $this->addUnmigratedDestinations(array(
		'revision_uid',
		'field_achievements:language',
		'field_affiliations',
		'field_affiliations:revision_id',
		'field_education',
		'field_education:revision_id',
		'field_lab_focus:language',
		'field_research_interests:language',
		'field_professional_titles',
		'field_professional_titles:revision_id',
		'path',
		'field_honors_and_awards_rels',
	  ));

	  // $this->addUnmigratedSources(array(
	  //   'field_profile_type',
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

		$row->achievements = $this->field_achievements($row->pid);
		$row->lab_focus = $this->field_lab_focus($row->pid);   
		$row->node_refs = $this->node_refs($row->pid); 
	} 	

	protected function query() {

		$query = parent::query();  	

		$query->leftjoin('field_data_field_label_alias','label', 
		  "label.entity_id=p.pid and label.entity_type='profile2' and label.bundle='curriculum_vitae' and label.delta=0");
		$query->fields('label',array('field_label_alias_value'));

		$query->leftjoin('field_data_field_research_interests','ri',
		  "ri.entity_id=p.pid and ri.entity_type='profile2' and ri.bundle='curriculum_vitae'");
		$query->fields('ri',array('field_research_interests_value'));

		// filter condition
		$query->condition('p.type','curriculum_vitae');
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

	protected function node_refs($pid) {
		$data = Database::getConnection('legacy', $this->sourceConnection)
					->select('field_data_field_node_refs', 'nr')
					->fields('nr', array('field_node_refs_target_id'))
					->condition('nr.entity_id',$pid)
					->condition('nr.entity_type','profile2')
					->condition('nr.bundle','curriculum_vitae')
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
		
		parent::__construct($arguments);

		$this->dependencies[] = 'curriculum_vitae';
		$this->dependencies[] = 'institution';
		$this->dependencies[] = 'institution_operational_unit';
		$this->dependencies[] = 'operational_role';

		$this->destination = new MigrateDestinationFieldCollection(
			'field_affiliations',
			array('host_entity_type' => 'profile2')
		);

	  // field mappings (destination, source) ------------------------
	  $this->addFieldMapping('host_entity_id','entity_id')->sourceMigration('curriculum_vitae');

	  $this->addFieldMapping('field_institution','field_institution_tid')->sourceMigration('institution');
	  $this->addFieldMapping('field_institution:source_type')->defaultValue('tid');
	  $this->addFieldMapping('field_institution:create_term')->defaultValue(FALSE);
	  $this->addFieldMapping('field_institution:ignore_case')->defaultValue(TRUE);

	  $this->addFieldMapping('field_institution_op_units','iop_units')
		   ->separator(',')
		   ->sourceMigration('institution_operational_unit');
	  $this->addFieldMapping('field_institution_op_units:source_type')->defaultValue('tid');
	  $this->addFieldMapping('field_institution_op_units:create_term')->defaultValue(FALSE);
	  $this->addFieldMapping('field_institution_op_units:ignore_case')->defaultValue(TRUE);

	  $this->addFieldMapping('field_operational_role','field_operational_role_tid')->sourceMigration('operational_role');
	  $this->addFieldMapping('field_operational_role:source_type')->defaultValue('tid');
	  $this->addFieldMapping('field_operational_role:create_term')->defaultValue(FALSE);
	  $this->addFieldMapping('field_operational_role:ignore_case')->defaultValue(TRUE);

	  $this->addFieldMapping('field_text','field_text_value');

	  $this->addUnmigratedDestinations(array(
		'field_text:language',
		'path',
	  ));

	  $this->addUnmigratedSources(array('item_id','field_affiliations_value'));

	}

	protected function query() {
		$query = Database::getConnection('legacy', $this->sourceConnection)
		  ->select('field_data_field_affiliations', 'a')
		  ->fields('a', array('entity_id','field_affiliations_value'))
		  ->condition('a.entity_type','profile2')
		  ->condition('a.bundle','curriculum_vitae');
		$query->addField('a','field_affiliations_value','item_id');

		$query->leftjoin('field_data_field_institution','i',
			"i.entity_id=a.field_affiliations_value and 
			 i.entity_type='field_collection_item' and 
			 i.bundle='field_affiliations'");
		$query->fields('i',array('field_institution_tid'));

		$query->leftjoin('field_data_field_institution_op_units','iou',
			"iou.entity_id=a.field_affiliations_value and ".
			"iou.entity_type='field_collection_item' and ".
			"iou.bundle='field_affiliations'");
		$query->addExpression('GROUP_CONCAT(DISTINCT iou.field_institution_op_units_tid)','iop_units');

		$query->leftjoin('field_data_field_operational_role','opr',
			"opr.entity_id=a.field_affiliations_value and ".
			"opr.entity_type='field_collection_item' and ".
			"opr.bundle='field_affiliations'");
		$query->fields('opr',array('field_operational_role_tid'));

		$query->leftjoin('field_data_field_text','t',
			"t.entity_id=a.field_affiliations_value and ".
			"t.entity_type='field_collection_item' and ".
			"t.bundle='field_affiliations'");
		$query->fields('t',array('field_text_value'));

		// make sure there is one row per affiliation
		$query->groupBy('a.field_affiliations_value');

		return $query;
	}	
}

class GSCurriculumVitaeEducation extends GSFieldCollectionBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'import field collection education';
		parent::__construct($arguments);

		$this->dependencies[] = 'curriculum_vitae';
		$this->dependencies[] = 'institution';
		$this->dependencies[] = 'concentration_of_study';

		$this->destination = new MigrateDestinationFieldCollection(
			'field_education',
			array('host_entity_type' => 'profile2')
		);

	  // field mappings (destination, source) ------------------------
	  $this->addFieldMapping('host_entity_id','entity_id')->sourceMigration('curriculum_vitae');

	  $this->addFieldMapping('field_institution','field_institution_tid')->sourceMigration('institution');
	  $this->addFieldMapping('field_institution:source_type')->defaultValue('tid');
	  $this->addFieldMapping('field_institution:create_term')->defaultValue(FALSE);
	  $this->addFieldMapping('field_institution:ignore_case')->defaultValue(TRUE);
	  $this->addFieldMapping('field_date_yyyy','field_date_yyyy_value');
	  $this->addFieldMapping('field_degree','field_degree_value');

	  $this->addFieldMapping('field_areas_of_concentration','areas_of_concentration')
		   ->separator(',')
		   ->sourceMigration('concentration_of_study');
	  $this->addFieldMapping('field_areas_of_concentration:source_type')->defaultValue('tid');
	  $this->addFieldMapping('field_areas_of_concentration:create_term')->defaultValue(FALSE);
	  $this->addFieldMapping('field_areas_of_concentration:ignore_case')->defaultValue(TRUE);      	   

	  $this->addUnmigratedDestinations(array(
		'path',
		'field_date_yyyy:timezone',
		'field_date_yyyy:rrule',
		'field_date_yyyy:to',
	  ));

	  $this->addUnmigratedSources(array('item_id','field_education_value'));


	}

	protected function query() {
		$query = Database::getConnection('legacy', $this->sourceConnection)
		  ->select('field_data_field_education', 'e')
		  ->fields('e', array('entity_id','field_education_value'))
		  ->condition('e.entity_type','profile2')
		  ->condition('e.bundle','curriculum_vitae');
		$query->addField('e','field_education_value','item_id');

		$query->leftjoin('field_data_field_institution','i',
			"i.entity_id=e.field_education_value and 
			 i.entity_type='field_collection_item' and 
			 i.bundle='field_education'");
		$query->fields('i',array('field_institution_tid'));

		$query->leftjoin('field_data_field_date_yyyy','y',
			"y.entity_id=e.field_education_value and 
			 y.entity_type='field_collection_item' and 
			 y.bundle='field_education'");
		$query->fields('y',array('field_date_yyyy_value'));

		$query->leftjoin('field_data_field_degree','d',
			"d.entity_id=e.field_education_value and 
			 d.entity_type='field_collection_item' and 
			 d.bundle='field_education'");
		$query->fields('d',array('field_degree_value'));

		$query->leftjoin('field_data_field_areas_of_concentration','aoc',
			"aoc.entity_id=e.field_education_value and ".
			"aoc.entity_type='field_collection_item' and ".
			"aoc.bundle='field_education'");
		$query->addExpression('GROUP_CONCAT(DISTINCT aoc.field_areas_of_concentration_tid)','areas_of_concentration');

		// make sure there is one row per affiliation
		$query->groupBy('e.field_education_value');	    

		return $query;
	}
}

class GSCurriculumVitaeProfTitles extends GSFieldCollectionBase {
	
	protected $remap = array();

	public function __construct(array $arguments) {
		$arguments['description'] = 'import field collection professional titles';

		$this->sourceFields += array(
		);

		parent::__construct($arguments);

		$this->dependencies[] = 'curriculum_vitae';
		$this->dependencies[] = 'institution';
		$this->dependencies[] = 'institution_operational_unit';
		$this->dependencies[] = 'operational_title';


		$this->destination = new MigrateDestinationFieldCollection(
			'field_professional_titles',
			array('host_entity_type' => 'profile2')
		);

		// field mappings (destination, source) ------------------------
		$this->addFieldMapping('host_entity_id','entity_id')->sourceMigration('curriculum_vitae');

		$this->addFieldMapping('field_institution','field_institution_tid')->sourceMigration('institution');
		$this->addFieldMapping('field_institution:source_type')->defaultValue('tid');
		$this->addFieldMapping('field_institution:create_term')->defaultValue(FALSE);
		$this->addFieldMapping('field_institution:ignore_case')->defaultValue(TRUE);

		$this->addFieldMapping('field_institution_op_units','iop_units')
		   ->separator(',')
		   ->sourceMigration('institution_operational_unit');
		$this->addFieldMapping('field_institution_op_units:source_type')->defaultValue('tid');
		$this->addFieldMapping('field_institution_op_units:create_term')->defaultValue(FALSE);
		$this->addFieldMapping('field_institution_op_units:ignore_case')->defaultValue(TRUE);

		$this->addFieldMapping('field_operational_titles','op_titles')
		   ->separator(',')
		   ->sourceMigration('operational_title');
		$this->addFieldMapping('field_operational_titles:source_type')->defaultValue('tid');
		$this->addFieldMapping('field_operational_titles:create_term')->defaultValue(FALSE);
		$this->addFieldMapping('field_operational_titles:ignore_case')->defaultValue(TRUE);

		$this->addFieldMapping('field_boolean','field_boolean_value');
		$this->addFieldMapping('field_text','field_text_value');

		$this->addUnmigratedDestinations(array(
			'path',
			'field_text:language'
		));

	  	$this->addUnmigratedSources(array('item_id','field_professional_titles_value'));

	}
	
	protected function query() {
		$query = Database::getConnection('legacy', $this->sourceConnection)
		  ->select('field_data_field_professional_titles', 'pt')
		  ->fields('pt', array('entity_id','field_professional_titles_value'))
		  ->condition('pt.entity_type','profile2')
		  ->condition('pt.bundle','curriculum_vitae');
		$query->addField('pt','field_professional_titles_value','item_id');

		$query->leftjoin('field_data_field_institution','i',
			"i.entity_id=pt.field_professional_titles_value and 
			 i.entity_type='field_collection_item' and 
			 i.bundle='field_professional_titles'");
		$query->fields('i',array('field_institution_tid'));

		$query->leftjoin('field_data_field_institution_op_units','iou',
			"iou.entity_id=pt.field_professional_titles_value and ".
			"iou.entity_type='field_collection_item' and ".
			"iou.bundle='field_professional_titles'");
		$query->addExpression('GROUP_CONCAT(DISTINCT iou.field_institution_op_units_tid)','iop_units');

		$query->leftjoin('field_data_field_operational_title','ot',
			"ot.entity_id=pt.field_professional_titles_value and ".
			"ot.entity_type='field_collection_item' and ".
			"ot.bundle='field_professional_titles'");
		$query->addExpression('GROUP_CONCAT(DISTINCT ot.field_operational_title_tid)','op_titles');

		$query->leftjoin('field_data_field_boolean', 'bool',
			"bool.entity_id=pt.field_professional_titles_value and ".
			"bool.entity_type='field_collection_item' and ".
			"bool.bundle='field_professional_titles'");
		$query->fields('bool',array('field_boolean_value'));

		$query->leftjoin('field_data_field_text','dt',
			"dt.entity_id=pt.field_professional_titles_value and ".
			"dt.entity_type='field_collection_item' and ".
			"dt.bundle='field_professional_titles'");
		$query->fields('dt',array('field_text_value'));

		// make sure there is one row per affiliation
		$query->groupBy('pt.field_professional_titles_value');

		return $query;
	}
}

class GSHonorsAndAwardsRelations extends DrupalMigration {
	public function __construct(array $arguments) {
		$arguments['description'] = 'import honors and awards relationships';
		parent::__construct($arguments);

		// hack to do cross db joins on same host
		global $databases;
		$this->db_name = $databases['default']['default']['database'];

		$this->relation_type = 'was_awarded';

		$this->dependencies[] = 'curriculum_vitae';
		$this->dependencies[] = 'honors_and_award_nodes';

		$this->source = new MigrateSourceSQL(
			$this->query(),
			$this->sourceFields,
			NULL,
			$this->sourceOptions
		);

		$this->destination = new MigrateDestinationRelation($this->relation_type);

		$this->map = new MigrateSQLMap(
			$this->machineName,
			MigrateDestinationRelation::getKeySchema(), //source
			MigrateDestinationRelation::getKeySchema() //destination
		);

		$this->addFieldMapping('uid','uid')->sourceMigration('user');
		$this->addFieldMapping('is_new')->defaultValue(TRUE);

		$this->addUnmigratedDestinations(array(
			'path',
			'created',
			'changed',
			'endpoints',
			'endpoints:entity_id',
			'endpoints:r_index'
		));

		$this->addUnmigratedSources(array('pid','nid'));
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
		// skip unmapped cv:pids
		if (empty($row->pid)) { return FALSE;}

		$relation->endpoints[LANGUAGE_NONE] = array(			
			array( 'entity_type' => 'profile2', 'entity_id' => $row->pid),		
			array( 'entity_type' => 'node',     'entity_id' => $row->nid),
		);		
	}

	protected function query() {
		$query = Database::getConnection('legacy', $this->sourceConnection)
			->select('relation', 'r')
			->condition('r.relation_type', $this->relation_type)
			->fields('r',array('rid','uid'));

		$query->leftjoin('field_data_endpoints', 'e',
			"e.entity_id=r.rid and ".			
			"e.entity_type='relation' and ".
			"e.bundle='".$this->relation_type."' and ".
			"e.endpoints_entity_type='profile2' and ".
			"e.endpoints_r_index=0");
		$query->leftjoin($this->db_name.'.migrate_map_curriculum_vitae','mcv',"mcv.sourceid1=e.endpoints_entity_id");
		$query->addField('mcv','destid1','pid');

		$query->leftjoin('field_data_endpoints', 'e2',
			"e2.entity_id=r.rid and ".			
			"e2.entity_type='relation' and ".
			"e2.bundle='".$this->relation_type."' and ".
			"e2.endpoints_entity_type='node' and ".
			"e2.endpoints_r_index=1");
		$query->leftjoin($this->db_name.'.migrate_map_honors_and_award_nodes', 'mha',"mha.sourceid1=e2.endpoints_entity_id");
		$query->addField('mha','destid1','nid');		

		return $query;
	}
}



