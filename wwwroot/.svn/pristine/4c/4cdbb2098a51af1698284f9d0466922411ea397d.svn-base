<?php
/**
 * @file
 * nhmrc_solr_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nhmrc_solr_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'back_to_library_search_results';
  $context->description = '';
  $context->tag = 'library';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'resource' => 'resource',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'query_string' => array(
      'values' => array(
        '*backtolib*' => '*backtolib*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-solr_library_search-block_1' => array(
          'module' => 'views',
          'delta' => 'solr_library_search-block_1',
          'region' => 'content',
          'weight' => '-46',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('library');
  $export['back_to_library_search_results'] = $context;

  return $export;
}
