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
     	0 => 'field_operational_units',
     	1 => 'field_research_tags',
     	2 => 'field_node_refs',
     	3 => 'field_user_refs',
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
