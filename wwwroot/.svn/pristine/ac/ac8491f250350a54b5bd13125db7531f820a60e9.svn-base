<?php
/**
 * @file
 * nmhrc_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nmhrc_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nmhrc_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function nmhrc_core_fontyourface_features_default_font() {
  return array(
    'Lato 100 (latin)' => array(
      'name' => 'Lato 100 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Lato&subset=latin#100',
      'provider' => 'google_fonts_api',
      'css_selector' => '.home-bg-img . first-h3 span',
      'css_family' => 'Lato',
      'css_style' => 'normal',
      'css_weight' => 100,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:8:"Lato:100";s:6:"subset";s:5:"latin";}',
    ),
  );
}

/**
 * Implements hook_image_default_styles().
 */
function nmhrc_core_image_default_styles() {
  $styles = array();

  // Exported image style: featured_resource_library.
  $styles['featured_resource_library'] = array(
    'label' => 'Featured Resource Library',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 750,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: file_thumbnail.
  $styles['file_thumbnail'] = array(
    'label' => 'file_thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 320,
          'height' => 180,
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
function nmhrc_core_node_info() {
  $items = array(
    'accordion_item' => array(
      'name' => t('Accordion Item'),
      'base' => 'node_content',
      'description' => t('Create an item in an accordian'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'archived_webinars' => array(
      'name' => t('Archived Webinars'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'email_template' => array(
      'name' => t('email_template'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'featured_documents' => array(
      'name' => t('Featured Documents'),
      'base' => 'node_content',
      'description' => t('These are documents from the library that are being featured.'),
      'has_title' => '1',
      'title_label' => t('Document Title'),
      'help' => '',
    ),
    'image' => array(
      'name' => t('Slideshow_Image'),
      'base' => 'node_content',
      'description' => t('These are the home page slideshow images'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
