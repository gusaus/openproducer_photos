<?php
/**
 * @file
 * openproducer_photos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openproducer_photos_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node photoset content'.
  $permissions['administer panelizer node photoset content'] = array(
    'name' => 'administer panelizer node photoset content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node photoset layout'.
  $permissions['administer panelizer node photoset layout'] = array(
    'name' => 'administer panelizer node photoset layout',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  return $permissions;
}
