<?php

/**
 * @file
 *
 * Plugin to provide an argument handler for a Taxonomy term
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("Taxonomy term: UUID or name"),
  // keyword to use for %substitution
  'keyword' => 'term',
  'description' => t('Creates a single taxonomy term from a taxonomy UUID or taxonomy term name.'),
  'context' => 'ctools_term_uuid_context',
  'default' => array('input_form' => 'uuid', 'breadcrumb' => TRUE, 'transform' => FALSE),
  'settings form' => 'ctools_term_uuid_settings_form',
  'placeholder form' => 'ctools_term_uuid_ctools_argument_placeholder',
  'breadcrumb' => 'ctools_term_uuid_breadcrumb',
);

/**
 * Discover if this argument gives us the term we crave.
 */
function ctools_term_uuid_context($arg = NULL, $conf = NULL, $empty = FALSE) {
  // If unset it wants a generic, unfilled context.
  if ($empty) {
    return ctools_context_create_empty('entity:taxonomy_term');
  }

  if (is_object($arg)) {
    $term = $arg;
  }
  else {
    switch ($conf['input_form']) {
      case 'uuid':
      default:
        if (!is_numeric($arg)) {
          return FALSE;
        }
        $entities = entity_uuid_load('taxonomy_term', array($arg));
        $term = array_shift($entities);
        break;

      case 'term':
        if (!empty($conf['transform'])) {
          $arg = strtr($arg, '-', ' ');
        }

        $terms = taxonomy_get_term_by_name($arg);

        $conf['vocabularies'] = is_array($conf['vocabularies']) ? array_filter($conf['vocabularies']) : NULL;
        if ((count($terms) > 1) && isset($conf['vocabularies'])) {
          foreach ($terms as $potential) {
            foreach ($conf['vocabularies'] as $voc => $active) {
              if ($active && $potential->vocabulary_machine_name  == $voc) {
                $term = $potential;
                // break out of the foreaches AND the case
                break 3;
              }
            }
          }
        }
        $term = array_shift($terms);
        break;
    }

    if (empty($term)) {
      return NULL;
    }
  }

  if (!empty($conf['vocabularies']) && array_filter($conf['vocabularies']) && empty($conf['vocabularies'][$term->vocabulary_machine_name])) {
    return NULL;
  }

  $context = ctools_context_create('entity:taxonomy_term', $term);
  $context->original_argument = $arg;
  return $context;
}

/**
 * Settings form for the argument
 */
function ctools_term_uuid_settings_form(&$form, &$form_state, $conf) {
  // @todo allow synonym use like Views does.
  $form['settings']['input_form'] = array(
    '#title' => t('Argument type'),
    '#type' => 'radios',
    '#options' => array('uuid' => t('Term UUID'), 'term' => t('Term name')),
    '#default_value' => $conf['input_form'],
    '#prefix' => '<div class="clearfix">',
    '#suffix' => '</div>',
  );

  $vocabularies = taxonomy_get_vocabularies();
  $options = array();
  foreach ($vocabularies as $vid => $vocab) {
    $options[$vocab->machine_name] = $vocab->name;
  }
  $form['settings']['vocabularies'] = array(
    '#title' => t('Limit to these vocabularies'),
    '#type' => 'checkboxes',
    '#options' => $options,
    '#default_value' => !empty($conf['vocabularies']) ? $conf['vocabularies'] : array(),
    '#description' => t('If no vocabularies are checked, terms from all vocabularies will be accepted.'),
  );

  $form['settings']['breadcrumb'] = array(
    '#title' => t('Inject hierarchy into breadcrumb trail'),
    '#type' => 'checkbox',
    '#default_value' => !empty($conf['breadcrumb']),
    '#description' => t('If checked, taxonomy term parents will appear in the breadcrumb trail.'),
  );

  $form['settings']['transform'] = array(
    '#title' => t('Transform dashes in URL to spaces in term name filter values'),
    '#type' => 'checkbox',
    '#default_value' => !empty($conf['transform']),
  );
//  return $form;
}

/**
 * Form fragment to get an argument to convert a placeholder for preview.
 */
function ctools_term_uuid_ctools_argument_placeholder($conf) {
  switch ($conf['input_form']) {
    case 'uuid':
    default:
      return array(
        '#type' => 'textfield',
        '#description' => t('Enter a taxonomy term UUID.'),
      );
    case 'term':
      return array(
        '#type' => 'textfield',
        '#description' => t('Enter a taxonomy term name.'),
      );
  }
}

/**
 * Inject the breadcrumb trail if necessary.
 */
function ctools_term_uuid_breadcrumb($conf, $context) {
  if (empty($conf['breadcrumb']) || empty($context->data) || empty($context->data->tid)) {
    return;
  }

  $breadcrumb = array();
  $current = new stdClass();
  $current->tid = $context->data->tid;
  while ($parents = taxonomy_get_parents($current->tid)) {
    $current = array_shift($parents);
    $breadcrumb[] = l($current->name, 'taxonomy/term/' . $current->tid);
  }

  $breadcrumb = array_merge(drupal_get_breadcrumb(), array_reverse($breadcrumb));
  drupal_set_breadcrumb($breadcrumb);
}
