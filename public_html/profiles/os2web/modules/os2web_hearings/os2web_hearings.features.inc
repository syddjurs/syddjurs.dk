<?php
/**
 * @file
 * os2web_hearings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_hearings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_hearings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function os2web_hearings_image_default_styles() {
  $styles = array();

  // Exported image style: os2web_base_style_image_wide.
  $styles['os2web_base_style_image_wide'] = array(
    'label' => 'os2web_base_style_image_wide',
    'effects' => array(
      6 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 710,
          'height' => 230,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 1,
      ),
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 710,
          'height' => 230,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function os2web_hearings_node_info() {
  $items = array(
    'os2web_hearings_hearing' => array(
      'name' => t('Planer i høring'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'os2web_hearings_hearing_case' => array(
      'name' => t('Høring'),
      'base' => 'node_content',
      'description' => t('Oprettelse af høring.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
