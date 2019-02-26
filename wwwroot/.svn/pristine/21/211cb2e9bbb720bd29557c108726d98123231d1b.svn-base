<?php
/**
 * Implementation of hook_views_plugins
 *
 *
 */
function tld_bootstrap_views_plugins() {
  return array(
    'style' => array( //declare the views_json style plugin
      'tld_bootsrap_grid' => array(
        'title' => t('Bootstrap grid'),
        'theme' => 'tld_bootstrap_grid',
        'help' => t('Diplays items in a bootstrap grid.'),
        'handler' => 'tld_bootstrap_plugin_style_grid',
        'preprocess' => 'views_view_table',
        'uses row plugin' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}