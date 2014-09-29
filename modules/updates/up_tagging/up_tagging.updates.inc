<?php



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
			$tagging_fields = array('field_operational_units', 'field_research_tags','field_node_refs');
			$children = array_diff(array_merge($fields,$extra_fields), $tagging_fields);
			$children[] = 'title';
			$field_groups['group_content']->children = $children;			

			$field_groups['group_tabs']->children = array('group_content','group_tagging');
		}
	}
}

function _field_group_tabs_update_01(&$field_groups,$entity_type,$bundle,$tabs = FALSE) {

	// Nuke default field_user_refs in favor of existing instance
	$fields = array_keys(field_info_instances($entity_type, $bundle));
	if (in_array('field_user_refs', $fields)){ 
		array_splice($field_groups['group_tagging']->children,3,1);
	}

}
