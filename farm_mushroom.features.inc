<?php
/**
 * @file
 * farm_mushroom.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farm_mushroom_ctools_plugin_api($module = NULL, $api = NULL) {
  return farm_record_api('ctools', $module, $api);
}

/**
 * Implements hook_views_api().
 */
function farm_mushroom_views_api($module = NULL, $api = NULL) {
  return farm_record_api('views', $module, $api);
}

/**
 * Implements hook_default_farm_asset_type().
 */
function farm_mushroom_default_farm_asset_type() {
  return farm_record_entity_type_definitions('farm_mushroom', 'farm_asset');
}
