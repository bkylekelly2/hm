<?php
/**
 * @file
 * nhmrc_solr_search.box.inc
 */

/**
 * Implements hook_default_box().
 */
function nhmrc_solr_search_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'facet_collapse_all';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Facet Collapse All';
  $box->options = array(
    'body' => array(
      'value' => '<div class="facet-collapse-all-pane"><h2 class="collapse-facet text-center"><span class="facet-title">Expand All</span></h2></div>',
      'format' => 'pure_html',
    ),
    'additional_classes' => '',
  );
  $export['facet_collapse_all'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'static_select_results_per_page';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'static-select-results-per-page';
  $box->options = array(
    'body' => array(
      'value' => '<select id="static-select-results-per-page" class="col-sm-12">
    <option value="10">View 10 Results</option>
    <option value="25">View 25 Results</option>
    <option value="50">View 50 Results</option>
    <option value="100">View 100 Results</option>
</select>',
      'format' => 'pure_html',
    ),
    'additional_classes' => '',
  );
  $export['static_select_results_per_page'] = $box;

  return $export;
}
