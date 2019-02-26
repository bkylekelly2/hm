<?php
/**
 * @file
 * nhmrc_solr_search.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function nhmrc_solr_search_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'library_search_block';
  $item->label = 'Library Search Block';
  $item->settings = array(
    'items' => array(
      'active_items' => array(
        'id' => 'active',
        'label' => 'Active Items',
        'pattern' => '[facetapi_active:active-value]',
        'keys' => 0,
        'css' => 1,
        'classes' => 'col-sm-12',
        'nofollow' => 1,
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '2',
    ),
  );
  $export['library_search_block'] = $item;

  return $export;
}
