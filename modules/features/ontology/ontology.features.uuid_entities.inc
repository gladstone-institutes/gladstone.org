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
    'format' => 'plain_text',
    'name' => 'Administration',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/administration',
        'language' => 'und',
      ),
      1 => array(
        'alias' => 'tag/operational-roles/staff/administration',
        'language' => 'und',
      ),
    ),
    'uuid' => 'e6de0803-57d4-4c35-b773-454ae8e8d24c',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 5,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/3bc18020-a523-4ab4-b263-20ccc1edc4dd',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Visiting',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/visiting',
        'language' => 'und',
      ),
      1 => array(
        'alias' => 'tag/operational-roles/faculty/visiting-scientist',
        'language' => 'und',
      ),
    ),
    'uuid' => '3bc18020-a523-4ab4-b263-20ccc1edc4dd',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 4,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/aabbdd0e-fc6d-4d5c-889a-543be10ad58a',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Postdoc',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/postdoc',
        'language' => 'und',
      ),
    ),
    'uuid' => 'aabbdd0e-fc6d-4d5c-889a-543be10ad58a',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 10,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/58ae40ed-e609-4cb4-aa62-a242ae484708',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Chair',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/chair',
        'language' => 'und',
      ),
      1 => array(
        'alias' => 'tag/operational-roles/chair-academic-medicine-advisory-council',
        'language' => 'und',
      ),
      2 => array(
        'alias' => 'tag/operational-roles/medical-scientific-advisory-council-chair',
        'language' => 'und',
      ),
    ),
    'uuid' => '58ae40ed-e609-4cb4-aa62-a242ae484708',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 17,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/2c8a579f-2b31-4e61-83d5-f720c6131a73',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Co-chair',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/co-chair',
        'language' => 'und',
      ),
      1 => array(
        'alias' => 'tag/operational-roles/study-group-3a-co-chair',
        'language' => 'und',
      ),
    ),
    'uuid' => '2c8a579f-2b31-4e61-83d5-f720c6131a73',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 13,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/4dc159e5-a506-4068-82ae-34d972b7d354',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Member',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/member',
        'language' => 'und',
      ),
      1 => array(
        'alias' => 'tag/operational-roles/senate',
        'language' => 'und',
      ),
      2 => array(
        'alias' => 'tag/operational-roles/scientific-advisory-board-member',
        'language' => 'und',
      ),
      3 => array(
        'alias' => 'tag/operational-roles/editorial-board',
        'language' => 'und',
      ),
      4 => array(
        'alias' => 'tag/operational-roles/scientific-advisory-board',
        'language' => 'und',
      ),
      5 => array(
        'alias' => 'tag/operational-roles/basic-science-council',
        'language' => 'und',
      ),
      6 => array(
        'alias' => 'tag/operational-roles/grant-review-panel',
        'language' => 'und',
      ),
      7 => array(
        'alias' => 'tag/operational-roles/internal-advisory-board',
        'language' => 'und',
      ),
    ),
    'uuid' => '4dc159e5-a506-4068-82ae-34d972b7d354',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 20,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/50f9d5fb-0820-494d-9c7d-cb1402c97f20',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Professor',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/professor',
        'language' => 'und',
      ),
    ),
    'uuid' => '50f9d5fb-0820-494d-9c7d-cb1402c97f20',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 11,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/19cd2681-3644-4ff9-8f66-a3afaf44d529',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Fellow',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/fellow',
        'language' => 'und',
      ),
    ),
    'uuid' => '19cd2681-3644-4ff9-8f66-a3afaf44d529',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 7,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/c66077f2-4a44-493d-a665-86cc8c6aecd6',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Consultant',
    'url_alias' => array(
      0 => array(
        'alias' => 'tag/operational-roles/consultant',
        'language' => 'und',
      ),
    ),
    'uuid' => 'c66077f2-4a44-493d-a665-86cc8c6aecd6',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 14,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/c9e709fc-189f-472f-a209-01a638dd5017',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Staff Research Associate',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/staff-research-associate',
        'language' => 'und',
      ),
    ),
    'uuid' => 'c9e709fc-189f-472f-a209-01a638dd5017',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 12,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/383ecc98-a71c-458c-b64b-3fed47be7bad',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Staff Research Scientist',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/staff-research-scientist',
        'language' => 'und',
      ),
      1 => array(
        'alias' => 'tag/operational-roles/staff/staff-research-scientist',
        'language' => 'und',
      ),
    ),
    'uuid' => '383ecc98-a71c-458c-b64b-3fed47be7bad',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 3,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/bdc133a4-ca5c-42f3-ba02-0f32473f46cd',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Investigator',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/investigator',
        'language' => 'und',
      ),
      1 => array(
        'alias' => 'tag/operational-roles/assistant-investigator',
        'language' => 'und',
      ),
      2 => array(
        'alias' => 'tag/operational-roles/faculty/investigator/associate-investigator',
        'language' => 'und',
      ),
      3 => array(
        'alias' => 'tag/operational-roles/faculty/investigator/senior-investigator',
        'language' => 'und',
      ),
      4 => array(
        'alias' => 'tag/operational-roles/faculty/investigator',
        'language' => 'und',
      ),
      5 => array(
        'alias' => 'tag/operational-roles/faculty/investigator/staff-research-investigator',
        'language' => 'und',
      ),
      6 => array(
        'alias' => 'tag/operational-roles/staff/staff-research-investigator',
        'language' => 'und',
      ),
      7 => array(
        'alias' => 'tag/operational-roles/associate-investigator',
        'language' => 'und',
      ),
      8 => array(
        'alias' => 'tag/operational-roles/senior-investigator',
        'language' => 'und',
      ),
    ),
    'uuid' => 'bdc133a4-ca5c-42f3-ba02-0f32473f46cd',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 2,
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
    'weight' => 6,
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
    'weight' => 9,
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
    'weight' => 8,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/50d544e6-03fb-4a6c-996e-102725ebf865',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Graduate Student',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/graduate-student',
        'language' => 'und',
      ),
    ),
    'uuid' => '50d544e6-03fb-4a6c-996e-102725ebf865',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 18,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/88e655d9-994e-401a-a7ca-e658ad9169e4',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'President',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/president',
        'language' => 'und',
      ),
      1 => array(
        'alias' => 'tag/operational-roles/president-board-directors',
        'language' => 'und',
      ),
    ),
    'uuid' => '88e655d9-994e-401a-a7ca-e658ad9169e4',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 19,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d23ce91e-93c8-4842-a8ce-00d6d568cc7c',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Emeritus',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/emeritus',
        'language' => 'und',
      ),
      1 => array(
        'alias' => 'tag/operational-roles/president-emeritus',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd23ce91e-93c8-4842-a8ce-00d6d568cc7c',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 16,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/62ae45b7-022c-4e7b-844f-dac05eb723dc',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Director',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-roles/director',
        'language' => 'und',
      ),
      1 => array(
        'alias' => 'tag/operational-roles/faculty/director',
        'language' => 'und',
      ),
      2 => array(
        'alias' => 'tag/operational-roles/faculty/associate-director',
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
    'weight' => 1,
  );
  $entities['ontology_operational_role_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/a97c74bd-394b-4d76-a8d1-9088a33f8479',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Scientific Advisor',
    'url_alias' => array(
      0 => array(
        'alias' => 'tag/operational-roles/scientific-advisor',
        'language' => 'und',
      ),
    ),
    'uuid' => 'a97c74bd-394b-4d76-a8d1-9088a33f8479',
    'vocabulary_machine_name' => 'operational_roles',
    'weight' => 15,
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
      'uri' => 'taxonomy_term/5a92ee83-47a2-4dc9-89d2-ddd15f47d22f',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Information Technology',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'IT',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/information-technology',
        'language' => 'und',
      ),
    ),
    'uuid' => '5a92ee83-47a2-4dc9-89d2-ddd15f47d22f',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/4627a784-ee9b-48c9-b8f7-a3860cae178d',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Operations',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Operations',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/operations',
        'language' => 'und',
      ),
    ),
    'uuid' => '4627a784-ee9b-48c9-b8f7-a3860cae178d',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/092e4408-90cc-40ec-b016-23e482ab0f11',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'President\'s Council',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'President\'s Council',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/presidents-council',
        'language' => 'und',
      ),
    ),
    'uuid' => '092e4408-90cc-40ec-b016-23e482ab0f11',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d9d75b2f-e5cc-4fd4-886c-c52f182470cf',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Institutional Advancement',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Institutional Advancement',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/institutional-advancement',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd9d75b2f-e5cc-4fd4-886c-c52f182470cf',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/fe2d30bb-674f-4e4b-b9da-c8102a564f42',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Development',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Development',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/development',
        'language' => 'und',
      ),
    ),
    'uuid' => 'fe2d30bb-674f-4e4b-b9da-c8102a564f42',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/02779f14-e1c8-4c3b-9ae6-c0f050d022d8',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Intellectual Property',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Intellectual Property',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/intellectual-property',
        'language' => 'und',
      ),
    ),
    'uuid' => '02779f14-e1c8-4c3b-9ae6-c0f050d022d8',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/c4183e9c-c6b9-4aa7-9fae-4f6a959252af',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Communications',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Communications',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/communications',
        'language' => 'und',
      ),
    ),
    'uuid' => 'c4183e9c-c6b9-4aa7-9fae-4f6a959252af',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/5f6b4531-71bc-4a5a-b360-253268a319c3',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Accounting',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Accounting',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/accounting',
        'language' => 'und',
      ),
    ),
    'uuid' => '5f6b4531-71bc-4a5a-b360-253268a319c3',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/b56e7641-8559-4b06-aba8-6cc13b2bc85a',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Facilities',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Facilities',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/facilities',
        'language' => 'und',
      ),
    ),
    'uuid' => 'b56e7641-8559-4b06-aba8-6cc13b2bc85a',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d361ce07-8976-483b-9ea9-b72a9865f947',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'President\'s Office',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'President\'s Office',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/presidents-office',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd361ce07-8976-483b-9ea9-b72a9865f947',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/9dbdae10-c08e-4cb6-a264-4673be12f6e4',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Human Resources',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Human Resources',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/human-resources',
        'language' => 'und',
      ),
    ),
    'uuid' => '9dbdae10-c08e-4cb6-a264-4673be12f6e4',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/20e12bb1-122d-4a05-8087-49a4ff004f37',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Grants & Contracts',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Grants and Contracts',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/grants-and-contracts',
        'language' => 'und',
      ),
    ),
    'uuid' => '20e12bb1-122d-4a05-8087-49a4ff004f37',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d6032808-de30-4454-b177-f9b032b543c6',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Finance',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Finance',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/finance',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd6032808-de30-4454-b177-f9b032b543c6',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
      'cause' => 'taxonomy_term/9f091c73-fdcc-470a-a19a-a6bade03039c',
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
      'uri' => 'taxonomy_term/7de8cbe0-4321-4ba2-8e31-fadd97830cc3',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Advisory Board',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Advisory Board',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/advisory-board',
        'language' => 'und',
      ),
    ),
    'uuid' => '7de8cbe0-4321-4ba2-8e31-fadd97830cc3',
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
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/ece2a512-252d-4a46-9988-e9ab121ee976',
      'cause' => FALSE,
    ),
    'description' => NULL,
    'field_text' => array(),
    'format' => NULL,
    'name' => 'Foundation',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/foundation',
        'language' => 'und',
      ),
    ),
    'uuid' => 'ece2a512-252d-4a46-9988-e9ab121ee976',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/ca4cefd8-41c6-4e0a-9e57-984417d67e9b',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(),
    'format' => 'rich_text',
    'name' => 'President & Directors',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/president-directors',
        'language' => 'und',
      ),
    ),
    'uuid' => 'ca4cefd8-41c6-4e0a-9e57-984417d67e9b',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 7,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/9426a451-58f8-40ea-81ea-e90d15539569',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(),
    'format' => 'rich_text',
    'name' => 'Administration',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/administration',
        'language' => 'und',
      ),
    ),
    'uuid' => '9426a451-58f8-40ea-81ea-e90d15539569',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 7,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/6e2f4c2d-5e3e-4205-82d1-6b84a6976e6f',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Outreach',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Outreach',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/outreach',
        'language' => 'und',
      ),
    ),
    'uuid' => '6e2f4c2d-5e3e-4205-82d1-6b84a6976e6f',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/ea027cc9-7502-4f0c-b142-44c35f9b74bc',
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
    'uuid' => 'ea027cc9-7502-4f0c-b142-44c35f9b74bc',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/5b176079-3aaf-43cf-bfb2-b7162e6b22d8',
      'cause' => FALSE,
    ),
    'description' => '',
    'field_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Scientific Advisory Board',
        ),
      ),
    ),
    'format' => 'rich_text',
    'name' => 'Scientific Advisory Board',
    'url_alias' => array(
      0 => array(
        'alias' => 'operational-units/scientific-advisory-board',
        'language' => 'und',
      ),
    ),
    'uuid' => '5b176079-3aaf-43cf-bfb2-b7162e6b22d8',
    'vocabulary_machine_name' => 'operational_units',
    'weight' => 0,
  );
  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/410cdbf4-4910-40c2-8f02-1c6595d0a02f',
      'cause' => FALSE,
    ),
    'description' => '
',
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
    'uuid' => '410cdbf4-4910-40c2-8f02-1c6595d0a02f',
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
    'weight' => 17,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/ab33a885-28b0-4e11-b7f9-64f12fc12ab4',
      'cause' => 'taxonomy_term/e3b94d32-ec1c-4903-b721-7de4207df68f',
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
    'weight' => 6,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/e3b94d32-ec1c-4903-b721-7de4207df68f',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Advisory Board',
    'parent' => array(
      0 => 'ab33a885-28b0-4e11-b7f9-64f12fc12ab4',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/advisory-board',
        'language' => 'und',
      ),
    ),
    'uuid' => 'e3b94d32-ec1c-4903-b721-7de4207df68f',
    'vocabulary_machine_name' => 'structure',
    'weight' => 3,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/0c97f50d-5702-40ac-afd5-0f9667100d61',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Recent Advances',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/recent-advances',
        'language' => 'und',
      ),
    ),
    'uuid' => '0c97f50d-5702-40ac-afd5-0f9667100d61',
    'vocabulary_machine_name' => 'structure',
    'weight' => 4,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d3bc1352-edcf-404d-8284-74405d1cb251',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Publications',
    'parent' => array(
      0 => 'ab33a885-28b0-4e11-b7f9-64f12fc12ab4',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/publications',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd3bc1352-edcf-404d-8284-74405d1cb251',
    'vocabulary_machine_name' => 'structure',
    'weight' => 6,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/474b5cc1-6390-41b5-9afe-92dbb059b36d',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Press Releases',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/press-releases',
        'language' => 'und',
      ),
    ),
    'uuid' => '474b5cc1-6390-41b5-9afe-92dbb059b36d',
    'vocabulary_machine_name' => 'structure',
    'weight' => 5,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/58f4e0cf-6f3e-42a0-9168-eebb9c6300d7',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'News',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/news-0',
        'language' => 'und',
      ),
    ),
    'uuid' => '58f4e0cf-6f3e-42a0-9168-eebb9c6300d7',
    'vocabulary_machine_name' => 'structure',
    'weight' => 3,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d52fb24b-3035-48a8-9756-0c0de9e85789',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'In the News',
    'parent' => array(
      0 => 'aab1d176-c0e7-4f1d-86ed-fe4f47c924a6',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/news',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd52fb24b-3035-48a8-9756-0c0de9e85789',
    'vocabulary_machine_name' => 'structure',
    'weight' => 2,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/379f631e-2df1-4d0e-b53a-0c97b37636d5',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Honors and Awards',
    'parent' => array(
      0 => 'ab33a885-28b0-4e11-b7f9-64f12fc12ab4',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/honors-and-awards',
        'language' => 'und',
      ),
    ),
    'uuid' => '379f631e-2df1-4d0e-b53a-0c97b37636d5',
    'vocabulary_machine_name' => 'structure',
    'weight' => 5,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/affa8be3-05e2-482a-b203-2096e11a1dfd',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Events',
    'parent' => array(
      0 => 'ab33a885-28b0-4e11-b7f9-64f12fc12ab4',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/events',
        'language' => 'und',
      ),
    ),
    'uuid' => 'affa8be3-05e2-482a-b203-2096e11a1dfd',
    'vocabulary_machine_name' => 'structure',
    'weight' => 7,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/f056f1a8-e1c6-4adf-b9af-63a9084cfe63',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Areas of Investigation',
    'parent' => array(
      0 => 'ab33a885-28b0-4e11-b7f9-64f12fc12ab4',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/areas-investigation',
        'language' => 'und',
      ),
    ),
    'uuid' => 'f056f1a8-e1c6-4adf-b9af-63a9084cfe63',
    'vocabulary_machine_name' => 'structure',
    'weight' => 2,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/71dc946d-318f-45e6-a484-d1b2dbcfcca4',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Director\'s Vision',
    'parent' => array(
      0 => 'ab33a885-28b0-4e11-b7f9-64f12fc12ab4',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/directors-vision',
        'language' => 'und',
      ),
    ),
    'uuid' => '71dc946d-318f-45e6-a484-d1b2dbcfcca4',
    'vocabulary_machine_name' => 'structure',
    'weight' => 1,
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
    'weight' => 7,
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
      0 => 'ab33a885-28b0-4e11-b7f9-64f12fc12ab4',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/directors-and-investigators',
        'language' => 'und',
      ),
    ),
    'uuid' => 'dd473bde-e5d3-4b59-ac37-e08e3b22addd',
    'vocabulary_machine_name' => 'structure',
    'weight' => 8,
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
      'uri' => 'taxonomy_term/2e99b285-9f9a-410c-a2b9-43a881ba10ab',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Home',
    'parent' => array(
      0 => 'ab33a885-28b0-4e11-b7f9-64f12fc12ab4',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/home',
        'language' => 'und',
      ),
    ),
    'uuid' => '2e99b285-9f9a-410c-a2b9-43a881ba10ab',
    'vocabulary_machine_name' => 'structure',
    'weight' => 0,
  );
  $entities['ontology_structure_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/1b994441-32a4-4e24-96de-cb6a2dcbe62a',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'rich_text',
    'name' => 'Research Centers',
    'parent' => array(
      0 => 'ab33a885-28b0-4e11-b7f9-64f12fc12ab4',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'structure/research-centers',
        'language' => 'und',
      ),
    ),
    'uuid' => '1b994441-32a4-4e24-96de-cb6a2dcbe62a',
    'vocabulary_machine_name' => 'structure',
    'weight' => 4,
  );

  return $entities;
}
