<?php

class GSFile extends DrupalFile7Migration {
	public function __construct(array $arguments) {
		$arguments['description'] = 'import managed files';
		$arguments['user_migration'] = 'user';
		$arguments['default_uid'] = 1;
		parent::__construct($arguments);

		$this->addFieldMapping('uid','uid',FALSE)->sourceMigration('user');
		// $this->addUnmigratedSources(array(
		// 	'type',
		// 	'uuid'
		// ));

		// $this->addUnmigratedDestinations(array(
		// 	'path',
		// 	'urlencode'
		// ));
	}
}

class GSImageFieldFocus extends DrupalMigration {
	public function __construct(array $arguments) {
		$arguments['description'] = 'import focus/crop settings';
		parent::__construct($arguments);

		$this->dependencies[] = 'files';
		$this->sourceTable = 'imagefield_focus_file';

		$this->source = new MigrateSourceSQL(
		      $this->query(), 
		      $this->sourceFields,
		      NULL, 
		      $this->sourceOptions
		);

		$this->destination = new MigrateDestinationTable($this->sourceTable);

		$this->map = new MigrateSQLMap($this->machineName,
			array('fid' => array(
			      'type' => 'int',
			      'unsigned' => TRUE,
			      'not null' => TRUE,
			     )
			   ),
			MigrateDestinationTable::getKeySchema($this->sourceTable)
			);

		// field mappings (destination, source) ----------------------
		$this->addFieldMapping('fid','fid')->sourceMigration('files');
		$this->addSimpleMappings(array('focus_rect','crop_rect'));

	}

	protected function query() {
	    $query = Database::getConnection('legacy', $this->sourceConnection)
	      ->select($this->sourceTable, 't')
	      ->fields('t');
	    return $query;
	}


}