<?php
/**
 * @file
 * os2web_citizenservices.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_citizenservices_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_os2web_citizenservices_service';
  $strongarm->value = 0;
  $export['comment_anonymous_os2web_citizenservices_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_os2web_citizenservices_service';
  $strongarm->value = 1;
  $export['comment_default_mode_os2web_citizenservices_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_os2web_citizenservices_service';
  $strongarm->value = '50';
  $export['comment_default_per_page_os2web_citizenservices_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_os2web_citizenservices_service';
  $strongarm->value = 1;
  $export['comment_form_location_os2web_citizenservices_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_os2web_citizenservices_service';
  $strongarm->value = '2';
  $export['comment_os2web_citizenservices_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_os2web_citizenservices_service';
  $strongarm->value = '1';
  $export['comment_preview_os2web_citizenservices_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_os2web_citizenservices_service';
  $strongarm->value = 1;
  $export['comment_subject_field_os2web_citizenservices_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__os2web_citizenservices_service';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__os2web_citizenservices_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_os2web_citizenservices_service';
  $strongarm->value = '0';
  $export['language_content_type_os2web_citizenservices_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_os2web_citizenservices_service';
  $strongarm->value = array();
  $export['menu_options_os2web_citizenservices_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_os2web_citizenservices_service';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_os2web_citizenservices_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_os2web_citizenservices_service';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_os2web_citizenservices_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_os2web_citizenservices_service';
  $strongarm->value = '0';
  $export['node_preview_os2web_citizenservices_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_os2web_citizenservices_service';
  $strongarm->value = 0;
  $export['node_submitted_os2web_citizenservices_service'] = $strongarm;

  return $export;
}
