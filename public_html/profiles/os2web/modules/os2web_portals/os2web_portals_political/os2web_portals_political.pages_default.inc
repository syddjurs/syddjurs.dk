<?php
/**
 * @file
 * os2web_portals_political.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2web_portals_political_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_3';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Politik og planer',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'portal-politik-og-planer portal-side',
    'css_id' => 'panel-politikogplaner',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Ordforråd fra Ord i ordforråd (på taxonomy_term_data.vocabulary)',
        'keyword' => 'taxonomy_vocabulary',
        'name' => 'entity_from_schema:vid-taxonomy_term-taxonomy_vocabulary',
        'context' => 'argument_term_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '11',
            11 => array(
              10958 => '10958',
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a1ac9722-2260-459e-95c6-fb557d0dddc1';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-45abf0ec-b1a7-4e5c-8396-c0c494ed9df4';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '45abf0ec-b1a7-4e5c-8396-c0c494ed9df4';
  $display->content['new-45abf0ec-b1a7-4e5c-8396-c0c494ed9df4'] = $pane;
  $display->panels['middle_center'][0] = 'new-45abf0ec-b1a7-4e5c-8396-c0c494ed9df4';
  $pane = new stdClass();
  $pane->pid = 'new-30636cd2-18bf-4a2a-9807-3f119c6b844c';
  $pane->panel = 'middle_center';
  $pane->type = 'block';
  $pane->subtype = 'os2web_meetings-meeting-search-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Søg i dagsordner',
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
  $pane->uuid = '30636cd2-18bf-4a2a-9807-3f119c6b844c';
  $display->content['new-30636cd2-18bf-4a2a-9807-3f119c6b844c'] = $pane;
  $display->panels['middle_center'][1] = 'new-30636cd2-18bf-4a2a-9807-3f119c6b844c';
  $pane = new stdClass();
  $pane->pid = 'new-a8dbefb7-ceae-4259-995c-1713d3a4407b';
  $pane->panel = 'middle_center';
  $pane->type = 'views';
  $pane->subtype = 'os2web_hearings_view_hearing';
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
    'css_id' => '',
    'css_class' => 'grid-6 omega',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a8dbefb7-ceae-4259-995c-1713d3a4407b';
  $display->content['new-a8dbefb7-ceae-4259-995c-1713d3a4407b'] = $pane;
  $display->panels['middle_center'][2] = 'new-a8dbefb7-ceae-4259-995c-1713d3a4407b';
  $pane = new stdClass();
  $pane->pid = 'new-c467b8b9-4bf2-47ae-8e01-02733912763d';
  $pane->panel = 'middle_center';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_spotbox_view_spots-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
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
  $pane->uuid = 'c467b8b9-4bf2-47ae-8e01-02733912763d';
  $display->content['new-c467b8b9-4bf2-47ae-8e01-02733912763d'] = $pane;
  $display->panels['middle_center'][3] = 'new-c467b8b9-4bf2-47ae-8e01-02733912763d';
  $pane = new stdClass();
  $pane->pid = 'new-f63257de-df8b-4003-b29d-445ae021cf64';
  $pane->panel = 'middle_right';
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
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => 'politik-og-planer',
    'url' => '',
    'display' => 'block_2',
    'context' => array(
      0 => '',
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
    'css_class' => 'grid-3',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f63257de-df8b-4003-b29d-445ae021cf64';
  $display->content['new-f63257de-df8b-4003-b29d-445ae021cf64'] = $pane;
  $display->panels['middle_right'][0] = 'new-f63257de-df8b-4003-b29d-445ae021cf64';
  $pane = new stdClass();
  $pane->pid = 'new-2744455d-075a-46f4-9348-20db1a238d87';
  $pane->panel = 'middle_right';
  $pane->type = 'views';
  $pane->subtype = 'os2web_contact_view_contact';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'context' => array(
      0 => '',
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
    'css_class' => 'grid-3',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2744455d-075a-46f4-9348-20db1a238d87';
  $display->content['new-2744455d-075a-46f4-9348-20db1a238d87'] = $pane;
  $display->panels['middle_right'][1] = 'new-2744455d-075a-46f4-9348-20db1a238d87';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_3'] = $handler;

  return $export;
}
