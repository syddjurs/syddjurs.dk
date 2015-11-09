<?php
/**
 * @file
 * os2web_citizenservices.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_citizenservices_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_citizenservices_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function os2web_citizenservices_image_default_styles() {
  $styles = array();

  // Exported image style: os2web_citizenservices_image.
  $styles['os2web_citizenservices_image'] = array(
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 159,
          'height' => 94,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function os2web_citizenservices_node_info() {
  $items = array(
    'os2web_citizenservices_service' => array(
      'name' => t('Borgerservices'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
