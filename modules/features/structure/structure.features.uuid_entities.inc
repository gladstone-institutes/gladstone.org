<?php
    /**
     * @file
     * structure.features.uuid_entities.inc
     */

    /**
     * Implements hook_uuid_default_entities().
     */
    function structure_uuid_default_entities() {
      $entities = array();

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/3f7c1da8-3889-4280-ac31-5cf396953705',
		'cause' => 'menu_link/d24d6278-389a-4ca9-95cf-237ff1924bd9'
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 1,
	'delivery_callback' => '',
	'depth' => 1,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'z/56',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/56',
	'link_title' => 'Our Science',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(

			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(

			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => 0,
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Our Science',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'weight' => 3
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/eb699da5-91e6-4bac-9707-da9d7afbe014',
		'cause' => 'menu_link/d24d6278-389a-4ca9-95cf-237ff1924bd9'
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 1,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'institute/gind/home/67',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gind/home/67',
	'link_title' => 'Neurological Disease',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(

			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(

			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 'eb699da5-91e6-4bac-9707-da9d7afbe014',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Neurological Disease',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'eb699da5-91e6-4bac-9707-da9d7afbe014',
	'weight' => -47
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/d24d6278-389a-4ca9-95cf-237ff1924bd9',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/gind/advisory board/11',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gind/advisory board/11',
	'link_title' => 'Scientific Advisory Board',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 'eb699da5-91e6-4bac-9707-da9d7afbe014',
	'p3' => 'd24d6278-389a-4ca9-95cf-237ff1924bd9',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => 'eb699da5-91e6-4bac-9707-da9d7afbe014',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Scientific Advisory Board',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'd24d6278-389a-4ca9-95cf-237ff1924bd9',
	'weight' => -44
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/5fdd115f-ae39-4a5b-bdac-212f683b767e',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/gind/areas of investigation/6',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gind/areas of investigation/6',
	'link_title' => 'Areas of Investigation',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 'eb699da5-91e6-4bac-9707-da9d7afbe014',
	'p3' => '5fdd115f-ae39-4a5b-bdac-212f683b767e',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => 'eb699da5-91e6-4bac-9707-da9d7afbe014',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Areas of Investigation',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '5fdd115f-ae39-4a5b-bdac-212f683b767e',
	'weight' => -49
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/06c9b286-3277-4a47-ac88-4ce03dc2c5f9',
		'cause' => 'menu_link/0d5e1869-9bf6-4d68-a044-4d277fa411f0'
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 1,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'institute/translational/home/7',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/translational/home/7',
	'link_title' => 'Translational Research',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(

			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(

			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '06c9b286-3277-4a47-ac88-4ce03dc2c5f9',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Translational Research',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '06c9b286-3277-4a47-ac88-4ce03dc2c5f9',
	'weight' => -45
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/0d5e1869-9bf6-4d68-a044-4d277fa411f0',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/8',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/2f89ac38-f919-4ed1-bbf5-1bf5662e9f5d',
	'link_title' => 'Information for Industry',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '06c9b286-3277-4a47-ac88-4ce03dc2c5f9',
	'p3' => '0d5e1869-9bf6-4d68-a044-4d277fa411f0',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '06c9b286-3277-4a47-ac88-4ce03dc2c5f9',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Information for Industry',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '0d5e1869-9bf6-4d68-a044-4d277fa411f0',
	'weight' => -50
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/896e237f-ae5c-4e5b-a0d8-a7273ecde3c9',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/gind/recent advances/20',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gind/recent advances/20',
	'link_title' => 'Recent Advances',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 'eb699da5-91e6-4bac-9707-da9d7afbe014',
	'p3' => '896e237f-ae5c-4e5b-a0d8-a7273ecde3c9',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => 'eb699da5-91e6-4bac-9707-da9d7afbe014',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Recent Advances',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '896e237f-ae5c-4e5b-a0d8-a7273ecde3c9',
	'weight' => -48
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/f224e773-1075-49cf-9a37-eb59a77a7a70',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/gind/honors and awards/21',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gind/honors and awards/21',
	'link_title' => 'Honors and Awards',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 'eb699da5-91e6-4bac-9707-da9d7afbe014',
	'p3' => 'f224e773-1075-49cf-9a37-eb59a77a7a70',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => 'eb699da5-91e6-4bac-9707-da9d7afbe014',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Honors and Awards',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'f224e773-1075-49cf-9a37-eb59a77a7a70',
	'weight' => -47
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/3ee3dd05-dfc4-4017-977e-f35710bce4f5',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/translational/research centers/31',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/translational/research centers/31',
	'link_title' => 'Centers',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '06c9b286-3277-4a47-ac88-4ce03dc2c5f9',
	'p3' => '3ee3dd05-dfc4-4017-977e-f35710bce4f5',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '06c9b286-3277-4a47-ac88-4ce03dc2c5f9',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Centers',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '3ee3dd05-dfc4-4017-977e-f35710bce4f5',
	'weight' => -47
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/8eade152-15ee-444f-aee7-16ba33a87285',
		'cause' => 'menu_link/04421c06-97d1-4479-accd-f4eed596838e'
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 1,
	'delivery_callback' => '',
	'depth' => 1,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'z/34',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/34',
	'link_title' => 'Connect',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(

			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(

			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => 0,
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Connect',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'weight' => 4
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/04421c06-97d1-4479-accd-f4eed596838e',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'z/34',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/34',
	'link_title' => 'Giving to Gladstone',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => '04421c06-97d1-4479-accd-f4eed596838e',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Giving to Gladstone',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '04421c06-97d1-4479-accd-f4eed596838e',
	'weight' => -48
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/e5a626ef-c669-4afd-89f7-80446c056623',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/32',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/32',
	'link_title' => 'Ways to Give',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => '04421c06-97d1-4479-accd-f4eed596838e',
	'p3' => 'e5a626ef-c669-4afd-89f7-80446c056623',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => '04421c06-97d1-4479-accd-f4eed596838e',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Ways to Give',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'e5a626ef-c669-4afd-89f7-80446c056623',
	'weight' => -49
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/c84e0720-f16c-4636-933a-3a19aea168a6',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/33',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/33',
	'link_title' => 'Our Sponsors',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => '04421c06-97d1-4479-accd-f4eed596838e',
	'p3' => 'c84e0720-f16c-4636-933a-3a19aea168a6',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => '04421c06-97d1-4479-accd-f4eed596838e',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Our Sponsors',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'c84e0720-f16c-4636-933a-3a19aea168a6',
	'weight' => -48
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/575bf370-4001-4f5f-889c-f93078be8fbe',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/34',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/34',
	'link_title' => 'Why Give to Gladstone',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => '04421c06-97d1-4479-accd-f4eed596838e',
	'p3' => '575bf370-4001-4f5f-889c-f93078be8fbe',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => '04421c06-97d1-4479-accd-f4eed596838e',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Why Give to Gladstone',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '575bf370-4001-4f5f-889c-f93078be8fbe',
	'weight' => -50
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/268a9e46-5923-4b32-a49f-93e3ce554a0d',
		'cause' => 'menu_link/6f961f50-fee2-4a29-bc78-993dce13ddf5'
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 1,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'institute/stem cell/home/18',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/stem cell/home/18',
	'link_title' => 'Stem Cell Biology and Regenerative Medicine',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(

			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(

			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Stem Cell Biology and Regenerative Medicine',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'weight' => -46
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/6f961f50-fee2-4a29-bc78-993dce13ddf5',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/36',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/ba73d164-20c0-46e8-9265-a3f678a6a789',
	'link_title' => 'Stem Cells: A timeline',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'p3' => '6f961f50-fee2-4a29-bc78-993dce13ddf5',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Stem Cells: A timeline',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '6f961f50-fee2-4a29-bc78-993dce13ddf5',
	'weight' => -45
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/5bda4d53-6be6-4c39-89bd-18b07f98a1d6',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/37',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/348de9da-98dd-4b52-aab5-8895cf2c8d31',
	'link_title' => 'California Institute for Regenerative Medicine',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'p3' => '5bda4d53-6be6-4c39-89bd-18b07f98a1d6',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'California Institute for Regenerative Medicine',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '5bda4d53-6be6-4c39-89bd-18b07f98a1d6',
	'weight' => -44
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/bb8d625b-9226-47a5-840c-5d607219d0cc',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'node/38',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/339e97a6-2a57-4c8b-94f1-ffcc866e85bc',
	'link_title' => 'Outreach',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(

			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(

			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'bb8d625b-9226-47a5-840c-5d607219d0cc',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Outreach',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'bb8d625b-9226-47a5-840c-5d607219d0cc',
	'weight' => -46
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/83ddc387-9ea1-405a-b8ec-1d6428f364ba',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/39',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/2b9a6c60-4ac1-454f-b4bb-b275756d3777',
	'link_title' => 'PUMAS Internship Program',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'bb8d625b-9226-47a5-840c-5d607219d0cc',
	'p3' => '83ddc387-9ea1-405a-b8ec-1d6428f364ba',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => 'bb8d625b-9226-47a5-840c-5d607219d0cc',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'PUMAS Internship Program',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '83ddc387-9ea1-405a-b8ec-1d6428f364ba',
	'weight' => -49
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/4e28b725-04e7-4ff4-853a-0249f684af38',
		'cause' => 'menu_link/76f5cb73-36e8-45cd-999e-c270d677c1b9'
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 1,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/5',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/5',
	'link_title' => 'Scientific Publications',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(

			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(

			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '4e28b725-04e7-4ff4-853a-0249f684af38',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Scientific Publications',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '4e28b725-04e7-4ff4-853a-0249f684af38',
	'weight' => -41
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/76f5cb73-36e8-45cd-999e-c270d677c1b9',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:1:{i:0;s:14:"access content";}',
	'access_callback' => 'user_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => 'Sets access to all menu position links.',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 1,
	'href' => 'menu-position/7',
	'include_file' => 'profiles/gladstone_org/modules/contrib/menu_position/menu_position.admin.inc',
	'link_path' => 'menu-position/7',
	'link_title' => 'Publications (menu position rule)',
	'load_functions' => array(
		1 => NULL
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				),
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'menu_position_rules' => array(
		0 => array(
			'uuid' => 'e58f7556-f78c-4eef-b36a-0ef87ffb623f',
			'admin_title' => 'Publications',
			'conditions' => array(
				'content_type' => array(
					'content_type' => array(
						'biblio' => 'biblio'
						)
					)
				),
			'menu_name' => 'main-menu',
			'weight' => 0
			)
		),
	'module' => 'menu_position',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				),
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '4e28b725-04e7-4ff4-853a-0249f684af38',
	'p3' => '76f5cb73-36e8-45cd-999e-c270d677c1b9',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'menu_position_router',
	'path' => 'menu-position/%',
	'plid' => '4e28b725-04e7-4ff4-853a-0249f684af38',
	'position' => '',
	'router_path' => 'menu-position/%',
	'tab_parent' => '',
	'tab_root' => 'menu-position/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Publications (menu position rule)',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '76f5cb73-36e8-45cd-999e-c270d677c1b9',
	'weight' => 0
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/ee847c38-f353-44a3-9ce7-1eebe01f2f47',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/4',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/264e456a-1f21-4135-a55f-5f8bc41c71ef',
	'link_title' => 'The Nobel at Gladstone',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 'ee847c38-f353-44a3-9ce7-1eebe01f2f47',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'The Nobel at Gladstone',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'ee847c38-f353-44a3-9ce7-1eebe01f2f47',
	'weight' => -40
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
		'cause' => 'menu_link/fc5b2893-d57c-4d3e-8d72-441c0fdd2a7f'
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 1,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'institute/givi/home/82',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/givi/home/82',
	'link_title' => 'Virology and Immunology',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(

			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(

			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Virology and Immunology',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'weight' => -48
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/fc5b2893-d57c-4d3e-8d72-441c0fdd2a7f',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/givi/recent advances/13',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/givi/recent advances/13',
	'link_title' => 'Recent Advances',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'p3' => 'fc5b2893-d57c-4d3e-8d72-441c0fdd2a7f',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Recent Advances',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'fc5b2893-d57c-4d3e-8d72-441c0fdd2a7f',
	'weight' => -45
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/711807f5-8a90-4591-ad74-85b503b4fae1',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/givi/honors and awards/14',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/givi/honors and awards/14',
	'link_title' => 'Honors and Awards',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'p3' => '711807f5-8a90-4591-ad74-85b503b4fae1',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Honors and Awards',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '711807f5-8a90-4591-ad74-85b503b4fae1',
	'weight' => -44
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
		'cause' => 'menu_link/8fb7357e-27a7-48f9-b23a-52392d9a7b53'
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 1,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'institute/gicd/home/88',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gicd/home/88',
	'link_title' => 'Cardiovascular Disease',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(

			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(

			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Cardiovascular Disease',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'weight' => -49
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/8fb7357e-27a7-48f9-b23a-52392d9a7b53',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/gicd/research centers/65',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gicd/research centers/65',
	'link_title' => 'Centers',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'p3' => '8fb7357e-27a7-48f9-b23a-52392d9a7b53',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Centers',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '8fb7357e-27a7-48f9-b23a-52392d9a7b53',
	'weight' => -43
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/7d72d227-156e-44a9-9bab-afc27a2b1e3b',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/59',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/1584e0e6-a2f7-4dee-b04a-464eab143b88',
	'link_title' => 'Training Programs',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '7d72d227-156e-44a9-9bab-afc27a2b1e3b',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Training Programs',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '7d72d227-156e-44a9-9bab-afc27a2b1e3b',
	'weight' => -39
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/6498dcda-83f7-4ace-a2d7-b9e595f94901',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/16',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/a241fb4c-9f40-4066-b8ea-01f1df0e62ad',
	'link_title' => 'Conflict of Interest in Research Policy',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '6498dcda-83f7-4ace-a2d7-b9e595f94901',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Conflict of Interest in Research Policy',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '6498dcda-83f7-4ace-a2d7-b9e595f94901',
	'weight' => -38
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/c192ddf2-d7d7-45be-a1dd-0b83bb5414f9',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/17',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/17',
	'link_title' => 'People',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 'c192ddf2-d7d7-45be-a1dd-0b83bb5414f9',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'People',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'c192ddf2-d7d7-45be-a1dd-0b83bb5414f9',
	'weight' => -37
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/81e3c27f-4710-4fc8-a710-6f99d12724ff',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/19',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/3c520a70-1169-4209-a376-af4dcac511e3',
	'link_title' => 'Stem Cell Core',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'p3' => '81e3c27f-4710-4fc8-a710-6f99d12724ff',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Stem Cell Core',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '81e3c27f-4710-4fc8-a710-6f99d12724ff',
	'weight' => -43
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/0f2b7e66-c57c-45ed-97f2-eea1b8a53e00',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/9',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/9',
	'link_title' => 'Technologies Available',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '06c9b286-3277-4a47-ac88-4ce03dc2c5f9',
	'p3' => '0f2b7e66-c57c-45ed-97f2-eea1b8a53e00',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => '06c9b286-3277-4a47-ac88-4ce03dc2c5f9',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Technologies Available',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '0f2b7e66-c57c-45ed-97f2-eea1b8a53e00',
	'weight' => -49
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/ca6d2871-187c-462c-945d-15253f0d0722',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:1:{i:0;s:14:"access content";}',
	'access_callback' => 'user_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 4,
	'description' => 'Sets access to all menu position links.',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 1,
	'href' => 'menu-position/5',
	'include_file' => 'profiles/gladstone_org/modules/contrib/menu_position/menu_position.admin.inc',
	'link_path' => 'menu-position/5',
	'link_title' => 'Technologies Available (menu position rule)',
	'load_functions' => array(
		1 => NULL
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				),
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'menu_position_rules' => array(
		0 => array(
			'uuid' => '400e6f82-c628-4d8d-bbe4-ff93bac6f0bf',
			'admin_title' => 'Technologies Available',
			'conditions' => array(
				'content_type' => array(
					'content_type' => array(
						'technology' => 'technology'
						)
					)
				),
			'menu_name' => 'main-menu',
			'weight' => 0
			)
		),
	'module' => 'menu_position',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				),
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '06c9b286-3277-4a47-ac88-4ce03dc2c5f9',
	'p3' => '0f2b7e66-c57c-45ed-97f2-eea1b8a53e00',
	'p4' => 'ca6d2871-187c-462c-945d-15253f0d0722',
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'menu_position_router',
	'path' => 'menu-position/%',
	'plid' => '0f2b7e66-c57c-45ed-97f2-eea1b8a53e00',
	'position' => '',
	'router_path' => 'menu-position/%',
	'tab_parent' => '',
	'tab_root' => 'menu-position/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Technologies Available (menu position rule)',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'ca6d2871-187c-462c-945d-15253f0d0722',
	'weight' => 0
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/9fc7405b-3bd2-4e56-888f-7f31c5b17273',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/gicd/director\'s vision/1',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gicd/director\'s vision/1',
	'link_title' => 'Director\'s Vision',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'p3' => '9fc7405b-3bd2-4e56-888f-7f31c5b17273',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Director\'s Vision',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '9fc7405b-3bd2-4e56-888f-7f31c5b17273',
	'weight' => -50
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/be80ff53-fadb-4a65-bc0d-990b2045ea84',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/stem cell/areas of investigation/3',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/stem cell/areas of investigation/3',
	'link_title' => 'Areas of Investigation',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'p3' => 'be80ff53-fadb-4a65-bc0d-990b2045ea84',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Areas of Investigation',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'be80ff53-fadb-4a65-bc0d-990b2045ea84',
	'weight' => -50
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/84379809-8b38-42e4-9b5e-7acf6a9e2235',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/40',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/ae5ef747-233b-4418-ac3f-33a0472c9e6a',
	'link_title' => 'GSS Internship Program',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'bb8d625b-9226-47a5-840c-5d607219d0cc',
	'p3' => '84379809-8b38-42e4-9b5e-7acf6a9e2235',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => 'bb8d625b-9226-47a5-840c-5d607219d0cc',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'GSS Internship Program',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '84379809-8b38-42e4-9b5e-7acf6a9e2235',
	'weight' => -48
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/09b62fb0-1647-4445-b5d9-a2b304eb9375',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/41',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/99ffa822-afde-4d3c-a55c-6d24574553b8',
	'link_title' => 'NSLC Scholarship Program',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'bb8d625b-9226-47a5-840c-5d607219d0cc',
	'p3' => '09b62fb0-1647-4445-b5d9-a2b304eb9375',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => 'bb8d625b-9226-47a5-840c-5d607219d0cc',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'NSLC Scholarship Program',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '09b62fb0-1647-4445-b5d9-a2b304eb9375',
	'weight' => -47
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/a9efb947-7332-4b1d-8687-9adb604f41f8',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 1,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/55',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/55',
	'link_title' => 'Careers',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'menu-quick-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => 'a9efb947-7332-4b1d-8687-9adb604f41f8',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => 0,
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Careers',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'a9efb947-7332-4b1d-8687-9adb604f41f8',
	'weight' => 3
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/51dd9c96-00bb-42d7-9f10-c99e9d0cc8fb',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 1,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/57',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/abd408c6-a9d6-449c-813d-428db6a10658',
	'link_title' => 'Contact Us',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'menu-quick-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '51dd9c96-00bb-42d7-9f10-c99e9d0cc8fb',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => 0,
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Contact Us',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '51dd9c96-00bb-42d7-9f10-c99e9d0cc8fb',
	'weight' => 4
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/fd44ea7a-c6d8-43c3-8c53-017f10de7fa5',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => NULL,
	'access_callback' => NULL,
	'context' => NULL,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => NULL,
	'depth' => 1,
	'description' => NULL,
	'expanded' => 0,
	'external' => 1,
	'fit' => NULL,
	'has_children' => 0,
	'hidden' => 1,
	'href' => 'https://www.facebook.com/gladstoneinstitutes',
	'include_file' => NULL,
	'link_path' => 'https://www.facebook.com/gladstoneinstitutes',
	'link_title' => 'Facebook',
	'load_functions' => NULL,
	'localized_options' => array(
		'menu_icon' => array(
			'enable' => 1,
			'path' => 'profiles/gladstone_org/themes/gladstone_org/css/images/fb.png',
			'image_style' => 'menu_icon'
			),
		'attributes' => array(
			'class' => array(
				0 => 'fa',
				1 => 'fa-facebook-square',
				2 => 'fa-2x',
				3 => 'icon-only'
				),
			'target' => '_blank'
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'menu_name' => 'menu-quick-menu',
	'module' => 'menu',
	'number_parts' => NULL,
	'options' => array(
		'menu_icon' => array(
			'enable' => 1,
			'path' => 'profiles/gladstone_org/themes/gladstone_org/css/images/fb.png',
			'image_style' => 'menu_icon'
			),
		'attributes' => array(
			'class' => array(
				0 => 'fa',
				1 => 'fa-facebook-square',
				2 => 'fa-2x',
				3 => 'icon-only'
				),
			'target' => '_blank'
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'p1' => 'fd44ea7a-c6d8-43c3-8c53-017f10de7fa5',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => NULL,
	'page_callback' => NULL,
	'path' => NULL,
	'plid' => 0,
	'position' => NULL,
	'router_path' => '',
	'tab_parent' => NULL,
	'tab_root' => NULL,
	'theme_arguments' => NULL,
	'theme_callback' => NULL,
	'title' => 'Facebook',
	'title_arguments' => NULL,
	'title_callback' => NULL,
	'to_arg_functions' => NULL,
	'type' => NULL,
	'url_alias' => array(

		),
	'uuid' => 'fd44ea7a-c6d8-43c3-8c53-017f10de7fa5',
	'weight' => 5
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/53ab2f46-302a-474b-9b86-0e0baa520001',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => NULL,
	'access_callback' => NULL,
	'context' => NULL,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => NULL,
	'depth' => 1,
	'description' => NULL,
	'expanded' => 0,
	'external' => 1,
	'fit' => NULL,
	'has_children' => 0,
	'hidden' => 1,
	'href' => 'https://twitter.com/GladstoneLabs',
	'include_file' => NULL,
	'link_path' => 'https://twitter.com/GladstoneLabs',
	'link_title' => 'Twitter',
	'load_functions' => NULL,
	'localized_options' => array(
		'menu_icon' => array(
			'enable' => 0,
			'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
			'image_style' => 'menu_icon'
			),
		'attributes' => array(
			'class' => array(
				0 => 'fa',
				1 => 'fa-twitter',
				2 => 'icon-only',
				3 => 'fa-2x'
				)
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'menu_name' => 'menu-quick-menu',
	'module' => 'menu',
	'number_parts' => NULL,
	'options' => array(
		'menu_icon' => array(
			'enable' => 0,
			'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
			'image_style' => 'menu_icon'
			),
		'attributes' => array(
			'class' => array(
				0 => 'fa',
				1 => 'fa-twitter',
				2 => 'icon-only',
				3 => 'fa-2x'
				)
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'p1' => '53ab2f46-302a-474b-9b86-0e0baa520001',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => NULL,
	'page_callback' => NULL,
	'path' => NULL,
	'plid' => 0,
	'position' => NULL,
	'router_path' => '',
	'tab_parent' => NULL,
	'tab_root' => NULL,
	'theme_arguments' => NULL,
	'theme_callback' => NULL,
	'title' => 'Twitter',
	'title_arguments' => NULL,
	'title_callback' => NULL,
	'to_arg_functions' => NULL,
	'type' => NULL,
	'url_alias' => array(

		),
	'uuid' => '53ab2f46-302a-474b-9b86-0e0baa520001',
	'weight' => 6
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/34cd7c65-3124-4a28-9f29-6b3312ddc295',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => NULL,
	'access_callback' => NULL,
	'context' => NULL,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => NULL,
	'depth' => 1,
	'description' => NULL,
	'expanded' => 0,
	'external' => 1,
	'fit' => NULL,
	'has_children' => 0,
	'hidden' => 1,
	'href' => 'https://www.youtube.com/user/GladstoneScience',
	'include_file' => NULL,
	'link_path' => 'https://www.youtube.com/user/GladstoneScience',
	'link_title' => 'Youtube',
	'load_functions' => NULL,
	'localized_options' => array(
		'menu_icon' => array(
			'enable' => 0,
			'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
			'image_style' => 'menu_icon'
			),
		'attributes' => array(
			'class' => array(
				0 => 'fa',
				1 => 'fa-youtube-play',
				2 => 'icon-only',
				3 => 'fa-2x'
				)
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'menu_name' => 'menu-quick-menu',
	'module' => 'menu',
	'number_parts' => NULL,
	'options' => array(
		'menu_icon' => array(
			'enable' => 0,
			'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
			'image_style' => 'menu_icon'
			),
		'attributes' => array(
			'class' => array(
				0 => 'fa',
				1 => 'fa-youtube-play',
				2 => 'icon-only',
				3 => 'fa-2x'
				)
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'p1' => '34cd7c65-3124-4a28-9f29-6b3312ddc295',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => NULL,
	'page_callback' => NULL,
	'path' => NULL,
	'plid' => 0,
	'position' => NULL,
	'router_path' => '',
	'tab_parent' => NULL,
	'tab_root' => NULL,
	'theme_arguments' => NULL,
	'theme_callback' => NULL,
	'title' => 'Youtube',
	'title_arguments' => NULL,
	'title_callback' => NULL,
	'to_arg_functions' => NULL,
	'type' => NULL,
	'url_alias' => array(

		),
	'uuid' => '34cd7c65-3124-4a28-9f29-6b3312ddc295',
	'weight' => 7
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/49de7598-8080-485e-b57f-29b8a006905f',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => NULL,
	'access_callback' => NULL,
	'context' => NULL,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => NULL,
	'depth' => 1,
	'description' => NULL,
	'expanded' => 0,
	'external' => 1,
	'fit' => NULL,
	'has_children' => 0,
	'hidden' => 1,
	'href' => 'http://lb.benchmarkemail.com//listbuilder/signupnew?9bGwlFuGOREK7yW8HfQ6A3TVLJ38FkWyBw1WHzVrH8T5mj5OqPbK3uMzIjNtMjwz',
	'include_file' => NULL,
	'link_path' => 'http://lb.benchmarkemail.com//listbuilder/signupnew?9bGwlFuGOREK7yW8HfQ6A3TVLJ38FkWyBw1WHzVrH8T5mj5OqPbK3uMzIjNtMjwz',
	'link_title' => 'Newsletter',
	'load_functions' => NULL,
	'localized_options' => array(
		'menu_icon' => array(
			'enable' => 0,
			'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
			'image_style' => 'menu_icon'
			),
		'attributes' => array(
			'class' => array(
				0 => 'fa',
				1 => 'fa-envelope-o',
				2 => 'icon-only',
				3 => 'fa-2x'
				)
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'menu_name' => 'menu-quick-menu',
	'module' => 'menu',
	'number_parts' => NULL,
	'options' => array(
		'menu_icon' => array(
			'enable' => 0,
			'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
			'image_style' => 'menu_icon'
			),
		'attributes' => array(
			'class' => array(
				0 => 'fa',
				1 => 'fa-envelope-o',
				2 => 'icon-only',
				3 => 'fa-2x'
				)
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'p1' => '49de7598-8080-485e-b57f-29b8a006905f',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => NULL,
	'page_callback' => NULL,
	'path' => NULL,
	'plid' => 0,
	'position' => NULL,
	'router_path' => '',
	'tab_parent' => NULL,
	'tab_root' => NULL,
	'theme_arguments' => NULL,
	'theme_callback' => NULL,
	'title' => 'Newsletter',
	'title_arguments' => NULL,
	'title_callback' => NULL,
	'to_arg_functions' => NULL,
	'type' => NULL,
	'url_alias' => array(

		),
	'uuid' => '49de7598-8080-485e-b57f-29b8a006905f',
	'weight' => 8
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/4a23bfa7-d1cf-425b-8d4e-3403f746bd96',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => NULL,
	'access_callback' => NULL,
	'context' => NULL,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => NULL,
	'depth' => 1,
	'description' => NULL,
	'expanded' => 0,
	'external' => 1,
	'fit' => NULL,
	'has_children' => 0,
	'hidden' => 0,
	'href' => '<front>',
	'include_file' => NULL,
	'link_path' => '<front>',
	'link_title' => 'Employee Resources',
	'load_functions' => NULL,
	'localized_options' => array(
		'attributes' => array(

			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'menu_name' => 'menu-footer-menu',
	'module' => 'menu',
	'number_parts' => NULL,
	'options' => array(
		'attributes' => array(

			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'p1' => '4a23bfa7-d1cf-425b-8d4e-3403f746bd96',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => NULL,
	'page_callback' => NULL,
	'path' => NULL,
	'plid' => 0,
	'position' => NULL,
	'router_path' => '',
	'tab_parent' => NULL,
	'tab_root' => NULL,
	'theme_arguments' => NULL,
	'theme_callback' => NULL,
	'title' => 'Employee Resources',
	'title_arguments' => NULL,
	'title_callback' => NULL,
	'to_arg_functions' => NULL,
	'type' => NULL,
	'url_alias' => array(

		),
	'uuid' => '4a23bfa7-d1cf-425b-8d4e-3403f746bd96',
	'weight' => 1
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/de38b8be-02f9-44d3-b466-17dba2eb0670',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => NULL,
	'access_callback' => NULL,
	'context' => NULL,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => NULL,
	'depth' => 1,
	'description' => NULL,
	'expanded' => 0,
	'external' => 1,
	'fit' => NULL,
	'has_children' => 0,
	'hidden' => 0,
	'href' => '<front>',
	'include_file' => NULL,
	'link_path' => '<front>',
	'link_title' => 'Site Map',
	'load_functions' => NULL,
	'localized_options' => array(
		'attributes' => array(

			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'menu_name' => 'menu-footer-menu',
	'module' => 'menu',
	'number_parts' => NULL,
	'options' => array(
		'attributes' => array(

			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'p1' => 'de38b8be-02f9-44d3-b466-17dba2eb0670',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => NULL,
	'page_callback' => NULL,
	'path' => NULL,
	'plid' => 0,
	'position' => NULL,
	'router_path' => '',
	'tab_parent' => NULL,
	'tab_root' => NULL,
	'theme_arguments' => NULL,
	'theme_callback' => NULL,
	'title' => 'Site Map',
	'title_arguments' => NULL,
	'title_callback' => NULL,
	'to_arg_functions' => NULL,
	'type' => NULL,
	'url_alias' => array(

		),
	'uuid' => 'de38b8be-02f9-44d3-b466-17dba2eb0670',
	'weight' => 2
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/3531ecab-af0a-47d1-bf90-4ff7c4585f79',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => NULL,
	'access_callback' => NULL,
	'context' => NULL,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => NULL,
	'depth' => 1,
	'description' => NULL,
	'expanded' => 0,
	'external' => 1,
	'fit' => NULL,
	'has_children' => 0,
	'hidden' => 0,
	'href' => '<front>',
	'include_file' => NULL,
	'link_path' => '<front>',
	'link_title' => 'Legal',
	'load_functions' => NULL,
	'localized_options' => array(
		'attributes' => array(

			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'menu_name' => 'menu-footer-menu',
	'module' => 'menu',
	'number_parts' => NULL,
	'options' => array(
		'attributes' => array(

			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'p1' => '3531ecab-af0a-47d1-bf90-4ff7c4585f79',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => NULL,
	'page_callback' => NULL,
	'path' => NULL,
	'plid' => 0,
	'position' => NULL,
	'router_path' => '',
	'tab_parent' => NULL,
	'tab_root' => NULL,
	'theme_arguments' => NULL,
	'theme_callback' => NULL,
	'title' => 'Legal',
	'title_arguments' => NULL,
	'title_callback' => NULL,
	'to_arg_functions' => NULL,
	'type' => NULL,
	'url_alias' => array(

		),
	'uuid' => '3531ecab-af0a-47d1-bf90-4ff7c4585f79',
	'weight' => 3
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/fdd74f68-312e-40f2-96e5-651c4de84194',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => NULL,
	'access_callback' => NULL,
	'context' => NULL,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => NULL,
	'depth' => 1,
	'description' => NULL,
	'expanded' => 0,
	'external' => 1,
	'fit' => NULL,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'https://www.facebook.com/gladstoneinstitutes',
	'include_file' => NULL,
	'link_path' => 'https://www.facebook.com/gladstoneinstitutes',
	'link_title' => 'Facebook',
	'load_functions' => NULL,
	'localized_options' => array(
		'attributes' => array(
			'class' => array(
				0 => 'fa',
				1 => 'fa-facebook-square',
				2 => 'fa-2x',
				3 => 'icon-only'
				),
			'target' => '_blank'
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'menu_name' => 'menu-connect-with-us',
	'module' => 'menu',
	'number_parts' => NULL,
	'options' => array(
		'attributes' => array(
			'class' => array(
				0 => 'fa',
				1 => 'fa-facebook-square',
				2 => 'fa-2x',
				3 => 'icon-only'
				),
			'target' => '_blank'
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'p1' => 'fdd74f68-312e-40f2-96e5-651c4de84194',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => NULL,
	'page_callback' => NULL,
	'path' => NULL,
	'plid' => 0,
	'position' => NULL,
	'router_path' => '',
	'tab_parent' => NULL,
	'tab_root' => NULL,
	'theme_arguments' => NULL,
	'theme_callback' => NULL,
	'title' => 'Facebook',
	'title_arguments' => NULL,
	'title_callback' => NULL,
	'to_arg_functions' => NULL,
	'type' => NULL,
	'url_alias' => array(

		),
	'uuid' => 'fdd74f68-312e-40f2-96e5-651c4de84194',
	'weight' => 1
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/7552ea42-1294-466f-8cde-94bc760c081a',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => NULL,
	'access_callback' => NULL,
	'context' => NULL,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => NULL,
	'depth' => 1,
	'description' => NULL,
	'expanded' => 0,
	'external' => 1,
	'fit' => NULL,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'https://twitter.com/GladstoneLabs',
	'include_file' => NULL,
	'link_path' => 'https://twitter.com/GladstoneLabs',
	'link_title' => 'Twitter',
	'load_functions' => NULL,
	'localized_options' => array(
		'attributes' => array(
			'class' => array(
				0 => 'fa',
				1 => 'fa-twitter',
				2 => 'icon-only',
				3 => 'fa-2x'
				),
			'target' => '_blank'
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'menu_name' => 'menu-connect-with-us',
	'module' => 'menu',
	'number_parts' => NULL,
	'options' => array(
		'attributes' => array(
			'class' => array(
				0 => 'fa',
				1 => 'fa-twitter',
				2 => 'icon-only',
				3 => 'fa-2x'
				),
			'target' => '_blank'
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'p1' => '7552ea42-1294-466f-8cde-94bc760c081a',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => NULL,
	'page_callback' => NULL,
	'path' => NULL,
	'plid' => 0,
	'position' => NULL,
	'router_path' => '',
	'tab_parent' => NULL,
	'tab_root' => NULL,
	'theme_arguments' => NULL,
	'theme_callback' => NULL,
	'title' => 'Twitter',
	'title_arguments' => NULL,
	'title_callback' => NULL,
	'to_arg_functions' => NULL,
	'type' => NULL,
	'url_alias' => array(

		),
	'uuid' => '7552ea42-1294-466f-8cde-94bc760c081a',
	'weight' => 2
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/05a6af22-be5b-4bbf-897b-04abc63e3c9a',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => NULL,
	'access_callback' => NULL,
	'context' => NULL,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => NULL,
	'depth' => 1,
	'description' => NULL,
	'expanded' => 0,
	'external' => 1,
	'fit' => NULL,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'https://www.youtube.com/user/GladstoneScience',
	'include_file' => NULL,
	'link_path' => 'https://www.youtube.com/user/GladstoneScience',
	'link_title' => 'Youtube',
	'load_functions' => NULL,
	'localized_options' => array(
		'attributes' => array(
			'class' => array(
				0 => 'fa',
				1 => 'fa-youtube-play',
				2 => 'icon-only',
				3 => 'fa-2x'
				),
			'target' => '_blank'
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'menu_name' => 'menu-connect-with-us',
	'module' => 'menu',
	'number_parts' => NULL,
	'options' => array(
		'attributes' => array(
			'class' => array(
				0 => 'fa',
				1 => 'fa-youtube-play',
				2 => 'icon-only',
				3 => 'fa-2x'
				),
			'target' => '_blank'
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'p1' => '05a6af22-be5b-4bbf-897b-04abc63e3c9a',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => NULL,
	'page_callback' => NULL,
	'path' => NULL,
	'plid' => 0,
	'position' => NULL,
	'router_path' => '',
	'tab_parent' => NULL,
	'tab_root' => NULL,
	'theme_arguments' => NULL,
	'theme_callback' => NULL,
	'title' => 'Youtube',
	'title_arguments' => NULL,
	'title_callback' => NULL,
	'to_arg_functions' => NULL,
	'type' => NULL,
	'url_alias' => array(

		),
	'uuid' => '05a6af22-be5b-4bbf-897b-04abc63e3c9a',
	'weight' => 3
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/4501175f-f055-460b-8e9c-63d3c4260776',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => NULL,
	'access_callback' => NULL,
	'context' => NULL,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => NULL,
	'depth' => 1,
	'description' => NULL,
	'expanded' => 0,
	'external' => 1,
	'fit' => NULL,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'http://lb.benchmarkemail.com//listbuilder/signupnew?9bGwlFuGOREK7yW8HfQ6A3TVLJ38FkWyBw1WHzVrH8T5mj5OqPbK3uMzIjNtMjwz',
	'include_file' => NULL,
	'link_path' => 'http://lb.benchmarkemail.com//listbuilder/signupnew?9bGwlFuGOREK7yW8HfQ6A3TVLJ38FkWyBw1WHzVrH8T5mj5OqPbK3uMzIjNtMjwz',
	'link_title' => 'Newsletter',
	'load_functions' => NULL,
	'localized_options' => array(
		'attributes' => array(
			'class' => array(
				0 => 'fa',
				1 => 'fa-envelope-o',
				2 => 'icon-only',
				3 => 'fa-2x'
				),
			'target' => '_blank'
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'menu_name' => 'menu-connect-with-us',
	'module' => 'menu',
	'number_parts' => NULL,
	'options' => array(
		'attributes' => array(
			'class' => array(
				0 => 'fa',
				1 => 'fa-envelope-o',
				2 => 'icon-only',
				3 => 'fa-2x'
				),
			'target' => '_blank'
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'p1' => '4501175f-f055-460b-8e9c-63d3c4260776',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => NULL,
	'page_callback' => NULL,
	'path' => NULL,
	'plid' => 0,
	'position' => NULL,
	'router_path' => '',
	'tab_parent' => NULL,
	'tab_root' => NULL,
	'theme_arguments' => NULL,
	'theme_callback' => NULL,
	'title' => 'Newsletter',
	'title_arguments' => NULL,
	'title_callback' => NULL,
	'to_arg_functions' => NULL,
	'type' => NULL,
	'url_alias' => array(

		),
	'uuid' => '4501175f-f055-460b-8e9c-63d3c4260776',
	'weight' => 4
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/19e39604-56db-4dd0-8ec6-78fb51f70498',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 1,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/47',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/86f18178-81f6-41b3-a373-41579500cc50',
	'link_title' => 'News Hub',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'menu-quick-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '19e39604-56db-4dd0-8ec6-78fb51f70498',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => 0,
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'News Hub',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '19e39604-56db-4dd0-8ec6-78fb51f70498',
	'weight' => 2
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/389bb0a3-3b9a-4976-83d0-6bc61de37238',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 1,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/56',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/56',
	'link_title' => 'Find an Investigator',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'menu-quick-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '389bb0a3-3b9a-4976-83d0-6bc61de37238',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => 0,
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Find an Investigator',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '389bb0a3-3b9a-4976-83d0-6bc61de37238',
	'weight' => 1
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/be4967f2-89fa-458d-9bd8-fb0e8ff9600b',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/43',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/80a9aa92-f612-40f5-9375-c05f14481365',
	'link_title' => 'Health Professionals',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'bb8d625b-9226-47a5-840c-5d607219d0cc',
	'p3' => 'be4967f2-89fa-458d-9bd8-fb0e8ff9600b',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => 'bb8d625b-9226-47a5-840c-5d607219d0cc',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Health Professionals',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'be4967f2-89fa-458d-9bd8-fb0e8ff9600b',
	'weight' => -45
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/7cdc9b04-a6ec-4ad9-be52-5ff88f94fffc',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/42',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/aa20ec5e-8b76-4835-a404-e5ad2204d384',
	'link_title' => 'Community',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'bb8d625b-9226-47a5-840c-5d607219d0cc',
	'p3' => '7cdc9b04-a6ec-4ad9-be52-5ff88f94fffc',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => 'bb8d625b-9226-47a5-840c-5d607219d0cc',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Community',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '7cdc9b04-a6ec-4ad9-be52-5ff88f94fffc',
	'weight' => -46
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/a58fe362-1557-458b-92d8-5d9fcf4c1582',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => NULL,
	'access_callback' => NULL,
	'context' => NULL,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => NULL,
	'depth' => 2,
	'description' => NULL,
	'expanded' => 0,
	'external' => 1,
	'fit' => NULL,
	'has_children' => 0,
	'hidden' => 0,
	'href' => '<front>',
	'include_file' => NULL,
	'link_path' => '<front>',
	'link_title' => 'Scientific Report 2014',
	'load_functions' => NULL,
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => NULL,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 'a58fe362-1557-458b-92d8-5d9fcf4c1582',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => NULL,
	'page_callback' => NULL,
	'path' => NULL,
	'plid' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'position' => NULL,
	'router_path' => '',
	'tab_parent' => NULL,
	'tab_root' => NULL,
	'theme_arguments' => NULL,
	'theme_callback' => NULL,
	'title' => 'Scientific Report 2014',
	'title_arguments' => NULL,
	'title_callback' => NULL,
	'to_arg_functions' => NULL,
	'type' => NULL,
	'url_alias' => array(

		),
	'uuid' => 'a58fe362-1557-458b-92d8-5d9fcf4c1582',
	'weight' => -36
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/e8f7bf10-fa4f-4874-a5b5-fcd991bad477',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:1:{i:0;s:14:"access content";}',
	'access_callback' => 'user_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => 'Sets access to all menu position links.',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 1,
	'href' => 'menu-position/8',
	'include_file' => 'profiles/gladstone_org/modules/contrib/menu_position/menu_position.admin.inc',
	'link_path' => 'menu-position/8',
	'link_title' => 'User Profile (menu position rule)',
	'load_functions' => array(
		1 => NULL
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				),
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'menu_position_rules' => array(
		0 => array(
			'uuid' => '053a5e1f-baa1-489c-b32f-01810e09eb39',
			'admin_title' => 'User Profile',
			'conditions' => array(
				'pages' => array(
					'pages' => 'user/*'
					)
				),
			'menu_name' => 'main-menu',
			'weight' => 0
			)
		),
	'module' => 'menu_position',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				),
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 'c192ddf2-d7d7-45be-a1dd-0b83bb5414f9',
	'p3' => 'e8f7bf10-fa4f-4874-a5b5-fcd991bad477',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'menu_position_router',
	'path' => 'menu-position/%',
	'plid' => 'c192ddf2-d7d7-45be-a1dd-0b83bb5414f9',
	'position' => '',
	'router_path' => 'menu-position/%',
	'tab_parent' => '',
	'tab_root' => 'menu-position/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'User Profile (menu position rule)',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'e8f7bf10-fa4f-4874-a5b5-fcd991bad477',
	'weight' => 0
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/535b443d-3d7b-4dd0-b807-77146ee8e359',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/stem cell/recent advances/30',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/stem cell/recent advances/30',
	'link_title' => 'Recent Advances',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'p3' => '535b443d-3d7b-4dd0-b807-77146ee8e359',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Recent Advances',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '535b443d-3d7b-4dd0-b807-77146ee8e359',
	'weight' => -49
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/6eceff7f-f7e1-41aa-9e69-c95c56a63f56',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/gind/publications/12',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gind/publications/12',
	'link_title' => 'Publications',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 'eb699da5-91e6-4bac-9707-da9d7afbe014',
	'p3' => '6eceff7f-f7e1-41aa-9e69-c95c56a63f56',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => 'eb699da5-91e6-4bac-9707-da9d7afbe014',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Publications',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '6eceff7f-f7e1-41aa-9e69-c95c56a63f56',
	'weight' => -46
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/da0311c1-4d03-4f80-b599-660388fa8541',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/22',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/388b85fc-4711-46fd-acec-bdc2b629eae3',
	'link_title' => 'Partners in Research',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 'da0311c1-4d03-4f80-b599-660388fa8541',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Partners in Research',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'da0311c1-4d03-4f80-b599-660388fa8541',
	'weight' => -43
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/984159eb-9d9a-4310-bf98-298ca3de25e1',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/23',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/9f567285-daab-48d9-a6d9-54a5ca9f1c55',
	'link_title' => 'Core Facilities',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '984159eb-9d9a-4310-bf98-298ca3de25e1',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Core Facilities',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '984159eb-9d9a-4310-bf98-298ca3de25e1',
	'weight' => -42
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/0d27f17f-e1fc-4347-84c7-a10663f117d7',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/24',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/8baa67d8-59d6-41ad-b0a5-ce36503f2edb',
	'link_title' => 'Roddenberry Center for Stem Cell Biology and Medicine',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'p3' => '0d27f17f-e1fc-4347-84c7-a10663f117d7',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Roddenberry Center for Stem Cell Biology and Medicine',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '0d27f17f-e1fc-4347-84c7-a10663f117d7',
	'weight' => -46
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/09fa1cbf-eb54-4256-8895-ea2981e59b71',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/25',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/ece8c7cf-ac5d-4522-8a6e-ee787c95930f',
	'link_title' => 'Industry Partners',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '06c9b286-3277-4a47-ac88-4ce03dc2c5f9',
	'p3' => '09fa1cbf-eb54-4256-8895-ea2981e59b71',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '06c9b286-3277-4a47-ac88-4ce03dc2c5f9',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Industry Partners',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '09fa1cbf-eb54-4256-8895-ea2981e59b71',
	'weight' => -48
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/42defa44-31b3-4ad0-8e6f-2d754063b764',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/26',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/a98083c8-13e3-40c3-b20d-259245099e9f',
	'link_title' => 'Graduate Students',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => '42defa44-31b3-4ad0-8e6f-2d754063b764',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Graduate Students',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '42defa44-31b3-4ad0-8e6f-2d754063b764',
	'weight' => -50
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/68516ab0-974c-406c-8a55-2659362e1f14',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/27',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/49e2a4a4-bfcd-4cb3-b3df-b9e2c50bb00e',
	'link_title' => 'Student',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'bb8d625b-9226-47a5-840c-5d607219d0cc',
	'p3' => '68516ab0-974c-406c-8a55-2659362e1f14',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => 'bb8d625b-9226-47a5-840c-5d607219d0cc',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Student',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '68516ab0-974c-406c-8a55-2659362e1f14',
	'weight' => -50
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/61c15d53-e0d7-474e-b6b2-e25969da652d',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/stem cell/publications/28',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/stem cell/publications/28',
	'link_title' => 'Publications',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'p3' => '61c15d53-e0d7-474e-b6b2-e25969da652d',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Publications',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '61c15d53-e0d7-474e-b6b2-e25969da652d',
	'weight' => -48
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/00c2097c-41a1-43e6-89c2-27b99587204b',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/stem cell/events/29',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/stem cell/events/29',
	'link_title' => 'Seminars and Events',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'p3' => '00c2097c-41a1-43e6-89c2-27b99587204b',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '268a9e46-5923-4b32-a49f-93e3ce554a0d',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Seminars and Events',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '00c2097c-41a1-43e6-89c2-27b99587204b',
	'weight' => -47
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/621db7f4-a9e7-4410-8505-405c4a0b7dc8',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => NULL,
	'access_callback' => NULL,
	'context' => NULL,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => NULL,
	'depth' => 1,
	'description' => NULL,
	'expanded' => 0,
	'external' => 1,
	'fit' => NULL,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'https://donation.towercare.com/gladstone-donation-form',
	'include_file' => NULL,
	'link_path' => 'https://donation.towercare.com/gladstone-donation-form',
	'link_title' => 'Make a Gift',
	'load_functions' => NULL,
	'localized_options' => array(
		'attributes' => array(
			'class' => array(
				0 => 'button',
				1 => 'donate'
				)
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'menu_name' => 'menu-donate',
	'module' => 'menu',
	'number_parts' => NULL,
	'options' => array(
		'attributes' => array(
			'class' => array(
				0 => 'button',
				1 => 'donate'
				)
			),
		'item_attributes' => array(
			'id' => '',
			'class' => '',
			'style' => ''
			)
		),
	'p1' => '621db7f4-a9e7-4410-8505-405c4a0b7dc8',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => NULL,
	'page_callback' => NULL,
	'path' => NULL,
	'plid' => 0,
	'position' => NULL,
	'router_path' => '',
	'tab_parent' => NULL,
	'tab_root' => NULL,
	'theme_arguments' => NULL,
	'theme_callback' => NULL,
	'title' => 'Make a Gift',
	'title_arguments' => NULL,
	'title_callback' => NULL,
	'to_arg_functions' => NULL,
	'type' => NULL,
	'url_alias' => array(

		),
	'uuid' => '621db7f4-a9e7-4410-8505-405c4a0b7dc8',
	'weight' => 1
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/d129e511-2d83-4531-a7a9-cce384a8789a',
		'cause' => 'menu_link/1af73c5b-b900-49f6-bffa-eba7269e152b'
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 0,
	'default_revision' => 1,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'node/58',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/093c808d-cedd-4d70-a0a4-70c8d42f0fdd',
	'link_title' => 'Postdocs',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(

		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(

		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'd129e511-2d83-4531-a7a9-cce384a8789a',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Postdocs',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'd129e511-2d83-4531-a7a9-cce384a8789a',
	'weight' => -49
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/bf81c2f1-d5ea-4044-8b03-2df9012bc5d3',
		'cause' => 'menu_link/1af73c5b-b900-49f6-bffa-eba7269e152b'
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 0,
	'default_revision' => 1,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'node/59',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/1584e0e6-a2f7-4dee-b04a-464eab143b88',
	'link_title' => 'The Training Program',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(

		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(

		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'd129e511-2d83-4531-a7a9-cce384a8789a',
	'p3' => 'bf81c2f1-d5ea-4044-8b03-2df9012bc5d3',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => 'd129e511-2d83-4531-a7a9-cce384a8789a',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'The Training Program',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'bf81c2f1-d5ea-4044-8b03-2df9012bc5d3',
	'weight' => -50
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/0121a942-ece3-479f-a0c9-389b010fa73c',
		'cause' => 'menu_link/1af73c5b-b900-49f6-bffa-eba7269e152b'
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 0,
	'default_revision' => 1,
	'delivery_callback' => '',
	'depth' => 4,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'node/49',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/338fc5a5-dffa-41ef-b67c-ec311ee86b72',
	'link_title' => 'Mentoring',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(

		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(

		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'd129e511-2d83-4531-a7a9-cce384a8789a',
	'p3' => 'bf81c2f1-d5ea-4044-8b03-2df9012bc5d3',
	'p4' => '0121a942-ece3-479f-a0c9-389b010fa73c',
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => 'bf81c2f1-d5ea-4044-8b03-2df9012bc5d3',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Mentoring',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '0121a942-ece3-479f-a0c9-389b010fa73c',
	'weight' => -49
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/1af73c5b-b900-49f6-bffa-eba7269e152b',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 0,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 5,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/51',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/f924c277-0734-47cd-8a44-ba1b694b14a1',
	'link_title' => 'Mentor Standards',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(

		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(

		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'd129e511-2d83-4531-a7a9-cce384a8789a',
	'p3' => 'bf81c2f1-d5ea-4044-8b03-2df9012bc5d3',
	'p4' => '0121a942-ece3-479f-a0c9-389b010fa73c',
	'p5' => '1af73c5b-b900-49f6-bffa-eba7269e152b',
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '0121a942-ece3-479f-a0c9-389b010fa73c',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Mentor Standards',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '1af73c5b-b900-49f6-bffa-eba7269e152b',
	'weight' => -49
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/233b426e-ab6e-4bc5-b465-e0fa736fb6ab',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 0,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 5,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/50',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/d6a853e0-63d9-4bc7-ab72-c692740a2470',
	'link_title' => 'Mentoring Guidance',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(

		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(

		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'd129e511-2d83-4531-a7a9-cce384a8789a',
	'p3' => 'bf81c2f1-d5ea-4044-8b03-2df9012bc5d3',
	'p4' => '0121a942-ece3-479f-a0c9-389b010fa73c',
	'p5' => '233b426e-ab6e-4bc5-b465-e0fa736fb6ab',
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '0121a942-ece3-479f-a0c9-389b010fa73c',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Mentoring Guidance',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '233b426e-ab6e-4bc5-b465-e0fa736fb6ab',
	'weight' => -50
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/c7bb404f-36db-4657-8ea8-f778cbd4d0d4',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/35',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/35',
	'link_title' => 'Events for Scientists',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'c7bb404f-36db-4657-8ea8-f778cbd4d0d4',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Events for Scientists',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'c7bb404f-36db-4657-8ea8-f778cbd4d0d4',
	'weight' => -44
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/e543701b-4bb6-4fc0-9c86-e9c34a44ea19',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:1:{i:0;s:14:"access content";}',
	'access_callback' => 'user_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => 'Sets access to all menu position links.',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 1,
	'href' => 'menu-position/9',
	'include_file' => 'profiles/gladstone_org/modules/contrib/menu_position/menu_position.admin.inc',
	'link_path' => 'menu-position/9',
	'link_title' => 'Events (menu position rule)',
	'load_functions' => array(
		1 => NULL
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				),
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'menu_position_rules' => array(
		0 => array(
			'uuid' => '975e275b-6067-46ec-846b-e552ee1b5fb4',
			'admin_title' => 'Events',
			'conditions' => array(
				'content_type' => array(
					'content_type' => array(
						'event_calendar' => 'event_calendar'
						)
					)
				),
			'menu_name' => 'main-menu',
			'weight' => 0
			)
		),
	'module' => 'menu_position',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				),
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'c7bb404f-36db-4657-8ea8-f778cbd4d0d4',
	'p3' => 'e543701b-4bb6-4fc0-9c86-e9c34a44ea19',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'menu_position_router',
	'path' => 'menu-position/%',
	'plid' => 'c7bb404f-36db-4657-8ea8-f778cbd4d0d4',
	'position' => '',
	'router_path' => 'menu-position/%',
	'tab_parent' => '',
	'tab_root' => 'menu-position/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Events (menu position rule)',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'e543701b-4bb6-4fc0-9c86-e9c34a44ea19',
	'weight' => 0
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/b4be68b2-e899-46a6-89dc-0acb7bbd08d4',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/45',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/63f882e2-5d22-4385-8dc0-54c495c5c23c',
	'link_title' => 'Videos',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'b4be68b2-e899-46a6-89dc-0acb7bbd08d4',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Videos',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'b4be68b2-e899-46a6-89dc-0acb7bbd08d4',
	'weight' => -47
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/406081d8-493c-4423-9ba0-e7957f1b23a4',
		'cause' => 'menu_link/b69a95b5-120b-4aa5-9564-81d76b6e8f9e'
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 1,
	'delivery_callback' => '',
	'depth' => 1,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'node/61',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/655bfda0-6a3c-49fd-aab2-9236fd86bca7',
	'link_title' => 'About Us',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(

			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(

			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => 0,
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => 0,
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'About Us',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'weight' => 2
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/b69a95b5-120b-4aa5-9564-81d76b6e8f9e',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/90',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/cf21f58d-110b-4916-8dac-9037168a6a6c',
	'link_title' => 'Publications',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => 'b69a95b5-120b-4aa5-9564-81d76b6e8f9e',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Publications',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'b69a95b5-120b-4aa5-9564-81d76b6e8f9e',
	'weight' => -45
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/af4bf87d-e6db-4cdb-9818-a1591901f5aa',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/56',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/56',
	'link_title' => 'All Directors and Investigators',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 'af4bf87d-e6db-4cdb-9818-a1591901f5aa',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'All Directors and Investigators',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'af4bf87d-e6db-4cdb-9818-a1591901f5aa',
	'weight' => -50
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/288fff33-b567-4ecb-8cac-cd6c8d8bfc0c',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/47',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/86f18178-81f6-41b3-a373-41579500cc50',
	'link_title' => 'News Hub',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			),
		'alter' => true
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			),
		'alter' => true
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => '288fff33-b567-4ecb-8cac-cd6c8d8bfc0c',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'News Hub',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '288fff33-b567-4ecb-8cac-cd6c8d8bfc0c',
	'weight' => -49
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/4ea669d6-d5d3-4308-88b7-b463cbecd5d4',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:1:{i:0;s:14:"access content";}',
	'access_callback' => 'user_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => 'Sets access to all menu position links.',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 1,
	'href' => 'menu-position/1',
	'include_file' => 'profiles/gladstone_org/modules/contrib/menu_position/menu_position.admin.inc',
	'link_path' => 'menu-position/1',
	'link_title' => 'News (menu position rule)',
	'load_functions' => array(
		1 => NULL
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				),
			'title' => 'Sets access to all menu position links.'
			)
		),
	'menu_name' => 'main-menu',
	'menu_position_rules' => array(
		0 => array(
			'uuid' => '72c078a9-4f93-4773-8c75-c2cf80320d78',
			'admin_title' => 'News',
			'conditions' => array(
				'content_type' => array(
					'content_type' => array(
						'news' => 'news'
						)
					)
				),
			'menu_name' => 'main-menu',
			'weight' => 0
			)
		),
	'module' => 'menu_position',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				),
			'title' => 'Sets access to all menu position links.'
			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => '288fff33-b567-4ecb-8cac-cd6c8d8bfc0c',
	'p3' => '4ea669d6-d5d3-4308-88b7-b463cbecd5d4',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'menu_position_router',
	'path' => 'menu-position/%',
	'plid' => '288fff33-b567-4ecb-8cac-cd6c8d8bfc0c',
	'position' => '',
	'router_path' => 'menu-position/%',
	'tab_parent' => '',
	'tab_root' => 'menu-position/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'News (menu position rule)',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '4ea669d6-d5d3-4308-88b7-b463cbecd5d4',
	'weight' => 0
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/d4481342-daf4-4dc1-9860-f69374c03694',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 0,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'node/48',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/8fbbb324-88dd-451e-8060-3893f0324d17',
	'link_title' => 'Leadership',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(

		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(

		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => 'd4481342-daf4-4dc1-9860-f69374c03694',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Leadership',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'd4481342-daf4-4dc1-9860-f69374c03694',
	'weight' => -48
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/610c641f-4ca7-475a-b5a4-043a2687d89b',
		'cause' => 'menu_link/c71b29ca-8894-4b71-8c24-73edffe4a566'
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 1,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'z/62',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/62',
	'link_title' => 'For Journalists',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(

			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(

			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => '610c641f-4ca7-475a-b5a4-043a2687d89b',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'For Journalists',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '610c641f-4ca7-475a-b5a4-043a2687d89b',
	'weight' => -44
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/c71b29ca-8894-4b71-8c24-73edffe4a566',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => NULL,
	'access_callback' => NULL,
	'context' => NULL,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => NULL,
	'depth' => 3,
	'description' => NULL,
	'expanded' => 0,
	'external' => 1,
	'fit' => NULL,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'http://gladstoneinstitutes.zenfolio.com/',
	'include_file' => NULL,
	'link_path' => 'http://gladstoneinstitutes.zenfolio.com/',
	'link_title' => 'Media Resources',
	'load_functions' => NULL,
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => NULL,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => '610c641f-4ca7-475a-b5a4-043a2687d89b',
	'p3' => 'c71b29ca-8894-4b71-8c24-73edffe4a566',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => NULL,
	'page_callback' => NULL,
	'path' => NULL,
	'plid' => '610c641f-4ca7-475a-b5a4-043a2687d89b',
	'position' => NULL,
	'router_path' => '',
	'tab_parent' => NULL,
	'tab_root' => NULL,
	'theme_arguments' => NULL,
	'theme_callback' => NULL,
	'title' => 'Media Resources',
	'title_arguments' => NULL,
	'title_callback' => NULL,
	'to_arg_functions' => NULL,
	'type' => NULL,
	'url_alias' => array(

		),
	'uuid' => 'c71b29ca-8894-4b71-8c24-73edffe4a566',
	'weight' => -48
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/d1357d1a-b115-4358-89f9-0836a6b4df73',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/4',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/264e456a-1f21-4135-a55f-5f8bc41c71ef',
	'link_title' => 'The Nobel at Gladstone',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => '610c641f-4ca7-475a-b5a4-043a2687d89b',
	'p3' => 'd1357d1a-b115-4358-89f9-0836a6b4df73',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '610c641f-4ca7-475a-b5a4-043a2687d89b',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'The Nobel at Gladstone',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'd1357d1a-b115-4358-89f9-0836a6b4df73',
	'weight' => -47
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/21910471-4545-4748-9792-5d03dcc8fbbc',
		'cause' => 'menu_link/5f4c0347-224e-477e-bbf8-758af501bc03'
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 1,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/64',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/64',
	'link_title' => 'Media Coverage',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(

			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(

			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => '610c641f-4ca7-475a-b5a4-043a2687d89b',
	'p3' => '21910471-4545-4748-9792-5d03dcc8fbbc',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => '610c641f-4ca7-475a-b5a4-043a2687d89b',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Media Coverage',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '21910471-4545-4748-9792-5d03dcc8fbbc',
	'weight' => -49
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/5f4c0347-224e-477e-bbf8-758af501bc03',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:1:{i:0;s:14:"access content";}',
	'access_callback' => 'user_access',
	'context' => 0,
	'customized' => 0,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 4,
	'description' => 'Sets access to all menu position links.',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 1,
	'href' => 'menu-position/4',
	'include_file' => 'profiles/gladstone_org/modules/contrib/menu_position/menu_position.admin.inc',
	'link_path' => 'menu-position/4',
	'link_title' => 'In the News (menu position rule)',
	'load_functions' => array(
		1 => NULL
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				)
			)
		),
	'menu_name' => 'main-menu',
	'menu_position_rules' => array(
		0 => array(
			'uuid' => '4d25cc9e-c64b-4ca0-a9c2-f6f3740d2068',
			'admin_title' => 'In the News',
			'conditions' => array(
				'content_type' => array(
					'content_type' => array(
						'in_the_news' => 'in_the_news'
						)
					)
				),
			'menu_name' => 'main-menu',
			'weight' => 0
			)
		),
	'module' => 'menu_position',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				)
			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => '610c641f-4ca7-475a-b5a4-043a2687d89b',
	'p3' => '21910471-4545-4748-9792-5d03dcc8fbbc',
	'p4' => '5f4c0347-224e-477e-bbf8-758af501bc03',
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'menu_position_router',
	'path' => 'menu-position/%',
	'plid' => '21910471-4545-4748-9792-5d03dcc8fbbc',
	'position' => '',
	'router_path' => 'menu-position/%',
	'tab_parent' => '',
	'tab_root' => 'menu-position/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'In the News (menu position rule)',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '5f4c0347-224e-477e-bbf8-758af501bc03',
	'weight' => 0
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/972ddd2d-52bb-4971-9b57-b1cbd226e082',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/44',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/9c486a08-beb0-4c0b-a488-88fc63568998',
	'link_title' => 'Alumni',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => '972ddd2d-52bb-4971-9b57-b1cbd226e082',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Alumni',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '972ddd2d-52bb-4971-9b57-b1cbd226e082',
	'weight' => -45
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/0447f469-8e95-433f-b582-75bbceeffaec',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 0,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 4,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/52',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/ce345569-4ea3-46b5-93ae-a218cfda7faf',
	'link_title' => 'Career Development',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(

		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(

		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'd129e511-2d83-4531-a7a9-cce384a8789a',
	'p3' => 'bf81c2f1-d5ea-4044-8b03-2df9012bc5d3',
	'p4' => '0447f469-8e95-433f-b582-75bbceeffaec',
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => 'bf81c2f1-d5ea-4044-8b03-2df9012bc5d3',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Career Development',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '0447f469-8e95-433f-b582-75bbceeffaec',
	'weight' => -48
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/bfd99786-c165-4b30-8bcb-c388fe99c190',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 0,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/53',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/322a2fd6-628d-442c-b333-be0260cdb193',
	'link_title' => 'Postdoctoral Opportunities',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(

		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(

		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'd129e511-2d83-4531-a7a9-cce384a8789a',
	'p3' => 'bfd99786-c165-4b30-8bcb-c388fe99c190',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => 'd129e511-2d83-4531-a7a9-cce384a8789a',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Postdoctoral Opportunities',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'bfd99786-c165-4b30-8bcb-c388fe99c190',
	'weight' => -49
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/013e6291-77c1-4431-85db-53af3723248a',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => NULL,
	'access_callback' => NULL,
	'context' => NULL,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => NULL,
	'depth' => 3,
	'description' => NULL,
	'expanded' => 0,
	'external' => 1,
	'fit' => NULL,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'http://gladstonepostdoc.ucsf.edu/',
	'include_file' => NULL,
	'link_path' => 'http://gladstonepostdoc.ucsf.edu/',
	'link_title' => 'Postdoc Resource Web',
	'load_functions' => NULL,
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => NULL,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'd129e511-2d83-4531-a7a9-cce384a8789a',
	'p3' => '013e6291-77c1-4431-85db-53af3723248a',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => NULL,
	'page_callback' => NULL,
	'path' => NULL,
	'plid' => 'd129e511-2d83-4531-a7a9-cce384a8789a',
	'position' => NULL,
	'router_path' => '',
	'tab_parent' => NULL,
	'tab_root' => NULL,
	'theme_arguments' => NULL,
	'theme_callback' => NULL,
	'title' => 'Postdoc Resource Web',
	'title_arguments' => NULL,
	'title_callback' => NULL,
	'to_arg_functions' => NULL,
	'type' => NULL,
	'url_alias' => array(

		),
	'uuid' => '013e6291-77c1-4431-85db-53af3723248a',
	'weight' => -48
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/eb92e4d2-43f9-4370-a859-00ea4ae5cd16',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 0,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/57',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/abd408c6-a9d6-449c-813d-428db6a10658',
	'link_title' => 'Contact Us',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(

		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(

		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => 'eb92e4d2-43f9-4370-a859-00ea4ae5cd16',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Contact Us',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'eb92e4d2-43f9-4370-a859-00ea4ae5cd16',
	'weight' => -42
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/b190e5a5-9919-41f3-9584-febca7954dd6',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 0,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/66',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/d2980c46-8037-42d8-9092-cf9d38579a04',
	'link_title' => 'UCSF Affiliation',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(

		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(

		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => 'b190e5a5-9919-41f3-9584-febca7954dd6',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'UCSF Affiliation',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'b190e5a5-9919-41f3-9584-febca7954dd6',
	'weight' => -43
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/64aea956-6b5a-4ebf-b9ed-e571888d2293',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 0,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 4,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/60',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/46317f42-6156-47f0-8239-d4d63ad74665',
	'link_title' => 'Salary and Benefits',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(

		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(

		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'd129e511-2d83-4531-a7a9-cce384a8789a',
	'p3' => 'bf81c2f1-d5ea-4044-8b03-2df9012bc5d3',
	'p4' => '64aea956-6b5a-4ebf-b9ed-e571888d2293',
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => 'bf81c2f1-d5ea-4044-8b03-2df9012bc5d3',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Salary and Benefits',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => '64aea956-6b5a-4ebf-b9ed-e571888d2293',
	'weight' => -50
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/4d3730ed-d89d-4c0e-a039-cbde5daca59c',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/63',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/63',
	'link_title' => 'Press Releases',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => '610c641f-4ca7-475a-b5a4-043a2687d89b',
	'p3' => '4d3730ed-d89d-4c0e-a039-cbde5daca59c',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => '610c641f-4ca7-475a-b5a4-043a2687d89b',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Press Releases',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '4d3730ed-d89d-4c0e-a039-cbde5daca59c',
	'weight' => -50
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/b86af157-2cc9-4508-a42c-7c8e026c74b3',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:1:{i:0;s:14:"access content";}',
	'access_callback' => 'user_access',
	'context' => 0,
	'customized' => 0,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 4,
	'description' => 'Sets access to all menu position links.',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 1,
	'href' => 'menu-position/3',
	'include_file' => 'profiles/gladstone_org/modules/contrib/menu_position/menu_position.admin.inc',
	'link_path' => 'menu-position/3',
	'link_title' => 'Press Releases (menu position rule)',
	'load_functions' => array(
		1 => NULL
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				)
			)
		),
	'menu_name' => 'main-menu',
	'menu_position_rules' => array(
		0 => array(
			'uuid' => 'c8c15aa9-6724-4902-a9e8-69de5b92b641',
			'admin_title' => 'Press Releases',
			'conditions' => array(
				'content_type' => array(
					'content_type' => array(
						'press_release' => 'press_release'
						)
					)
				),
			'menu_name' => 'main-menu',
			'weight' => 0
			)
		),
	'module' => 'menu_position',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				)
			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => '610c641f-4ca7-475a-b5a4-043a2687d89b',
	'p3' => '4d3730ed-d89d-4c0e-a039-cbde5daca59c',
	'p4' => 'b86af157-2cc9-4508-a42c-7c8e026c74b3',
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'menu_position_router',
	'path' => 'menu-position/%',
	'plid' => '4d3730ed-d89d-4c0e-a039-cbde5daca59c',
	'position' => '',
	'router_path' => 'menu-position/%',
	'tab_parent' => '',
	'tab_root' => 'menu-position/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Press Releases (menu position rule)',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'b86af157-2cc9-4508-a42c-7c8e026c74b3',
	'weight' => 0
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/cee4154b-da22-403f-b3f1-00289d250c1f',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/gind/director\'s vision/68',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gind/director\'s vision/68',
	'link_title' => 'Director\'s Vision',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 'eb699da5-91e6-4bac-9707-da9d7afbe014',
	'p3' => 'cee4154b-da22-403f-b3f1-00289d250c1f',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => 'eb699da5-91e6-4bac-9707-da9d7afbe014',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Director\'s Vision',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'cee4154b-da22-403f-b3f1-00289d250c1f',
	'weight' => -50
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/43ab53bb-2dd5-4687-b283-0d4faeba5fb3',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/55',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/55',
	'link_title' => 'Careers',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => '43ab53bb-2dd5-4687-b283-0d4faeba5fb3',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Careers',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '43ab53bb-2dd5-4687-b283-0d4faeba5fb3',
	'weight' => -43
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/efcd4a5d-be83-41af-aeae-41b89b8b8235',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/gicd/recent advances/80',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gicd/recent advances/80',
	'link_title' => 'Recent Advances',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'p3' => 'efcd4a5d-be83-41af-aeae-41b89b8b8235',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Recent Advances',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'efcd4a5d-be83-41af-aeae-41b89b8b8235',
	'weight' => -48
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/d1d54f0a-68bf-4673-8bd0-f481633c49c4',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/gicd/honors and awards/79',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gicd/honors and awards/79',
	'link_title' => 'Honors and Awards',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'p3' => 'd1d54f0a-68bf-4673-8bd0-f481633c49c4',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Honors and Awards',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'd1d54f0a-68bf-4673-8bd0-f481633c49c4',
	'weight' => -47
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/eb0f216d-dfec-4b8a-97a4-31d1ba4050b1',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/gicd/publications/70',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gicd/publications/70',
	'link_title' => 'Publications',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'p3' => 'eb0f216d-dfec-4b8a-97a4-31d1ba4050b1',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Publications',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'eb0f216d-dfec-4b8a-97a4-31d1ba4050b1',
	'weight' => -46
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/a2701547-946d-4b13-9d08-6d62190b814e',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'institute/gicd/events/71',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gicd/events/71',
	'link_title' => 'Seminars and Events',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'p3' => 'a2701547-946d-4b13-9d08-6d62190b814e',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Seminars and Events',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'a2701547-946d-4b13-9d08-6d62190b814e',
	'weight' => -45
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/ac4f173c-7ea3-4f92-82f9-fc6e3c2dbde3',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 4,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/72',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/f32a3cfb-b105-4b03-a373-a43bfd9e39f6',
	'link_title' => 'New Tech Seminars',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'p3' => 'a2701547-946d-4b13-9d08-6d62190b814e',
	'p4' => 'ac4f173c-7ea3-4f92-82f9-fc6e3c2dbde3',
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => 'a2701547-946d-4b13-9d08-6d62190b814e',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'New Tech Seminars',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'ac4f173c-7ea3-4f92-82f9-fc6e3c2dbde3',
	'weight' => -50
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/163c9000-8b7e-4654-819b-536e35dddcb5',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/gicd/advisory board/73',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gicd/advisory board/73',
	'link_title' => 'Scientific Advisory Board',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'p3' => '163c9000-8b7e-4654-819b-536e35dddcb5',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Scientific Advisory Board',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '163c9000-8b7e-4654-819b-536e35dddcb5',
	'weight' => -44
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/bbcf8fbe-f2b0-4325-82bb-daf31b1c7ede',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/74',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/feb8c198-b9fb-41cb-b3f5-24b4b153eae8',
	'link_title' => 'Top Five Myths about HIV/AIDS',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'p3' => 'bbcf8fbe-f2b0-4325-82bb-daf31b1c7ede',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Top Five Myths about HIV/AIDS',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'bbcf8fbe-f2b0-4325-82bb-daf31b1c7ede',
	'weight' => -42
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/236dda98-4017-4cfb-b666-43b2ec994502',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/givi/publications/75',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/givi/publications/75',
	'link_title' => 'Publications',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'p3' => '236dda98-4017-4cfb-b666-43b2ec994502',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Publications',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '236dda98-4017-4cfb-b666-43b2ec994502',
	'weight' => -43
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/7bfa0518-19c9-48ad-ae6d-64478d6149a8',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/76',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/76',
	'link_title' => 'Gladstone Foundation',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => 'd4481342-daf4-4dc1-9860-f69374c03694',
	'p3' => '7bfa0518-19c9-48ad-ae6d-64478d6149a8',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => 'd4481342-daf4-4dc1-9860-f69374c03694',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Gladstone Foundation',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '7bfa0518-19c9-48ad-ae6d-64478d6149a8',
	'weight' => -47
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/a4a65e44-0e39-4c1e-a04d-833b57e6d7a1',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 1,
	'href' => 'z/92',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/92',
	'link_title' => 'News and Highlights',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => '288fff33-b567-4ecb-8cac-cd6c8d8bfc0c',
	'p3' => 'a4a65e44-0e39-4c1e-a04d-833b57e6d7a1',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => '288fff33-b567-4ecb-8cac-cd6c8d8bfc0c',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'News and Highlights',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'a4a65e44-0e39-4c1e-a04d-833b57e6d7a1',
	'weight' => 1
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/e8b5b35e-e9cd-418d-89a0-ea310f8fa838',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/10',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/a1089f06-dcd5-4112-8a03-4d0ea4d827bc',
	'link_title' => 'Licensing Opportunities',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 'e8b5b35e-e9cd-418d-89a0-ea310f8fa838',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Licensing Opportunities',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'e8b5b35e-e9cd-418d-89a0-ea310f8fa838',
	'weight' => -44
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/a426c65d-86fb-4258-a393-aef83b349192',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:1:{i:0;s:14:"access content";}',
	'access_callback' => 'user_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => 'Sets access to all menu position links.',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 1,
	'href' => 'menu-position/6',
	'include_file' => 'profiles/gladstone_org/modules/contrib/menu_position/menu_position.admin.inc',
	'link_path' => 'menu-position/6',
	'link_title' => 'Licensing Opportunities (menu position rule)',
	'load_functions' => array(
		1 => NULL
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				),
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'menu_position_rules' => array(
		0 => array(
			'uuid' => '0bba13d2-dae6-4b03-92ab-c8fd7280cd06',
			'admin_title' => 'Licensing Opportunities',
			'conditions' => array(
				'content_type' => array(
					'content_type' => array(
						'technology' => 'technology'
						)
					)
				),
			'menu_name' => 'main-menu',
			'weight' => 0
			)
		),
	'module' => 'menu_position',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				),
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 'e8b5b35e-e9cd-418d-89a0-ea310f8fa838',
	'p3' => 'a426c65d-86fb-4258-a393-aef83b349192',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'menu_position_router',
	'path' => 'menu-position/%',
	'plid' => 'e8b5b35e-e9cd-418d-89a0-ea310f8fa838',
	'position' => '',
	'router_path' => 'menu-position/%',
	'tab_parent' => '',
	'tab_root' => 'menu-position/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Licensing Opportunities (menu position rule)',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'a426c65d-86fb-4258-a393-aef83b349192',
	'weight' => 0
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/ed1f9193-ee08-4197-bc3d-7d16180ed71d',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 0,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/54',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/3f9fcb99-831e-4eb6-9825-2897ffadb5c1',
	'link_title' => 'Postdoctoral Training Program Coordinator',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(

		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(

		),
	'p1' => '8eade152-15ee-444f-aee7-16ba33a87285',
	'p2' => 'd129e511-2d83-4531-a7a9-cce384a8789a',
	'p3' => 'ed1f9193-ee08-4197-bc3d-7d16180ed71d',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => 'd129e511-2d83-4531-a7a9-cce384a8789a',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Postdoctoral Training Program Coordinator',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'ed1f9193-ee08-4197-bc3d-7d16180ed71d',
	'weight' => -47
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/967c0fd3-4411-421c-8f0e-5a9660e49688',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/77',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/77',
	'link_title' => 'History',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => '967c0fd3-4411-421c-8f0e-5a9660e49688',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'History',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '967c0fd3-4411-421c-8f0e-5a9660e49688',
	'weight' => -47
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/3166e91a-988b-4d4b-8cdb-6a11290a46ea',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/gicd/areas of investigation/89',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gicd/areas of investigation/89',
	'link_title' => 'Areas of Investigation',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'p3' => '3166e91a-988b-4d4b-8cdb-6a11290a46ea',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '2f437f5e-e5fc-41ca-abd0-d04a17c9c898',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Areas of Investigation',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '3166e91a-988b-4d4b-8cdb-6a11290a46ea',
	'weight' => -49
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/cbac93a4-0b12-4672-8ed3-b3c63f6e61e6',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/61',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/655bfda0-6a3c-49fd-aab2-9236fd86bca7',
	'link_title' => 'Mission and President\'s Vision',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => 'cbac93a4-0b12-4672-8ed3-b3c63f6e61e6',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Mission and President\'s Vision',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'cbac93a4-0b12-4672-8ed3-b3c63f6e61e6',
	'weight' => -50
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/2c785d1a-2ccf-4b0e-8938-8ff13376d012',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/69',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/69',
	'link_title' => 'President and Scientific Directors',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => 'd4481342-daf4-4dc1-9860-f69374c03694',
	'p3' => '2c785d1a-2ccf-4b0e-8938-8ff13376d012',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => 'd4481342-daf4-4dc1-9860-f69374c03694',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'President and Scientific Directors',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '2c785d1a-2ccf-4b0e-8938-8ff13376d012',
	'weight' => -50
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/d1bffdb9-4c07-4663-a16b-1fcea9e40a23',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/81',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/81',
	'link_title' => 'Trustees',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => 'd4481342-daf4-4dc1-9860-f69374c03694',
	'p3' => 'd1bffdb9-4c07-4663-a16b-1fcea9e40a23',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => 'd4481342-daf4-4dc1-9860-f69374c03694',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Trustees',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'd1bffdb9-4c07-4663-a16b-1fcea9e40a23',
	'weight' => -49
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/cfb895fa-ef68-4786-9ca1-3adc87a981d0',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'z/91',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'z/91',
	'link_title' => 'Administration',
	'load_functions' => array(
		1 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => 'd4481342-daf4-4dc1-9860-f69374c03694',
	'p3' => 'cfb895fa-ef68-4786-9ca1-3adc87a981d0',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:2:{i:0;s:8:"panelize";i:1;i:1;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'z/%',
	'plid' => 'd4481342-daf4-4dc1-9860-f69374c03694',
	'position' => '',
	'router_path' => 'z/%',
	'tab_parent' => '',
	'tab_root' => 'z/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Administration',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'cfb895fa-ef68-4786-9ca1-3adc87a981d0',
	'weight' => -48
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/1caf4064-06e9-439f-aef3-8e5a5ed2e5e3',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/givi/events/83',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/givi/events/83',
	'link_title' => 'Seminars and Events',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'p3' => '1caf4064-06e9-439f-aef3-8e5a5ed2e5e3',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Seminars and Events',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '1caf4064-06e9-439f-aef3-8e5a5ed2e5e3',
	'weight' => -41
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/49a7d461-3160-4446-8c0c-0842ac5eea8c',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/givi/research centers/84',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/givi/research centers/84',
	'link_title' => 'Centers',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'p3' => '49a7d461-3160-4446-8c0c-0842ac5eea8c',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Centers',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '49a7d461-3160-4446-8c0c-0842ac5eea8c',
	'weight' => -39
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/bda52a13-b022-450d-9606-a54e74089255',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/givi/advisory board/85',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/givi/advisory board/85',
	'link_title' => 'Scientific Advisory Board',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'p3' => 'bda52a13-b022-450d-9606-a54e74089255',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Scientific Advisory Board',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'bda52a13-b022-450d-9606-a54e74089255',
	'weight' => -40
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/fd5d0fae-8c50-46cd-91e3-16537e6c1a19',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 1,
	'hidden' => 0,
	'href' => 'institute/givi/director\'s vision/86',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/givi/director\'s vision/86',
	'link_title' => 'Director\'s Vision',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'p3' => 'fd5d0fae-8c50-46cd-91e3-16537e6c1a19',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Director\'s Vision',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'fd5d0fae-8c50-46cd-91e3-16537e6c1a19',
	'weight' => -47
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/c520855a-9211-4cd2-820c-9357065bdf64',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/givi/areas of investigation/87',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/givi/areas of investigation/87',
	'link_title' => 'Areas of Investigation',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'p3' => 'c520855a-9211-4cd2-820c-9357065bdf64',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => '340fe1a9-5a9c-47e7-8b90-905e44c62b6a',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Areas of Investigation',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'c520855a-9211-4cd2-820c-9357065bdf64',
	'weight' => -46
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/e514cd70-b7d1-4f36-bb3b-257a6a71c2b5',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
	'access_callback' => 'node_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 2,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'node/78',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/node_view.inc',
	'link_path' => 'node/f87d9504-2f14-4f6b-b369-d566aaa0f3f2',
	'link_title' => 'Honors and Awards',
	'load_functions' => array(
		1 => 'node_load'
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(

			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(

			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => 'e514cd70-b7d1-4f36-bb3b-257a6a71c2b5',
	'p3' => 0,
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'page_manager_node_view_page',
	'path' => 'node/%',
	'plid' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'position' => '',
	'router_path' => 'node/%',
	'tab_parent' => '',
	'tab_root' => 'node/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Honors and Awards',
	'title_arguments' => 'a:1:{i:0;i:1;}',
	'title_callback' => 'node_page_title',
	'to_arg_functions' => '',
	'type' => 6,
	'url_alias' => array(

		),
	'uuid' => 'e514cd70-b7d1-4f36-bb3b-257a6a71c2b5',
	'weight' => -46
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/2eb3e9ed-a672-4fbf-9c92-cf5deadec93f',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:1:{i:0;s:14:"access content";}',
	'access_callback' => 'user_access',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => 'Sets access to all menu position links.',
	'expanded' => 0,
	'external' => 0,
	'fit' => 2,
	'has_children' => 0,
	'hidden' => 1,
	'href' => 'menu-position/2',
	'include_file' => 'profiles/gladstone_org/modules/contrib/menu_position/menu_position.admin.inc',
	'link_path' => 'menu-position/2',
	'link_title' => 'Honors and Awards (menu position rule)',
	'load_functions' => array(
		1 => NULL
		),
	'localized_options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				),
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'menu_position_rules' => array(
		0 => array(
			'uuid' => 'f6ce1523-b449-46e6-b898-e141a1f13e8e',
			'admin_title' => 'Honors and Awards',
			'conditions' => array(
				'content_type' => array(
					'content_type' => array(
						'honors_and_awards' => 'honors_and_awards'
						)
					)
				),
			'menu_name' => 'main-menu',
			'weight' => 0
			)
		),
	'module' => 'menu_position',
	'number_parts' => 2,
	'options' => array(
		'alter' => true,
		'attributes' => array(
			'class' => array(
				0 => 'menu-position-link'
				),
			'title' => ''
			)
		),
	'p1' => '406081d8-493c-4423-9ba0-e7957f1b23a4',
	'p2' => 'e514cd70-b7d1-4f36-bb3b-257a6a71c2b5',
	'p3' => '2eb3e9ed-a672-4fbf-9c92-cf5deadec93f',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:1:{i:0;i:1;}',
	'page_callback' => 'menu_position_router',
	'path' => 'menu-position/%',
	'plid' => 'e514cd70-b7d1-4f36-bb3b-257a6a71c2b5',
	'position' => '',
	'router_path' => 'menu-position/%',
	'tab_parent' => '',
	'tab_root' => 'menu-position/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Honors and Awards (menu position rule)',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => '2eb3e9ed-a672-4fbf-9c92-cf5deadec93f',
	'weight' => 0
	);

$entities['structure_sitemap'][] = (object) array(
	'__metadata' => array(
		'type' => 'menu_link',
		'uri' => 'menu_link/ef87a591-2541-4354-a699-ac72fd7f519f',
		'cause' => false
		),
	'access' => true,
	'access_arguments' => 'a:4:{i:0;a:2:{s:4:"type";s:4:"none";s:8:"settings";N;}i:1;i:1;i:2;i:2;i:3;i:3;}',
	'access_callback' => 'ctools_access_menu',
	'context' => 0,
	'customized' => 1,
	'default_revision' => 0,
	'delivery_callback' => '',
	'depth' => 3,
	'description' => '',
	'expanded' => 0,
	'external' => 0,
	'fit' => 8,
	'has_children' => 0,
	'hidden' => 0,
	'href' => 'institute/gind/events/2',
	'include_file' => 'profiles/gladstone_org/modules/contrib/ctools/page_manager/plugins/tasks/page.inc',
	'link_path' => 'institute/gind/events/2',
	'link_title' => 'Seminars and Events',
	'load_functions' => array(
		1 => 'pm_arg_load',
		2 => 'pm_arg_load',
		3 => 'pm_arg_load'
		),
	'localized_options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'menu_name' => 'main-menu',
	'module' => 'menu',
	'number_parts' => 4,
	'options' => array(
		'attributes' => array(
			'title' => ''
			)
		),
	'p1' => '3f7c1da8-3889-4280-ac31-5cf396953705',
	'p2' => 'eb699da5-91e6-4bac-9707-da9d7afbe014',
	'p3' => 'ef87a591-2541-4354-a699-ac72fd7f519f',
	'p4' => 0,
	'p5' => 0,
	'p6' => 0,
	'p7' => 0,
	'p8' => 0,
	'p9' => 0,
	'page_arguments' => 'a:4:{i:0;s:9:"institute";i:1;i:1;i:2;i:2;i:3;i:3;}',
	'page_callback' => 'page_manager_page_execute',
	'path' => 'institute/%/%/%',
	'plid' => 'eb699da5-91e6-4bac-9707-da9d7afbe014',
	'position' => '',
	'router_path' => 'institute/%/%/%',
	'tab_parent' => '',
	'tab_root' => 'institute/%/%/%',
	'theme_arguments' => 'a:0:{}',
	'theme_callback' => '',
	'title' => 'Seminars and Events',
	'title_arguments' => '',
	'title_callback' => 't',
	'to_arg_functions' => '',
	'type' => 0,
	'url_alias' => array(

		),
	'uuid' => 'ef87a591-2541-4354-a699-ac72fd7f519f',
	'weight' => -45
	);


      return $entities;
    }