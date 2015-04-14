<?php
/**
 * @file
 * Feeds tamper plugin, find a kle taxonomy term from a kle number.
 */

$plugin = array(
  'form' => 'os2web_selfservicelinks_find_kle_form',
  // Optional validation callback.
  'callback' => 'os2web_selfservicelinks_find_kle_callback',
  'name' => 'Extract KLE and find term id from string',
  'multi' => 'loop',
  'category' => 'KLE',
);

/**
 * Configure form for feeds tamper.
 */
function os2web_selfservicelinks_find_kle_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#markup'] = t('Find term id for kle term from supplied string');

  $vocabularies = taxonomy_get_vocabularies();
  $vocabulary_options = array();
  foreach ($vocabularies as $vocabulary) {
    $vocabulary_options[$vocabulary->vid] = $vocabulary->name;
  }

  $form['vid'] = array(
    '#title' => t('Vocabulary id'),
    '#type' => 'select',
    '#options' => $vocabulary_options,
    '#default_value' => isset($settings['vid']) ? $settings['vid'] : '',
  );
  return $form;
}

/**
 * Callback, doing the actual tampering.
 */
function os2web_selfservicelinks_find_kle_callback($source, $item_key, $element_key, &$field, $settings) {
  $field = os2web_selfservicelinks_find_term($field, $settings['vid']);
}
