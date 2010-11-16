<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function inc_blog_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_images
  $groups['blog-group_images'] = array(
    'group_type' => 'standard',
    'type_name' => 'blog',
    'group_name' => 'group_images',
    'label' => 'Image Gallery',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '1',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'description' => '',
      ),
    ),
    'weight' => '1',
    'fields' => array(
      '0' => 'field_gallery',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image Gallery');

  return $groups;
}
