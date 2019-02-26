<?php
/**
 * @file
 * nhmrc_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nhmrc_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function nhmrc_paragraphs_image_default_styles() {
  $styles = array();

  // Exported image style: sns_image_text.
  $styles['sns_image_text'] = array(
    'label' => 'SNS Image Text',
    'effects' => array(
      2 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 342,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sns_tumbnails.
  $styles['sns_tumbnails'] = array(
    'label' => 'SNS Tumbnails',
    'effects' => array(
      1 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 342,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function nhmrc_paragraphs_node_info() {
  $items = array(
    'sns' => array(
      'name' => t('SNS'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function nhmrc_paragraphs_paragraphs_info() {
  $items = array(
    'advance' => array(
      'name' => 'advance',
      'bundle' => 'advance',
      'locked' => '1',
    ),
    'blank' => array(
      'name' => 'blank',
      'bundle' => 'blank',
      'locked' => '1',
    ),
    'block' => array(
      'name' => 'block',
      'bundle' => 'block',
      'locked' => '1',
    ),
    'bold_text' => array(
      'name' => 'bold text',
      'bundle' => 'bold_text',
      'locked' => '1',
    ),
    'first_paragraph' => array(
      'name' => 'first paragraph',
      'bundle' => 'first_paragraph',
      'locked' => '1',
    ),
    'image' => array(
      'name' => 'image',
      'bundle' => 'image',
      'locked' => '1',
    ),
    'image_text' => array(
      'name' => 'image text',
      'bundle' => 'image_text',
      'locked' => '1',
    ),
    'image_title' => array(
      'name' => 'image title',
      'bundle' => 'image_title',
      'locked' => '1',
    ),
    'learn_more' => array(
      'name' => 'learn more',
      'bundle' => 'learn_more',
      'locked' => '1',
    ),
    'lists' => array(
      'name' => 'lists',
      'bundle' => 'lists',
      'locked' => '1',
    ),
    'regular_paragraph' => array(
      'name' => 'regular paragraph',
      'bundle' => 'regular_paragraph',
      'locked' => '1',
    ),
    'simple' => array(
      'name' => 'simple',
      'bundle' => 'simple',
      'locked' => '1',
    ),
    'text_box' => array(
      'name' => 'text box',
      'bundle' => 'text_box',
      'locked' => '1',
    ),
  );
  return $items;
}
