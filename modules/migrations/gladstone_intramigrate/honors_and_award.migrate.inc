<?php 

class GSHonorsAndAwards extends GSNode {
	public function __construct(array $arguments){
		$arguments['description'] = 'import honors and awards nodes';
		$arguments['source_type'] = 'honors_and_awards';
		$arguments['destination_type'] = 'honors_and_awards';
		$arguments['default_uid'] = 1;

		parent::__construct($arguments);
		

  		// field mappings (destination, source) ------------------------

	    $this->addFieldMapping('field_honor_and_award','field_honor_and_award_tid')->sourceMigration('honors_and_awards');
	    $this->addFieldMapping('field_honor_and_award:source_type')->defaultValue('tid');
	    $this->addFieldMapping('field_honor_and_award:create_term')->defaultValue(FALSE);
	    $this->addFieldMapping('field_honor_and_award:ignore_case')->defaultValue(TRUE);

	    $this->addFieldMapping('field_image','field_image')->sourceMigration('files');
	    $this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');
	    $this->addFieldMapping('field_image:preserve_files')->defaultValue(TRUE);
	    $this->addFieldMapping('field_image:language')->defaultValue(LANGUAGE_NONE);

	    $this->addSimpleMappings(array(
	    	'field_date_mmyy'
	    ));

		// tell migrate to ignore these fields
		$this->addUnmigratedDestinations(array(
			'field_date_mmyy:timezone',
			'field_date_mmyy:rrule',
			'field_date_mmyy:to',
			'field_image:alt',
			'field_image:title',
			'field_honors_and_awards_rels'

		));

		$this->addUnmigratedSources(array(
			'biblio_refs',
			'field_image:alt',
			'field_image:title',
			'field_image:alt',
			'field_image:title',
			'field_image:width',
			'field_image:height',
			'field_honors_and_awards_rels',
			'field_honor_and_award'
		  ));

	}


	protected function query() {
		$query = parent::query();

		$query->leftjoin('field_data_field_honor_and_award', 'ha',
			"ha.entity_id=n.nid and ha.entity_type='node' and ha.bundle='honors_and_awards'");
		$query->fields('ha', array('field_honor_and_award_tid'));
				
		return $query;
	}
}