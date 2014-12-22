<?php 

class GSBiblioNodes extends GSNode {
	public function __construct(array $arguments){
		$arguments['description'] = 'import biblio nodes';
		$arguments['source_type'] = 'biblio';
		$arguments['destination_type'] = 'biblio';
		$arguments['default_uid'] = 1;

		parent::__construct($arguments);	

		$this->dependencies[] = 'biblio_types';

		// prevent biblio save from throwing warnings during node migration
		$this->addFieldMapping('biblio_type')->defaultValue(0);
		$this->addFieldMapping('biblio_keywords')->defaultValue(array());
		
		$this->addUnmigratedSources(array(
			'biblio_refs',
		));
	}	
}

class GSBiblioBase extends DrupalMigration {
	public function __construct(array $arguments) {
		parent::__construct($arguments);
		$this->dependencies[] = 'nodes';
		$this->sourceTable = $arguments['table_name'];
		
		$this->source = new MigrateSourceSQL(
			$this->query(),
			$this->sourceFields,
			NULL,
			$this->sourceOptions
		);
		$this->destination = new MigrateDEstinationTable($this->sourceTable);

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

class GSBiblio extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio';
		$arguments['table_name']  = 'biblio';
		parent::__construct($arguments);
		$this->systemOfRecord = Migration::DESTINATION;		
		$this->dependencies[] = 'biblio_nodes';
		$this->dependencies[] = 'biblio_types';
		$this->addFieldMapping('vid','nid')->sourceMigration('nodes');
		$this->addFieldMapping('nid','nid')->sourceMigration('nodes');
		$this->addFieldMapping('biblio_citekey','biblio_citekey')->sourceMigration('nodes');
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

		$this->addFieldMapping('nid','nid')->sourceMigration('nodes');
		$this->addFieldMapping('vid','nid')->sourceMigration('nodes');
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
		$this->addFieldMapping('vid','vid')->sourceMigration('nodes');
		$this->addFieldMapping('did','did')->sourceMigration('nodes');
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
		$this->addFieldMapping('vid','nid')->sourceMigration('nodes');
		$this->addFieldMapping('nid','nid')->sourceMigration('nodes');
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
		$this->addFieldMapping('nid','nid')->sourceMigration('nodes');
		$this->addSimpleMappings(array('biblio_pubmed_id','biblio_pmcid','biblio_pubmed_md5','biblio_pm_changed',));
	}
}

class GSBiblioPubmedGrantInfo extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio_pubmed_grant_info';
		$arguments['table_name']  = 'biblio_pubmed_grant_info';
		parent::__construct($arguments);
		$this->addFieldMapping('nid','nid')->sourceMigration('nodes');
		$this->addSimpleMappings(array('id','biblio_pubmed_id','grantid','acronym','agency','country',));
	}
}

class GSBiblioTypes extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio_types';
		$arguments['table_name']  = 'biblio_types';
		parent::__construct($arguments);
		$this->systemOfRecord = Migration::DESTINATION;
		$this->addSimpleMappings(array('tid','name','description','weight','visible',));
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











