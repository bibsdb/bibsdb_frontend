<?php
/**
 * @file
 * bibsdb_frontend.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function bibsdb_frontend_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: menu_custom
  $overrides["menu_custom.menu-footer-menu-1.title"] = 'Inspiration';
  $overrides["menu_custom.menu-footer-menu-2.title"] = 'Tilbud';
  $overrides["menu_custom.menu-footer-menu-3.title"] = 'Sådan gør du';
  $overrides["menu_custom.menu-footer-menu-4.title"] = 'Information';

  // Exported overrides for: views_view
  $overrides["views_view.ding_node_search.display|default|display_options|filters|type|value|read_circuit_set"] = 'read_circuit_set';

 return $overrides;
}
