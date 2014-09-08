<?php

/**
 * @file
 */

/**
 * Implements hook_views_default_views().
 */
function shurly_views_default_views() {
  /*
   * View 'shurly_admin'
   */
  $view = new view;
  $view->name = 'shurly_admin';
  $view->description = 'Shurly administration';
  $view->tag = 'shurly';
  $view->view_php = '';
  $view->base_table = 'shurly';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'count' => array(
      'label' => 'Clicks',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'count',
      'table' => 'shurly',
      'field' => 'count',
      'relationship' => 'none',
    ),
    'destination_1' => array(
      'label' => 'Long URL (trimmed)',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 1,
        'max_length' => '30',
        'word_boundary' => 0,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 1,
      'id' => 'destination_1',
      'table' => 'shurly',
      'field' => 'destination',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'destination' => array(
      'label' => 'Long URL',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<a href="[destination]" title="[destination]">[destination_1]</a>',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '50',
        'word_boundary' => 0,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'destination',
      'table' => 'shurly',
      'field' => 'destination',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'source' => array(
      'label' => 'Short URL',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'text' => '',
      'longshort' => '1',
      'link' => 1,
      'exclude' => 0,
      'id' => 'source',
      'table' => 'shurly',
      'field' => 'source',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'name' => array(
      'label' => 'User',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 1,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 0,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => 'Created date',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'custom',
      'custom_date_format' => 'M j @ H:i:s',
      'exclude' => 1,
      'id' => 'created',
      'table' => 'shurly',
      'field' => 'created',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'created_1' => array(
      'label' => 'Created',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<div class="shurly-ago">[created_1]</div>
  <div class="shurly-date">[created]</div>',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'time ago',
      'custom_date_format' => '1',
      'exclude' => 0,
      'id' => 'created_1',
      'table' => 'shurly',
      'field' => 'created',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'last_used' => array(
      'label' => 'Last used',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'time ago',
      'custom_date_format' => '1',
      'exclude' => 0,
      'id' => 'last_used',
      'table' => 'shurly',
      'field' => 'last_used',
      'relationship' => 'none',
    ),
    'link_delete' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'text' => '',
      'exclude' => 0,
      'id' => 'link_delete',
      'table' => 'shurly',
      'field' => 'link_delete',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'created' => array(
      'order' => 'DESC',
      'id' => 'created',
      'table' => 'shurly',
      'field' => 'created',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'destination' => array(
      'operator' => 'contains',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'dest',
        'identifier' => 'dest',
        'label' => 'Long URL',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'destination',
      'table' => 'shurly',
      'field' => 'destination',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'source' => array(
      'operator' => 'contains',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'source_op',
        'identifier' => 'src',
        'label' => 'Short URL',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 1,
      'id' => 'source',
      'table' => 'shurly',
      'field' => 'source',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'uid' => array(
      'operator' => 'in',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'uid_op',
        'identifier' => 'uid',
        'label' => 'User',
        'optional' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'uid',
      'table' => 'shurly',
      'field' => 'uid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'Administer short URLs',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Short URLs');
  $handler->override_option('empty', 'No short URLs yet!');
  $handler->override_option('empty_format', '1');
  $handler->override_option('items_per_page', 150);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'desc',
    'columns' => array(
      'count' => 'count',
      'destination_1' => 'destination_1',
      'destination' => 'destination',
      'source' => 'source',
      'name' => 'name',
      'created' => 'created',
      'created_1' => 'created_1',
      'last_used' => 'last_used',
      'link_delete' => 'link_delete',
    ),
    'info' => array(
      'count' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'destination_1' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'destination' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'source' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'created' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'created_1' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'last_used' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'link_delete' => array(
        'separator' => '',
      ),
    ),
    'default' => 'created_1',
  ));
  $handler = $view->new_display('page', 'Administer short URLs', 'page_1');
  $handler->override_option('path', 'admin/build/shurly/list');
  $handler->override_option('menu', array(
    'type' => 'default tab',
    'title' => 'Short URLs',
    'description' => 'List, sort, and edit Shurly short URLs',
    'weight' => '-5',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'normal',
    'title' => 'Short URLs',
    'description' => 'List, sort, and edit Shurly short URLs',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $views[$view->name] = $view;


  /*
   * View 'shurly_my_urls'
   */
  $view = new view;
  $view->name = 'shurly_my_urls';
  $view->description = 'My short URLs';
  $view->tag = 'shurly';
  $view->view_php = '';
  $view->base_table = 'shurly';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'count' => array(
      'label' => 'Clicks',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'count',
      'table' => 'shurly',
      'field' => 'count',
      'relationship' => 'none',
    ),
    'destination_1' => array(
      'label' => 'Long URL clipped',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 1,
        'max_length' => '60',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 1,
      'id' => 'destination_1',
      'table' => 'shurly',
      'field' => 'destination',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'destination' => array(
      'label' => 'Long URL',
      'alter' => array(
        'alter_text' => 0,
        'text' => '<a href="[destination]" title="[destination]" target="_blank">[destination_1]</a>',
        'make_link' => 0,
        'path' => '[destination]',
        'link_class' => '',
        'alt' => '[destination]',
        'prefix' => '',
        'suffix' => '',
        'target' => '_blank',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 1,
      'id' => 'destination',
      'table' => 'shurly',
      'field' => 'destination',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'source' => array(
      'label' => 'Short URL',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '[source]',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '_blank',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'text' => '',
      'longshort' => '0',
      'link' => 0,
      'exclude' => 1,
      'id' => 'source',
      'table' => 'shurly',
      'field' => 'source',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'nothing' => array(
      'label' => 'Links',
      'alter' => array(
        'text' => '<div class="shurly-long"><a href="[source]" title="[destination]" target="_blank">[destination_1]</a></div>
<div class="shurly-short">[source]</div>',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'nothing',
      'table' => 'views',
      'field' => 'nothing',
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => 'Date',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'custom',
      'custom_date_format' => 'M j',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'shurly',
      'field' => 'created',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'last_used' => array(
      'label' => 'Last used',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'time ago',
      'custom_date_format' => '1',
      'exclude' => 0,
      'id' => 'last_used',
      'table' => 'shurly',
      'field' => 'last_used',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'link_delete' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'text' => '',
      'exclude' => 0,
      'id' => 'link_delete',
      'table' => 'shurly',
      'field' => 'link_delete',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'created' => array(
      'order' => 'DESC',
      'id' => 'created',
      'table' => 'shurly',
      'field' => 'created',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'uid_current' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'uid_current',
      'table' => 'shurly',
      'field' => 'uid_current',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'active' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'active',
      'table' => 'shurly',
      'field' => 'active',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'View own URL stats',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'My short URLs');
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 100);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'desc',
    'columns' => array(
      'count' => 'count',
      'destination_1' => 'destination_1',
      'destination' => 'destination',
      'source' => 'source',
      'nothing' => 'nothing',
      'created' => 'created',
      'last_used' => 'last_used',
      'link_delete' => 'link_delete',
    ),
    'info' => array(
      'count' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'destination_1' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'destination' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'source' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'nothing' => array(
        'separator' => '',
      ),
      'created' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'last_used' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'link_delete' => array(
        'separator' => '',
      ),
    ),
    'default' => 'created',
  ));
  $handler = $view->new_display('page', 'My URLs', 'page_1');
  $handler->override_option('path', 'myurls');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'My URLs',
    'description' => 'List, sort, and delete short URLs',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->override_option('block_description', 'My short URLs');
  $handler->override_option('block_caching', -1);
  $views[$view->name] = $view;

  return $views;
}

