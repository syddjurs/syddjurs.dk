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
  $display->layout = 'content-with-right-sidebar-8-4';
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
  $display->uuid = '5b15e6fc-93b6-4a0b-aca7-b901207f0be4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fbdd00bd-5bcd-4667-a38c-9900bc310e4c';
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
  $pane->uuid = 'fbdd00bd-5bcd-4667-a38c-9900bc310e4c';
  $display->content['new-fbdd00bd-5bcd-4667-a38c-9900bc310e4c'] = $pane;
  $display->panels['content'][0] = 'new-fbdd00bd-5bcd-4667-a38c-9900bc310e4c';
  $pane = new stdClass();
  $pane->pid = 'new-8f1b50c7-a7ad-4c73-be05-268310312078';
  $pane->panel = 'content';
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
  $pane->uuid = '8f1b50c7-a7ad-4c73-be05-268310312078';
  $display->content['new-8f1b50c7-a7ad-4c73-be05-268310312078'] = $pane;
  $display->panels['content'][1] = 'new-8f1b50c7-a7ad-4c73-be05-268310312078';
  $pane = new stdClass();
  $pane->pid = 'new-1fe259ed-1516-417a-b8b0-ea1ce992b244';
  $pane->panel = 'content';
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
  $pane->uuid = '1fe259ed-1516-417a-b8b0-ea1ce992b244';
  $display->content['new-1fe259ed-1516-417a-b8b0-ea1ce992b244'] = $pane;
  $display->panels['content'][2] = 'new-1fe259ed-1516-417a-b8b0-ea1ce992b244';
  $pane = new stdClass();
  $pane->pid = 'new-663c6ec2-9406-4a57-a351-01f1b5dbfa98';
  $pane->panel = 'content';
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
  $pane->uuid = '663c6ec2-9406-4a57-a351-01f1b5dbfa98';
  $display->content['new-663c6ec2-9406-4a57-a351-01f1b5dbfa98'] = $pane;
  $display->panels['content'][3] = 'new-663c6ec2-9406-4a57-a351-01f1b5dbfa98';
  $pane = new stdClass();
  $pane->pid = 'new-0f7952a7-6cf7-4e66-91fb-f3929ddfd607';
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
  $pane->uuid = '0f7952a7-6cf7-4e66-91fb-f3929ddfd607';
  $display->content['new-0f7952a7-6cf7-4e66-91fb-f3929ddfd607'] = $pane;
  $display->panels['sidebar'][0] = 'new-0f7952a7-6cf7-4e66-91fb-f3929ddfd607';
  $pane = new stdClass();
  $pane->pid = 'new-ae73049b-7b40-44de-b0c5-d8e1064e6e99';
  $pane->panel = 'sidebar';
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
  $pane->uuid = 'ae73049b-7b40-44de-b0c5-d8e1064e6e99';
  $display->content['new-ae73049b-7b40-44de-b0c5-d8e1064e6e99'] = $pane;
  $display->panels['sidebar'][1] = 'new-ae73049b-7b40-44de-b0c5-d8e1064e6e99';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_3'] = $handler;

  return $export;
}
