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
    	$this->addFieldMapping('language')->defaultValue('en');

      	// tell migrate to ignore these fields
      	$this->addUnmigratedDestinations(array( 
			'revision_uid',
			'field_label_alias',
			'field_leadership',
			'field_leadership:revision_id',
			'path'
      	));

      	$this->addUnmigratedSources(array(
      		'leader',
      	));

	}

	public function preImport() {
		// get the profile role id
		$this->profile_rid = user_role_load_by_name('leadership')->rid; 
	}

	public function prepareRow($row) {
		if (parent::prepareRow($row) === FALSE) {
			return FALSE;			
		}


		// Assing a leadership profile role if minimum fields are met
		if (!empty($row->biosketch) ) {
			$query = db_select('migrate_map_user', 'u');
			$destid = $query->condition('sourceid1',$row->uid,'=')
			            ->fields('u', array('destid1'))
			            ->execute()
			            ->fetchField();

			// This has no roll-back
			db_query('INSERT IGNORE INTO users_roles (uid,rid) VALUES (:uid, :rid)',
			 array(':uid' => $destid, ':rid' => $this->profile_rid));
		} else {
			// skip profile creation if min fields are not met
			// return FALSE; //dont skip leadership for all!
		}		
	}

  	protected function query() {
		$query = parent::query();

		$query->leftjoin('field_data_field_leadership','l',
			"l.entity_id=p.pid and l.entity_type='profile2' and l.bundle='profile'");
		$query->addField('l','field_leadership_value','leader');

		$query->leftjoin('field_data_field_biography','b',
			"b.entity_id=l.field_leadership_value and b.entity_type='field_collection_item' and b.bundle='field_leadership'");
		$query->addField('b','field_biography_value','biosketch');

		return $query;
	}
}

class GSLeadershipLeadership extends GSFieldCollectionBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'import field collection leadership';
		parent::__construct($arguments);

		// $this->sourceFields += array(
		// 	'in_op_unit' => t('Institute Op Unit via remap csv'),
		// 	'display_title' => t('Edge case, custom title'),
		// );

		$this->dependencies[] = 'leadership';

		$this->destination = new MigrateDestinationFieldCollection(
			'field_leadership',
      		array('host_entity_type' => 'profile2')
    	);

		// field mappings (destination, source) ------------------------
		$this->addFieldMapping('host_entity_id','entity_id')->sourceMigration('leadership');
      	$this->addFieldMapping('field_biography','field_biography_value');
      	$this->addFieldMapping('field_biography:format')->defaultValue('rich_text');

		$this->addUnmigratedDestinations(array(
			'field_biography:summary',
			'field_biography:language',
			'field_operational_role',
			'field_operational_role:source_type',
			'field_operational_role:create_term',
			'field_operational_role:ignore_case',
			'field_operational_title',
			'field_operational_title:source_type',
			'field_operational_title:create_term',
			'field_operational_title:ignore_case',
			'field_operational_unit',
			'field_operational_unit:source_type',
			'field_operational_unit:create_term',
			'field_operational_unit:ignore_case',
			'path',
		));

	}

	public function prepareRow($row) {
		if (parent::prepareRow($row) === FALSE) {
        	return FALSE;
      	}

		// skip fields with no bio sketch set
		if (empty($row->field_biography_value)) {
			return FALSE;
		}
	}

	public function postImport() {
		// update computed name indexes "field_label_alias"
		if (module_exists('computed_field_tools')) {
			$field_info_fields = field_info_fields();
			$entities_by_type = $field_info_fields['field_label_alias']['bundles'];
			$batch = _computed_field_tools_setup_batch_args('field_label_alias', $entities_by_type, 500);
			batch_set($batch);
		}
	}	

	protected function query() {
		$query = Database::getConnection('legacy', $this->sourceConnection)
			->select('field_data_field_leadership', 'l')
			->fields('l', array('entity_id','delta','field_leadership_value'))
			->condition('l.entity_type','profile2', '=')
			->condition('l.bundle','profile','=');
		$query->addField('l','field_leadership_value','item_id');

		$query->leftjoin('field_data_field_biography','b',
			"b.entity_id=l.field_leadership_value and b.entity_type='field_collection_item' and b.bundle='field_leadership'");
		$query->fields('b',array('field_biography_value'));
		return $query;
	}

}




