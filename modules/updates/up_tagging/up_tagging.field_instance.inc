<?php 

function _field_instances_info($entity_type,$bundle) {
	$field_instances = array();

	$field_instances[$entity_type.'-'.$bundle.'-field_node_refs'] = array(
		'bundle' => $bundle,
		'default_value' => NULL,
		'deleted' => 0,
		'description' => 'Add references to other content. Useful for displaying related articles feeds in the sidebar.',
		'display' => array(
		  'default' => array(
			'label' => 'above',
			'module' => 'entityreference',
			'settings' => array(
			  'link' => FALSE,
			),
			'type' => 'entityreference_label',
			'weight' => 1,
		  ),
		  'teaser' => array(
			'label' => 'above',
			'settings' => array(),
			'type' => 'hidden',
			'weight' => 0,
		  ),
		),
		'entity_type' => $entity_type,
		'field_name' => 'field_node_refs',
		'label' => 'Node Reference(s)',
		'required' => 0,
		'rubik_edit_field_display' => 'default',
		'settings' => array(
		  'user_register_form' => FALSE,
		),
		'widget' => array(
		  'active' => 1,
		  'module' => 'entityreference',
		  'settings' => array(
			'match_operator' => 'CONTAINS',
			'path' => '',
			'size' => 60,
		  ),
		  'type' => 'entityreference_autocomplete',
		  'weight' => 5,
		),
	  );

	$field_instances[$entity_type.'-'.$bundle.'-field_operational_units'] = array(
	  'bundle' => $bundle,
	  'default_value' => NULL,
	  'deleted' => 0,
	  'description' => 'Functional group/team (ex: Institute, Lab, Administration, Advisory Boards)',
	  'display' => array(
		'default' => array(
		  'label' => 'above',
		  'module' => 'taxonomy',
		  'settings' => array(),
		  'type' => 'taxonomy_term_reference_link',
		  'weight' => 3,
		),
		'teaser' => array(
		  'label' => 'above',
		  'settings' => array(),
		  'type' => 'hidden',
		  'weight' => 0,
		),
	  ),
	  'entity_type' => $entity_type,
	  'field_name' => 'field_operational_units',
	  'label' => 'Operational Unit(s)',
	  'required' => 0,
	  'rubik_edit_field_display' => 'default',
	  'settings' => array(
		'user_register_form' => FALSE,
	  ),
	  'widget' => array(
		'active' => 1,
		'module' => 'autocomplete_deluxe',
		'settings' => array(
		  'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
		  'delimiter' => '',
		  'limit' => 10,
		  'min_length' => 0,
		  'size' => 60,
		),
		'type' => 'autocomplete_deluxe_taxonomy',
		'weight' => 4,
	  ),
	);

	$field_instances[$entity_type.'-'.$bundle.'-field_research_tags'] = array(
	  'bundle' => $bundle,
	  'default_value' => NULL,
	  'deleted' => 0,
	  'description' => 'Tag content with related terms here. <i>example: disease name, research areas, proteins, pathways, etc..</i>',
	  'display' => array(
		'default' => array(
		  'label' => 'above',
		  'module' => 'taxonomy',
		  'settings' => array(),
		  'type' => 'taxonomy_term_reference_link',
		  'weight' => 4,
		),
		'teaser' => array(
		  'label' => 'above',
		  'settings' => array(),
		  'type' => 'hidden',
		  'weight' => 0,
		),
	  ),
	  'entity_type' => $entity_type,
	  'field_name' => 'field_research_tags',
	  'label' => 'Research Tag(s)',
	  'required' => 0,
	  'rubik_edit_field_display' => 'default',
	  'settings' => array(
		'user_register_form' => FALSE,
	  ),
	  'widget' => array(
		'active' => 1,
		'module' => 'autocomplete_deluxe',
		'settings' => array(
		  'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
		  'delimiter' => '',
		  'limit' => 10,
		  'min_length' => 0,
		  'size' => 60,
		),
		'type' => 'autocomplete_deluxe_taxonomy',
		'weight' => 3,
	  ),
	);

	$field_instances[$entity_type.'-'.$bundle.'-field_files'] = array(
	  'bundle' => $bundle,
	  'deleted' => 0,
	  'description' => 'Attach file(s). <i>note: these files will be <b>publicly</b> accessible</i>',
	  'display' => array(
		'default' => array(
		  'label' => 'above',
		  'module' => 'file',
		  'settings' => array(),
		  'type' => 'file_default',
		  'weight' => 2,
		),
		'teaser' => array(
		  'label' => 'above',
		  'settings' => array(),
		  'type' => 'hidden',
		  'weight' => 0,
		),
	  ),
	  'entity_type' => $entity_type,
	  'field_name' => 'field_files',
	  'label' => 'File(s)',
	  'required' => 0,
	  'rubik_edit_field_display' => 'default',
	  'settings' => array(
		'description_field' => 1,
		'file_directory' => $bundle,
		'file_extensions' => 'txt pdf doc png zip jpeg jpg tiff ppt',
		'max_filesize' => '',
		'user_register_form' => FALSE,
	  ),
	  'widget' => array(
		'active' => 1,
		'module' => 'media',
		'settings' => array(
		  'allowed_schemes' => array(
			'public' => 'public',
		  ),
		  'allowed_types' => array(
			'audio' => 0,
			'document' => 0,
			'image' => 0,
			'video' => 0,
		  ),
		  'browser_plugins' => array(
			'media_default--media_browser_1' => 0,
			'media_default--media_browser_my_files' => 0,
			'upload' => 0,
		  ),
		),
		'type' => 'media_generic',
		'weight' => 3,
	  ),
	);

  // Exported field_instance: 'node-in_the_news-field_user_refs'
	$field_instances[$entity_type.'-'.$bundle.'-field_user_refs'] = array(
		'bundle' => $bundle,
		'default_value' => NULL,
		'deleted' => 0,
		'description' => 'Tag users related to this content.',
		'display' => array(
		  'default' => array(
			'label' => 'above',
			'module' => 'entityreference',
			'settings' => array(
			  'link' => FALSE,
			),
			'type' => 'entityreference_label',
			'weight' => 6,
		  ),
		  'teaser' => array(
			'label' => 'above',
			'settings' => array(),
			'type' => 'hidden',
			'weight' => 0,
		  ),
		),
		'entity_type' => $entity_type,
		'field_name' => 'field_user_refs',
		'label' => 'User Reference(s)',
		'required' => 0,
		'rubik_edit_field_display' => 'default',
		'settings' => array(
		  'user_register_form' => FALSE,
		),
		'widget' => array(
		  'active' => 1,
		  'module' => 'entityreference',
		  'settings' => array(
			'match_operator' => 'CONTAINS',
			'path' => '',
			'size' => 60,
		  ),
		  'type' => 'entityreference_autocomplete',
		  'weight' => 6,
		),
	  );
	
	return $field_instances;
}