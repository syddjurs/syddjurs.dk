<?php
/**
 * @file
 * os2web_mobile_syddjurs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_mobile_syddjurs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
