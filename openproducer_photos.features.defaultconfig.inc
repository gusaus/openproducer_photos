<?php
/**
 * @file
 * openproducer_photos.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function openproducer_photos_defaultconfig_features() {
  return array(
    'openproducer_photos' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function openproducer_photos_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create photoset content'.
  $permissions['create photoset content'] = array(
    'name' => 'create photoset content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any photoset content'.
  $permissions['delete any photoset content'] = array(
    'name' => 'delete any photoset content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own photoset content'.
  $permissions['delete own photoset content'] = array(
    'name' => 'delete own photoset content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any photoset content'.
  $permissions['edit any photoset content'] = array(
    'name' => 'edit any photoset content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own photoset content'.
  $permissions['edit own photoset content'] = array(
    'name' => 'edit own photoset content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
