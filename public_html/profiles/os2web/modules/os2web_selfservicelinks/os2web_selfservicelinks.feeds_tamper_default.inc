<?php
/**
 * @file
 * os2web_selfservicelinks.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function os2web_selfservicelinks_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'os2web_borgeronline_v2-xpathparser_5-feeds_tamper_kle';
  $feeds_tamper->importer = 'os2web_borgeronline_v2';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'feeds_tamper_kle';
  $feeds_tamper->settings = array(
    'vid' => '3',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Extract KLE and find term id from string';
  $export['os2web_borgeronline_v2-xpathparser_5-feeds_tamper_kle'] = $feeds_tamper;

  return $export;
}
