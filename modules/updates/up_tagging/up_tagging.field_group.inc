<?php


function _update_field_group_tabs($entity_type,$bundle,$tabs = FALSE) {
	if (!field_group_exists('group_tabs',$entity_type,$bundle,'form')){
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

		if ($tabs){
			$tabs[] = 'group_tagging';
			$group->children = $tabs;
		} else {
			#@todo create group_content tab and populate with stray fields
			_create_field_group_content($entity_type,$bundle);
			$group->children = array('group_content','group_tagging');
		}

		$group->format_type = 'htabs';
		$group->format_settings = array(
			'formatter' => '',
			'instance_settings' => array(
				'classes' => 'group-tabs field-group-htabs',
			),
		);

	} else {
		$group = field_group_load_field_group('group_tabs',$entity_type,$bundle,'form');
		if (!in_array('group_tagging', $group->children)) {
			$group->children[] = 'group_tagging';
		}
	}

	field_group_group_save($group);
}

function _create_field_group_tagging($entity_type,$bundle) {
	if (!field_group_exists('group_tagging',$entity_type,$bundle,'form')){
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

		field_group_group_save($group);
	}
}

function _create_field_group_content($entity_type,$bundle) {
	if (!field_group_exists('group_content',$entity_type,$bundle,'form')){
		$fields = array_keys(field_info_instances($entity_type, $bundle));
		$extra_fields = array_keys(field_info_extra_fields($entity_type, $bundle,'form'));		
		$tagging_fields = array(
	    	0 => 'field_operational_unit',
	    	1 => 'field_research_tag',
	    	2 => 'field_node_ref',
	    );
		$children = array_diff(array_merge($fields,$extra_fields), $tagging_fields);
		$children[] = 'title';

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
		$group->children = $children;
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

		field_group_group_save($group);
	}

}