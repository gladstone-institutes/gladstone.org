<?php
/**
 * @file
 * ontology.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function ontology_uuid_default_entities() {
  $entities = array();

  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/da79160e-8e47-461b-a277-d802e04c3926',
      'cause' => FALSE,
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
    'weight' => 7,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
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
    'weight' => 1,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
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
    'weight' => 2,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
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
    'weight' => 3,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
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
    'weight' => 4,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
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
    'weight' => 5,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d05d90b9-266a-488c-bc16-e1e29ae61cde',
      'cause' => FALSE,
    ),
    'description' => NULL,
    'format' => NULL,
    'name' => 'Engineer',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/engineer',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd05d90b9-266a-488c-bc16-e1e29ae61cde',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 6,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/c5dda8f9-c5bb-4aac-84fc-aa685883f010',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'President',
    'parent' => array(
      0 => 'da79160e-8e47-461b-a277-d802e04c3926',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/president',
        'language' => 'und',
      ),
    ),
    'uuid' => 'c5dda8f9-c5bb-4aac-84fc-aa685883f010',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/a523ee86-1fb4-4c3f-8ad0-effe5b9173cc',
      'cause' => FALSE,
    ),
    'description' => NULL,
    'format' => NULL,
    'name' => 'Scientific Advisory Board Member',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/scientific-advisory-board-member',
        'language' => 'und',
      ),
    ),
    'uuid' => 'a523ee86-1fb4-4c3f-8ad0-effe5b9173cc',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/a2da3046-4339-42e0-925c-c7ef1f8a6d2c',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Research',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Research',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/research',
        'language' => 'und',
      ),
    ),
    'uuid' => 'a2da3046-4339-42e0-925c-c7ef1f8a6d2c',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 6,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Institute',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Institute',
    'parent' => array(
      0 => 'a2da3046-4339-42e0-925c-c7ef1f8a6d2c',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/institute',
        'language' => 'und',
      ),
    ),
    'uuid' => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/9f091c73-fdcc-470a-a19a-a6bade03039c',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Cardiovascular Disease',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'GICD',
    'parent' => array(
      0 => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/gicd',
        'language' => 'und',
      ),
    ),
    'uuid' => '9f091c73-fdcc-470a-a19a-a6bade03039c',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/1ba15dd3-7ce9-4a37-997a-e45e5343b340',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Neurological Disease',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'GIND',
    'parent' => array(
      0 => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/gind',
        'language' => 'und',
      ),
    ),
    'uuid' => '1ba15dd3-7ce9-4a37-997a-e45e5343b340',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 2,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/33890157-70e8-4b8f-baa0-ac6051467b2d',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Virology & Immunology',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'GIVI',
    'parent' => array(
      0 => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/givi',
        'language' => 'und',
      ),
    ),
    'uuid' => '33890157-70e8-4b8f-baa0-ac6051467b2d',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 1,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/7c6d4536-94d7-4e46-b9ee-cf4733380546',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Stem Cells and Regenerative Medicine',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Stem Cell',
    'parent' => array(
      0 => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/stem-cell',
        'language' => 'und',
      ),
    ),
    'uuid' => '7c6d4536-94d7-4e46-b9ee-cf4733380546',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 3,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/70f4e9ca-ffa3-432c-84bf-879eaf69aa02',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Translational Research',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Translational',
    'parent' => array(
      0 => '92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/translational',
        'language' => 'und',
      ),
    ),
    'uuid' => '70f4e9ca-ffa3-432c-84bf-879eaf69aa02',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 4,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/dbdbc98b-e144-41c0-bc16-dfcb82d94c81',
      'cause' => FALSE,
    ),
    'description' => NULL,
    'field_text' => array(),
    'format' => NULL,
    'name' => 'Trustees',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/trustees',
        'language' => 'und',
      ),
    ),
    'uuid' => 'dbdbc98b-e144-41c0-bc16-dfcb82d94c81',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
      'cause' => FALSE,
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
    'weight' => 6,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/2e99b285-9f9a-410c-a2b9-43a881ba10ab',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Home',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/home',
        'language' => 'und',
      ),
    ),
    'uuid' => '2e99b285-9f9a-410c-a2b9-43a881ba10ab',
    'vocabulary_machine_name' => 'structure',
    'weight' => 1,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/f6c4eda2-4491-4fbf-9831-3a78f0b69b14',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Node',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/node',
        'language' => 'und',
      ),
    ),
    'uuid' => 'f6c4eda2-4491-4fbf-9831-3a78f0b69b14',
    'vocabulary_machine_name' => 'structure',
    'weight' => 0,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/ab33a885-28b0-4e11-b7f9-64f12fc12ab4',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Institute',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/institute',
        'language' => 'und',
      ),
    ),
    'uuid' => 'ab33a885-28b0-4e11-b7f9-64f12fc12ab4',
    'vocabulary_machine_name' => 'structure',
    'weight' => 2,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/8d3c4af2-7287-4db4-ae58-0241ee539f1e',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Feed',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/feed',
        'language' => 'und',
      ),
    ),
    'uuid' => '8d3c4af2-7287-4db4-ae58-0241ee539f1e',
    'vocabulary_machine_name' => 'structure',
    'weight' => 3,
  );
  $entities['ontology_structure_terms'][] = (object) array(
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
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/45b858d9-6a4d-4878-bd63-bcb9f80513e0',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'People',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/people',
        'language' => 'und',
      ),
    ),
    'uuid' => '45b858d9-6a4d-4878-bd63-bcb9f80513e0',
    'vocabulary_machine_name' => 'structure',
    'weight' => 5,
  );

  return $entities;
}
