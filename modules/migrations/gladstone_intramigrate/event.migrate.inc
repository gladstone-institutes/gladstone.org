<?php

class GSEvent extends GSNode {
	public function __construct(array $arguments){
		$arguments['description'] = 'import events';
		$arguments['source_type'] = 'event_calendar';
		$arguments['destination_type'] = 'event_calendar';
		$arguments['default_uid'] = 1;

		parent::__construct($arguments);		

		$this->dependencies[] = 'event_types';

		$this->addFieldMapping('event_calendar_status','event_calendar_status');
		$this->addFieldMapping('event_calendar_status:source_type')->defaultValue('name');
		$this->addFieldMapping('event_calendar_status:create_term')->defaultValue(TRUE);
		$this->addFieldMapping('event_calendar_status:ignore_case')->defaultValue(TRUE);

		$this->addFieldMapping('event_calendar_date','event_calendar_date_value');
		$this->addFieldMapping('event_calendar_date:to','event_calendar_date_value2');
		$this->addFieldMapping('field_longtext:format')->defaultValue('rich_text');

		$this->addFieldMapping('field_image','field_image_fid')->sourceMigration('files');
		$this->addFieldMapping('field_image:alt','field_image_alt');
		$this->addFieldMapping('field_image:title','field_image_title');
		$this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');
		$this->addFieldMapping('field_image:preserve_files')->defaultValue(TRUE);
		$this->addFieldMapping('field_image:language')->defaultValue(LANGUAGE_NONE);

		$this->addFieldMapping('field_event_types','event_types')
			 ->separator(',')
			 ->sourceMigration('event_types');
		$this->addFieldMapping('field_event_types:source_type')->defaultValue('tid');
		$this->addFieldMapping('field_event_types:create_term')->defaultValue(FALSE);
		$this->addFieldMapping('field_event_types:ignore_case')->defaultValue(TRUE);		

		$this->addSimpleMappings(array(
			'field_display_title',
			'field_blurb',
			'field_longtext',
			'field_location',
			'field_text'
		));

		$this->addUnmigratedDestinations(array(
			'field_text:language',
			'event_calendar_date:timezone',
			'event_calendar_date:rrule',
			'field_blurb:language',
			'field_display_title:language',
			'field_location:language',
			'field_longtext:language',
		));
		$this->addUnmigratedSources(array(
			'revision',
			'log',
			'revision_uid',			
			'biblio_refs',
			'field_image',
			'field_image:alt',
			'field_image:title',
			'field_image:width',
			'field_image:height',
			'field_longtext:format',
			'field_event_types',
			'field_event_types_tid',
			'event_calendar_date',
			'event_calendar_date:value2'
		));
	}

	protected function query() {
		$query = parent::query();
		
		$query->leftjoin('field_data_event_calendar_date','cal',
			"cal.entity_id=n.nid and cal.entity_type='node' and cal.bundle='event_calendar'");
		$query->fields('cal',array('event_calendar_date_value','event_calendar_date_value2'));

		$query->leftjoin('field_data_field_image','i',
			"i.entity_id=n.nid and i.entity_type='node' and i.bundle='event_calendar'");
		$query->fields('i',array('field_image_fid','field_image_alt','field_image_title'));

		$query->leftjoin('field_data_field_event_types','et',
			"et.entity_id=n.nid and 
			 et.entity_type='node' and 
			 et.bundle='event_calendar'");
		$query->fields('et',array('field_event_types_tid'));
		$query->addExpression('GROUP_CONCAT(DISTINCT et.field_event_types_tid)','event_types');

		$query->leftjoin('field_data_event_calendar_status','status',
			"status.entity_id=n.nid and status.entity_type='node' and status.bundle='event_calendar'");
		$query->leftjoin('taxonomy_term_data','term',
			"term.tid=status.event_calendar_status_tid");
		$query->addField('term','name','event_calendar_status');

		// one row per event node
		$query->groupBy('n.nid');

		
		return $query;
	}

}