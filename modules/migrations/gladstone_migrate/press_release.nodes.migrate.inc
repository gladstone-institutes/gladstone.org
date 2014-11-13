<?php 

class GSPressRelease extends DrupalNode7Migration {
	public function __construct(array $arguments){
		$arguments['description'] = 'import news nodes';
		$arguments['source_type'] = 'press_release';
		$arguments['destination_type'] = 'press_release';
		$arguments['user_migration'] = 'user';
		$arguments['default_uid'] = 1;

		$this->sourceFields += array(
			'files' => t('Array of fids'),
		);

		parent::__construct($arguments);	

		$this->dependencies[] = 'files';

		$this->addFieldMapping('field_display_title','field_headline');
		$this->addFieldMapping('field_longtext','field_sub_headline');
		$this->addFieldMapping('field_date','field_release_date');
		$this->addFieldMapping('field_image','field_release_image')->sourceMigration('files');
		$this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileFid');
		$this->addFieldMapping('field_image:preserve_files')->defaultValue(TRUE);
		$this->addFieldMapping('field_image:language')->defaultValue(LANGUAGE_NONE);
		$this->addFieldMapping('field_blurb','field_blurb');
		$this->addFieldMapping('field_files','files')->sourceMigration('files');
		$this->addFieldMapping('field_files:file_class')->defaultValue('MigrateFileFid');
		$this->addFieldMapping('field_files:preserve_files')->defaultValue(TRUE);
		$this->addFieldMapping('field_files:language')->defaultValue(LANGUAGE_NONE);
		$this->addFieldMapping('field_files:display')->defaultValue(TRUE);
		$this->addFieldMapping('field_urls','urls');
		$this->addFieldMapping('field_urls:title','url_titles');
		$this->addFieldMapping('field_contacts','contacts')->sourceMigration('user');
		$this->addFieldMapping('field_operational_units','op_units');
		$this->addFieldMapping('field_operational_units:source_type')->defaultValue('name');
		$this->addFieldMapping('field_operational_units:create_term')->defaultValue(FALSE);
		$this->addFieldMapping('field_operational_units:ignore_case')->defaultValue(TRUE);		
	}

	public function prepareRow($row) {
		if (parent::prepareRow($row) === FALSE) {
        	return FALSE;
      	}		
		$row->files = $this->files($row->nid);
		$row->contacts = $this->contacts($row->nid);
		$row->op_units = $this->op_units($row->nid);
		$row->urls  = $this->urls($row->nid)->fetchCol(0);
		$row->url_titles  = $this->urls($row->nid)->fetchCol(1);

	}	

	protected function query() {
		$query = parent::query();

		$query->leftjoin('field_data_field_headline','h',
			"h.entity_id=n.nid and h.entity_type='node' and h.bundle='press_release'");
		$query->addField('h','field_headline_value','field_headline');

		$query->leftjoin('field_data_field_sub_headline','s',
			"s.entity_id=n.nid and s.entity_type='node' and s.bundle='press_release'");
		$query->addField('s','field_sub_headline_value','field_sub_headline');

		$query->leftjoin('field_data_field_release_date','r',
			"r.entity_id=n.nid and r.entity_type='node' and r.bundle='press_release'");
		$query->addField('r','field_release_date_value','field_release_date');

		$query->leftjoin('field_data_field_release_image','i',
			"i.entity_id=n.nid and i.entity_type='node' and i.bundle='press_release'");
		$query->addField('i','field_release_image_fid','field_release_image');
		
		$query->leftjoin('field_data_field_blurb','b',
			"b.entity_id=n.nid and b.entity_type='node' and b.bundle='press_release'");
		$query->addField('b','field_blurb_value','field_blurb');

		return $query;
	}

	private function files($nid) {
		$query = Database::getConnection('legacy', $this->sourceConnection)
	      ->select('field_data_field_file', 'f')
	      ->condition('f.bundle','press_release', '=')
	      ->condition('f.entity_id',$nid,'=');
	    $query->addField('f','field_file_fid');
	    return $query->execute()->fetchCol();		
	}	

	private function urls($nid) {
		$query = Database::getConnection('legacy', $this->sourceConnection)
			->select('field_data_field_url', 'u')
			->fields('u', array('field_url_url','field_url_title'))
			->condition('u.entity_id',$nid,'=')
			->condition('u.entity_type','node', '=')
			->condition('u.bundle','press_release','=');
		return $query->execute();		
	}

	private function contacts($nid) {
		$query = Database::getConnection('legacy', $this->sourceConnection)
			->select('field_data_field_contact', 'c')
			->fields('c', array('field_contact_target_id'))
			->condition('c.entity_id',$nid,'=')
			->condition('c.entity_type','node', '=')
			->condition('c.bundle','press_release','=');
		return $query->execute()->fetchCol();			
	}

	private function op_units($id) {
		$query = Database::getConnection('legacy', $this->sourceConnection)
			->select('field_data_field_operational_unit', 'ou')
			->condition('ou.entity_id',$id,'=')
			->condition('ou.entity_type','node', '=')
			->condition('ou.bundle','press_release','=');
		$query->leftjoin('taxonomy_term_data','td',
			"td.tid=ou.field_operational_unit_tid ");
		$query->fields('td',array('name'));
		return $query->execute()->fetchCol();		
	}

}
