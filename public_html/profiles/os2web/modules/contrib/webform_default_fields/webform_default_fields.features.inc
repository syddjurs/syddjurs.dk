<?php

/**
 * @file
 * Provides integration with module features.
 */

/**
 * Implements hook_features_export_options().
 */
function webform_default_fields_features_export_options() {
  $webform_types = webform_node_types();
  $types = array();
  foreach ($webform_types as $type) {
    if (variable_get('webform_default_fields_nid_' . $type, 0)) {
      $types[$type] = $type;
    }
  }
  return $types;
}

/**
 * Implements hook_features_export().
 */
function webform_default_fields_features_export($data, &$export, $module_name = '') {
  $export['dependencies']['webform_default_fields'] = 'webform_default_fields';
  foreach ($data as $name) {
    $export['features']['webform_default_fields'][$name] = $name;
  }
  return array();
}

/**
 * Implements hook_features_export_render().
 */
function webform_default_fields_features_export_render($module_name, $data) {
  $code = array();
  $values = array();
  foreach ($data as $type) {
    $nid = variable_get('webform_default_fields_nid_' . $type, 0);
    if ($nid) {
      $master_node = node_load($nid, NULL, TRUE);
      if (isset($master_node->webform)) {
        $webform = _webform_default_fields_set_nid($master_node->webform);
        $values[$type] = $webform;
      }
    }
  }
  $code = '  $data = ' . features_var_export($values, '  ') . ';' . PHP_EOL;
  $code .= "  return \$data;";
  return array('webform_default_fields_defaults' => $code);
}

/**
 * Implements hook_features_rebuild().
 */
function webform_default_fields_features_rebuild($module) {
  webform_default_fields_features_revert($module);
}

/**
 * Implements hook_features_revert().
 */
function webform_default_fields_features_revert($module) {
  $data = module_invoke($module, 'webform_default_fields_defaults');
  foreach ($data as $type => $value) {
    $nid = variable_get('webform_default_fields_nid_' . $type, 0);
    if ($nid) {
      $master_node = node_load($nid, NULL, TRUE);
      if (isset($master_node->webform)) {
        $webform = _webform_default_fields_set_nid($value, $nid);
        $master_node->original = clone $master_node;
        $master_node->webform = $webform;
        webform_node_update($master_node);
      }
    }
  }
}
