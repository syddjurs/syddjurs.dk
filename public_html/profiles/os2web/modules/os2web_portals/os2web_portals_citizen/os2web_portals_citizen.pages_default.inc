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
  $display->uuid = 'd534c499-ee37-4fc9-ba4d-76fece09593a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6c21a251-b47b-44e3-9516-5839118de839';
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
  $pane->uuid = '6c21a251-b47b-44e3-9516-5839118de839';
  $display->content['new-6c21a251-b47b-44e3-9516-5839118de839'] = $pane;
  $display->panels['lead'][0] = 'new-6c21a251-b47b-44e3-9516-5839118de839';
  $pane = new stdClass();
  $pane->pid = 'new-1079bb73-907d-41af-a4b7-a6f265aaba7c';
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
  $pane->uuid = '1079bb73-907d-41af-a4b7-a6f265aaba7c';
  $display->content['new-1079bb73-907d-41af-a4b7-a6f265aaba7c'] = $pane;
  $display->panels['lead'][1] = 'new-1079bb73-907d-41af-a4b7-a6f265aaba7c';
  $pane = new stdClass();
  $pane->pid = 'new-f7a578aa-1791-4597-807a-674b95fc2df5';
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
  $pane->uuid = 'f7a578aa-1791-4597-807a-674b95fc2df5';
  $display->content['new-f7a578aa-1791-4597-807a-674b95fc2df5'] = $pane;
  $display->panels['middle_center'][0] = 'new-f7a578aa-1791-4597-807a-674b95fc2df5';
  $pane = new stdClass();
  $pane->pid = 'new-1342a7bf-402d-4478-a09b-cf18a3a41583';
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
  $pane->uuid = '1342a7bf-402d-4478-a09b-cf18a3a41583';
  $display->content['new-1342a7bf-402d-4478-a09b-cf18a3a41583'] = $pane;
  $display->panels['middle_center'][1] = 'new-1342a7bf-402d-4478-a09b-cf18a3a41583';
  $pane = new stdClass();
  $pane->pid = 'new-ef40ae99-27dd-4eab-b401-aff47bc68ef3';
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
  $pane->uuid = 'ef40ae99-27dd-4eab-b401-aff47bc68ef3';
  $display->content['new-ef40ae99-27dd-4eab-b401-aff47bc68ef3'] = $pane;
  $display->panels['middle_center'][2] = 'new-ef40ae99-27dd-4eab-b401-aff47bc68ef3';
  $pane = new stdClass();
  $pane->pid = 'new-91161122-cf82-47b4-9143-471825c1e8f1';
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
  $pane->uuid = '91161122-cf82-47b4-9143-471825c1e8f1';
  $display->content['new-91161122-cf82-47b4-9143-471825c1e8f1'] = $pane;
  $display->panels['middle_right'][0] = 'new-91161122-cf82-47b4-9143-471825c1e8f1';
  $pane = new stdClass();
  $pane->pid = 'new-f0752a0b-e41f-4111-8c7c-c58c38531f67';
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
  $pane->uuid = 'f0752a0b-e41f-4111-8c7c-c58c38531f67';
  $display->content['new-f0752a0b-e41f-4111-8c7c-c58c38531f67'] = $pane;
  $display->panels['middle_right'][1] = 'new-f0752a0b-e41f-4111-8c7c-c58c38531f67';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}
