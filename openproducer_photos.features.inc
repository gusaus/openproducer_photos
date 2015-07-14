<?php
/**
 * @file
 * openproducer_photos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openproducer_photos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openproducer_photos_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openproducer_photos_node_info() {
  $items = array(
    'photoset' => array(
      'name' => t('Photoset'),
      'base' => 'node_content',
      'description' => t('A simple photoset for sharing a group of photos.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
