<?php
/**
 * @file
 * template.php
 *
 * OS2web mobile subtheme for bootstrap.
 * @author Thomas Thune Hansen <tth@bellcom.dk>
 */

/**
 * Implements hook_js_alter().
 */
function os2web_mobile_theme_js_alter(&$javascript) {
  // Jquery version 1.7.x is needed for bootstrap and we dont want to
  // get messy with jquery_update.
  $javascript['misc/jquery.js']['data'] = drupal_get_path('theme', 'os2web_mobile_theme') . '/js/jquery-1.7.1.min.js';
}

/**
 * Implements hook_preprocess_page().
 */
function os2web_mobile_theme_preprocess_page(&$vars) {
  $theme = variable_get('theme_default');
  $theme_path = drupal_get_path('theme', $theme);

  if (file_exists($theme_path . '/logo.png')) {
    $vars['logo'] = '/' . $theme_path . '/logo.png';
  }

  if (file_exists($theme_path . '/mobile/mobile.css')) {
    drupal_add_css($theme_path . '/mobile/mobile.css', array('group' => CSS_THEME));
  }

  if (file_exists($theme_path . '/mobile/mobile.js')) {
    drupal_add_js($theme_path . '/mobile/mobile.js');
  }
}

/**
 * Implements hook_preprocess_panels_pane().
 */
function os2web_mobile_theme_preprocess_panels_pane(&$vars) {
  // If the panel pane is of type block and subtype contains
  // menu_block, we want to use a custom template.
  if ($vars['pane']->type == 'block') {
    if (strstr($vars['pane']->subtype, 'menu_block')) {
      $vars['theme_hook_suggestions'][] = 'panels_pane__menu_block';
    }
  }
}
