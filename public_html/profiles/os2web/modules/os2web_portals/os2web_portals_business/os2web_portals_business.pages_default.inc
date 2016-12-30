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
      'top' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ddecc177-368c-4f32-8e9d-c648c68c2d01';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bb79d598-2ed0-4422-b298-4899d5c665e6';
  $pane->panel = 'bottom';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bb79d598-2ed0-4422-b298-4899d5c665e6';
  $display->content['new-bb79d598-2ed0-4422-b298-4899d5c665e6'] = $pane;
  $display->panels['bottom'][0] = 'new-bb79d598-2ed0-4422-b298-4899d5c665e6';
  $pane = new stdClass();
  $pane->pid = 'new-bf9d86ce-f186-42e4-ab55-c5e575b5d052';
  $pane->panel = 'content';
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
  $pane->uuid = 'bf9d86ce-f186-42e4-ab55-c5e575b5d052';
  $display->content['new-bf9d86ce-f186-42e4-ab55-c5e575b5d052'] = $pane;
  $display->panels['content'][0] = 'new-bf9d86ce-f186-42e4-ab55-c5e575b5d052';
  $pane = new stdClass();
  $pane->pid = 'new-7c044c0d-8934-410f-9ad4-9b45aca78557';
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
    'css_class' => 'grid-6 alpha ',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7c044c0d-8934-410f-9ad4-9b45aca78557';
  $display->content['new-7c044c0d-8934-410f-9ad4-9b45aca78557'] = $pane;
  $display->panels['content'][1] = 'new-7c044c0d-8934-410f-9ad4-9b45aca78557';
  $pane = new stdClass();
  $pane->pid = 'new-0306fc34-608a-466b-a667-efcd3ceb21e7';
  $pane->panel = 'content';
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
  $pane->uuid = '0306fc34-608a-466b-a667-efcd3ceb21e7';
  $display->content['new-0306fc34-608a-466b-a667-efcd3ceb21e7'] = $pane;
  $display->panels['content'][2] = 'new-0306fc34-608a-466b-a667-efcd3ceb21e7';
  $pane = new stdClass();
  $pane->pid = 'new-fd4e18b5-d7b1-42b7-8cb0-ac00cbd0e138';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fd4e18b5-d7b1-42b7-8cb0-ac00cbd0e138';
  $display->content['new-fd4e18b5-d7b1-42b7-8cb0-ac00cbd0e138'] = $pane;
  $display->panels['sidebar'][0] = 'new-fd4e18b5-d7b1-42b7-8cb0-ac00cbd0e138';
  $pane = new stdClass();
  $pane->pid = 'new-1e843053-b940-41ed-9053-f5d1afe06bc6';
  $pane->panel = 'sidebar';
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
  $pane->uuid = '1e843053-b940-41ed-9053-f5d1afe06bc6';
  $display->content['new-1e843053-b940-41ed-9053-f5d1afe06bc6'] = $pane;
  $display->panels['sidebar'][1] = 'new-1e843053-b940-41ed-9053-f5d1afe06bc6';
  $pane = new stdClass();
  $pane->pid = 'new-aa687cad-7739-452c-a200-07af0a876da0';
  $pane->panel = 'sidebar';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'aa687cad-7739-452c-a200-07af0a876da0';
  $display->content['new-aa687cad-7739-452c-a200-07af0a876da0'] = $pane;
  $display->panels['sidebar'][2] = 'new-aa687cad-7739-452c-a200-07af0a876da0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  return $export;
}
