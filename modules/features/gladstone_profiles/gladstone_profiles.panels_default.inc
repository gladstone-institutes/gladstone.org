<?php
/**
 * @file
 * gladstone_profiles.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function gladstone_profiles_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'curriculum_vitae_tab';
  $mini->category = 'Gladstone';
  $mini->admin_title = 'Curriculum Vitae Tab';
  $mini->admin_description = 'Public facing fields displayed by profile ajax tabs';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'User (UUID)',
      'keyword' => 'user',
      'name' => 'entity_uuid:user',
      'uuid' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array(
    0 => array(
      'identifier' => 'cv from user',
      'keyword' => 'cv',
      'name' => 'profile2',
      'type' => 'curriculum_vitae',
      'context' => 'requiredcontext_entity_uuid:user_1',
      'id' => 1,
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b3066d55-a338-490a-9fca-73313ecc91aa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ae39d0bd-2b48-4a53-a239-3c34dd249a4e';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_research_interests';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 0,
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
    $pane->uuid = 'ae39d0bd-2b48-4a53-a239-3c34dd249a4e';
    $display->content['new-ae39d0bd-2b48-4a53-a239-3c34dd249a4e'] = $pane;
    $display->panels['one_main'][0] = 'new-ae39d0bd-2b48-4a53-a239-3c34dd249a4e';
    $pane = new stdClass();
    $pane->pid = 'new-3d41c335-e582-40c7-b1f1-3e8c5193ff62';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_lab_focus';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 0,
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
    $pane->uuid = '3d41c335-e582-40c7-b1f1-3e8c5193ff62';
    $display->content['new-3d41c335-e582-40c7-b1f1-3e8c5193ff62'] = $pane;
    $display->panels['one_main'][1] = 'new-3d41c335-e582-40c7-b1f1-3e8c5193ff62';
    $pane = new stdClass();
    $pane->pid = 'new-ce8e5639-c46c-4d5c-b685-f14323441d3d';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_achievements';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ce8e5639-c46c-4d5c-b685-f14323441d3d';
    $display->content['new-ce8e5639-c46c-4d5c-b685-f14323441d3d'] = $pane;
    $display->panels['one_main'][2] = 'new-ce8e5639-c46c-4d5c-b685-f14323441d3d';
    $pane = new stdClass();
    $pane->pid = 'new-15d21289-65fe-44a2-8624-bc7c6016975c';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_professional_titles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'profile',
      ),
      'context' => 'relationship_profile2_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '15d21289-65fe-44a2-8624-bc7c6016975c';
    $display->content['new-15d21289-65fe-44a2-8624-bc7c6016975c'] = $pane;
    $display->panels['one_main'][3] = 'new-15d21289-65fe-44a2-8624-bc7c6016975c';
    $pane = new stdClass();
    $pane->pid = 'new-8bb64567-fcd4-435f-88a1-168c02260794';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_affiliations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'profile',
      ),
      'context' => 'relationship_profile2_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8bb64567-fcd4-435f-88a1-168c02260794';
    $display->content['new-8bb64567-fcd4-435f-88a1-168c02260794'] = $pane;
    $display->panels['one_main'][4] = 'new-8bb64567-fcd4-435f-88a1-168c02260794';
    $pane = new stdClass();
    $pane->pid = 'new-febe9816-3338-4726-82cb-ec8d23f3b78d';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_editorial_board';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => 'relationship_profile2_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'febe9816-3338-4726-82cb-ec8d23f3b78d';
    $display->content['new-febe9816-3338-4726-82cb-ec8d23f3b78d'] = $pane;
    $display->panels['one_main'][5] = 'new-febe9816-3338-4726-82cb-ec8d23f3b78d';
    $pane = new stdClass();
    $pane->pid = 'new-64685ce3-b18b-48a8-a0c8-b126c4a5ad66';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_education';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'profile',
      ),
      'context' => 'relationship_profile2_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '64685ce3-b18b-48a8-a0c8-b126c4a5ad66';
    $display->content['new-64685ce3-b18b-48a8-a0c8-b126c4a5ad66'] = $pane;
    $display->panels['one_main'][6] = 'new-64685ce3-b18b-48a8-a0c8-b126c4a5ad66';
    $pane = new stdClass();
    $pane->pid = 'new-19aa163b-8471-4564-a994-0c8762ef2717';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_institutions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '19aa163b-8471-4564-a994-0c8762ef2717';
    $display->content['new-19aa163b-8471-4564-a994-0c8762ef2717'] = $pane;
    $display->panels['one_main'][7] = 'new-19aa163b-8471-4564-a994-0c8762ef2717';
    $pane = new stdClass();
    $pane->pid = 'new-64ac4581-663d-4f6e-b0a8-24954a05e557';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_honors_and_awards_rels';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'relation_add_endpoints_and_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 1,
      'override_title_text' => 'Honors and Awards',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '64ac4581-663d-4f6e-b0a8-24954a05e557';
    $display->content['new-64ac4581-663d-4f6e-b0a8-24954a05e557'] = $pane;
    $display->panels['one_main'][8] = 'new-64ac4581-663d-4f6e-b0a8-24954a05e557';
    $pane = new stdClass();
    $pane->pid = 'new-8e6bfc7f-fffa-440b-a8ec-e709aca07f9e';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_node_refs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'default',
        'links' => 1,
      ),
      'context' => 'relationship_profile2_1',
      'override_title' => 1,
      'override_title_text' => 'Press Coverage',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '8e6bfc7f-fffa-440b-a8ec-e709aca07f9e';
    $display->content['new-8e6bfc7f-fffa-440b-a8ec-e709aca07f9e'] = $pane;
    $display->panels['one_main'][9] = 'new-8e6bfc7f-fffa-440b-a8ec-e709aca07f9e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ae39d0bd-2b48-4a53-a239-3c34dd249a4e';
  $mini->display = $display;
  $export['curriculum_vitae_tab'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'profile_tab';
  $mini->category = 'Gladstone';
  $mini->admin_title = 'Profile Tab';
  $mini->admin_description = 'Public facing fields displayed by profile ajax tabs';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'User (UUID)',
      'keyword' => 'user',
      'name' => 'entity_uuid:user',
      'uuid' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array(
    0 => array(
      'identifier' => 'profile from user',
      'keyword' => 'profile',
      'name' => 'profile2',
      'type' => 'profile',
      'context' => 'requiredcontext_entity_uuid:user_1',
      'id' => 1,
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5d154525-e6ab-4a26-bfc4-9a2bfb5cb2b4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5720eb0f-4c47-4336-8540-7f738d7814e8';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_biography';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 0,
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
    $pane->uuid = '5720eb0f-4c47-4336-8540-7f738d7814e8';
    $display->content['new-5720eb0f-4c47-4336-8540-7f738d7814e8'] = $pane;
    $display->panels['one_main'][0] = 'new-5720eb0f-4c47-4336-8540-7f738d7814e8';
    $pane = new stdClass();
    $pane->pid = 'new-57a925ae-8bfd-490d-8e27-4800d82f78a8';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_research_interests';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 1,
      'override_title_text' => 'Research Interests',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '57a925ae-8bfd-490d-8e27-4800d82f78a8';
    $display->content['new-57a925ae-8bfd-490d-8e27-4800d82f78a8'] = $pane;
    $display->panels['one_main'][1] = 'new-57a925ae-8bfd-490d-8e27-4800d82f78a8';
    $pane = new stdClass();
    $pane->pid = 'new-5b2ee7fb-5660-4181-9405-dd6a661a2416';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_accomplishments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5b2ee7fb-5660-4181-9405-dd6a661a2416';
    $display->content['new-5b2ee7fb-5660-4181-9405-dd6a661a2416'] = $pane;
    $display->panels['one_main'][2] = 'new-5b2ee7fb-5660-4181-9405-dd6a661a2416';
    $pane = new stdClass();
    $pane->pid = 'new-7860cd00-e36a-42f9-93ae-dd9eacaec29a';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_training';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7860cd00-e36a-42f9-93ae-dd9eacaec29a';
    $display->content['new-7860cd00-e36a-42f9-93ae-dd9eacaec29a'] = $pane;
    $display->panels['one_main'][3] = 'new-7860cd00-e36a-42f9-93ae-dd9eacaec29a';
    $pane = new stdClass();
    $pane->pid = 'new-f46a349b-b7b4-4226-8ae8-73bd9a8d1d42';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'profile2:field_longtext';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:profile2:profile:field_longtext',
          'settings' => array(
            'field_longtext' => array(
              'und' => array(
                0 => array(
                  'value' => '',
                  'format' => 'plain_text',
                ),
              ),
            ),
            'field_longtext_value' => array(
              0 => array(
                'value' => '',
                'format' => 'plain_text',
              ),
            ),
            'field_longtext_format' => array(
              0 => array(
                'value' => '',
                'format' => 'plain_text',
              ),
            ),
          ),
          'context' => 'relationship_profile2_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_profile2_1',
      'override_title' => 1,
      'override_title_text' => 'Why Gladstone',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f46a349b-b7b4-4226-8ae8-73bd9a8d1d42';
    $display->content['new-f46a349b-b7b4-4226-8ae8-73bd9a8d1d42'] = $pane;
    $display->panels['one_main'][4] = 'new-f46a349b-b7b4-4226-8ae8-73bd9a8d1d42';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5720eb0f-4c47-4336-8540-7f738d7814e8';
  $mini->display = $display;
  $export['profile_tab'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'publications_tab';
  $mini->category = 'Gladstone';
  $mini->admin_title = 'Publications Tab';
  $mini->admin_description = 'Public facing fields displayed by profile ajax tabs';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'select',
      'uid' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2fa31004-5859-4f1c-b2aa-80e03d787e0a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d9d58378-9e07-43c0-a3f8-11a2872454b3';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_user_content-profile_pubs_ca_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'offset' => '0',
      'arguments' => array(
        'drupal_uid' => '%user:uid',
      ),
      'fields_override' => array(
        'citation' => 1,
        'field_research_tags' => 1,
        'field_operational_units' => 1,
      ),
      'override_title' => 0,
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
    $pane->uuid = 'd9d58378-9e07-43c0-a3f8-11a2872454b3';
    $display->content['new-d9d58378-9e07-43c0-a3f8-11a2872454b3'] = $pane;
    $display->panels['one_main'][0] = 'new-d9d58378-9e07-43c0-a3f8-11a2872454b3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['publications_tab'] = $mini;

  return $export;
}
