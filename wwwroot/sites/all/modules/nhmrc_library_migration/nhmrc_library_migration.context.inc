<?php
/**
 * @file
 * nhmrc_library_migration.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nhmrc_library_migration_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resource_sidebar';
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
        '~*backtosc*' => '~*backtosc*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-resource_recommendation-block' => array(
          'module' => 'views',
          'delta' => 'resource_recommendation-block',
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
  $export['resource_sidebar'] = $context;

  return $export;
}
