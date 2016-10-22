<?php
/**
 * @file
 * os2web_sections.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2web_sections_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'os2web_sections_section_front';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Sektionsforside',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'sektionsforside',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'os2web_sections_page' => 'os2web_sections_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5260d693-addd-4fd9-87cd-9b3a6de64383';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'os2web_sections_section_front';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-72350c4d-a5f4-49ce-a1f0-ced17c9cb579';
  $pane->panel = 'center';
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
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
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
    'css_class' => 'grid-6 alpha omega',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '72350c4d-a5f4-49ce-a1f0-ced17c9cb579';
  $display->content['new-72350c4d-a5f4-49ce-a1f0-ced17c9cb579'] = $pane;
  $display->panels['center'][0] = 'new-72350c4d-a5f4-49ce-a1f0-ced17c9cb579';
  $pane = new stdClass();
  $pane->pid = 'new-da4b03a8-b650-48c4-84a3-98ea422f9f43';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'os2web_base_panels_view_selfserv';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
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
    'css_class' => 'grid-3 omega',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'da4b03a8-b650-48c4-84a3-98ea422f9f43';
  $display->content['new-da4b03a8-b650-48c4-84a3-98ea422f9f43'] = $pane;
  $display->panels['center'][1] = 'new-da4b03a8-b650-48c4-84a3-98ea422f9f43';
  $pane = new stdClass();
  $pane->pid = 'new-5a291b69-6dfb-44dd-b128-b72db6f2c027';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_base_panels_view_newslist-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'more_link' => 0,
    'use_pager' => 0,
    'pager_id' => '',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-6 alpha',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5a291b69-6dfb-44dd-b128-b72db6f2c027';
  $display->content['new-5a291b69-6dfb-44dd-b128-b72db6f2c027'] = $pane;
  $display->panels['center'][2] = 'new-5a291b69-6dfb-44dd-b128-b72db6f2c027';
  $pane = new stdClass();
  $pane->pid = 'new-2c0403c9-9766-4faf-b040-bdfcdacbb57d';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_spotbox_view_spots-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-3 alpha omega',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2c0403c9-9766-4faf-b040-bdfcdacbb57d';
  $display->content['new-2c0403c9-9766-4faf-b040-bdfcdacbb57d'] = $pane;
  $display->panels['center'][3] = 'new-2c0403c9-9766-4faf-b040-bdfcdacbb57d';
  $pane = new stdClass();
  $pane->pid = 'new-790c8adf-9341-41fc-93ec-90d8da20ae54';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_spotbox_view_spots-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '790c8adf-9341-41fc-93ec-90d8da20ae54';
  $display->content['new-790c8adf-9341-41fc-93ec-90d8da20ae54'] = $pane;
  $display->panels['center'][4] = 'new-790c8adf-9341-41fc-93ec-90d8da20ae54';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['os2web_sections_section_front'] = $handler;

  return $export;
}
