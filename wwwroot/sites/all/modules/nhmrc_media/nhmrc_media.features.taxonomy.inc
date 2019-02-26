<?php
/**
 * @file
 * nhmrc_media.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nhmrc_media_taxonomy_default_vocabularies() {
  return array(
    'media_type' => array(
      'name' => 'Media Type',
      'machine_name' => 'media_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
