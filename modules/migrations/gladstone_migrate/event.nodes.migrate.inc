<?php

class GSEvent extends DrupalNode7Migration {
	public function __construct(array $arguments){
		$arguments['description'] = 'import events';
		$arguments['source_type'] = 'event_calendar';
		$arguments['destination_type'] = 'event_calendar';
		$arguments['user_migration'] = 'user';
		$arguments['default_uid'] = 1;

		$this->sourceFields += array(
			'body:format' => t('text filter'),
			'operational_units' => t('Array of all operational unit tids'),
		);

		parent::__construct($arguments);		

		$this->addFieldMapping('field_operational_units','operational_units');
		$this->addFieldMapping('field_operational_units:source_type')->defaultValue('name');
		$this->addFieldMapping('field_operational_units:create_term')->defaultValue(FALSE);
		$this->addFieldMapping('field_operational_units:ignore_case')->defaultValue(TRUE);
		$this->addFieldMapping('field_display_title','field_headline');
		$this->addFieldMapping('event_calendar_status')->defaultValue('pending');
		$this->addFieldMapping('event_calendar_status:source_type')->defaultValue('name');
		$this->addFieldMapping('event_calendar_status:create_term')->defaultValue(FALSE);
		$this->addFieldMapping('event_calendar_status:ignore_case')->defaultValue(TRUE);
		$this->addFieldMapping('event_calendar_date','event_calendar_date_value');
		$this->addFieldMapping('event_calendar_date:to','event_calendar_date_value2');

		$this->addUnmigratedDestinations(array(
			'field_research_tags',
			'field_research_tags:source_type',
			'field_research_tags:create_term',
			'field_research_tags:ignore_case',
			'field_text',
			'field_text:language'
		));
		$this->addUnmigratedSources(array(
			'revision',
			'log',
			'revision_uid',
			'field_user_ref',
			'field_node_ref',			
		));
	}

	public function prepareRow($row) {
		$row->operational_units = $this->operational_units($row->nid);
	}

	protected function query() {
		$query = parent::query();

		$query->leftjoin('field_data_field_headline','h',
			"h.entity_id=n.nid and h.entity_type='node' and h.bundle='event_calendar'");
		$query->addField('h','field_headline_value','field_headline');
		
		$query->leftjoin('field_data_event_calendar_date','cal',
			"cal.entity_id=n.nid and cal.entity_type='node' and cal.bundle='event_calendar'");
		$query->fields('cal',array('event_calendar_date_value','event_calendar_date_value2'));
		return $query;
	}

	protected function operational_units($nid) {		 
		$query = Database::getConnection('legacy', $this->sourceConnection)
	      ->select('field_data_field_operational_unit', 'ou')
	      // ->fields('ou', array('field_operational_unit_tid'))
	      ->condition('ou.bundle','event_calendar', '=')
	      ->condition('ou.entity_id',$nid,'=');
	    $query->leftjoin('taxonomy_term_data', 'td',"td.tid=ou.field_operational_unit_tid");
	    $query->addField('td','name','ou_name');
	    return $query->execute()->fetchCol();
	}
}