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
      'uri' => 'taxonomy_term/e6de0803-57d4-4c35-b773-454ae8e8d24c',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Administration',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/administration',
        'language' => 'und',
      ),
    ),
    'uuid' => 'e6de0803-57d4-4c35-b773-454ae8e8d24c',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/b7151bfe-79a0-4320-b98e-4972f01d6cf3',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Trustee Member',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/trustee-member',
        'language' => 'und',
      ),
    ),
    'uuid' => 'b7151bfe-79a0-4320-b98e-4972f01d6cf3',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/c9e709fc-189f-472f-a209-01a638dd5017',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Staff Research Assistant',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/staff-research-assistant',
        'language' => 'und',
      ),
    ),
    'uuid' => 'c9e709fc-189f-472f-a209-01a638dd5017',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/383ecc98-a71c-458c-b64b-3fed47be7bad',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Staff Research Scientist',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/staff-research-scientist',
        'language' => 'und',
      ),
    ),
    'uuid' => '383ecc98-a71c-458c-b64b-3fed47be7bad',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/bdc133a4-ca5c-42f3-ba02-0f32473f46cd',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Investigator',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/investigator',
        'language' => 'und',
      ),
    ),
    'uuid' => 'bdc133a4-ca5c-42f3-ba02-0f32473f46cd',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/92453927-732a-4cfd-a3af-17aa1a2bd8ea',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Associate Director',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/associate-director',
        'language' => 'und',
      ),
    ),
    'uuid' => '92453927-732a-4cfd-a3af-17aa1a2bd8ea',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/62ae45b7-022c-4e7b-844f-dac05eb723dc',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Director',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/director',
        'language' => 'und',
      ),
    ),
    'uuid' => '62ae45b7-022c-4e7b-844f-dac05eb723dc',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d23ce91e-93c8-4842-a8ce-00d6d568cc7c',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Emeritus',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/emeritus',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd23ce91e-93c8-4842-a8ce-00d6d568cc7c',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/88e655d9-994e-401a-a7ca-e658ad9169e4',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'President',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/president',
        'language' => 'und',
      ),
    ),
    'uuid' => '88e655d9-994e-401a-a7ca-e658ad9169e4',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/50d544e6-03fb-4a6c-996e-102725ebf865',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Graduate Student',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/graduate-student',
        'language' => 'und',
      ),
    ),
    'uuid' => '50d544e6-03fb-4a6c-996e-102725ebf865',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/598a9d63-df3f-45ee-9efd-59d425b7e276',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Manager',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/manager',
        'language' => 'und',
      ),
    ),
    'uuid' => '598a9d63-df3f-45ee-9efd-59d425b7e276',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/df486cf8-f86a-4204-a7ee-fc8641ac857b',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Officer',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/officer',
        'language' => 'und',
      ),
    ),
    'uuid' => 'df486cf8-f86a-4204-a7ee-fc8641ac857b',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/eacce9dd-c317-4343-b610-fe33983f7065',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Controller',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/controller',
        'language' => 'und',
      ),
    ),
    'uuid' => 'eacce9dd-c317-4343-b610-fe33983f7065',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/3bc18020-a523-4ab4-b263-20ccc1edc4dd',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Visiting',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/visiting',
        'language' => 'und',
      ),
    ),
    'uuid' => '3bc18020-a523-4ab4-b263-20ccc1edc4dd',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/df8a9c26-fb40-4635-988d-96c5459160e3',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Science Administration',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Science Administration',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/science-administration',
        'language' => 'und',
      ),
    ),
    'uuid' => 'df8a9c26-fb40-4635-988d-96c5459160e3',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/b23c0e33-b4d8-4718-9ff3-9835224b3c94',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Gladstone',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Gladstone',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/gladstone',
        'language' => 'und',
      ),
    ),
    'uuid' => 'b23c0e33-b4d8-4718-9ff3-9835224b3c94',
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
