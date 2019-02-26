<?php
/**
 * @file
 * nhmrc_paragraphs_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function nhmrc_paragraphs_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Test Paragraphs Migration',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'sns',
  'language' => 'und',
  'created' => 1507303092,
  'tnid' => 0,
  'translate' => 0,
  'rh_action' => NULL,
  'rh_redirect' => NULL,
  'rh_redirect_response' => NULL,
  'uuid' => 'a433d00c-ef7c-43de-9382-fd9c90606f4d',
  'field_paragraphs' => array(
    'und' => array(
      0 => array(
        'value' => 22,
        'revision_id' => 22,
      ),
      1 => array(
        'value' => 23,
        'revision_id' => 23,
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'comment_unpublished_count' => 0,
  'num_revisions' => 1,
  'current_revision_id' => 8396,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'pathauto_perform_alias' => FALSE,
  'date' => '2017-10-06 15:18:12 +0000',
  'user_uuid' => '46b908e9-e792-4732-85b1-838607e8193b',
);
  return $nodes;
}
