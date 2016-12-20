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
  $display->uuid = 'd5c953c3-2e2b-4fb9-a3d5-0e80daa44743';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c2461b4a-46ea-4a3f-8524-e3fc028939d8';
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
  $pane->uuid = 'c2461b4a-46ea-4a3f-8524-e3fc028939d8';
  $display->content['new-c2461b4a-46ea-4a3f-8524-e3fc028939d8'] = $pane;
  $display->panels['lead'][0] = 'new-c2461b4a-46ea-4a3f-8524-e3fc028939d8';
  $pane = new stdClass();
  $pane->pid = 'new-5907289f-562a-4dfc-a4a0-c982bbf9952a';
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
  $pane->uuid = '5907289f-562a-4dfc-a4a0-c982bbf9952a';
  $display->content['new-5907289f-562a-4dfc-a4a0-c982bbf9952a'] = $pane;
  $display->panels['lead'][1] = 'new-5907289f-562a-4dfc-a4a0-c982bbf9952a';
  $pane = new stdClass();
  $pane->pid = 'new-cafb2f64-bb50-4249-b511-0f4e024dfb60';
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
  $pane->uuid = 'cafb2f64-bb50-4249-b511-0f4e024dfb60';
  $display->content['new-cafb2f64-bb50-4249-b511-0f4e024dfb60'] = $pane;
  $display->panels['middle_top'][0] = 'new-cafb2f64-bb50-4249-b511-0f4e024dfb60';
  $pane = new stdClass();
  $pane->pid = 'new-1919cdcd-fd73-4800-aa3a-52340dd5c6cd';
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
  $pane->uuid = '1919cdcd-fd73-4800-aa3a-52340dd5c6cd';
  $display->content['new-1919cdcd-fd73-4800-aa3a-52340dd5c6cd'] = $pane;
  $display->panels['middle_top'][1] = 'new-1919cdcd-fd73-4800-aa3a-52340dd5c6cd';
  $pane = new stdClass();
  $pane->pid = 'new-c0ff5baf-6c1c-4bac-a7de-d04de6720620';
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
  $pane->uuid = 'c0ff5baf-6c1c-4bac-a7de-d04de6720620';
  $display->content['new-c0ff5baf-6c1c-4bac-a7de-d04de6720620'] = $pane;
  $display->panels['middle_top'][2] = 'new-c0ff5baf-6c1c-4bac-a7de-d04de6720620';
  $pane = new stdClass();
  $pane->pid = 'new-d2d8207b-c639-426f-93c2-d6405ab1f1f9';
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
  $pane->uuid = 'd2d8207b-c639-426f-93c2-d6405ab1f1f9';
  $display->content['new-d2d8207b-c639-426f-93c2-d6405ab1f1f9'] = $pane;
  $display->panels['middle_top'][3] = 'new-d2d8207b-c639-426f-93c2-d6405ab1f1f9';
  $pane = new stdClass();
  $pane->pid = 'new-e0e1b715-67b9-403c-a329-a878d6780113';
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
  $pane->uuid = 'e0e1b715-67b9-403c-a329-a878d6780113';
  $display->content['new-e0e1b715-67b9-403c-a329-a878d6780113'] = $pane;
  $display->panels['middle_top'][4] = 'new-e0e1b715-67b9-403c-a329-a878d6780113';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  return $export;
}
