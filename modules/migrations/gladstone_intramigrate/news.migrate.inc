<?php

class GSNews extends GSNode {
	public function __construct(array $arguments){
		$arguments['description'] = 'import news nodes';
		$arguments['source_type'] = 'news';
		$arguments['destination_type'] = 'news';
		$arguments['default_uid'] = 1;

		parent::__construct($arguments);	

		$this->addFieldMapping('field_image','field_image_fid')->sourceMigration('files');
		$this->addFieldMapping('field_image:alt','field_image_alt');
		$this->addFieldMapping('field_image:title','field_image_title');
		$this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');
		$this->addFieldMapping('field_image:preserve_files')->defaultValue(TRUE);
		$this->addFieldMapping('field_image:language')->defaultValue(LANGUAGE_NONE);
		$this->addFieldMapping('field_biblio_refs','biblio_refs')->sourceMigration('nodes');


		$this->addSimpleMappings(array(
			'field_text',
			'field_blurb',
			'field_date',
			'field_longtext',
		));

		$this->addUnmigratedDestinations(array(
			'field_date:timezone',
			'field_date:rrule',
			'field_date:to',
			'field_longtext:language',
			'field_text:language',
			'field_blurb:language'
		));

		$this->addUnmigratedSources(array(
			'field_image:alt',
			'field_image:title',
			'field_image:width',
			'field_image:height',
			'field_biblio_refs'
		));
	}

	protected function query() {
		$query = parent::query();

		$query->leftjoin('field_data_field_image','i',
			"i.entity_id=n.nid and i.entity_type='node' and i.bundle='news'");
		$query->fields('i',array('field_image_fid','field_image_alt','field_image_title'));
		return $query;
	}
}