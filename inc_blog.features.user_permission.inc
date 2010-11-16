<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function inc_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: create blog entries
  $permissions['create blog entries'] = array(
    'name' => 'create blog entries',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'blogger',
    ),
  );

  // Exported permission: create community_blog content
  $permissions['create community_blog content'] = array(
    'name' => 'create community_blog content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'blogger',
    ),
  );

  // Exported permission: delete any blog entry
  $permissions['delete any blog entry'] = array(
    'name' => 'delete any blog entry',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any community_blog content
  $permissions['delete any community_blog content'] = array(
    'name' => 'delete any community_blog content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own blog entries
  $permissions['delete own blog entries'] = array(
    'name' => 'delete own blog entries',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'blogger',
    ),
  );

  // Exported permission: delete own community_blog content
  $permissions['delete own community_blog content'] = array(
    'name' => 'delete own community_blog content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'blogger',
    ),
  );

  // Exported permission: edit any blog entry
  $permissions['edit any blog entry'] = array(
    'name' => 'edit any blog entry',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any community_blog content
  $permissions['edit any community_blog content'] = array(
    'name' => 'edit any community_blog content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own blog entries
  $permissions['edit own blog entries'] = array(
    'name' => 'edit own blog entries',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'blogger',
    ),
  );

  // Exported permission: edit own community_blog content
  $permissions['edit own community_blog content'] = array(
    'name' => 'edit own community_blog content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'blogger',
    ),
  );

  return $permissions;
}
