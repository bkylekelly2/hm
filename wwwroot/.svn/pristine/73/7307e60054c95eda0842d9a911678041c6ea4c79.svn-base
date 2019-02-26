<?php
/**
 * @file
 * nhmrc_dev.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nhmrc_dev_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer reroute email
  $permissions['administer reroute email'] = array(
    'name' => 'administer reroute email',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'reroute_email',
  );

  return $permissions;
}
