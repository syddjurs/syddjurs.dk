<?php

/**
 * @file
 * syddjurs_eu_cookie_compliance.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function syddjurs_eu_cookie_compliance_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer EU Cookie Compliance popup'.
  $permissions['administer EU Cookie Compliance popup'] = array(
    'name' => 'administer EU Cookie Compliance popup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'display EU Cookie Compliance popup'.
  $permissions['display EU Cookie Compliance popup'] = array(
    'name' => 'display EU Cookie Compliance popup',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'eu_cookie_compliance',
  );

  return $permissions;
}
