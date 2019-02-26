<?php
/**
 * @file
 * nhmrc_advisory_panel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nhmrc_advisory_panel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nhmrc_advisory_panel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function nhmrc_advisory_panel_image_default_styles() {
  $styles = array();

  // Exported image style: large-ish__width_240.
  $styles['large-ish__width_240'] = array(
    'label' => 'Large-ish (width - 240)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 240,
          'height' => '',
          'upscale' => 0,
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
function nhmrc_advisory_panel_node_info() {
  $items = array(
    'advisory_panel_members' => array(
      'name' => t('Advisory Panel Member'),
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
