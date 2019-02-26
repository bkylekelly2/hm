<?php

/**
 * @file
 *
 * Creates calendar displays of Views results.
 */
/**
 * Implementation of hook_views_plugins
 */
function calendar_plus_views_plugins() {

  $views_path  = drupal_get_path('module', 'views');
  $module_path = drupal_get_path('module', 'calendar_plus');
  $theme_path  = drupal_get_path('module', 'calendar');
  module_load_include('inc', 'calendar', 'theme/theme');
  
  module_load_include('inc', 'calendar', 'includes/calendar.views');

  // Limit these plugins to base tables that represent entities.
  $base = array_keys(date_views_base_tables());

  $data = array(
    'module' => 'calendar_plus',
    'style' => array(
      'calendar_style' => array(
        'title' => t('Calendar'),
        'help' => t('Present view results as a Calendar.'),
        'handler' => 'calendar_plus_plugin_style',
        'path' => "$module_path/includes",
        'theme' => 'calendar_style',
        'theme file' => 'theme.inc',
        'theme path' => "$theme_path/theme",
        'additional themes' => array(
          'calendar_mini' => 'style',
          'calendar_day' => 'style',
          'calendar_week' => 'style',
          'calendar_month' => 'style',
          'calendar_year' => 'style',
          'calendar_day_overlap' => 'style',
          'calendar_week_overlap' => 'style',
        ),
        'uses fields' => TRUE,
        'uses grouping' => FALSE,
        'uses row plugin' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
        'even empty' => TRUE,
        'base' => $base,
      ),
    ),
    'row' => array(
      'calendar_node' => array(
        'title' => t('Calendar Items (DEPRECATED, switch to Calendar Entities)'),
        'help' => t('Displays each selected node as a Calendar item.'),
        'handler' => 'calendar_plugin_row_node',
        'path' => "$module_path/includes",
        'base' => array('node'), // only works with 'node' as base.
        'uses options' => TRUE,
        'uses fields' => TRUE,
        'type' => 'normal',
        'no ui' => TRUE,
      ),
      'calendar_entity' => array(
        'title' => t('Calendar Entities'),
        'help' => t('Displays each selected entity as a Calendar item.'),
        'handler' => 'calendar_plus_plugin_row',
        'theme' => 'views_view_fields',
        'path' => "$module_path/includes",
        'base' => $base,
        'uses options' => TRUE,
        'uses fields' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
  return $data;
}