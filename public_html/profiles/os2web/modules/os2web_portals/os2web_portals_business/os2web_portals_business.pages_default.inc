<?php
/**
 * @file
 * os2web_portals_business.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2web_portals_business_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Ervherv Portalforside',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'portal-erhverv portal-side',
    'css_id' => 'panel-erhverv',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Portalkategori',
        'keyword' => 'taxonomy_vocabulary_2',
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
              10957 => '10957',
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
  $display->uuid = '9a8b60aa-adda-4c4c-979f-d0d350d00f27';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-202a0a5e-2c46-4194-bd3f-5c5d17d5fc75';
  $pane->panel = 'lead';
  $pane->type = 'views';
  $pane->subtype = 'os2web_base_panels_view_rotating';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '4',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => 'erhverv',
    'url' => '',
    'display' => 'block_1',
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
    'css_class' => 'grid-6 omega',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '202a0a5e-2c46-4194-bd3f-5c5d17d5fc75';
  $display->content['new-202a0a5e-2c46-4194-bd3f-5c5d17d5fc75'] = $pane;
  $display->panels['lead'][0] = 'new-202a0a5e-2c46-4194-bd3f-5c5d17d5fc75';
  $pane = new stdClass();
  $pane->pid = 'new-2023498e-d45b-43c0-aced-07297f1e975b';
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
    'args' => 'erhverv',
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
  $pane->uuid = '2023498e-d45b-43c0-aced-07297f1e975b';
  $display->content['new-2023498e-d45b-43c0-aced-07297f1e975b'] = $pane;
  $display->panels['lead'][1] = 'new-2023498e-d45b-43c0-aced-07297f1e975b';
  $pane = new stdClass();
  $pane->pid = 'new-868026f0-0fae-4ea8-a72d-f136f672b18c';
  $pane->panel = 'middle_top';
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
    'css_class' => 'grid-6 alpha ',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '868026f0-0fae-4ea8-a72d-f136f672b18c';
  $display->content['new-868026f0-0fae-4ea8-a72d-f136f672b18c'] = $pane;
  $display->panels['middle_top'][0] = 'new-868026f0-0fae-4ea8-a72d-f136f672b18c';
  $pane = new stdClass();
  $pane->pid = 'new-fecd7ab8-adeb-44ad-af63-f06b361be5e1';
  $pane->panel = 'middle_top';
  $pane->type = 'block';
  $pane->subtype = 'block-7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Erhvervsrådgivning',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-3  omega erhvervsraadgiver',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fecd7ab8-adeb-44ad-af63-f06b361be5e1';
  $display->content['new-fecd7ab8-adeb-44ad-af63-f06b361be5e1'] = $pane;
  $display->panels['middle_top'][1] = 'new-fecd7ab8-adeb-44ad-af63-f06b361be5e1';
  $pane = new stdClass();
  $pane->pid = 'new-30b6e2d8-337d-40ba-a328-206c35da6df4';
  $pane->panel = 'middle_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_spotbox_view_spots-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-6 alpha ',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '30b6e2d8-337d-40ba-a328-206c35da6df4';
  $display->content['new-30b6e2d8-337d-40ba-a328-206c35da6df4'] = $pane;
  $display->panels['middle_top'][2] = 'new-30b6e2d8-337d-40ba-a328-206c35da6df4';
  $pane = new stdClass();
  $pane->pid = 'new-c16134b0-6651-4bc7-b6dc-94f9520341ce';
  $pane->panel = 'middle_top';
  $pane->type = 'block';
  $pane->subtype = 'block-6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Links',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-3 omega links-erhverv',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c16134b0-6651-4bc7-b6dc-94f9520341ce';
  $display->content['new-c16134b0-6651-4bc7-b6dc-94f9520341ce'] = $pane;
  $display->panels['middle_top'][3] = 'new-c16134b0-6651-4bc7-b6dc-94f9520341ce';
  $pane = new stdClass();
  $pane->pid = 'new-202314bf-4e37-479e-99df-232de54f51b5';
  $pane->panel = 'middle_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_spotbox_view_spots-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '292846,292845,292847',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-9 alpha omega',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '202314bf-4e37-479e-99df-232de54f51b5';
  $display->content['new-202314bf-4e37-479e-99df-232de54f51b5'] = $pane;
  $display->panels['middle_top'][4] = 'new-202314bf-4e37-479e-99df-232de54f51b5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  return $export;
}
