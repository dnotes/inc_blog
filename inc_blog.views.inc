<?php
// $Id$

/**
 * @file
 *
 */

function inc_blog_views_query_alter(&$view, &$query) {
  if ($view->name == 'inc_blog_administrative') {
    $matches = array();
    foreach ($query->where[0]['clauses'] as $k => $clause) {
      if ($clause == 'node_data_field_blog_contributors.field_blog_contributors_uid = %d') {
        $query->where[0]['clauses'][$k] = "($clause OR node.uid = '%s')";
        $arg = array_shift($query->where[0]['args']);
        if (arg(0) == 'node' && arg(2) == 'edit' && $node = node_load(arg(1))) {
          $arg = $node->uid; // should allow for ppl with "administer_nodes" to see the same options as original poster
        }
        $args[] = $arg;
        $args[] = $arg;
        $query->where[0]['args'] = array_merge($args, $query->where[0]['args']);
        break;
      }
      else {
        $count = preg_match_all('/(%s|%d|%f)/', $clause, $matches);
        for($x=0; $x<$count; $x++) { 
          $args[] = array_shift($query->where[0]['args']);
        }
      }
    }
  }
}

function inc_blog_views_pre_execute(&$view) {
  if ($view->name == 'Community_Blogs') {
    $view->build_info['query'] = str_replace('node.created AS node_created', 'MAX(node.created) AS node_created', $view->build_info['query']);
    $view->build_info['query'] = str_replace('ORDER BY', "GROUP BY node_data_field_community_blog_link_field_community_blog_link_nid ORDER BY", $view->build_info['query']);
    $view->build_info['count_query'] = "SELECT MAX(node.nid) node_nid FROM {node} node INNER JOIN {content_type_blog} ctb ON ctb.field_community_blog_link_nid = node.nid INNER JOIN {node} ctbnode ON ctbnode.nid = ctb.nid WHERE node.type = 'community_blog' GROUP BY node.nid";
  }
}