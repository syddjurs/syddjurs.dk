<?php
/**
 * @file
 * os2web_portals_citizen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_portals_citizen_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
