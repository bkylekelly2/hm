<?php
/**
 * @file
 * nhmrc_success_stories.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nhmrc_success_stories_taxonomy_default_vocabularies() {
  return array(
    'engagement_level' => array(
      'name' => 'Engagement Level',
      'machine_name' => 'engagement_level',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
