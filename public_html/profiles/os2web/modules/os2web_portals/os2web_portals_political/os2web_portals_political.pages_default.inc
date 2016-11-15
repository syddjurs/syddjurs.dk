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
  $display->uuid = '62a13824-9266-4ceb-9491-d50629ed6028';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-41e08855-bffb-4699-9c32-927fbedec11d';
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
  $pane->uuid = '41e08855-bffb-4699-9c32-927fbedec11d';
  $display->content['new-41e08855-bffb-4699-9c32-927fbedec11d'] = $pane;
  $display->panels['middle_center'][0] = 'new-41e08855-bffb-4699-9c32-927fbedec11d';
  $pane = new stdClass();
  $pane->pid = 'new-30eb5230-182f-446b-b03a-c296a7e14643';
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
  $pane->uuid = '30eb5230-182f-446b-b03a-c296a7e14643';
  $display->content['new-30eb5230-182f-446b-b03a-c296a7e14643'] = $pane;
  $display->panels['middle_center'][1] = 'new-30eb5230-182f-446b-b03a-c296a7e14643';
  $pane = new stdClass();
  $pane->pid = 'new-6b4ee815-37ad-4ac7-b93e-54633045cdfc';
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
  $pane->uuid = '6b4ee815-37ad-4ac7-b93e-54633045cdfc';
  $display->content['new-6b4ee815-37ad-4ac7-b93e-54633045cdfc'] = $pane;
  $display->panels['middle_center'][2] = 'new-6b4ee815-37ad-4ac7-b93e-54633045cdfc';
  $pane = new stdClass();
  $pane->pid = 'new-302c2bdc-d314-40a1-9d27-24d18b2c98b9';
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
  $pane->uuid = '302c2bdc-d314-40a1-9d27-24d18b2c98b9';
  $display->content['new-302c2bdc-d314-40a1-9d27-24d18b2c98b9'] = $pane;
  $display->panels['middle_center'][3] = 'new-302c2bdc-d314-40a1-9d27-24d18b2c98b9';
  $pane = new stdClass();
  $pane->pid = 'new-b2773d03-50b5-41a7-93c4-4349324c4aa1';
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
  $pane->uuid = 'b2773d03-50b5-41a7-93c4-4349324c4aa1';
  $display->content['new-b2773d03-50b5-41a7-93c4-4349324c4aa1'] = $pane;
  $display->panels['middle_right'][0] = 'new-b2773d03-50b5-41a7-93c4-4349324c4aa1';
  $pane = new stdClass();
  $pane->pid = 'new-2e7366c6-93da-4920-8ee7-3d669f852518';
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
  $pane->uuid = '2e7366c6-93da-4920-8ee7-3d669f852518';
  $display->content['new-2e7366c6-93da-4920-8ee7-3d669f852518'] = $pane;
  $display->panels['middle_right'][1] = 'new-2e7366c6-93da-4920-8ee7-3d669f852518';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_3'] = $handler;

  return $export;
}
