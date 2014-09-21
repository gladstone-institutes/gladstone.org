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

  $entities['core_roles_and_permissions'][] = (object) array(
    '__metadata' => array(
      'type' => 'user',
      'uri' => 'user/4cc210bb-c97c-4751-8cf6-29356ee978a9',
      'cause' => FALSE,
    ),
    'init' => 'admin@example.com',
    'language' => '',
    'mail' => 'admin@example.com',
    'name' => 'superadmin',
    'pass' => '$S$Dq08QrUSS969OZzdN19UJ9.Enfb.nP2ujUJ196cwkoArAC4VT4zV',
    'picture' => 0,
    'roles' => array(
      2 => 'authenticated user',
    ),
    'signature' => '',
    'signature_format' => 'plain_text',
    'status' => 1,
    'theme' => '',
    'timezone' => 'Europe/Zurich',
    'url_alias' => array(),
    'uuid' => '4cc210bb-c97c-4751-8cf6-29356ee978a9',
  );

  return $entities;
}
