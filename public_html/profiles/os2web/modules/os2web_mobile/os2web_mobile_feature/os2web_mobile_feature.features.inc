<?php
/**
 * @file
 * os2web_mobile_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_mobile_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_mobile_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function os2web_mobile_feature_image_default_styles() {
  $styles = array();

  // Exported image style: mobile_focus_active.
  $styles['mobile_focus_active'] = array(
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 328,
          'height' => 184,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'mobile_focus_active',
  );

  // Exported image style: mobile_focus_thumb.
  $styles['mobile_focus_thumb'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 78,
          'height' => 62,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'mobile_focus_thumb',
  );

  return $styles;
}
