<?php
/**
 * @file
 * os2web_base_panels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_base_panels_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_base_panels_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
