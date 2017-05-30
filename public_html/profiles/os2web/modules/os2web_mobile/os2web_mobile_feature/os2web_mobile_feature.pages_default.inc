<?php
/**
 * @file
 * os2web_mobile_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2web_mobile_feature_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Node - Mobile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Indholdselement from Indholdselement (on Indholdselement: Kontaktblok [field_node_reference_kontaktblok])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_node_reference_kontaktblok-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'os2web_mobile_theme',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'os2web_mobile';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'bund' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '456b27bd-1248-4f88-8c58-0b9ca4c9008a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7be0389a-b17b-4dea-bff0-0b9324ee8ade';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'search-form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Søg',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7be0389a-b17b-4dea-bff0-0b9324ee8ade';
  $display->content['new-7be0389a-b17b-4dea-bff0-0b9324ee8ade'] = $pane;
  $display->panels['bottom'][0] = 'new-7be0389a-b17b-4dea-bff0-0b9324ee8ade';
  $pane = new stdClass();
  $pane->pid = 'new-35451e19-ec80-4d07-ab57-ca15046c74a8';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'kontaktblok';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%node_2:nid',
    'url' => '',
    'display' => 'block',
    'context' => array(
      0 => 'relationship_entity_from_field:field_node_reference_kontaktblok-node-node_1.field_bpa_id',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'contact',
    'css_class' => 'pane-content-well',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '35451e19-ec80-4d07-ab57-ca15046c74a8';
  $display->content['new-35451e19-ec80-4d07-ab57-ca15046c74a8'] = $pane;
  $display->panels['bottom'][1] = 'new-35451e19-ec80-4d07-ab57-ca15046c74a8';
  $pane = new stdClass();
  $pane->pid = 'new-c1e1a0a6-99f4-4bd2-9624-07803dfb107a';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'block-6';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Is contact set',
          'php' => 'return empty($contexts[\'argument_entity_id:node_1\']->data->field_node_reference_kontaktblok[LANGUAGE_NONE][0][\'nid\']);',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Kontakt Borgerservice',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-content-well',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c1e1a0a6-99f4-4bd2-9624-07803dfb107a';
  $display->content['new-c1e1a0a6-99f4-4bd2-9624-07803dfb107a'] = $pane;
  $display->panels['bottom'][2] = 'new-c1e1a0a6-99f4-4bd2-9624-07803dfb107a';
  $pane = new stdClass();
  $pane->pid = 'new-a9791f6d-bf37-435a-9903-8c861c7268ab';
  $pane->panel = 'bottom';
  $pane->type = 'os2web_mobile_pane';
  $pane->subtype = 'os2web_mobile_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a9791f6d-bf37-435a-9903-8c861c7268ab';
  $display->content['new-a9791f6d-bf37-435a-9903-8c861c7268ab'] = $pane;
  $display->panels['bottom'][3] = 'new-a9791f6d-bf37-435a-9903-8c861c7268ab';
  $pane = new stdClass();
  $pane->pid = 'new-aff0aed3-e845-45bf-8593-89b53175dbbe';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-OS2Web_mobile-19';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'aff0aed3-e845-45bf-8593-89b53175dbbe';
  $display->content['new-aff0aed3-e845-45bf-8593-89b53175dbbe'] = $pane;
  $display->panels['top'][0] = 'new-aff0aed3-e845-45bf-8593-89b53175dbbe';
  $pane = new stdClass();
  $pane->pid = 'new-968c8083-cd34-40f8-a104-6a6c26a45dac';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-OS2Web_mobile-18';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
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
  $pane->uuid = '968c8083-cd34-40f8-a104-6a6c26a45dac';
  $display->content['new-968c8083-cd34-40f8-a104-6a6c26a45dac'] = $pane;
  $display->panels['top'][1] = 'new-968c8083-cd34-40f8-a104-6a6c26a45dac';
  $pane = new stdClass();
  $pane->pid = 'new-9c05eb92-7858-4ab4-9291-c652abb9f75b';
  $pane->panel = 'top';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 1,
    'override_title' => 0,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9c05eb92-7858-4ab4-9291-c652abb9f75b';
  $display->content['new-9c05eb92-7858-4ab4-9291-c652abb9f75b'] = $pane;
  $display->panels['top'][2] = 'new-9c05eb92-7858-4ab4-9291-c652abb9f75b';
  $pane = new stdClass();
  $pane->pid = 'new-c3daffc1-306f-43cb-8aae-4698df37c5d1';
  $pane->panel = 'top';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:webform';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c3daffc1-306f-43cb-8aae-4698df37c5d1';
  $display->content['new-c3daffc1-306f-43cb-8aae-4698df37c5d1'] = $pane;
  $display->panels['top'][3] = 'new-c3daffc1-306f-43cb-8aae-4698df37c5d1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  return $export;
}
