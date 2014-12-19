<?php 

class GSLeadership extends GSProfile2Base {

	protected $profile_rid;

	public function __construct(array $arguments) {
		$arguments['description'] = 'import user profile2:leadership';
		parent::__construct($arguments);

		$this->dependencies[] = 'user';

    	$this->destination = new MigrateDestinationProfile2('leadership'); 

 		// field mappings (destination, source) ------------------------
		$this->addFieldMapping('uid','uid')->sourceMigration('user');
		$this->addFieldMapping('field_label_alias','field_label_alias_value');
    	$this->addFieldMapping('language')->defaultValue('en');

      	// tell migrate to ignore these fields
      	$this->addUnmigratedDestinations(array( 
			'revision_uid',
			'field_leadership',
			'field_leadership:revision_id',
			'path'
      	));

      	$this->addUnmigratedSources(array(
      		'label',
      	));

	}

  	protected function query() {
		$query = parent::query();

		$query->leftjoin('field_data_field_label_alias','label', 
		  "label.entity_id=p.pid and label.entity_type='profile2' and label.bundle='leadership' and label.delta=0");
		$query->fields('label',array('field_label_alias_value'));

    	// filter condition
    	$query->condition('p.type','leadership');

		return $query;
	}
}

class GSLeadershipCollection extends GSFieldCollectionBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'import field collection leadership';
		parent::__construct($arguments);

		$this->dependencies[] = 'leadership';

		$this->destination = new MigrateDestinationFieldCollection(
			'field_leadership',
      		array('host_entity_type' => 'profile2')
    	);

		// field mappings (destination, source) ------------------------
		$this->addFieldMapping('host_entity_id','entity_id')->sourceMigration('leadership');

      	$this->addFieldMapping('field_biography','field_biography_value');
      	$this->addFieldMapping('field_biography:format')->defaultValue('rich_text');

		$this->addFieldMapping('field_operational_role','field_operational_role_tid')->sourceMigration('operational_role');
		$this->addFieldMapping('field_operational_role:source_type')->defaultValue('tid');
		$this->addFieldMapping('field_operational_role:create_term')->defaultValue(FALSE);
		$this->addFieldMapping('field_operational_role:ignore_case')->defaultValue(TRUE);

		$this->addFieldMapping('field_operational_title','field_operational_title_tid')->sourceMigration('operational_title');
		$this->addFieldMapping('field_operational_title:source_type')->defaultValue('tid');
		$this->addFieldMapping('field_operational_title:create_term')->defaultValue(FALSE);
		$this->addFieldMapping('field_operational_title:ignore_case')->defaultValue(TRUE);

		$this->addFieldMapping('field_operational_unit','field_operational_unit_tid')->sourceMigration('operational_unit');
		$this->addFieldMapping('field_operational_unit:source_type')->defaultValue('tid');
		$this->addFieldMapping('field_operational_unit:create_term')->defaultValue(FALSE);
		$this->addFieldMapping('field_operational_unit:ignore_case')->defaultValue(TRUE);


		$this->addUnmigratedDestinations(array(
			'field_biography:summary',
			'field_biography:language',
			'path',
		));

		$this->addUnmigratedSources(array(
			'field_leadership_value',
		));
	}

	protected function query() {
		$query = Database::getConnection('legacy', $this->sourceConnection)
			->select('field_data_field_leadership', 'l')
			->fields('l', array('entity_id','field_leadership_value'))
			->condition('l.entity_type','profile2')
			->condition('l.bundle','leadership');
		$query->addField('l','field_leadership_value','item_id');

		$query->leftjoin('field_data_field_biography','b',
			"b.entity_id=l.field_leadership_value and b.entity_type='field_collection_item' and b.bundle='field_leadership'");
		$query->fields('b',array('field_biography_value'));

		$query->leftjoin('field_data_field_operational_role','opr',
			"opr.entity_id=l.field_leadership_value and ".
			"opr.entity_type='field_collection_item' and ".
			"opr.bundle='field_leadership'");
		$query->fields('opr',array('field_operational_role_tid'));

		$query->leftjoin('field_data_field_operational_title','ot',
			"ot.entity_id=l.field_leadership_value and ".
			"ot.entity_type='field_collection_item' and ".
			"ot.bundle='field_leadership'");
		$query->fields('ot',array('field_operational_title_tid'));

		$query->leftjoin('field_data_field_operational_unit','ou',
			"ou.entity_id=l.field_leadership_value and ".
			"ou.entity_type='field_collection_item' and ".
			"ou.bundle='field_leadership'");
		$query->fields('ou',array('field_operational_unit_tid'));				

		return $query;
	}

}




