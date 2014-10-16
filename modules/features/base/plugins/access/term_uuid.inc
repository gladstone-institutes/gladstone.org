<?php

/**
 * @file
 * Plugin to provide access control based upon specific terms.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("Taxonomy: term UUID"),
  'description' => t('Control access by a specific term UUID.'),
  'callback' => 'ctools_term_uuid_ctools_access_check',
  'default' => array('vids' => array()),
  'settings form' => 'ctools_term_uuid_ctools_access_settings',
  'settings form validation' => 'ctools_term_uuid_ctools_access_settings_validate',
  'settings form submit' => 'ctools_term_uuid_ctools_access_settings_submit',
  'summary' => 'ctools_term_uuid_ctools_access_summary',
  'required context' => new ctools_context_required(t('Term'), array('taxonomy_term', 'terms')),
);

/**
 * Settings form for the 'by term' access plugin
 */
function ctools_term_uuid_ctools_access_settings($form, &$form_state, $conf) {
  // If no configuration was saved before, set some defaults.
  if (empty($conf)) {
    $conf = array(
      'vocabulary_machine_name' => taxonomy_vocabulary_load(0),
    );
  }
  if (!isset($conf['vocabulary_machine_name'])) {
    $conf['vocabulary_machine_name'] = taxonomy_vocabulary_load(0);
  }

  $form['settings']['vocabulary_machine_name'] = array(
    '#title' => t('Vocabulary'),
    '#type' => 'select',
    '#options' => array(),
    '#description' => t('Select the vocabulary for this form.'),
    '#id' => 'ctools-select-vocabulary_machine_name',
    '#default_value' => $conf['vocabulary_machine_name'],
    '#required' => TRUE,
  );

  ctools_include('dependent');
  $options = array();

  // A note: Dependency works strangely on these forms as they have never been
  // updated to a more modern system so they are not individual forms of their
  // own like the content types.

  $form['settings']['#tree'] = TRUE;

  // Loop over each of the configured vocabularies.
  foreach (taxonomy_get_vocabularies() as $voc) {
    $options[$voc->machine_name] = $voc->name;
    $form['settings'][$voc->machine_name] = array(
      '#title' => t('Terms'),
      '#description' => t('Select a term or terms from @voc.', array('@voc' => $voc->name)), //. $description,
      '#dependency' => array('ctools-select-vocabulary_machine_name' => array($voc->machine_name)),
      '#default_value' => !empty($conf[$voc->machine_name]) ? $conf[$voc->machine_name] : '',
      '#multiple' => TRUE,
    );

    $terms = array();
    foreach (taxonomy_get_tree($voc->vid) as $tid => $term) {
      $terms[$term->uuid] = str_repeat('-', $term->depth) . ($term->depth ? ' ' : '') . $term->name;
    }
    $form['settings'][$voc->machine_name]['#type'] = 'select';
    $form['settings'][$voc->machine_name]['#options'] = $terms;
    unset($terms);
  }
  $form['settings']['vocabulary_machine_name']['#options'] = $options;
  return $form;
}

/**
 * Check for access.
 */
function ctools_term_uuid_ctools_access_check($conf, $context) {
  // As far as I know there should always be a context at this point, but this
  // is safe.
  if (empty($context) || empty($context->data) || empty($context->data->vocabulary_machine_name) || empty($context->data->uuid)) {
    return FALSE;
  }

  // Get the $voc_mname.
  if (!isset($conf['vocabulary_machine_name'])) {
    return FALSE;
  }
  $voc_mname = $conf['vocabulary_machine_name'];

  // Get the terms.
  if (!isset($conf[$voc_mname])) {
    return FALSE;
  }

  $return = FALSE;

  $terms = array_filter($conf[$voc_mname]);
  // For multi-term if any terms coincide, let's call that good enough:
  if (isset($context->tids)) {
    return (bool) array_intersect($terms, $context->tids);
  }
  else {
    return in_array($context->data->uuid, $terms);
  }
}

/**
 * Provide a summary description based upon the checked terms.
 */
function ctools_term_uuid_ctools_access_summary($conf, $context) {
  $voc_mname  = $conf['vocabulary_machine_name'];
  $term_names = array();


  $uuids = array_keys($conf[$voc_mname]);
  $terms = entity_uuid_load('taxonomy_term', $uuids);

  foreach ($terms as $tid => $term) {
    $term_names[] = $term->name;
  }

  return format_plural(count($term_names),
    '@term can be the term "@terms"',
    '@term can be one of these terms: @terms',
    array('@terms' => implode(', ', $term_names),
      '@term' => $context->identifier));
}
