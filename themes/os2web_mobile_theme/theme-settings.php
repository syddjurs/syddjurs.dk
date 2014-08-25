<?php
/**
 * @file
 * theme_settings.php
 * @author Thomas Thune Hansen <tth@bellcom.dk>
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function os2web_mobile_theme_form_system_theme_settings_alter(&$form, $form_state) {
  $theme = variable_get('theme_default');
  $theme_path = drupal_get_path('theme', $theme);
  $theme_path_css = $theme_path . '/mobile/mobile.css';

  if (is_file($theme_path_css)) {
    $mobile_css = file_get_contents($theme_path_css);
  }
  else {
    $mobile_css = FALSE;
  }

  $form['os2web_mobile_theme'] = array(
    '#type' => 'fieldset',
    '#title' => t('OS2web mobile theme settings'),
    '#weight' => -10,
  );

  $form['os2web_mobile_theme']['os2web'] = array(
    '#type' => 'item',
    '#markup' =>
      t('The theme automaticly loads files <em>mobile.css</em> and <em>mobile.js</em> from a folder "mobile" from your default theme directory.') .
      ' <em>(' . $theme_path . ').</em> ' .
      t('If you want you can set some basic settings here, otherwise add your customizations to <em>mobile.css</em>') . '<br /><br />' .
      t('You can read the theme documentation <a href="!link">here!</a>', array('!link' => 'http://github.com/OS2web/os2web_mobile_theme')),
  );

  if ($mobile_css) {
    $form['os2web_mobile_theme']['theme_path_css'] = array(
      '#type' => 'textfield',
      '#access' => FALSE,
      '#value' => $theme_path_css,
    );

    $form['os2web_mobile_theme']['mobile_css'] = array(
      '#title' => t('mobile.css'),
      '#type' => 'textarea',
      '#description' => t('This is the contents of mobile.css from your default theme, changes here will be saved to the file when submitting the form'),
      '#default_value' => $mobile_css,
      '#rows' => 20,
    );

    // Add submit handler so we can save the contens of the textarea.
    $form['#submit'][] = 'os2web_mobile_theme_css_save';
  }
  else {
    $form['os2web_mobile_theme']['error'] = array(
      '#type' => 'item',
      '#markup' => t('<em>!mobile_css</em> was not found please create it in order to customize os2web_mobile_theme.', array('!mobile_css' => $theme_path_css)),
    );
  }
}

/**
 * Submit callback to save the css.
 */
function os2web_mobile_theme_css_save(&$form, &$form_state) {
  // Save the contents of the textarea.
  if (file_put_contents($form_state['values']['theme_path_css'], $form_state['values']['mobile_css'])) {
    drupal_set_message(t('mobile.css saved'));
  }
  else {
    form_set_error('mobile_css', t('Could not save mobile.css, check file permissions'));
  }

}
