<?php

/**
 * Implementation of hook_user_default_roles().
 */
function inc_blog_user_default_roles() {
  $roles = array();

  // Exported role: blogger
  $roles['blogger'] = array(
    'name' => 'blogger',
  );

  return $roles;
}
