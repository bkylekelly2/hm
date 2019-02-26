<?php
/**
 * @file
 * nmhrc_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nmhrc_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
      'super user' => 'super user',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'super user' => 'super user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer boxes'.
  $permissions['administer boxes'] = array(
    'name' => 'administer boxes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'boxes',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer rh_node'.
  $permissions['administer rh_node'] = array(
    'name' => 'administer rh_node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer string overrides'.
  $permissions['administer string overrides'] = array(
    'name' => 'administer string overrides',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'stringoverrides',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rh_node'.
  $permissions['bypass rh_node'] = array(
    'name' => 'bypass rh_node',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'create accordion_item content'.
  $permissions['create accordion_item content'] = array(
    'name' => 'create accordion_item content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create archived_webinars content'.
  $permissions['create archived_webinars content'] = array(
    'name' => 'create archived_webinars content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create email_template content'.
  $permissions['create email_template content'] = array(
    'name' => 'create email_template content',
    'roles' => array(
      'administrator' => 'administrator',
      'super user' => 'super user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create featured_documents content'.
  $permissions['create featured_documents content'] = array(
    'name' => 'create featured_documents content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create image content'.
  $permissions['create image content'] = array(
    'name' => 'create image content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create panel content'.
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any accordion_item content'.
  $permissions['delete any accordion_item content'] = array(
    'name' => 'delete any accordion_item content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any archived_webinars content'.
  $permissions['delete any archived_webinars content'] = array(
    'name' => 'delete any archived_webinars content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any email_template content'.
  $permissions['delete any email_template content'] = array(
    'name' => 'delete any email_template content',
    'roles' => array(
      'administrator' => 'administrator',
      'super user' => 'super user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any featured_documents content'.
  $permissions['delete any featured_documents content'] = array(
    'name' => 'delete any featured_documents content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image content'.
  $permissions['delete any image content'] = array(
    'name' => 'delete any image content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any panel content'.
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own accordion_item content'.
  $permissions['delete own accordion_item content'] = array(
    'name' => 'delete own accordion_item content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own archived_webinars content'.
  $permissions['delete own archived_webinars content'] = array(
    'name' => 'delete own archived_webinars content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own email_template content'.
  $permissions['delete own email_template content'] = array(
    'name' => 'delete own email_template content',
    'roles' => array(
      'administrator' => 'administrator',
      'super user' => 'super user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own featured_documents content'.
  $permissions['delete own featured_documents content'] = array(
    'name' => 'delete own featured_documents content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image content'.
  $permissions['delete own image content'] = array(
    'name' => 'delete own image content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own panel content'.
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any accordion_item content'.
  $permissions['edit any accordion_item content'] = array(
    'name' => 'edit any accordion_item content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any archived_webinars content'.
  $permissions['edit any archived_webinars content'] = array(
    'name' => 'edit any archived_webinars content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any email_template content'.
  $permissions['edit any email_template content'] = array(
    'name' => 'edit any email_template content',
    'roles' => array(
      'administrator' => 'administrator',
      'super user' => 'super user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any featured_documents content'.
  $permissions['edit any featured_documents content'] = array(
    'name' => 'edit any featured_documents content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image content'.
  $permissions['edit any image content'] = array(
    'name' => 'edit any image content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any panel content'.
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit boxes'.
  $permissions['edit boxes'] = array(
    'name' => 'edit boxes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'boxes',
  );

  // Exported permission: 'edit own accordion_item content'.
  $permissions['edit own accordion_item content'] = array(
    'name' => 'edit own accordion_item content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own archived_webinars content'.
  $permissions['edit own archived_webinars content'] = array(
    'name' => 'edit own archived_webinars content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own email_template content'.
  $permissions['edit own email_template content'] = array(
    'name' => 'edit own email_template content',
    'roles' => array(
      'administrator' => 'administrator',
      'super user' => 'super user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own featured_documents content'.
  $permissions['edit own featured_documents content'] = array(
    'name' => 'edit own featured_documents content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image content'.
  $permissions['edit own image content'] = array(
    'name' => 'edit own image content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own panel content'.
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit revisions'.
  $permissions['edit revisions'] = array(
    'name' => 'edit revisions',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'php redirect rh_node'.
  $permissions['php redirect rh_node'] = array(
    'name' => 'php redirect rh_node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: 'publish revisions'.
  $permissions['publish revisions'] = array(
    'name' => 'publish revisions',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'unpublish current revision'.
  $permissions['unpublish current revision'] = array(
    'name' => 'unpublish current revision',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revision status messages'.
  $permissions['view revision status messages'] = array(
    'name' => 'view revision status messages',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
