<?php
/**
 * @file
 * os2web_base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2web_base_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Indholdsside',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '.panels-flexible-node_edit-inside { padding: 10px}',
    'contexts' => array(
      0 => array(
        'identifier' => 'Redigeringsformular',
        'keyword' => 'node_add',
        'name' => 'node_add_form',
        'type' => 'os2web_base_contentpage',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'os2web_base_contentpage' => 'os2web_base_contentpage',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:node_edit';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'lead' => NULL,
      'top_left' => NULL,
      'top_center' => NULL,
      'top_right' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'venstre' => NULL,
      'h__jre' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3c64b563-0a85-4c74-a5d5-0c58959ff51a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b33801ec-a66a-4b37-a1d0-31c282f9ffed';
  $pane->panel = 'center';
  $pane->type = 'form';
  $pane->subtype = 'form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b33801ec-a66a-4b37-a1d0-31c282f9ffed';
  $display->content['new-b33801ec-a66a-4b37-a1d0-31c282f9ffed'] = $pane;
  $display->panels['center'][0] = 'new-b33801ec-a66a-4b37-a1d0-31c282f9ffed';
  $pane = new stdClass();
  $pane->pid = 'new-5773688a-2a93-4aa5-ba04-ccec58f48234';
  $pane->panel = 'center';
  $pane->type = 'node_form_buttons';
  $pane->subtype = 'node_form_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5773688a-2a93-4aa5-ba04-ccec58f48234';
  $display->content['new-5773688a-2a93-4aa5-ba04-ccec58f48234'] = $pane;
  $display->panels['center'][1] = 'new-5773688a-2a93-4aa5-ba04-ccec58f48234';
  $pane = new stdClass();
  $pane->pid = 'new-164c7bf7-0aeb-42a0-9cfe-0dbe75e912cb';
  $pane->panel = 'h__jre';
  $pane->type = 'node_form_buttons';
  $pane->subtype = 'node_form_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '164c7bf7-0aeb-42a0-9cfe-0dbe75e912cb';
  $display->content['new-164c7bf7-0aeb-42a0-9cfe-0dbe75e912cb'] = $pane;
  $display->panels['h__jre'][0] = 'new-164c7bf7-0aeb-42a0-9cfe-0dbe75e912cb';
  $pane = new stdClass();
  $pane->pid = 'new-ec1fa821-e15a-4606-af77-c5d5e2e195d9';
  $pane->panel = 'h__jre';
  $pane->type = 'node_form_publishing';
  $pane->subtype = 'node_form_publishing';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ec1fa821-e15a-4606-af77-c5d5e2e195d9';
  $display->content['new-ec1fa821-e15a-4606-af77-c5d5e2e195d9'] = $pane;
  $display->panels['h__jre'][1] = 'new-ec1fa821-e15a-4606-af77-c5d5e2e195d9';
  $pane = new stdClass();
  $pane->pid = 'new-f532a895-f224-4450-af67-41f8777efba2';
  $pane->panel = 'venstre';
  $pane->type = 'node_form_title';
  $pane->subtype = 'node_form_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f532a895-f224-4450-af67-41f8777efba2';
  $display->content['new-f532a895-f224-4450-af67-41f8777efba2'] = $pane;
  $display->panels['venstre'][0] = 'new-f532a895-f224-4450-af67-41f8777efba2';
  $pane = new stdClass();
  $pane->pid = 'new-06dfc8d1-9976-4589-b54d-61fe316f86cb';
  $pane->panel = 'venstre';
  $pane->type = 'node_form_path';
  $pane->subtype = 'node_form_path';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '06dfc8d1-9976-4589-b54d-61fe316f86cb';
  $display->content['new-06dfc8d1-9976-4589-b54d-61fe316f86cb'] = $pane;
  $display->panels['venstre'][1] = 'new-06dfc8d1-9976-4589-b54d-61fe316f86cb';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  return $export;
}
