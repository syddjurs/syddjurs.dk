<?php
/**
 * @file
 * os2web_mobile.inc
 */

/**
 * Implements hook_panels_layouts().
 */
$plugin = array(
  'title' => t('OS2Web Mobile'),
  'category' => t('OS2Web Mobile'),
  'icon' => 'os2web_mobile.png',
  'theme' => 'panels_os2web_mobile',
  'theme arguments' => array('id', 'content'),
  'admin css' => 'os2web_mobile_admin.css',
  'regions' => array(
    'top' => t('Top'),
    'center' => t('Center'),
    'bottom' => t('Bottom'),
  ),
);
