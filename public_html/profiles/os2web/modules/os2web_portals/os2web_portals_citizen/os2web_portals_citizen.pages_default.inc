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
  $display->layout = 'os2web_portal';
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e6d5acf1-2eda-4da6-b73f-d64364636808';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-933848f0-ed25-4005-85a2-b1960d483bad';
  $pane->panel = 'lead';
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
  $pane->uuid = '933848f0-ed25-4005-85a2-b1960d483bad';
  $display->content['new-933848f0-ed25-4005-85a2-b1960d483bad'] = $pane;
  $display->panels['lead'][0] = 'new-933848f0-ed25-4005-85a2-b1960d483bad';
  $pane = new stdClass();
  $pane->pid = 'new-445911f9-4166-4002-a18a-681c73fb27b4';
  $pane->panel = 'lead';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '445911f9-4166-4002-a18a-681c73fb27b4';
  $display->content['new-445911f9-4166-4002-a18a-681c73fb27b4'] = $pane;
  $display->panels['lead'][1] = 'new-445911f9-4166-4002-a18a-681c73fb27b4';
  $pane = new stdClass();
  $pane->pid = 'new-ad4b6818-32c8-4ad2-8190-b4e4962623f3';
  $pane->panel = 'middle_center';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ad4b6818-32c8-4ad2-8190-b4e4962623f3';
  $display->content['new-ad4b6818-32c8-4ad2-8190-b4e4962623f3'] = $pane;
  $display->panels['middle_center'][0] = 'new-ad4b6818-32c8-4ad2-8190-b4e4962623f3';
  $pane = new stdClass();
  $pane->pid = 'new-803509f8-498d-4191-8967-f5ecfa0769fc';
  $pane->panel = 'middle_center';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '803509f8-498d-4191-8967-f5ecfa0769fc';
  $display->content['new-803509f8-498d-4191-8967-f5ecfa0769fc'] = $pane;
  $display->panels['middle_center'][1] = 'new-803509f8-498d-4191-8967-f5ecfa0769fc';
  $pane = new stdClass();
  $pane->pid = 'new-ca21f94d-bd1a-43bc-806e-fd81afda18e0';
  $pane->panel = 'middle_center';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ca21f94d-bd1a-43bc-806e-fd81afda18e0';
  $display->content['new-ca21f94d-bd1a-43bc-806e-fd81afda18e0'] = $pane;
  $display->panels['middle_center'][2] = 'new-ca21f94d-bd1a-43bc-806e-fd81afda18e0';
  $pane = new stdClass();
  $pane->pid = 'new-5838835e-f223-4959-bc06-2db67c5002ef';
  $pane->panel = 'middle_right';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5838835e-f223-4959-bc06-2db67c5002ef';
  $display->content['new-5838835e-f223-4959-bc06-2db67c5002ef'] = $pane;
  $display->panels['middle_right'][0] = 'new-5838835e-f223-4959-bc06-2db67c5002ef';
  $pane = new stdClass();
  $pane->pid = 'new-36ebef94-8880-4573-b123-ca7235a17eef';
  $pane->panel = 'middle_right';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '36ebef94-8880-4573-b123-ca7235a17eef';
  $display->content['new-36ebef94-8880-4573-b123-ca7235a17eef'] = $pane;
  $display->panels['middle_right'][1] = 'new-36ebef94-8880-4573-b123-ca7235a17eef';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}
