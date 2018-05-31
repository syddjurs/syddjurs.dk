<?php
/**
 * @file
 * Administration form for fancySelect.
 */

/**
 * Page callback: fancySelect admin settings form.
 */
function fancyselect_settings() {
  $form = array();

  $form['fancyselect_dom_selector'] = array(
    '#type' => 'textarea',
    '#title' => t('fancySelect DOM selector'),
    '#default_value' => variable_get('fancyselect_dom_selector', 'fancySelect'),
    '#description' => t('jQuery style DOM selector for select element.'),
    '#size' => 60,
    '#required' => TRUE,
  );
  $form['fancyselect_load_default'] = array(
    '#type' => 'checkbox',
    '#title' => t('Load default'),
    '#default_value' => variable_get('fancyselect_load_default', TRUE),
    '#description' => t('Check this box to load fancySelect plug-in by default. If unchecked, it will need to be added by drupal_add_library or #attached.'),
  );
  $form['fancyselect_force_ios'] = array(
    '#type' => 'checkbox',
    '#title' => t('forceiOS'),
    '#default_value' => variable_get('fancyselect_force_ios', FALSE),
    '#description' => t('Check this box to uses native selects and styles only the trigger on iOS devices.'),
  );
  $form['fancyselect_include_blank'] = array(
    '#type' => 'checkbox',
    '#title' => t('includeBlank'),
    '#default_value' => variable_get('fancyselect_include_blank', FALSE),
    '#description' => t('Check this box to include the blank option in the options list.'),
  );
  return system_settings_form($form);
}
