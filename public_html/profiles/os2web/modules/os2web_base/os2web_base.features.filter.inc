<?php
/**
 * @file
 * os2web_base.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function os2web_base_filter_default_formats() {
  $formats = array();

  // Exported format: PHP code.
  $formats['php_code'] = array(
    'format' => 'php_code',
    'name' => 'PHP code',
    'cache' => 1,
    'status' => 1,
    'weight' => -6,
    'filters' => array(),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
    'filters' => array(),
  );

  // Exported format: Raw.
  $formats['raw'] = array(
    'format' => 'raw',
    'name' => 'Raw',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
