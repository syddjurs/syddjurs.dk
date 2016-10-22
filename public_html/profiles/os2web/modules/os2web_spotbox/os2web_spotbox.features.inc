<?php
/**
 * @file
 * os2web_spotbox.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_spotbox_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_spotbox_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function os2web_spotbox_image_default_styles() {
  $styles = array();

  // Exported image style: os2web_spotbox_image_300.
  $styles['os2web_spotbox_image_300'] = array(
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 261,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'os2web_spotbox_image_300',
  );

  // Exported image style: os2web_spotbox_image_right.
  $styles['os2web_spotbox_image_right'] = array(
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 230,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      9 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 230,
          'height' => 115,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'os2web_spotbox_image_right',
  );

  // Exported image style: os2web_spotbox_image_spot5.
  $styles['os2web_spotbox_image_spot5'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 290,
          'height' => 85,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'os2web_spotbox_image_spot5',
  );

  // Exported image style: os2web_spotbox_image_tall.
  $styles['os2web_spotbox_image_tall'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 230,
          'height' => 337,
          'anchor' => 'center-center',
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'os2web_spotbox_image_tall',
  );

  // Exported image style: os2web_spotbox_image_video_front.
  $styles['os2web_spotbox_image_video_front'] = array(
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 310,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      10 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 310,
          'height' => 177,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'os2web_spotbox_image_video_front',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function os2web_spotbox_node_info() {
  $items = array(
    'os2web_spotbox_box' => array(
      'name' => t('Spotbox'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
