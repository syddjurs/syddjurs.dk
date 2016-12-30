<?php
/**
 * @file
 * os2web_portals_citizen.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2web_portals_citizen_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Borger Portalforside',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'portal-borger portal-side',
    'css_id' => 'panel-borger',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '11',
            11 => array(
              10959 => '10959',
            ),
            1 => array(),
            15 => array(),
            12 => array(),
            16 => array(),
            17 => array(),
            2 => array(),
            10 => array(),
            3 => array(),
            13 => array(),
            14 => array(),
            4 => array(),
            5 => array(),
            6 => array(),
            7 => array(),
            8 => array(),
            9 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'content-with-right-sidebar-7-5';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right_top' => NULL,
      'right_middle' => NULL,
      'right_bottom' => NULL,
      'lead' => NULL,
      'middle_top' => NULL,
      'middle_center' => NULL,
      'middle_right' => NULL,
      'center' => NULL,
      'right_' => NULL,
      'top_left' => NULL,
      'top_center' => NULL,
      'top_right' => NULL,
      'middle_left' => NULL,
      'bottom' => NULL,
      'top' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f2aa6c6c-78a6-4fb5-b093-a08f4230162a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6b802b5f-213b-48df-b596-9c22ce976760';
  $pane->panel = 'content';
  $pane->type = 'views';
  $pane->subtype = 'os2web_citizenservices_view';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '9',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'pop-borgerservices',
    'css_class' => 'grid-6 alpha',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6b802b5f-213b-48df-b596-9c22ce976760';
  $display->content['new-6b802b5f-213b-48df-b596-9c22ce976760'] = $pane;
  $display->panels['content'][0] = 'new-6b802b5f-213b-48df-b596-9c22ce976760';
  $pane = new stdClass();
  $pane->pid = 'new-a72006df-ab56-43a5-b15a-5c842ab6c701';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_base_panels_view_newslist-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'more_link' => 0,
    'use_pager' => 0,
    'pager_id' => '0',
    'override_title' => 1,
    'override_title_text' => 'Aktuelt',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-6',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a72006df-ab56-43a5-b15a-5c842ab6c701';
  $display->content['new-a72006df-ab56-43a5-b15a-5c842ab6c701'] = $pane;
  $display->panels['content'][1] = 'new-a72006df-ab56-43a5-b15a-5c842ab6c701';
  $pane = new stdClass();
  $pane->pid = 'new-87f3f3d0-383d-473a-9dfd-b595f5acbbbc';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_spotbox_view_spots-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-6',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '87f3f3d0-383d-473a-9dfd-b595f5acbbbc';
  $display->content['new-87f3f3d0-383d-473a-9dfd-b595f5acbbbc'] = $pane;
  $display->panels['content'][2] = 'new-87f3f3d0-383d-473a-9dfd-b595f5acbbbc';
  $pane = new stdClass();
  $pane->pid = 'new-27fb35fe-530c-4250-96ca-ee976a5f5089';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_spotbox_view_spots-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'offset' => '2',
    'arguments' => array(
      'nid' => '',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-6',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '27fb35fe-530c-4250-96ca-ee976a5f5089';
  $display->content['new-27fb35fe-530c-4250-96ca-ee976a5f5089'] = $pane;
  $display->panels['content'][3] = 'new-27fb35fe-530c-4250-96ca-ee976a5f5089';
  $pane = new stdClass();
  $pane->pid = 'new-99711dd2-be96-42c9-a85b-6b3b309e3988';
  $pane->panel = 'sidebar';
  $pane->type = 'views';
  $pane->subtype = 'os2web_base_panels_view_selfserv';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => 'Borger',
    'url' => '',
    'display' => 'block_2',
    'context' => array(
      0 => 'argument_term_1.tid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-3 omega',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '99711dd2-be96-42c9-a85b-6b3b309e3988';
  $display->content['new-99711dd2-be96-42c9-a85b-6b3b309e3988'] = $pane;
  $display->panels['sidebar'][0] = 'new-99711dd2-be96-42c9-a85b-6b3b309e3988';
  $pane = new stdClass();
  $pane->pid = 'new-da7e69cf-9caf-42c0-a819-7c9cb8a2539a';
  $pane->panel = 'sidebar';
  $pane->type = 'views';
  $pane->subtype = 'os2web_kulturnaut_events_lists';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'blok_kulturnaut_indholdsside',
    'override_title' => 1,
    'override_title_text' => 'DET SKER',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-3',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'da7e69cf-9caf-42c0-a819-7c9cb8a2539a';
  $display->content['new-da7e69cf-9caf-42c0-a819-7c9cb8a2539a'] = $pane;
  $display->panels['sidebar'][1] = 'new-da7e69cf-9caf-42c0-a819-7c9cb8a2539a';
  $pane = new stdClass();
  $pane->pid = 'new-05095640-6960-4481-8322-de39ce59c186';
  $pane->panel = 'sidebar';
  $pane->type = 'views';
  $pane->subtype = 'os2web_contact_view_contact';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => FALSE,
    'use_pager' => FALSE,
    'nodes_per_page' => 10,
    'pager_id' => 0,
    'offset' => 0,
    'more_link' => FALSE,
    'feed_icons' => FALSE,
    'panel_args' => FALSE,
    'link_to_view' => FALSE,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-3',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '05095640-6960-4481-8322-de39ce59c186';
  $display->content['new-05095640-6960-4481-8322-de39ce59c186'] = $pane;
  $display->panels['sidebar'][2] = 'new-05095640-6960-4481-8322-de39ce59c186';
  $pane = new stdClass();
  $pane->pid = 'new-b6114032-f113-410c-98ab-9a59a69ad2ea';
  $pane->panel = 'sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'asdasd',
    'title' => 'asdasd',
    'title_heading' => 'h2',
    'body' => '<p>asdasd</p>
',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b6114032-f113-410c-98ab-9a59a69ad2ea';
  $display->content['new-b6114032-f113-410c-98ab-9a59a69ad2ea'] = $pane;
  $display->panels['sidebar'][3] = 'new-b6114032-f113-410c-98ab-9a59a69ad2ea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}
