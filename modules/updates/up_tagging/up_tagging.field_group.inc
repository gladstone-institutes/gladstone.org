<?php


function _field_groups_info($entity_type,$bundle){
	$groups = array();

	$group = new stdClass();
	$group->disabled = FALSE;
	$group->api_version = 1;
	$group->identifier = 'group_tabs|'.$entity_type.'|'.$bundle.'|form';
	$group->group_name = 'group_tabs';
	$group->entity_type = $entity_type;
	$group->bundle = $bundle;
	$group->mode = 'form';
	$group->parent_name = '';
	$group->label = 'Tabs';
	$group->weight = 0;
	$group->children = array();
	$group->format_type = 'htabs';
	$group->format_settings = array(
		'formatter' => '',
		'instance_settings' => array(
			'classes' => 'group-tabs field-group-htabs',
		),
	);
	$groups[$group->group_name] = $group;


	$group = new stdClass();
	$group->disabled = FALSE;
	$group->api_version = 1;
	$group->identifier = 'group_tagging|'.$entity_type.'|'.$bundle.'|form';
	$group->group_name = 'group_tagging';
	$group->entity_type = $entity_type;
	$group->bundle = $bundle;
	$group->mode = 'form';
	$group->parent_name = 'group_tabs';
	$group->label = 'Tagging';
	$group->weight = 1;
	$group->children = array(
     	0 => 'field_operational_unit',
     	1 => 'field_research_tag',
     	2 => 'field_node_ref',
    );
	$group->format_type = 'htab';
	$group->format_settings = array(
		'formatter' => 'closed',
		'instance_settings' => array(
			'description' => '',
			'classes' => 'group-tagging field-group-htab',
			'required_fields' => 1,
        	'id' => '',
		),
	);
	$groups[$group->group_name] = $group;


	$group = new stdClass();
	$group->disabled = FALSE;
	$group->api_version = 1;
	$group->identifier = 'group_content|'.$entity_type.'|'.$bundle.'|form';
	$group->group_name = 'group_content';
	$group->entity_type = $entity_type;
	$group->bundle = $bundle;
	$group->mode = 'form';
	$group->parent_name = 'group_tabs';
	$group->label = 'Content';
	$group->weight = 0;
	$group->children = array();
	$group->format_type = 'htab';
	$group->format_settings = array(
		'formatter' => 'closed',
		'instance_settings' => array(
			'description' => '',
			'classes' => 'group-content field-group-htab',
			'required_fields' => 1,
        	'id' => '',
		),
	);
	$groups[$group->group_name] = $group;

	return $groups;
}





function _field_group_tabs_update_00(&$field_groups,$entity_type,$bundle,$tabs = FALSE) {
	
	// If Parent group exists, append a tagging tab
	if (field_group_exists('group_tabs',$entity_type,$bundle,'form')) {
		$group = field_group_load_field_group('group_tabs',$entity_type,$bundle,'form');
		if (!in_array('group_tagging', $group->children)) $group->children[] = 'group_tagging';		
		$field_groups['group_tabs'] = $group;

		// Nuke "Content" tab
		if (field_group_exists('group_content',$entity_type,$bundle,'form')) $field_groups['group_content'] = NULL;
	} else {

		// If there are top level tabs, append a tagging tab and create a parent group
		if ($tabs){
			$field_groups['group_content'] = NULL; // Nuke default "Content" Tab
			$field_groups['group_tabs']->children = array_merge($tabs,array('group_tagging'));
		} else {

			// If there are no top level tabs, put all the fields in a content tab			
			$fields = array_keys(field_info_instances($entity_type, $bundle));
			$extra_fields = array_keys(field_info_extra_fields($entity_type, $bundle,'form'));		
			$tagging_fields = array('field_operational_unit', 'field_research_tag','field_node_ref');
			$children = array_diff(array_merge($fields,$extra_fields), $tagging_fields);
			$children[] = 'title';
			$field_groups['group_content']->children = $children;			

			$field_groups['group_tabs']->children = array('group_content','group_tagging');
		}
	}
}

