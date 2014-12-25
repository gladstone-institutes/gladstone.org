<?php 

class GSPressRelease extends GSNode {
	public function __construct(array $arguments){
		$arguments['description'] = 'import news nodes';
		$arguments['source_type'] = 'press_release';
		$arguments['destination_type'] = 'press_release';
		$arguments['default_uid'] = 1;

		parent::__construct($arguments);	


		$this->addFieldMapping('field_biblio_refs','biblio_refs')->sourceMigration('biblio_nodes');

		$this->addFieldMapping('field_image','field_image_fid')->sourceMigration('files');
		$this->addFieldMapping('field_image:alt','field_image_alt');
		$this->addFieldMapping('field_image:title','field_image_title');
		$this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');
		$this->addFieldMapping('field_image:preserve_files')->defaultValue(TRUE);
		$this->addFieldMapping('field_image:language')->defaultValue(LANGUAGE_NONE);


		$this->addFieldMapping('field_urls','urls');
		$this->addFieldMapping('field_urls:title','url_titles');
		$this->addFieldMapping('field_contacts','contacts')->sourceMigration('user');
	
		$this->addSimpleMappings(array(
			'field_date',
			'field_display_title',
			'field_longtext',
			'field_blurb',
			'field_text',			
		));

		$this->addUnmigratedDestinations(array(
			'field_date:timezone',
			'field_date:rrule',
			'field_date:to',
			'field_urls:attributes',
			'field_text:language',
			'field_urls:language',
			'field_longtext:language',
			'field_display_title:language',
			'field_blurb:language',
		));
		$this->addUnmigratedSources(array(
			'field_contacts',
			'field_biblio_refs',
			'field_image',
			'field_image:alt',
			'field_image:title',
			'field_image:width',
			'field_image:height',
			'field_urls:attributes',
			'field_urls',
			'field_urls:title'
		));

	}

	
	protected function query() {
		$query = parent::query();

		$query->leftjoin('field_data_field_image','i',
			"i.entity_id=n.nid and i.entity_type='node' and i.bundle='press_release'");
		$query->fields('i',array('field_image_fid','field_image_alt','field_image_title'));

		$query->leftjoin('field_data_field_contacts','contact', 
			"contact.entity_id=n.nid and contact.entity_type='node' and contact.bundle='press_release'");
		$query->addExpression('GROUP_CONCAT(DISTINCT contact.field_contacts_target_id)', 'contacts');

		$query->leftjoin('field_data_field_urls','u', 
			"u.entity_id=n.nid and u.entity_type='node' and u.bundle='press_release'");
		$query->addExpression('GROUP_CONCAT(DISTINCT u.field_urls_url)', 'urls');

		$query->leftjoin('field_data_field_urls','u', 
			"u.entity_id=n.nid and u.entity_type='node' and u.bundle='press_release'");
		$query->addExpression('GROUP_CONCAT(DISTINCT u.field_urls_title)', 'url_titles');

		// make sure there is one row per affiliation
		$query->groupBy('n.nid');

		return $query;
	}
}
