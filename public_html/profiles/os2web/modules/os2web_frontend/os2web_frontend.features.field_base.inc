<?php
/**
 * @file
 * os2web_frontend.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function os2web_frontend_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_os2web_frontend_bg_file'
  $field_bases['field_os2web_frontend_bg_file'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_frontend_bg_file',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_piwik'
  $field_bases['field_piwik'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_piwik',
    'foreign keys' => array(),
    'indexes' => array(
      'hits' => array(
        0 => 'nb_hits',
        1 => 'entry_nb_actions',
      ),
      'rate' => array(
        0 => 'bounce_rate',
        1 => 'exit_rate',
      ),
      'visits' => array(
        0 => 'nb_visits',
        1 => 'entry_nb_visits',
        2 => 'exit_nb_visits',
      ),
    ),
    'locked' => 0,
    'module' => 'piwik_stats',
    'settings' => array(
      'period' => 'month',
      'show_in_statistics_page' => 1,
    ),
    'translatable' => 0,
    'type' => 'piwik_stats',
  );

  return $field_bases;
}
