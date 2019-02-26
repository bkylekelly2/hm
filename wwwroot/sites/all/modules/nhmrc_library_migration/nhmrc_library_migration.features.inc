<?php
/**
 * @file
 * nhmrc_library_migration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nhmrc_library_migration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nhmrc_library_migration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nhmrc_library_migration_node_info() {
  $items = array(
    'distributor' => array(
      'name' => t('Distributor'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resource' => array(
      'name' => t('Resource'),
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
 * Implements hook_default_wsclient_service().
 */
function nhmrc_library_migration_default_wsclient_service() {
  $items = array();
  $items['library'] = entity_import('wsclient_service', '{
    "settings" : [],
    "operations" : { "get" : {
        "url" : "?action=@action\\u0026collection=@collection\\u0026chType=@chType",
        "label" : "get",
        "parameter" : {
          "action" : {
            "type" : "text",
            "default value" : "livelink:main.getDistrubutersByCollection"
          },
          "collection" : { "type" : "text", "default value" : "biblio" },
          "chType" : { "type" : "text", "default value" : "Marriage" }
        },
        "name" : "get",
        "result" : { "type" : "Distributors", "label" : "result" }
      }
    },
    "datatypes" : { "Distributors" : {
        "label" : "Distributors",
        "property info" : { "Distributors" : { "type" : "text", "label" : "Distributors" } }
      }
    },
    "global_parameters" : [],
    "name" : "library",
    "label" : "Library Distributors",
    "url" : "https:\\/\\/cwigapis.icfwebservices.com\\/index.cfm",
    "type" : "rest",
    "authentication" : null
  }');
  $items['library_resources'] = entity_import('wsclient_service', '{
    "settings" : [],
    "operations" : { "get" : {
        "url" : "?action=@action\\u0026collection=@collection\\u0026chType=@chType\\u0026lowID=@lowID\\u0026highID=@highID",
        "label" : "get",
        "parameter" : {
          "action" : { "type" : "text", "default value" : "livelink:main.getRecordsByIDRange" },
          "collection" : { "type" : "text", "default value" : "biblio" },
          "lowID" : { "type" : "text", "default value" : "0" },
          "highID" : { "type" : "text", "default value" : "120000" },
          "chType" : { "type" : "text", "default value" : "Marriage" }
        },
        "name" : "get",
        "result" : { "type" : "Resource", "label" : "result" }
      }
    },
    "datatypes" : { "Resource" : {
        "label" : "Resource",
        "property info" : { "Resource" : { "type" : "text", "label" : "Resource" } }
      }
    },
    "global_parameters" : [],
    "name" : "library_resources",
    "label" : "Library Resources",
    "url" : "https:\\/\\/cwigapis.icfwebservices.com\\/index.cfm",
    "type" : "rest",
    "authentication" : null
  }');
  return $items;
}
