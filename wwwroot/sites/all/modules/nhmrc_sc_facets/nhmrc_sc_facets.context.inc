<?php
/**
 * @file
 * nhmrc_sc_facets.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nhmrc_sc_facets_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'back_to_healthy_dating_search_results';
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
        '*backtosc*' => '*backtosc*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-solr_library_search-block_2' => array(
          'module' => 'views',
          'delta' => 'solr_library_search-block_2',
          'region' => 'content',
          'weight' => '-50',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('library');
  $export['back_to_healthy_dating_search_results'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resource_node';
  $context->description = 'Resource node opened from the Library search page.';
  $context->tag = 'resource';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'resource' => 'resource',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '~node/*/edit' => '~node/*/edit',
      ),
    ),
    'query_string' => array(
      'values' => array(
        '~*backtosc*' => '~*backtosc*',
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
          'weight' => '-50',
        ),
        'views-resource_recommendation-block' => array(
          'module' => 'views',
          'delta' => 'resource_recommendation-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
    'breadcrumb' => array(
      0 => 'main-menu:library-search-results',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Resource node opened from the Library search page.');
  t('resource');
  $export['resource_node'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resource_node_healthy_dating';
  $context->description = 'Resource node opened from the Special Collection search page.';
  $context->tag = 'resource';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'resource' => 'resource',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '~node/*/edit' => '~node/*/edit',
      ),
    ),
    'query_string' => array(
      'values' => array(
        '*backtosc*' => '*backtosc*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-solr_library_search-block_2' => array(
          'module' => 'views',
          'delta' => 'solr_library_search-block_2',
          'region' => 'content',
          'weight' => '-50',
        ),
        'boxes-healthy_dating_widget' => array(
          'module' => 'boxes',
          'delta' => 'healthy_dating_widget',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
    'breadcrumb' => array(
      0 => 'main-menu:healthy-dating-search-results',
    ),
    'theme_html' => array(
      'class' => 'healthy-dating',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Resource node opened from the Special Collection search page.');
  t('resource');
  $export['resource_node_healthy_dating'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resource_sidebar_healthy_dating';
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
    'path' => array(
      'values' => array(
        '~node/*/edit' => '~node/*/edit',
      ),
    ),
    'query_string' => array(
      'values' => array(
        '*backtosc*' => '*backtosc*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-healthy_dating_widget' => array(
          'module' => 'boxes',
          'delta' => 'healthy_dating_widget',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('library');
  $export['resource_sidebar_healthy_dating'] = $context;

  return $export;
}
