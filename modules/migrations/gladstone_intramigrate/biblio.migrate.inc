<?php 

class GSBiblioBase extends DrupalMigration {
	public function __construct(array $arguments) {
		parent::__construct($arguments);
		$this->dependencies[] = 'nodes';
		$this->dependencies[] = 'biblio_nodes';
		$this->sourceTable = $arguments['table_name'];
		
		$this->source = new MigrateSourceSQL(
			$this->query(),
			$this->sourceFields,
			NULL,
			$this->sourceOptions
		);
		$this->destination = new MigrateDestinationTable($this->sourceTable);

		$this->map = new MigrateSQLMap($this->machineName,
			MigrateDestinationTable::getKeySchema($this->sourceTable), //source
			MigrateDestinationTable::getKeySchema($this->sourceTable) //dest
		);		
	}

	protected function query() {
		$query = Database::getConnection('legacy', $this->sourceConnection)
			->select($this->sourceTable,'t')
			->fields('t');
		return $query;
	}
}

class GSBiblioFieldData extends GSBiblioBase {
	public function __construct(array $arguments){
		parent::__construct($arguments);
		$this->addFieldMapping('entity_id','entity_id')->sourceMigration('biblio_nodes');
		$this->addSimpleMappings(array('entity_type','bundle','deleted','delta'));
	}

	protected function query(){
		$query = parent::query();
		$query->condition('t.entity_type','node');
		$query->condition('t.bundle','biblio');
		return $query;
	}
}

class GSBiblioNodes extends GSBiblioBase {
	public function __construct(array $arguments){
		$arguments['description'] = 'populate biblio node stubs';
		$arguments['table_name'] = 'node';
		parent::__construct($arguments);	
		//reset dependencies to prevent circular refs
		$this->dependencies = array('nodes','files','operational_unit','research');

		$this->addFieldMapping('uid','uid')->sourceMigration('user');
		$this->addSimpleMappings(array('type','language','title','status','created','changed','comment','promote','sticky','tnid','translate','uuid'));
	}

	protected function query() {
		$query = parent::query();
	    $query->condition('t.type','biblio');
	    return $query;
	}
}

class GSBilblioNodeRevisions extends GSBiblioBase {
	public function __construct(array $arguments){
		$arguments['description'] = 'populate biblio node revisions';
		$arguments['table_name'] = 'node_revision';
		parent::__construct($arguments);	
		$this->dependencies[] = 'user';
		$this->addFieldMapping('uid','uid')->sourceMigration('user');
		$this->addFieldMapping('nid','nid')->sourceMigration('biblio_nodes');
		$this->addSimpleMappings(array('title','log','timestamp','status','comment','promote','sticky','vuuid'));
	}

	public function postImport() {
		parent::postImport();
		$sql = 	"UPDATE node as n ".
				"JOIN node_revision as nr ".
				"ON nr.nid = n.nid ".
				"SET n.vid = nr.vid ".
				"WHERE n.nid = nr.nid ".
				"AND n.type = 'biblio'";
		db_query($sql);
	}	

	protected function query() {
		$query = Database::getConnection('legacy', $this->sourceConnection)
					->select($this->sourceTable,'nr');
		$query->leftjoin('node','n',"n.nid=nr.nid");
	    $query->condition('n.type','biblio');
		$query->groupBy('nr.nid');
		$query->orderBy('nr.vid');
		$query->addExpression('max(nr.vid)','vid');
		$query->fields('nr', array('nid','uid','title','log','timestamp','status','comment','promote','sticky','vuuid'));
	    return $query;
	}	
}

class GSBiblioUserRefs extends GSBiblioFieldData {
	public function __construct(array $arguments){
		$arguments['description'] = 'biblio_user_refs';
		$arguments['table_name'] = 'field_data_field_user_refs';
		parent::__construct($arguments);
		$this->dependencies[] = 'user';
		$this->addFieldMapping('field_user_refs_target_id','field_user_refs_target_id')->sourceMigration('user');
	}
}

class GSBiblioNodeRefs extends GSBiblioFieldData {
	public function __construct(array $arguments){
		$arguments['description'] = 'biblio_node_refs';
		$arguments['table_name'] = 'field_data_field_node_refs';
		parent::__construct($arguments);
		$this->addFieldMapping('field_node_refs_target_id','field_node_refs_target_id')->sourceMigration(array('biblio_nodes','nodes'));
	}
}

class GSBiblioFiles extends GSBiblioFieldData {
	public function __construct(array $arguments){
		$arguments['description'] = 'biblio_files';
		$arguments['table_name'] = 'field_data_field_files';
		parent::__construct($arguments);
		$this->dependencies[] = 'files';
		$this->addFieldMapping('field_files_fid','field_files_fid')->sourceMigration('files');
		$this->addSimpleMappings(array('field_files_description','field_files_display'));	
	}
}

class GSBilbioOpUnits extends GSBiblioFieldData {
	public function __construct(array $arguments){
		$arguments['description'] = 'bilbio_operational_units';
		$arguments['table_name'] = 'field_data_field_operational_units';
		parent::__construct($arguments);
		$this->dependencies[] = 'operational_unit';
		$this->addFieldMapping('field_operational_units_tid','field_operational_units_tid')->sourceMigration('operational_unit');
	}
}

class GSBiblioResearchTags extends GSBiblioFieldData {
	public function __construct(array $arguments){
		$arguments['description'] = 'biblio_research_tags';
		$arguments['table_name'] = 'field_data_field_research_tags';
		parent::__construct($arguments);
		$this->dependencies[] = 'research';
		$this->addFieldMapping('field_research_tags_tid','field_research_tags_tid')->sourceMigration('research');
	}
}

class GSBiblioTypes extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio_types';
		$arguments['table_name']  = 'biblio_types';
		parent::__construct($arguments);		
		$this->dependencies = array('nodes');
		$this->systemOfRecord = Migration::DESTINATION;
		$this->addSimpleMappings(array('tid','name','description','weight','visible',));
	}
}

class GSBiblio extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio';
		$arguments['table_name']  = 'biblio';
		parent::__construct($arguments);
		$this->dependencies[] = 'biblio_types';
		$this->addFieldMapping('vid','vid')->sourceMigration('biblio_node_revisions');
		$this->addFieldMapping('nid','nid')->sourceMigration('biblio_nodes');
		$this->addFieldMapping('biblio_citekey','biblio_citekey')->sourceMigration('biblio_nodes');
		$this->addFieldMapping('biblio_type','biblio_type')->sourceMigration('biblio_types');
		$this->addSimpleMappings(array(			
			'biblio_number',
			'biblio_other_number',
			'biblio_sort_title',
			'biblio_secondary_title',
			'biblio_tertiary_title',
			'biblio_edition',
			'biblio_publisher',
			'biblio_place_published',
			'biblio_year',
			'biblio_volume',
			'biblio_pages',
			'biblio_date',
			'biblio_isbn',
			'biblio_lang',
			'biblio_abst_e',
			'biblio_abst_f',
			'biblio_full_text',
			'biblio_url',
			'biblio_issue',
			'biblio_type_of_work',
			'biblio_accession_number',
			'biblio_call_number',
			'biblio_notes',
			'biblio_custom1',
			'biblio_custom2',
			'biblio_custom3',
			'biblio_custom4',
			'biblio_custom5',
			'biblio_custom6',
			'biblio_custom7',
			'biblio_research_notes',
			'biblio_number_of_volumes',
			'biblio_short_title',
			'biblio_alternate_title',
			'biblio_original_publication',
			'biblio_reprint_edition',
			'biblio_translated_title',
			'biblio_section',
			'biblio_coins',
			'biblio_doi',
			'biblio_issn',
			'biblio_auth_address',
			'biblio_remote_db_name',
			'biblio_remote_db_provider',
			'biblio_label',
			'biblio_access_date',
			'biblio_refereed',
			'biblio_md5',
			'biblio_formats',
		));

	}
}

class GSBiblioContributor extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio_contributor';
		$arguments['table_name']  = 'biblio_contributor';
		parent::__construct($arguments);

		$this->dependencies[] = 'biblio_contributor_data';
		$this->dependencies[] = 'biblio_contributor_type';

		$this->addFieldMapping('nid','nid')->sourceMigration('biblio_nodes');
		$this->addFieldMapping('vid','vid')->sourceMigration('biblio_node_revisions');
		$this->addFieldMapping('cid','cid')->sourceMigration('biblio_contributor_data');
		$this->addFieldMapping('auth_type','auth_type')->sourceMigration('biblio_contributor_type');
		$this->addFieldMapping('merge_cid','merge_cid')->sourceMigration('biblio_contributor_data');
		$this->addSimpleMappings(array( 'auth_category','rank' ));
	}
}

class GSBiblioContributorDataInit extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio_contributor_data';
		$arguments['table_name']  = 'biblio_contributor_data';
		parent::__construct($arguments);
		$this->addSimpleMappings(array('name','lastname','firstname','prefix','suffix','initials','affiliation','literal','md5',));
	}
}

class GSBiblioContributorData extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio_contributor_data';
		$arguments['table_name']  = 'biblio_contributor_data';
		parent::__construct($arguments);

		$this->dependencies[] = 'user';
		$this->dependencies[] = 'biblio_contributor_data';
		$this->addFieldMapping('aka','aka')->sourceMigration('biblio_contributor_data');
		$this->addFieldMapping('alt_form','alt_form')->sourceMigration('biblio_contributor_data');
		$this->addFieldMapping('drupal_uid','drupal_uid')->sourceMigration('user');
	}
}

class GSBiblioContributorType extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio_contributor_type';
		$arguments['table_name']  = 'biblio_contributor_type';
		parent::__construct($arguments);

		$this->dependencies[] = 'biblio_types';
		$this->dependencies[] = 'biblio_contributor_type_data';
		$this->addFieldMapping('biblio_type','biblio_type')->sourceMigration('biblio_types');
		$this->addFieldMapping('auth_type','auth_type')->sourceMigration('biblio_contributor_type_data');
		$this->addSimpleMappings(array('auth_category',));
	}
}

class GSBiblioContributorTypeData extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio_contributor_type_data';
		$arguments['table_name']  = 'biblio_contributor_type_data';
		parent::__construct($arguments);
		$this->addSimpleMappings(array('title','hint'));
	}
}

class GSBiblioDuplicates extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio_duplicates';
		$arguments['table_name']  = 'biblio_duplicates';
		parent::__construct($arguments);
		$this->addFieldMapping('vid','vid')->sourceMigration('biblio_node_revisions');
		$this->addFieldMapping('did','did')->sourceMigration('biblio_nodes');
		$this->addSimpleMappings(array('type'));
	}
}

class GSBiblioFieldType extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio_field_type';
		$arguments['table_name']  = 'biblio_field_type';
		parent::__construct($arguments);
		$this->systemOfRecord = Migration::DESTINATION;		
		$this->dependencies[] = 'biblio_types';
		$this->dependencies[] = 'biblio_fields';
		$this->dependencies[] = 'biblio_field_type_data';
		$this->addFieldMapping('tid','tid')->sourceMigration('biblio_types');
		$this->addFieldMapping('fid','fid')->sourceMigration('biblio_fields');
		$this->addFieldMapping('ftdid','ftdid')->sourceMigration('biblio_field_type_data');
		$this->addFieldMapping('cust_tdid','cust_tdid')->sourceMigration('biblio_field_type_data');
		$this->addSimpleMappings(array('common','vtab','autocomplete','required','weight','visible',));
	}
}

class GSBiblioFieldTypeData extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio_field_type_data';
		$arguments['table_name']  = 'biblio_field_type_data';
		parent::__construct($arguments);
		$this->systemOfRecord = Migration::DESTINATION;		
		$this->addSimpleMappings(array('ftdid','title','hint',));
	}
}

class GSBiblioFields extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio_fields';
		$arguments['table_name']  = 'biblio_fields';
		parent::__construct($arguments);
		$this->systemOfRecord = Migration::DESTINATION;		
		$this->addSimpleMappings(array('fid','name','type','size','maxsize'));
	}
}

class GSBiblioKeyword extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio_keyword';
		$arguments['table_name']  = 'biblio_keyword';
		parent::__construct($arguments);
		$this->dependencies[] = 'biblio_keyword_data';
		$this->addFieldMapping('kid','kid')->sourceMigration('biblio_keyword_data');
		$this->addFieldMapping('vid','vid')->sourceMigration('biblio_node_revisions');
		$this->addFieldMapping('nid','nid')->sourceMigration('biblio_nodes');
	}
}

class GSBiblioKeywordData extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio_keyword_data';
		$arguments['table_name']  = 'biblio_keyword_data';
		parent::__construct($arguments);
		$this->addSimpleMappings(array('kid','word'));
	}
}

class GSBiblioPubmed extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio_pubmed';
		$arguments['table_name']  = 'biblio_pubmed';
		parent::__construct($arguments);
		$this->addFieldMapping('nid','nid')->sourceMigration('biblio_nodes');
		$this->addSimpleMappings(array('biblio_pubmed_id','biblio_pmcid','biblio_pubmed_md5','biblio_pm_changed',));
	}
}

class GSBiblioPubmedGrantInfo extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio_pubmed_grant_info';
		$arguments['table_name']  = 'biblio_pubmed_grant_info';
		parent::__construct($arguments);
		$this->addFieldMapping('nid','nid')->sourceMigration('biblio_nodes');
		$this->addSimpleMappings(array('id','biblio_pubmed_id','grantid','acronym','agency','country',));
	}
}

// class GSBiblio extends GSBiblioBase {
// 	public function __construct(array $arguments) {
// 		$arguments['description'] = '';
// 		$arguments['table_name']  = '';
// 		parent::__construct($arguments);

// 		$this->dependencies[] = '';
// 		$this->addFieldMapping('','')->sourceMigration('');
// 		$this->addSimpleMappings(array(

// 		));
// 	}
// }


// biblio_type_maps











