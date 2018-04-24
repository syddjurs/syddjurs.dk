<?php
/**
 * @file
 * Administration pages.
 */

/**
 * Webform field page callback.
 */
function webform_default_fields_list($content_type) {
  module_load_include('inc', 'webform', 'includes/webform.components');

  $nid = _webform_default_fields_container_node($content_type->type);
  $node = node_load($nid);
  // Create a new container node if the expected one is missing.
  if (!$node) {
    $nid = _webform_default_fields_create_container_node($content_type->type);
    variable_set('webform_default_fields_nid_' . $content_type->type, $nid);
    $node = node_load(array("nid" => $nid));
  }
  return webform_components_page($node);
}
