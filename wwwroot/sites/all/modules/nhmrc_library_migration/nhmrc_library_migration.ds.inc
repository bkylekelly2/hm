<?php
/**
 * @file
 * nhmrc_library_migration.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function nhmrc_library_migration_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'resource_search';
  $ds_view_mode->label = 'Resource Search';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['resource_search'] = $ds_view_mode;

  return $export;
}
