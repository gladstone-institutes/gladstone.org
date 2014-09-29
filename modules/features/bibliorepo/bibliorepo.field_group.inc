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
    'weight' => 0,
    'children' => array(
      0 => 'body',
      4 => 'field_files',
      5 => 'title',
      6 => 'path',
      7 => 'biblio_type',
      8 => 'biblio_year',
      9 => 'biblio_authors_field',
      10 => 'biblio_secondary_authors_field',
      11 => 'biblio_tertiary_authors_field',
      12 => 'biblio_subsidiary_authors_field',
      13 => 'biblio_corp_authors_field',
      14 => 'biblio_secondary_title',
      15 => 'biblio_tertiary_title',
      16 => 'biblio_volume',
      17 => 'biblio_section',
      18 => 'biblio_edition',
      19 => 'biblio_issue',
      20 => 'biblio_number_of_volumes',
      21 => 'biblio_number',
      22 => 'biblio_pages',
      23 => 'biblio_date',
      24 => 'biblio_publisher',
      25 => 'biblio_place_published',
      26 => 'biblio_type_of_work',
      27 => 'biblio_lang',
      28 => 'biblio_other_author_affiliations',
      29 => 'biblio_isbn',
      30 => 'biblio_issn',
      31 => 'biblio_accession_number',
      32 => 'biblio_call_number',
      33 => 'biblio_other_number',
      34 => 'biblio_keywords',
      35 => 'biblio_abst_e',
      36 => 'biblio_abst_f',
      37 => 'biblio_notes',
      38 => 'biblio_url',
      39 => 'biblio_doi',
      40 => 'biblio_research_notes',
      41 => 'biblio_custom1',
      42 => 'biblio_custom2',
      43 => 'biblio_custom3',
      44 => 'biblio_custom4',
      45 => 'biblio_custom5',
      46 => 'biblio_custom6',
      47 => 'biblio_custom7',
      48 => 'biblio_short_title',
      49 => 'biblio_translated_title',
      50 => 'biblio_alternate_title',
      51 => 'biblio_original_publication',
      52 => 'biblio_reprint_edition',
      53 => 'biblio_citekey',
      54 => 'biblio_coins',
      55 => 'biblio_remote_db_name',
      56 => 'biblio_remote_db_provider',
      57 => 'biblio_auth_address',
      58 => 'biblio_label',
      59 => 'biblio_access_date',
      60 => 'biblio_refereed',
      61 => 'other_fields',
      62 => 'title',
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
    'weight' => 0,
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
    'weight' => 1,
    'children' => array(
      0 => 'field_operational_units',
      1 => 'field_research_tags',
      2 => 'field_node_refs',
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
