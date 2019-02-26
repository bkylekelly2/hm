<?php
/**
 * @file
 * nhmrc_content_management.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function nhmrc_content_management_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-content-manager-menu.
  $menus['menu-content-manager-menu'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'title' => 'Content Manager Menu',
    'description' => 'This menu lists links to each piece of editable content, both static and dynamic, that can be edited by the content manger(s).',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Content Manager Menu');
  t('This menu lists links to each piece of editable content, both static and dynamic, that can be edited by the content manger(s).');

  return $menus;
}
