<?php
/**
 * @file
 * Do super awesome thing.
 */
$plugin = array(
  'form' => 'os2web_selfservicelinks_find_kle_form',
  // Optional validation callback.
  'callback' => 'os2web_selfservicelinks_find_kle_callback',
  'name' => 'Extract KLE and find term id from string',
  'multi' => 'loop',
  'category' => 'KLE',
);

function os2web_selfservicelinks_find_kle_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#markup'] = t('Find term id for kle term from supplied string');

  $vocabularies = taxonomy_get_vocabularies();
  $vocabulary_options = array();
  foreach ($vocabularies as $vocabulary) {
    $vocabulary_options[$vocabulary->vid] = $vocabulary->name;
  }

  error_log(print_r($vocabularies, 1));

  $form['vid'] = array(
    '#title' => t('Vocabulary id'),
    '#type' => 'select',
    '#options' => $vocabulary_options,
    '#default_value' => isset($settings['vid']) ? $settings['vid'] : '',
  );
  return $form;
}

function os2web_selfservicelinks_find_kle_callback($source, $item_key, $element_key, &$field, $settings) {
  $field = os2web_selfservicelinks_find_term($field, $settings['vid']);
  error_log($field);
}
