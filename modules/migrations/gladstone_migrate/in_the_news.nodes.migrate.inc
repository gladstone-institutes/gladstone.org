<?php

class GSInTheNews extends DrupalNode7Migration {
	public function __construct(array $arguments){
		$arguments['description'] = 'import in the news nodes';
		$arguments['source_type'] = 'in_the_news';
		$arguments['destination_type'] = 'in_the_news';
		$arguments['user_migration'] = 'user';
		$arguments['default_uid'] = 1;
		parent::__construct($arguments);

		$this->addFieldMapping('field_date','field_release_date');
		$this->addFieldMapping('field_date:timezone')->defaultValue($arguments['timezone']);
		$this->addFieldMapping('field_url','field_website');
		$this->addFieldMapping('field_url:title','field_website:title');
	}	

	protected function query() {
		$query = parent::query();

		$query->leftjoin('field_data_field_release_date','rd',
			"rd.entity_id=n.nid and rd.entity_type='node' and rd.bundle='in_the_news'");
		$query->addField('rd','field_release_date_value','field_release_date');

		$query->leftjoin('field_data_field_website', 'w', 
			"w.entity_id=n.nid and w.entity_type='node' and w.bundle='in_the_news'");
		$query->addField('w','field_website_url','field_website');
		$query->addField('w','field_website_title','field_website:title');
		return $query;
	}
}