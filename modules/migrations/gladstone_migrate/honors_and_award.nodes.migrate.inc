<?php 

class GSHonorsAndAwards extends DrupalNode7Migration {
	public function __construct(array $arguments){
		$arguments['description'] = 'import honors and awards nodes';
		$arguments['source_type'] = 'honors_and_awards';
		$arguments['destination_type'] = 'honors_and_awards';
		$arguments['user_migration'] = 'user';
		$arguments['default_uid'] = 1;
		parent::__construct($arguments);

	    $this->sourceFields += array(
	    	'honor_and_award_term' => t('Awards term'),
	    );

	    $this->source = new MigrateSourceSQL(
        	$this->query(), 
			$this->sourceFields,
			NULL, 
			$this->sourceOptions
		);		

  		// field mappings (destination, source) ------------------------
	    $this->addFieldMapping('field_date_mmyy','field_award_year_value');
	    $this->addFieldMapping('field_user_refs','field_user_ref')->sourceMigration('user');
	    $this->addFieldMapping('field_operational_units', 'field_operational_unit');
	    $this->addFieldMapping('field_operational_units:source_type')->defaultValue('name');
	    $this->addFieldMapping('field_operational_units:create_term')->defaultValue(FALSE);
	    $this->addFieldMapping('field_operational_units:ignore_case')->defaultValue(TRUE);
	    $this->addFieldMapping('field_honor_and_award','honor_and_award_term');
	    $this->addFieldMapping('field_honor_and_award:source_type')->defaultValue('name');
	    $this->addFieldMapping('field_honor_and_award:create_term')->defaultValue(TRUE);
	    $this->addFieldMapping('field_honor_and_award:ignore_case')->defaultValue(TRUE);

		// tell migrate to ignore these fields
		$this->addUnmigratedDestinations(array(
			'field_date_mmyy:timezone',
			'field_date_mmyy:rrule',
			'field_date_mmyy:to',
			'field_files',
			'field_files:file_class',
			'field_files:language',
			'field_files:preserve_files',
			'field_files:destination_dir',
			'field_files:destination_file',
			'field_files:file_replace',
			'field_files:source_dir',
			'field_files:urlencode',
			'field_files:description',
			'field_files:display',
			'field_research_tags',
			'field_research_tags:source_type',
			'field_research_tags:create_term',
			'field_research_tags:ignore_case',
			'field_node_refs',
			'field_honors_and_awards_rels'
		));

		$this->addUnmigratedSources(array(
			'revision',
			'revision_uid',
			'log',
			'field_award_name',
			'field_node_ref',
			'field_award_year_value',
			'field_award_year'
		  ));

	}


	public function prepareRow($row) {
		$row->honor_and_award_term = $row->title;
	}

	protected function query() {
		$query = parent::query();

		$query->leftjoin('field_data_field_award_year', 'y',
			"y.entity_id=n.nid and y.entity_type='node' and y.bundle='honors_and_awards'");
		$query->fields('y', array('field_award_year_value'));
				
		return $query;
	}
}