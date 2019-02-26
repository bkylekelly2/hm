<?php
/**
 * @file
 * nmhrc_core.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function nmhrc_core_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'podcasts_breadcrumb';
  $path_breadcrumb->name = 'podcasts-breadcrumb';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Resources',
      1 => 'Media Gallery',
      2 => 'Podcasts',
    ),
    'paths' => array(
      0 => 'resources/',
      1 => 'media-gallery/',
      2 => 'media-gallery/podcasts/',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'node_edit',
        'settings' => array(
          'identifier' => 'Node edit form: node ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'media' => 'media',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:media:field_type',
          'settings' => array(
            'field_type' => array(
              'und' => array(
                0 => array(
                  'tid' => '1',
                ),
              ),
            ),
            'field_type_tid' => array(
              0 => '1',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['podcasts_breadcrumb'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'videos_breadcrumb';
  $path_breadcrumb->name = 'videos-breadcrumb';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Resources',
      1 => 'Media Gallery',
      2 => 'Videos',
    ),
    'paths' => array(
      0 => 'resources/',
      1 => 'media-gallery/',
      2 => 'media-gallery/videos/',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'node_edit',
        'settings' => array(
          'identifier' => 'Node edit form: node ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'media' => 'media',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:media:field_type',
          'settings' => array(
            'field_type' => array(
              'und' => array(
                0 => array(
                  'tid' => '2',
                ),
              ),
            ),
            'field_type_tid' => array(
              0 => '2',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['videos_breadcrumb'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'webinars_breadcrumb';
  $path_breadcrumb->name = 'webinars-breadcrumb';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Resources',
      1 => 'Media Gallery',
      2 => 'Webinars',
    ),
    'paths' => array(
      0 => 'resources/',
      1 => 'media-gallery/',
      2 => 'media-gallery/webinars/',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'node_edit',
        'settings' => array(
          'identifier' => 'Node edit form: node ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'archived_webinars' => 'archived_webinars',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['webinars_breadcrumb'] = $path_breadcrumb;

  return $export;
}
