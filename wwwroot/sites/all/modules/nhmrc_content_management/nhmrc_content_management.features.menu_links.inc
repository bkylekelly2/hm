<?php
/**
 * @file
 * nhmrc_content_management.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nhmrc_content_management_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-content-manager-menu_accordion-item:node/add/accordion-item.
  $menu_links['menu-content-manager-menu_accordion-item:node/add/accordion-item'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'node/add/accordion-item',
    'router_path' => 'node/add/accordion-item',
    'link_title' => 'Accordion Item',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-content-manager-menu_accordion-item:node/add/accordion-item',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'menu-content-manager-menu_add-content:node/add',
  );
  // Exported menu link: menu-content-manager-menu_add-content:node/add.
  $menu_links['menu-content-manager-menu_add-content:node/add'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-content-manager-menu_add-content:node/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-content-manager-menu_archived-webinar:node/add/archived-webinars.
  $menu_links['menu-content-manager-menu_archived-webinar:node/add/archived-webinars'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'node/add/archived-webinars',
    'router_path' => 'node/add/archived-webinars',
    'link_title' => 'Archived Webinar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-content-manager-menu_archived-webinar:node/add/archived-webinars',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-content-manager-menu_add-content:node/add',
  );
  // Exported menu link: menu-content-manager-menu_backup-and-migrate:admin/config/system/backup_migrate.
  $menu_links['menu-content-manager-menu_backup-and-migrate:admin/config/system/backup_migrate'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'admin/config/system/backup_migrate',
    'router_path' => 'admin/config/system/backup_migrate',
    'link_title' => 'Backup and Migrate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-content-manager-menu_backup-and-migrate:admin/config/system/backup_migrate',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-content-manager-menu_basic-page:node/add/page.
  $menu_links['menu-content-manager-menu_basic-page:node/add/page'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic Page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-content-manager-menu_basic-page:node/add/page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-content-manager-menu_add-content:node/add',
  );
  // Exported menu link: menu-content-manager-menu_broken-link-checker:admin/reports/linkchecker.
  $menu_links['menu-content-manager-menu_broken-link-checker:admin/reports/linkchecker'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'admin/reports/linkchecker',
    'router_path' => 'admin/reports/linkchecker',
    'link_title' => 'Broken Link Checker',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-content-manager-menu_broken-link-checker:admin/reports/linkchecker',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-content-manager-menu_edit-content:admin/content.
  $menu_links['menu-content-manager-menu_edit-content:admin/content'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Edit Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-content-manager-menu_edit-content:admin/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-content-manager-menu_event:node/add/event.
  $menu_links['menu-content-manager-menu_event:node/add/event'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(
        'title' => 'Add a new event to the calendar.',
      ),
      'identifier' => 'menu-content-manager-menu_event:node/add/event',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-content-manager-menu_add-content:node/add',
  );
  // Exported menu link: menu-content-manager-menu_eventscertificates:all-events.
  $menu_links['menu-content-manager-menu_eventscertificates:all-events'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'all-events',
    'router_path' => 'all-events',
    'link_title' => 'Events/Certificates',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-content-manager-menu_eventscertificates:all-events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-content-manager-menu_featured-documents:node/add/featured-documents.
  $menu_links['menu-content-manager-menu_featured-documents:node/add/featured-documents'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'node/add/featured-documents',
    'router_path' => 'node/add/featured-documents',
    'link_title' => 'Featured Documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-content-manager-menu_featured-documents:node/add/featured-documents',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-content-manager-menu_add-content:node/add',
  );
  // Exported menu link: menu-content-manager-menu_media:node/add/media.
  $menu_links['menu-content-manager-menu_media:node/add/media'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'node/add/media',
    'router_path' => 'node/add/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-content-manager-menu_media:node/add/media',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-content-manager-menu_add-content:node/add',
  );
  // Exported menu link: menu-content-manager-menu_moderate-content:admin/moderate-content.
  $menu_links['menu-content-manager-menu_moderate-content:admin/moderate-content'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'admin/moderate-content',
    'router_path' => 'admin',
    'link_title' => 'Moderate Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-content-manager-menu_moderate-content:admin/moderate-content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-content-manager-menu_edit-content:admin/content',
  );
  // Exported menu link: menu-content-manager-menu_site-style-guide:style-guide.
  $menu_links['menu-content-manager-menu_site-style-guide:style-guide'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'style-guide',
    'router_path' => 'style-guide',
    'link_title' => 'Site Style Guide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-content-manager-menu_site-style-guide:style-guide',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-content-manager-menu_slideshow-image:node/add/image.
  $menu_links['menu-content-manager-menu_slideshow-image:node/add/image'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'node/add/image',
    'router_path' => 'node/add/image',
    'link_title' => 'Slideshow Image',
    'options' => array(
      'attributes' => array(
        'title' => 'Add a new Slideshow_Image content piece for the Home Page slideshow.  Only 4 slideshow images will appear, so another slideshow image must be deleted or unpublished in order for a new one to appear.  You can also edit an existing slideshow image instead of creating a new one.',
      ),
      'identifier' => 'menu-content-manager-menu_slideshow-image:node/add/image',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'menu-content-manager-menu_add-content:node/add',
  );
  // Exported menu link: menu-content-manager-menu_webform:admin/content/webform.
  $menu_links['menu-content-manager-menu_webform:admin/content/webform'] = array(
    'menu_name' => 'menu-content-manager-menu',
    'link_path' => 'admin/content/webform',
    'router_path' => 'admin/content/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-content-manager-menu_webform:admin/content/webform',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accordion Item');
  t('Add Content');
  t('Archived Webinar');
  t('Backup and Migrate');
  t('Basic Page');
  t('Broken Link Checker');
  t('Edit Content');
  t('Event');
  t('Events/Certificates');
  t('Featured Documents');
  t('Media');
  t('Moderate Content');
  t('Site Style Guide');
  t('Slideshow Image');
  t('Webform');

  return $menu_links;
}
