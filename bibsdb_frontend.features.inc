<?php
/**
 * @file
 * bibsdb_frontend.features.inc
 */

/**
 * Implements hook_menu_default_menu_custom_alter().
 */
function bibsdb_frontend_menu_default_menu_custom_alter(&$data) {
  if (isset($data['menu-footer-menu-1'])) {
    $data['menu-footer-menu-1']['title'] = 'Inspiration'; /* WAS: 'Footer menu 1' */
  }
  if (isset($data['menu-footer-menu-2'])) {
    $data['menu-footer-menu-2']['title'] = 'Tilbud'; /* WAS: 'Footer menu 2' */
  }
  if (isset($data['menu-footer-menu-3'])) {
    $data['menu-footer-menu-3']['title'] = 'Sådan gør du'; /* WAS: 'Footer menu 3' */
  }
  if (isset($data['menu-footer-menu-4'])) {
    $data['menu-footer-menu-4']['title'] = 'Information'; /* WAS: 'Footer menu 4' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function bibsdb_frontend_views_default_views_alter(&$data) {
  if (isset($data['ding_node_search'])) {
    $data['ding_node_search']->display['default']->display_options['filters']['type']['value']['read_circuit_set'] = 'read_circuit_set'; /* WAS: '' */
  }
}
