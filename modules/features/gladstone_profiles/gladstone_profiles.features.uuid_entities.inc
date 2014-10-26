<?php
/**
 * @file
 * gladstone_profiles.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function gladstone_profiles_uuid_default_entities() {
  $entities = array();

  $entities['profile_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/da79160e-8e47-461b-a277-d802e04c3926',
      'cause' => 'taxonomy_term/aab6312c-432c-4c0a-aeb9-a71777bf6420',
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Research',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/research',
        'language' => 'und',
      ),
    ),
    'uuid' => 'da79160e-8e47-461b-a277-d802e04c3926',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 1,
  );
  $entities['profile_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/aab6312c-432c-4c0a-aeb9-a71777bf6420',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Director',
    'parent' => array(
      0 => 'da79160e-8e47-461b-a277-d802e04c3926',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/director',
        'language' => 'und',
      ),
    ),
    'uuid' => 'aab6312c-432c-4c0a-aeb9-a71777bf6420',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['profile_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/41e0547e-c71f-4aeb-85fd-50001ac6c522',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Associate Director',
    'parent' => array(
      0 => 'da79160e-8e47-461b-a277-d802e04c3926',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/associate-director',
        'language' => 'und',
      ),
    ),
    'uuid' => '41e0547e-c71f-4aeb-85fd-50001ac6c522',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 1,
  );
  $entities['profile_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/dac256ad-e0ea-43b4-85cf-1cf9aaf77219',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Investigator',
    'parent' => array(
      0 => 'da79160e-8e47-461b-a277-d802e04c3926',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/investigator',
        'language' => 'und',
      ),
    ),
    'uuid' => 'dac256ad-e0ea-43b4-85cf-1cf9aaf77219',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 2,
  );
  $entities['profile_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/49ea4a28-1370-44a6-9dbc-80d560d31319',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Staff Research Scientist',
    'parent' => array(
      0 => 'da79160e-8e47-461b-a277-d802e04c3926',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/staff-research-scientist',
        'language' => 'und',
      ),
    ),
    'uuid' => '49ea4a28-1370-44a6-9dbc-80d560d31319',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 3,
  );
  $entities['profile_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/7d611df3-5101-4540-b011-97a679007fe8',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Visiting Scientist',
    'parent' => array(
      0 => 'da79160e-8e47-461b-a277-d802e04c3926',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/visiting-scientist',
        'language' => 'und',
      ),
    ),
    'uuid' => '7d611df3-5101-4540-b011-97a679007fe8',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 4,
  );
  $entities['profile_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
      'cause' => 'taxonomy_term/dd473bde-e5d3-4b59-ac37-e08e3b22addd',
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Variants',
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/variants',
        'language' => 'und',
      ),
    ),
    'uuid' => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    'vocabulary_machine_name' => 'structure',
    'weight' => 5,
  );
  $entities['profile_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/dd473bde-e5d3-4b59-ac37-e08e3b22addd',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Directors and Investigators',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/directors-and-investigators',
        'language' => 'und',
      ),
    ),
    'uuid' => 'dd473bde-e5d3-4b59-ac37-e08e3b22addd',
    'vocabulary_machine_name' => 'structure',
    'weight' => 4,
  );

  return $entities;
}