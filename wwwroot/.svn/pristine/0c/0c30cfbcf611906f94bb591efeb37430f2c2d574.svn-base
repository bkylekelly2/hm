<?php
/**
 * @file
 * nhmrc_media.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nhmrc_media_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'podcast';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        1 => 1,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'tax-podcast',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['podcast'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'video';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        2 => 2,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'tax-video',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['video'] = $context;

  return $export;
}
