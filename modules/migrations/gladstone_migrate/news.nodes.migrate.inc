<?php

class GSNews extends DrupalNode7Migration {
	public function __construct(array $arguments){
		$arguments['description'] = 'import news nodes';
		$arguments['source_type'] = 'news';
		$arguments['destination_type'] = 'news';
		$arguments['user_migration'] = 'user';
		$arguments['default_uid'] = 1;

		$this->sourceFields += array(
			'files' => t('Array of fids'),
		);

		parent::__construct($arguments);	

		$this->dependencies[] = 'files';

		$this->addFieldMapping('field_text','field_short_title');
		$this->addFieldMapping('field_image','field_basic_image_image')->sourceMigration('files');
		$this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');
		$this->addFieldMapping('field_image:preserve_files')->defaultValue(TRUE);
		$this->addFieldMapping('field_image:language')->defaultValue(LANGUAGE_NONE);
		$this->addFieldMapping('field_files','files')->sourceMigration('files');
		$this->addFieldMapping('field_files:file_class')->defaultValue('MigrateFileFid');
		$this->addFieldMapping('field_files:preserve_files')->defaultValue(TRUE);
		$this->addFieldMapping('field_files:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
		$this->addFieldMapping('field_files:language')->defaultValue(LANGUAGE_NONE);
		$this->addFieldMapping('field_files:display')->defaultValue(TRUE);
		// $this->addFieldMapping('field_files:destination_dir')->defaultValue('public://news_attachements/');
		// $this->addFieldMapping('field_files:destination_file')
	}

	public function prepareRow($row) {
		if (parent::prepareRow($row) === FALSE) {
        	return FALSE;
      	}		
		$row->files = $this->files($row->nid);
	}

	protected function query() {
		$query = parent::query();

		$query->leftjoin('field_data_field_short_title','st',
			"st.entity_id=n.nid and st.entity_type='node' and st.bundle='news'");
		$query->addField('st','field_short_title_value','field_short_title');

		$query->leftjoin('field_data_field_basic_image_image','i',
			"i.entity_id=n.nid and i.entity_type='node' and i.bundle='news'");
		$query->addField('i','field_basic_image_image_fid','field_basic_image_image');
		return $query;
	}

	protected function files($nid) {
		$query = Database::getConnection('legacy', $this->sourceConnection)
	      ->select('field_data_field_file', 'f')
	      ->condition('f.bundle','news', '=')
	      ->condition('f.entity_id',$nid,'=');
	    $query->addField('f','field_file_fid');
	    return $query->execute()->fetchCol();		
	}
}