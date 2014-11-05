<?php

class GSFile extends DrupalFile7Migration {
	public function __construct(array $arguments) {
		$arguments['description'] = 'import managed files';
		$arguments['user_migration'] = 'user';
		$arguments['default_uid'] = 1;
		parent::__construct($arguments);

		$this->addUnmigratedSources(array(
			'type',
			'uuid'
		));

		$this->addUnmigratedDestinations(array(
			'path',
			'urlencode'
		));
	}
}