<?php
/**
 * @file
 * nhmrc_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nhmrc_menu_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
