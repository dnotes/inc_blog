<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function inc_blog_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'community_blog_pages';
  $context->description = 'Community blog page';
  $context->tag = 'inc-blog';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'community_blog' => 'community_blog',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'inc_blog-blog-info-block' => array(
          'module' => 'inc_blog',
          'delta' => 'blog-info-block',
          'region' => 'sidebar_first',
          'weight' => -100,
        ),
        'views-Blogs-block_1' => array(
          'module' => 'views',
          'delta' => 'Blogs-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'blogs',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Community blog page');
  t('inc-blog');

  $export['community_blog_pages'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'community_blog_post_pages';
  $context->description = 'Blog post pages - for community blogs';
  $context->tag = 'inc-blog';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'inc_blog-blog-info-block' => array(
          'module' => 'inc_blog',
          'delta' => 'blog-info-block',
          'region' => 'sidebar_first',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog post pages - for community blogs');
  t('inc-blog');

  $export['community_blog_post_pages'] = $context;
  return $export;
}
