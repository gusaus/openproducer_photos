<?php
/**
 * @file
 * openproducer_photos.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openproducer_photos_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'photos';
  $page->task = 'page';
  $page->admin_title = 'Photos';
  $page->admin_description = '';
  $page->path = 'photos';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Photos',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_photos_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'photos';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'photos',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bowie';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8755ba15-4890-4ecb-8b4f-481db17748fe';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bf6c16b9-263f-41f7-bd1a-3b0858be2ac5';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'photosets-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '25',
    'fields_override' => array(
      'field_photos' => 1,
      'title' => 1,
    ),
    'exposed' => array(
      'sort_order' => 'ASC',
      'sort_by' => 'created',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => '',
    'use_pager' => 0,
    'pager_id' => '',
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => 'photos-page',
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bf6c16b9-263f-41f7-bd1a-3b0858be2ac5';
  $display->content['new-bf6c16b9-263f-41f7-bd1a-3b0858be2ac5'] = $pane;
  $display->panels['contentmain'][0] = 'new-bf6c16b9-263f-41f7-bd1a-3b0858be2ac5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bf6c16b9-263f-41f7-bd1a-3b0858be2ac5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['photos'] = $page;

  return $pages;

}
