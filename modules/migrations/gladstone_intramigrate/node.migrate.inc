<?php

class GSAllNodes extends DrupalMigration {
	public function __construct(array $arguments) {
		$arguments['description'] = 'initialize migrate_map_node';
		parent::__construct($arguments);
		$this->sourceTable = 'node';

		$this->source = new MigrateSourceSQL(
				      $this->query(), 
				      $this->sourceFields,
				      NULL, 
				      $this->sourceOptions
				);

		$this->destination = new MigrateDestinationTable($this->sourceTable);

		$this->map = new MigrateSQLMap($this->machineName,
			MigrateDestinationTable::getKeySchema($this->sourceTable),
			MigrateDestinationTable::getKeySchema($this->sourceTable)
		);

		$this->addSimpleMappings(array('uuid','type'));

	}
		
	protected function query() {
	    $query = Database::getConnection('legacy', $this->sourceConnection)
	      ->select($this->sourceTable, 'n')
	      ->fields('n');
	    $query->condition('n.type',array('biblio','site_page'),'NOT IN');
	    return $query;
	}
}

class GSNode extends DrupalNode7Migration {
	public function __construct(array $arguments) {
		$arguments['user_migration'] = 'user';

		$this->sourceFields += array(	
			'biblio_refs' => t('Biblio nids'),		
			'user_refs'	 => t('Array of uids'),
			'node_refs'  => t('Array of nids'),			
			'files' 	 => t('Array of fids'),			
			'op_units'   => t('Operational Units Tags'),
			'research_tags' => t('Research Tags'),
		);

		parent::__construct($arguments);

		$this->entity_type = 'node';
		$this->bundle = $arguments['source_type'];

		$this->dependencies[] = 'nodes';
		$this->dependencies[] = 'files';
		$this->dependencies[] = 'operational_unit';
		$this->dependencies[] = 'research';

		// $this->systemOfRecord = Migration::DESTINATION;		
		$this->addFieldMapping('nid','nid')->sourceMigration('nodes');
		$this->addFieldMapping('vid','nid')->sourceMigration('nodes');

		$this->addFieldMapping('field_user_refs','user_refs')->sourceMigration('user');
		$this->addFieldMapping('field_node_refs','node_refs')->sourceMigration('nodes');
		$this->addFieldMapping('field_files','files')->sourceMigration('files');
		
		$this->addFieldMapping('field_operational_units','op_units')->sourceMigration('operational_unit');
		$this->addFieldMapping('field_operational_units:source_type')->defaultValue('tid');
		$this->addFieldMapping('field_operational_units:create_term')->defaultValue(FALSE);
		$this->addFieldMapping('field_operational_units:ignore_case')->defaultValue(TRUE);
		
		$this->addFieldMapping('field_research_tags','research_tags')->sourceMigration('research');
		$this->addFieldMapping('field_research_tags:source_type')->defaultValue('tid');
		$this->addFieldMapping('field_research_tags:create_term')->defaultValue(FALSE);
		$this->addFieldMapping('field_research_tags:ignore_case')->defaultValue(TRUE);

		$this->addSimpleMappings(array(
			'field_files:display'
		));		

		$this->addUnmigratedDestinations(array(
			'field_files:description',
			'field_files:file_class',
			'field_files:language',
			'field_files:preserve_files',
			'field_files:destination_dir',
			'field_files:destination_file',
			'field_files:file_replace',
			'field_files:source_dir',
			'field_files:urlencode',
		));

		$this->addUnmigratedSources(array(
			'revision',
			'log',
			'revision_uid',
			'field_files:description',
			'field_user_refs',
			'field_node_refs',
			'field_files',
			'field_operational_units',
			'field_research_tags',			
		));		

	}

	public function prepareRow($row) {
		if (parent::prepareRow($row) === FALSE) {
        	return FALSE;
      	}		

      	$nid = $row->nid;

		$row->user_refs = $this->user_refs($nid);
		$row->node_refs = $this->node_refs($nid);
		$row->files = $this->files($nid);
		$row->op_units = $this->op_units($nid);
		$row->research_tags = $this->research_tags($nid);


	}

	protected function query() {
		$query = parent::query();
		return $query;
	}

    protected function biblio_refs($nid) {
    	$data = Database::getConnection('legacy', $this->sourceConnection)
    				->select('field_data_field_biblio_refs', 'br')
    				->fields('br', array('field_biblio_refs_target_id'))
    				->condition('br.entity_id',$nid)
    				->condition('br.entity_type',$this->entity_type)
    				->condition('br.bundle',$this->bundle)
    				->execute()
    				->fetchCol();    	
    	return $data;
    }

    protected function user_refs($nid) {
    	$data = Database::getConnection('legacy', $this->sourceConnection)
    				->select('field_data_field_user_refs', 'ur')
    				->fields('ur', array('field_user_refs_target_id'))
    				->condition('ur.entity_id',$nid)
    				->condition('ur.entity_type',$this->entity_type)
    				->condition('ur.bundle',$this->bundle)
    				->execute()
    				->fetchCol();    	
    	return $data;
    }

    protected function node_refs($nid) {
    	$data = Database::getConnection('legacy', $this->sourceConnection)
    				->select('field_data_field_node_refs', 'nr')
    				->fields('nr', array('field_node_refs_target_id'))
    				->condition('nr.entity_id',$nid)
    				->condition('nr.entity_type',$this->entity_type)
    				->condition('nr.bundle',$this->bundle)
    				->execute()
    				->fetchCol();    	
    	return $data;
    }

	protected function files($nid) {
		$query = Database::getConnection('legacy', $this->sourceConnection)
	      ->select('field_data_field_files', 'f')
	      ->condition('f.bundle',$this->bundle)
	      ->condition('f.entity_id',$nid);
	    $query->addField('f','field_files_fid');
	    return $query->execute()->fetchCol();		
	}

    protected function op_units($nid) {
    	$data = Database::getConnection('legacy', $this->sourceConnection)
    				->select('field_data_field_operational_units', 'ou')
    				->fields('ou', array('field_operational_units_tid'))
    				->condition('ou.entity_id',$nid)
    				->condition('ou.entity_type',$this->entity_type)
    				->condition('ou.bundle',$this->bundle)
    				->execute()
    				->fetchCol();    	
    	return $data;
    }

    protected function research_tags($nid) {
    	$data = Database::getConnection('legacy', $this->sourceConnection)
    				->select('field_data_field_research_tags', 'rt')
    				->fields('rt', array('field_research_tags_tid'))
    				->condition('rt.entity_id',$nid)
    				->condition('rt.entity_type',$this->entity_type)
    				->condition('rt.bundle',$this->bundle)
    				->execute()
    				->fetchCol();    	
    	return $data;
    }    	
}





