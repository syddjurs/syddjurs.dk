<?php

function _theme_settings_form(&$form, $form_state) {

  // Vertical tabs
  $form['options'] = array(
    '#type' => 'vertical_tabs',
    '#default_tab' => 'main',
    '#weight' => '-20',
    '#prefix' => '<h2><small>' . t('Site indstillinger') . '</small></h2>',
    '#title' => t('Indstillinger'),
  );

  /*
  |--------------------------------------------------------------------------
  | Page layout
  |--------------------------------------------------------------------------
  |
  | Sets all necessary options to save data.
  |
  */

  // Fieldset
  $form['options']['layout'] = array(
    '#type' => 'fieldset',
    '#title' => t('Sideopsætning'),
  );

  // Business startup year
  $form['options']['layout']['business_startup_year'] = array(
    '#type' => 'textfield',
    '#title' => t('Opstartsår'),
    '#default_value' => theme_get_setting('business_startup_year'),
  );

  // Sidebar
  $form['options']['layout']['sidebar'] = array(
    '#type' => 'fieldset',
    '#title' => 'Sidebar',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  // Sidebar left
  $form['options']['layout']['sidebar']['left'] = array(
    '#type' => 'fieldset',
    '#title' => t('Sidebar venstre'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['options']['layout']['sidebar']['left']['xs'] = array(
    '#type' => 'fieldset',
    '#title' => t('XS viewmode'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['options']['layout']['sidebar']['left']['xs']['sidebar_left_xs_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Aktiv'),
    '#default_value' => theme_get_setting('sidebar_left_xs_enabled'),
  );
  $form['options']['layout']['sidebar']['left']['xs']['sidebar_left_xs_state'] = array(
    '#type' => 'radios',
    '#title' => t('Tilstand'),
    '#default_value' => theme_get_setting('sidebar_left_xs_state'),
    '#options' => array(
      'expanded' => t('Åben'),
      'collapsed' => t('Lukket'),
      'hidden' => t('Skjult'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="sidebar_left_xs_enabled"]' => array('checked' => TRUE),
      ),
    ),
  );
  $form['options']['layout']['sidebar']['left']['xs']['sidebar_left_xs_content_effect'] = array(
    '#type' => 'radios',
    '#title' => t('Content effect'),
    '#default_value' => theme_get_setting('sidebar_left_xs_content_effect'),
    '#options' => array(
      'shrink' => 'Shrink content',
      'push' => 'Push content (off-canvas)',
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="sidebar_left_xs_enabled"]' => array('checked' => TRUE),
        ':input[name="sidebar_left_xs_state"]' => array('value' => 'hidden'),
      ),
    ),
  );

  $form['options']['layout']['sidebar']['left']['sm'] = array(
    '#type' => 'fieldset',
    '#title' => t('SM viewmode'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['options']['layout']['sidebar']['left']['sm']['sidebar_left_sm_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Aktiv'),
    '#default_value' => theme_get_setting('sidebar_left_sm_enabled'),
  );
  $form['options']['layout']['sidebar']['left']['sm']['sidebar_left_sm_state'] = array(
    '#type' => 'radios',
    '#title' => t('Tilstand'),
    '#default_value' => theme_get_setting('sidebar_left_sm_state'),
    '#options' => array(
      'expanded' => t('Åben'),
      'collapsed' => t('Lukket'),
      'hidden' => t('Skjult'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="sidebar_left_sm_enabled"]' => array('checked' => TRUE),
      ),
    ),
  );
  $form['options']['layout']['sidebar']['left']['sm']['sidebar_left_sm_content_effect'] = array(
    '#type' => 'radios',
    '#title' => t('Visning af indhold'),
    '#default_value' => theme_get_setting('sidebar_left_sm_content_effect'),
    '#options' => array(
      'shrink' => t('Presset sammen'),
      'push' => t('Skubbet til siden (off-canvas)'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="sidebar_left_sm_enabled"]' => array('checked' => TRUE),
        ':input[name="sidebar_left_sm_state"]' => array('value' => 'hidden'),
      ),
    ),
  );

  $form['options']['layout']['sidebar']['left']['md'] = array(
    '#type' => 'fieldset',
    '#title' => t('MD viewmode'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['options']['layout']['sidebar']['left']['md']['sidebar_left_md_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Aktiv'),
    '#default_value' => theme_get_setting('sidebar_left_md_enabled'),
  );
  $form['options']['layout']['sidebar']['left']['md']['sidebar_left_md_state'] = array(
    '#type' => 'radios',
    '#title' => t('Tilstand'),
    '#default_value' => theme_get_setting('sidebar_left_md_state'),
    '#options' => array(
      'expanded' => t('Åben'),
      'collapsed' => t('Lukket'),
      'hidden' => t('Skjult'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="sidebar_left_md_enabled"]' => array('checked' => TRUE),
      ),
    ),
  );
  $form['options']['layout']['sidebar']['left']['md']['sidebar_left_md_content_effect'] = array(
    '#type' => 'radios',
    '#title' => t('Visning af indhold'),
    '#default_value' => theme_get_setting('sidebar_left_md_content_effect'),
    '#options' => array(
      'shrink' => t('Presset sammen'),
      'push' => t('Skubbet til siden (off-canvas)'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="sidebar_left_md_enabled"]' => array('checked' => TRUE),
        ':input[name="sidebar_left_md_state"]' => array('value' => 'hidden'),
      ),
    ),
  );

  $form['options']['layout']['sidebar']['left']['lg'] = array(
    '#type' => 'fieldset',
    '#title' => 'LG viewmode',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['options']['layout']['sidebar']['left']['lg']['sidebar_left_lg_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Aktiv'),
    '#default_value' => theme_get_setting('sidebar_left_lg_enabled'),
  );
  $form['options']['layout']['sidebar']['left']['lg']['sidebar_left_lg_state'] = array(
    '#type' => 'radios',
    '#title' => t('Tilstand'),
    '#default_value' => theme_get_setting('sidebar_left_lg_state'),
    '#options' => array(
      'expanded' => t('Åben'),
      'collapsed' => t('Lukket'),
      'hidden' => t('Skjult'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="sidebar_left_lg_enabled"]' => array('checked' => TRUE),
      ),
    ),
  );
  $form['options']['layout']['sidebar']['left']['lg']['sidebar_left_lg_content_effect'] = array(
    '#type' => 'radios',
    '#title' => t('Visning af indhold'),
    '#default_value' => theme_get_setting('sidebar_left_lg_content_effect'),
    '#options' => array(
      'shrink' => t('Presset sammen'),
      'push' => t('Skubbet til siden (off-canvas)'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="sidebar_left_lg_enabled"]' => array('checked' => TRUE),
        ':input[name="sidebar_left_lg_state"]' => array('value' => 'hidden'),
      ),
    ),
  );

  // Footer
  $form['options']['layout']['footer'] = array(
    '#type' => 'fieldset',
    '#title' => t('Footer'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['options']['layout']['footer']['footer_attached'] = array(
    '#type' => 'checkbox',
    '#title' => t('Attach the footer'),
    '#default_value' => theme_get_setting('footer_attached'),
    '#description' => t('Keep footer at the bottom of the page, at all times.'),
  );
  $form['options']['layout']['footer']['footer_below'] = array(
    '#type' => 'checkbox',
    '#title' => t('Keep footer below content'),
    '#default_value' => theme_get_setting('footer_below'),
    '#description' => t('Keep footer at the bottom of the page, at all times.'),
  );
}
