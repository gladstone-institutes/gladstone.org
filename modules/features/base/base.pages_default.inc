<?php
/**
 * @file
 * base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function base_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_http_response';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Redirect Disallowed Types',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => '%node:content-type:machine-name/node/%node:uuid',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'basic_page' => 'basic_page',
              'site_page' => 'site_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_view_http_response'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'gs3_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3_25_50_25_header' => NULL,
      'gs3_25_50_25_top' => NULL,
      'gs3_25_50_25_sidebar' => NULL,
      'gs3_25_50_25_middle' => NULL,
      'gs3_25_50_25_inset' => NULL,
      'gs3_25_50_25_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f841ad28-4617-4f46-882b-0a45d6a95e7e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-36dc5df3-2aed-401f-aadb-87de5b9c78d3';
    $pane->panel = 'gs3_25_50_25_header';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '36dc5df3-2aed-401f-aadb-87de5b9c78d3';
    $display->content['new-36dc5df3-2aed-401f-aadb-87de5b9c78d3'] = $pane;
    $display->panels['gs3_25_50_25_header'][0] = 'new-36dc5df3-2aed-401f-aadb-87de5b9c78d3';
    $pane = new stdClass();
    $pane->pid = 'new-7cb3e687-7930-4dd6-97ce-1259a02b1f67';
    $pane->panel = 'gs3_25_50_25_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7cb3e687-7930-4dd6-97ce-1259a02b1f67';
    $display->content['new-7cb3e687-7930-4dd6-97ce-1259a02b1f67'] = $pane;
    $display->panels['gs3_25_50_25_header'][1] = 'new-7cb3e687-7930-4dd6-97ce-1259a02b1f67';
    $pane = new stdClass();
    $pane->pid = 'new-dd768b8d-a1a8-4dc0-9277-20ef249ec6fc';
    $pane->panel = 'gs3_25_50_25_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dd768b8d-a1a8-4dc0-9277-20ef249ec6fc';
    $display->content['new-dd768b8d-a1a8-4dc0-9277-20ef249ec6fc'] = $pane;
    $display->panels['gs3_25_50_25_middle'][0] = 'new-dd768b8d-a1a8-4dc0-9277-20ef249ec6fc';
    $pane = new stdClass();
    $pane->pid = 'new-848181ad-3974-4f21-890e-5b188fa9f048';
    $pane->panel = 'gs3_25_50_25_sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '848181ad-3974-4f21-890e-5b188fa9f048';
    $display->content['new-848181ad-3974-4f21-890e-5b188fa9f048'] = $pane;
    $display->panels['gs3_25_50_25_sidebar'][0] = 'new-848181ad-3974-4f21-890e-5b188fa9f048';
    $pane = new stdClass();
    $pane->pid = 'new-f7eac49d-595b-4618-97eb-cfff180efef5';
    $pane->panel = 'gs3_25_50_25_top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => 'page-heading',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f7eac49d-595b-4618-97eb-cfff180efef5';
    $display->content['new-f7eac49d-595b-4618-97eb-cfff180efef5'] = $pane;
    $display->panels['gs3_25_50_25_top'][0] = 'new-f7eac49d-595b-4618-97eb-cfff180efef5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-848181ad-3974-4f21-890e-5b188fa9f048';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => '"Article"',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'article',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'author',
        'keyword' => 'author',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'news' => 'news',
              'press_release' => 'press_release',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'gs3_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'gs3_25_50_25_header' => NULL,
      'gs3_25_50_25_top' => NULL,
      'gs3_25_50_25_sidebar' => NULL,
      'gs3_25_50_25_middle' => NULL,
      'gs3_25_50_25_inset' => NULL,
      'gs3_25_50_25_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f841ad28-4617-4f46-882b-0a45d6a95e7e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-36dc5df3-2aed-401f-aadb-87de5b9c78d3';
    $pane->panel = 'gs3_25_50_25_header';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '36dc5df3-2aed-401f-aadb-87de5b9c78d3';
    $display->content['new-36dc5df3-2aed-401f-aadb-87de5b9c78d3'] = $pane;
    $display->panels['gs3_25_50_25_header'][0] = 'new-36dc5df3-2aed-401f-aadb-87de5b9c78d3';
    $pane = new stdClass();
    $pane->pid = 'new-7cb3e687-7930-4dd6-97ce-1259a02b1f67';
    $pane->panel = 'gs3_25_50_25_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7cb3e687-7930-4dd6-97ce-1259a02b1f67';
    $display->content['new-7cb3e687-7930-4dd6-97ce-1259a02b1f67'] = $pane;
    $display->panels['gs3_25_50_25_header'][1] = 'new-7cb3e687-7930-4dd6-97ce-1259a02b1f67';
    $pane = new stdClass();
    $pane->pid = 'new-ea93fa44-0bb1-491e-bb1f-5d4525474780';
    $pane->panel = 'gs3_25_50_25_inset';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_research_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Tags',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'tags',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ea93fa44-0bb1-491e-bb1f-5d4525474780';
    $display->content['new-ea93fa44-0bb1-491e-bb1f-5d4525474780'] = $pane;
    $display->panels['gs3_25_50_25_inset'][0] = 'new-ea93fa44-0bb1-491e-bb1f-5d4525474780';
    $pane = new stdClass();
    $pane->pid = 'new-dd768b8d-a1a8-4dc0-9277-20ef249ec6fc';
    $pane->panel = 'gs3_25_50_25_middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dd768b8d-a1a8-4dc0-9277-20ef249ec6fc';
    $display->content['new-dd768b8d-a1a8-4dc0-9277-20ef249ec6fc'] = $pane;
    $display->panels['gs3_25_50_25_middle'][0] = 'new-dd768b8d-a1a8-4dc0-9277-20ef249ec6fc';
    $pane = new stdClass();
    $pane->pid = 'new-848181ad-3974-4f21-890e-5b188fa9f048';
    $pane->panel = 'gs3_25_50_25_sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '848181ad-3974-4f21-890e-5b188fa9f048';
    $display->content['new-848181ad-3974-4f21-890e-5b188fa9f048'] = $pane;
    $display->panels['gs3_25_50_25_sidebar'][0] = 'new-848181ad-3974-4f21-890e-5b188fa9f048';
    $pane = new stdClass();
    $pane->pid = 'new-f7eac49d-595b-4618-97eb-cfff180efef5';
    $pane->panel = 'gs3_25_50_25_top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => 'page-heading',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f7eac49d-595b-4618-97eb-cfff180efef5';
    $display->content['new-f7eac49d-595b-4618-97eb-cfff180efef5'] = $pane;
    $display->panels['gs3_25_50_25_top'][0] = 'new-f7eac49d-595b-4618-97eb-cfff180efef5';
    $pane = new stdClass();
    $pane->pid = 'new-061aa706-1a2f-4f62-8d05-e3d41792ee38';
    $pane->panel = 'gs3_25_50_25_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_blurb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'deck',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '061aa706-1a2f-4f62-8d05-e3d41792ee38';
    $display->content['new-061aa706-1a2f-4f62-8d05-e3d41792ee38'] = $pane;
    $display->panels['gs3_25_50_25_top'][1] = 'new-061aa706-1a2f-4f62-8d05-e3d41792ee38';
    $pane = new stdClass();
    $pane->pid = 'new-ea2a5603-6fc2-4015-aa1c-21808902184d';
    $pane->panel = 'gs3_25_50_25_top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '"Article" node meta-data',
      'title' => '',
      'body' => '<div class="inner float-left">
<span class="author">By %author:name /</span>
<span class="node-type">Gladstone %node:content-type /</span>
<span class="release-date">%node:field-date:article</span>
</div>
<div class="share float-right">
<a href="http://facebook.com/sharer.php?u=%node:url"><i class="fa fa-facebook-square"></i></a>
<a href="http://twitter.com/intent/tweet?url=%node:url&text=%node:title"><i class="fa fa-twitter"></i></a>
</div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'article-node-metadata',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ea2a5603-6fc2-4015-aa1c-21808902184d';
    $display->content['new-ea2a5603-6fc2-4015-aa1c-21808902184d'] = $pane;
    $display->panels['gs3_25_50_25_top'][2] = 'new-ea2a5603-6fc2-4015-aa1c-21808902184d';
    $pane = new stdClass();
    $pane->pid = 'new-30fdc10a-41f7-44dd-8896-6d80d656b494';
    $pane->panel = 'gs3_25_50_25_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'feature_image_page',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'feature-image',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '30fdc10a-41f7-44dd-8896-6d80d656b494';
    $display->content['new-30fdc10a-41f7-44dd-8896-6d80d656b494'] = $pane;
    $display->panels['gs3_25_50_25_top'][3] = 'new-30fdc10a-41f7-44dd-8896-6d80d656b494';
    $pane = new stdClass();
    $pane->pid = 'new-1ce5213e-6456-4961-b18e-d593ed20bc11';
    $pane->panel = 'gs3_25_50_25_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_longtext';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'caption',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '1ce5213e-6456-4961-b18e-d593ed20bc11';
    $display->content['new-1ce5213e-6456-4961-b18e-d593ed20bc11'] = $pane;
    $display->panels['gs3_25_50_25_top'][4] = 'new-1ce5213e-6456-4961-b18e-d593ed20bc11';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-848181ad-3974-4f21-890e-5b188fa9f048';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
