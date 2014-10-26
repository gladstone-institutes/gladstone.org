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

  $entities['ontology_operational_unit_terms'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/a2da3046-4339-42e0-925c-c7ef1f8a6d2c',
      'cause' => 'taxonomy_term/92781701-5f8f-4cec-a21f-ca96b1bf6eb2',
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

  return $entities;
}
