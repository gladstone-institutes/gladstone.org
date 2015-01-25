<?php
/**
 * @file
 * structure.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function structure_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'global';
  $linkit_profile->admin_title = 'Global';
  $linkit_profile->admin_description = 'System wide WYSIWYG settings';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = array(
    'text_formats' => array(
      'rich_text' => 'rich_text',
      'limited_html' => 'limited_html',
      'full_html' => 'full_html',
      'plain_text' => 'plain_text',
      'php_code' => 0,
    ),
    'search_plugins' => array(
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-9',
      ),
      'entity:profile2' => array(
        'enabled' => 0,
        'weight' => '-7',
      ),
      'entity:user' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:relation' => array(
        'enabled' => 0,
        'weight' => '-6',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-5',
      ),
      'entity:file' => array(
        'enabled' => 1,
        'weight' => '-8',
      ),
      'entity:menu_link' => array(
        'enabled' => 0,
        'weight' => '-4',
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'biblio' => 'biblio',
        'event_calendar' => 'event_calendar',
        'honors_and_awards' => 'honors_and_awards',
        'in_the_news' => 'in_the_news',
        'news' => 'news',
        'press_release' => 'press_release',
        'technology' => 'technology',
        'basic_page' => 0,
        'site_page' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 1,
    ),
    'entity:profile2' => array(
      'result_description' => '',
      'bundles' => array(
        'curriculum_vitae' => 0,
        'external_cv' => 0,
        'leadership' => 0,
        'profile' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:relation' => array(
      'result_description' => '',
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'video' => 0,
        'image' => 0,
        'audio' => 0,
        'document' => 0,
        'web_video' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'direct',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'event_calendar_status' => 0,
        'operational_units' => 0,
        'research' => 0,
        'structure' => 0,
        'event_type' => 0,
        'honors_and_awards' => 0,
        'concentration_of_study' => 0,
        'institution_operational_unit' => 0,
        'institutions' => 0,
        'operational_roles' => 0,
        'operational_titles' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'entity:menu_link' => array(
      'result_description' => '',
      'bundles' => array(
        'main-menu' => 'main-menu',
        'menu-connect-with-us' => 0,
        'menu-donate' => 0,
        'menu-footer-menu' => 0,
        'management' => 0,
        'navigation' => 0,
        'menu-quick-menu' => 0,
        'user-menu' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'insert_plugin' => array(
      'url_method' => '3',
    ),
    'attribute_plugins' => array(
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['global'] = $linkit_profile;

  return $export;
}
