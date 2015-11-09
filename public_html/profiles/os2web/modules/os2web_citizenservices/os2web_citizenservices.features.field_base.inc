<?php
/**
 * @file
 * os2web_citizenservices.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function os2web_citizenservices_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_os2web_citizenservices_img'
  $field_bases['field_os2web_citizenservices_img'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_citizenservices_img',
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
    'translatable' => 1,
    'type' => 'image',
  );

  // Exported field_base: 'field_os2web_citizenservices_url'
  $field_bases['field_os2web_citizenservices_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_citizenservices_url',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 100,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  return $field_bases;
}
