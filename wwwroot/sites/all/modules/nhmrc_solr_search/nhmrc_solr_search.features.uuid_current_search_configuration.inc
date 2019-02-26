<?php
/**
 * @file
 * nhmrc_solr_search.features.uuid_current_search_configuration.inc
 */

/**
 * Implements hook_uuid_features_default_current_search_configurations().
 */
function nhmrc_solr_search_uuid_features_default_current_search_configurations() {
  $current_search_configurations = array();

  $current_search_configurations[] = array(
    'delta' => 'library_search_block',
    'searcher' => 'search_api@node_index',
  );
  return $current_search_configurations;
}
