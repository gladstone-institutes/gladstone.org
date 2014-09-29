<?php
/**
 * @file
 * bibliorepo.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bibliorepo_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|biblio|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biblio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_files',
      2 => 'title',
      3 => 'path',
      4 => 'biblio_type',
      5 => 'biblio_year',
      6 => 'biblio_authors_field',
      7 => 'biblio_secondary_authors_field',
      8 => 'biblio_tertiary_authors_field',
      9 => 'biblio_subsidiary_authors_field',
      10 => 'biblio_corp_authors_field',
      11 => 'biblio_secondary_title',
      12 => 'biblio_tertiary_title',
      13 => 'biblio_volume',
      14 => 'biblio_section',
      15 => 'biblio_edition',
      16 => 'biblio_issue',
      17 => 'biblio_number_of_volumes',
      18 => 'biblio_number',
      19 => 'biblio_pages',
      20 => 'biblio_date',
      21 => 'biblio_publisher',
      22 => 'biblio_place_published',
      23 => 'biblio_type_of_work',
      24 => 'biblio_lang',
      25 => 'biblio_other_author_affiliations',
      26 => 'biblio_isbn',
      27 => 'biblio_issn',
      28 => 'biblio_accession_number',
      29 => 'biblio_call_number',
      30 => 'biblio_other_number',
      31 => 'biblio_keywords',
      32 => 'biblio_abst_e',
      33 => 'biblio_abst_f',
      34 => 'biblio_notes',
      35 => 'biblio_url',
      36 => 'biblio_doi',
      37 => 'biblio_research_notes',
      38 => 'biblio_custom1',
      39 => 'biblio_custom2',
      40 => 'biblio_custom3',
      41 => 'biblio_custom4',
      42 => 'biblio_custom5',
      43 => 'biblio_custom6',
      44 => 'biblio_custom7',
      45 => 'biblio_short_title',
      46 => 'biblio_translated_title',
      47 => 'biblio_alternate_title',
      48 => 'biblio_original_publication',
      49 => 'biblio_reprint_edition',
      50 => 'biblio_citekey',
      51 => 'biblio_coins',
      52 => 'biblio_remote_db_name',
      53 => 'biblio_remote_db_provider',
      54 => 'biblio_auth_address',
      55 => 'biblio_label',
      56 => 'biblio_access_date',
      57 => 'biblio_refereed',
      58 => 'other_fields',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_content|node|biblio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|biblio|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biblio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_tagging',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_tabs|node|biblio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tagging|node|biblio|form';
  $field_group->group_name = 'group_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biblio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Tagging',
    'weight' => '1',
    'children' => array(
      0 => 'field_node_refs',
      1 => 'field_operational_units',
      2 => 'field_research_tags',
      3 => 'field_user_refs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tagging field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_tagging|node|biblio|form'] = $field_group;

  return $export;
}
