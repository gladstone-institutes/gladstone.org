<?php

class GSInTheNews extends GSNode {
	public function __construct(array $arguments){
		$arguments['description'] = 'import in the news nodes';
		$arguments['source_type'] = 'in_the_news';
		$arguments['destination_type'] = 'in_the_news';
		$arguments['default_uid'] = 1;

		parent::__construct($arguments);

		$this->addFieldMapping('field_biblio_refs','biblio_refs')->sourceMigration('biblio_nodes');

		$this->addFieldMapping('field_image','field_image_fid')->sourceMigration('files');
		$this->addFieldMapping('field_image:alt','field_image_alt');
		$this->addFieldMapping('field_image:title','field_image_title');
		$this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');
		$this->addFieldMapping('field_image:preserve_files')->defaultValue(TRUE);
		$this->addFieldMapping('field_image:language')->defaultValue(LANGUAGE_NONE);


		$this->addSimpleMappings(array(
			'field_date',
			'field_url',
			'field_url:title',
			'field_boolean'
		));

		$this->addUnmigratedDestinations(array(
			'field_date:timezone',
			'field_date:rrule',
			'field_date:to',
			'field_url:attributes',
			'field_url:language'
		));

		$this->addUnmigratedSources(array(
			'field_biblio_refs',
			'field_url:attributes',
			'field_image',
			'field_image:alt',
			'field_image:title',
			'field_image:width',
			'field_image:height',
		));
	}	

	protected function query() {
		$query = parent::query();

		$query->leftjoin('field_data_field_image','i',
			"i.entity_id=n.nid and i.entity_type='node' and i.bundle='in_the_news'");
		$query->fields('i',array('field_image_fid','field_image_alt','field_image_title'));

		$query->leftjoin('field_data_field_url', 'u', 
			"u.entity_id=n.nid and u.entity_type='node' and u.bundle='in_the_news'");
		$query->addField('u','field_url_url','field_url');
		$query->addField('u','field_url_title','field_url:title');
		return $query;
	}
}