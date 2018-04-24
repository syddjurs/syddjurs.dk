<?php
/**
 * @file
 * os2web_hearings.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function os2web_hearings_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'node_webform';
  $ds_view_mode->label = 'Node Webform';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['node_webform'] = $ds_view_mode;

  return $export;
}
