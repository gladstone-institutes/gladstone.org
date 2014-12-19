<?php 

class GSBiblioNodes extends GSNode {
	public function __construct(array $arguments){
		$arguments['description'] = 'import biblio nodes';
		$arguments['source_type'] = 'biblio';
		$arguments['destination_type'] = 'biblio';
		$arguments['default_uid'] = 1;

		parent::__construct($arguments);	

		$this->addUnmigratedSources(array(
			'biblio_refs'
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
		$query = Database::getConnection('legacy', $this->sourceConnection);
		return $query;
	}
}

class GSBiblio extends GSBiblioBase {
	public function __construct(array $arguments) {
		$arguments['description'] = 'biblio';
		$arguments['table_name']  = 'biblio';
		parent::__construct($arguments);
		
	}
}











