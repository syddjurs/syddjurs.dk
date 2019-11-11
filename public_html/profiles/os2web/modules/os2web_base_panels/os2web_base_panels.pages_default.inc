<?php
/**
 * @file
 * os2web_base_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2web_base_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'os2web_base_panels_panel_content';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
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
              'os2web_base_contentpage' => 'os2web_base_contentpage',
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
  $display->uuid = 'e2904d87-55c1-4f8c-91c9-6636f38a6226';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'os2web_base_panels_panel_content';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-971cb383-5f1e-4686-8e56-b879b99db0ab';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_base_field_lead_img';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'slideshow_image_style' => 'os2web_base_style_medium',
      'slideshow_link' => '',
      'slideshow_caption' => '',
      'slideshow_caption_link' => '',
      'slideshow_fx' => 'fade',
      'slideshow_speed' => '1000',
      'slideshow_timeout' => '4000',
      'slideshow_order' => '',
      'slideshow_controls' => 1,
      'slideshow_pause' => 1,
      'slideshow_pager' => 'carousel',
      'slideshow_pager_image_style' => 'thumbnail-gallery',
      'slideshow_carousel_image_style' => 'os2web_base_style_medium',
      'slideshow_carousel_visible' => '3',
      'slideshow_carousel_scroll' => '1',
      'slideshow_carousel_speed' => '500',
      'slideshow_carousel_vertical' => 0,
      'slideshow_carousel_circular' => 0,
      'image_style' => 'os2web_base_style_medium',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '971cb383-5f1e-4686-8e56-b879b99db0ab';
  $display->content['new-971cb383-5f1e-4686-8e56-b879b99db0ab'] = $pane;
  $display->panels['center'][0] = 'new-971cb383-5f1e-4686-8e56-b879b99db0ab';
  $pane = new stdClass();
  $pane->pid = 'new-d4efa5d7-8b6b-4d7b-8fd5-69bdf0a377b2';
  $pane->panel = 'center';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'd4efa5d7-8b6b-4d7b-8fd5-69bdf0a377b2';
  $display->content['new-d4efa5d7-8b6b-4d7b-8fd5-69bdf0a377b2'] = $pane;
  $display->panels['center'][1] = 'new-d4efa5d7-8b6b-4d7b-8fd5-69bdf0a377b2';
  $pane = new stdClass();
  $pane->pid = 'new-6ea35097-a8bd-4af6-b4b5-2dffcb884ddb';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_base_field_summary';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '6ea35097-a8bd-4af6-b4b5-2dffcb884ddb';
  $display->content['new-6ea35097-a8bd-4af6-b4b5-2dffcb884ddb'] = $pane;
  $display->panels['center'][2] = 'new-6ea35097-a8bd-4af6-b4b5-2dffcb884ddb';
  $pane = new stdClass();
  $pane->pid = 'new-98a60987-9b78-46ba-8fcb-8a336a4af2ee';
  $pane->panel = 'center';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
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
  $pane->uuid = '98a60987-9b78-46ba-8fcb-8a336a4af2ee';
  $display->content['new-98a60987-9b78-46ba-8fcb-8a336a4af2ee'] = $pane;
  $display->panels['center'][3] = 'new-98a60987-9b78-46ba-8fcb-8a336a4af2ee';
  $pane = new stdClass();
  $pane->pid = 'new-a442d874-9606-42ca-ad94-2e8a2f91ca20';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_base_field_add_info';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'a442d874-9606-42ca-ad94-2e8a2f91ca20';
  $display->content['new-a442d874-9606-42ca-ad94-2e8a2f91ca20'] = $pane;
  $display->panels['center'][4] = 'new-a442d874-9606-42ca-ad94-2e8a2f91ca20';
  $pane = new stdClass();
  $pane->pid = 'new-9d255400-2d93-4770-ba89-2b98f622df14';
  $pane->panel = 'center';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 1,
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '9d255400-2d93-4770-ba89-2b98f622df14';
  $display->content['new-9d255400-2d93-4770-ba89-2b98f622df14'] = $pane;
  $display->panels['center'][5] = 'new-9d255400-2d93-4770-ba89-2b98f622df14';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['os2web_base_panels_panel_content'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'os2web_base_panels_panel_news';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Nyhed',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
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
              'os2web_base_news' => 'os2web_base_news',
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
      'lead' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'middle_top' => NULL,
      'middle_center' => NULL,
      'middle_right' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4a5ba20f-a759-46b4-896f-244ffe11fd89';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'os2web_base_panels_panel_news';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-183a500c-44b8-434d-85c8-5da29cd3c103';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_base_field_lead_img';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'image_style' => 'os2web_base_style_medium',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '183a500c-44b8-434d-85c8-5da29cd3c103';
  $display->content['new-183a500c-44b8-434d-85c8-5da29cd3c103'] = $pane;
  $display->panels['center'][0] = 'new-183a500c-44b8-434d-85c8-5da29cd3c103';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['os2web_base_panels_panel_news'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'os2web_base_panels_portal_front';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 8;
  $handler->conf = array(
    'title' => 'Sektionsforside',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'os2web_base_panels_layout_secti',
    'css_id' => '',
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
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '1',
            1 => array(
              5 => '5',
              6 => '6',
              4 => '4',
            ),
            2 => array(),
            3 => array(),
            11 => array(),
            4 => array(),
            14 => array(),
            5 => array(),
            6 => array(),
            7 => array(),
            9 => array(),
            8 => array(),
            12 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => TRUE,
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
  $display->uuid = '56b62b85-341b-4983-bbb5-10426ff7397d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'os2web_base_panels_portal_front';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2e92142f-6efe-4952-9d28-ddba0a75adc3';
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
  $pane->uuid = '2e92142f-6efe-4952-9d28-ddba0a75adc3';
  $display->content['new-2e92142f-6efe-4952-9d28-ddba0a75adc3'] = $pane;
  $display->panels['center'][0] = 'new-2e92142f-6efe-4952-9d28-ddba0a75adc3';
  $pane = new stdClass();
  $pane->pid = 'new-319a731a-c682-46fe-917d-e1b8a91a8267';
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
  $pane->uuid = '319a731a-c682-46fe-917d-e1b8a91a8267';
  $display->content['new-319a731a-c682-46fe-917d-e1b8a91a8267'] = $pane;
  $display->panels['center'][1] = 'new-319a731a-c682-46fe-917d-e1b8a91a8267';
  $pane = new stdClass();
  $pane->pid = 'new-9fad9a76-083a-44b0-880a-1a35001922c9';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9fad9a76-083a-44b0-880a-1a35001922c9';
  $display->content['new-9fad9a76-083a-44b0-880a-1a35001922c9'] = $pane;
  $display->panels['center'][2] = 'new-9fad9a76-083a-44b0-880a-1a35001922c9';
  $pane = new stdClass();
  $pane->pid = 'new-5deac1f4-bfca-4b64-85ac-afe6a86c1c2f';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5deac1f4-bfca-4b64-85ac-afe6a86c1c2f';
  $display->content['new-5deac1f4-bfca-4b64-85ac-afe6a86c1c2f'] = $pane;
  $display->panels['center'][3] = 'new-5deac1f4-bfca-4b64-85ac-afe6a86c1c2f';
  $pane = new stdClass();
  $pane->pid = 'new-263cccd1-d249-4e01-ab91-4f4fb68fa572';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '263cccd1-d249-4e01-ab91-4f4fb68fa572';
  $display->content['new-263cccd1-d249-4e01-ab91-4f4fb68fa572'] = $pane;
  $display->panels['center'][4] = 'new-263cccd1-d249-4e01-ab91-4f4fb68fa572';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['os2web_base_panels_portal_front'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'os2web_base_panels_section_front';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'Sektionsforsider',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Ordforråd',
        'keyword' => 'taxonomy_vocabulary',
        'name' => 'entity:taxonomy_vocabulary',
        'entity_id' => '1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              1 => '1',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:os2web_base_panels_layout_secti';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right_top' => NULL,
      'right_middle' => NULL,
      'right_bottom' => NULL,
      'center' => NULL,
      'bund' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd50686a2-3c5d-485f-9219-89dadab82c8c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'os2web_base_panels_section_front';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e0adedff-0f3f-465a-a94e-5958b0b81617';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_base_panels_view_current-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-18 alpha',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e0adedff-0f3f-465a-a94e-5958b0b81617';
  $display->content['new-e0adedff-0f3f-465a-a94e-5958b0b81617'] = $pane;
  $display->panels['center'][0] = 'new-e0adedff-0f3f-465a-a94e-5958b0b81617';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['os2web_base_panels_section_front'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_4';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 9;
  $handler->conf = array(
    'title' => 'Taksonomiside',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'portal-side sektionsforside',
    'css_id' => '',
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
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              11 => '11',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'os2web_3stack';
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
      'stack1' => NULL,
      'stack2' => NULL,
      'stack3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a0c867d3-8295-4794-96d1-97e20d9e9aaf';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context_4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-07ac516f-9496-4c75-ab33-2d1393463de8';
  $pane->panel = 'stack1';
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
    'args' => '%term:tid',
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
  $pane->uuid = '07ac516f-9496-4c75-ab33-2d1393463de8';
  $display->content['new-07ac516f-9496-4c75-ab33-2d1393463de8'] = $pane;
  $display->panels['stack1'][0] = 'new-07ac516f-9496-4c75-ab33-2d1393463de8';
  $pane = new stdClass();
  $pane->pid = 'new-c80e2153-76b7-42a8-ac24-b40e45343247';
  $pane->panel = 'stack1';
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
    'args' => '%term:tid',
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
  $pane->uuid = 'c80e2153-76b7-42a8-ac24-b40e45343247';
  $display->content['new-c80e2153-76b7-42a8-ac24-b40e45343247'] = $pane;
  $display->panels['stack1'][1] = 'new-c80e2153-76b7-42a8-ac24-b40e45343247';
  $pane = new stdClass();
  $pane->pid = 'new-8fc1c4f0-6938-4454-ace9-b8f473d2b5b7';
  $pane->panel = 'stack2';
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
  $pane->uuid = '8fc1c4f0-6938-4454-ace9-b8f473d2b5b7';
  $display->content['new-8fc1c4f0-6938-4454-ace9-b8f473d2b5b7'] = $pane;
  $display->panels['stack2'][0] = 'new-8fc1c4f0-6938-4454-ace9-b8f473d2b5b7';
  $pane = new stdClass();
  $pane->pid = 'new-52e3cbb3-9058-4bb0-97a5-a040b0d6ef97';
  $pane->panel = 'stack2';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_spotbox_view_spots-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '1',
    'offset' => '0',
    'arguments' => array(
      'field_os2web_spotbox_sitestruct_tid' => '%term:tid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'spotbox-horisontal spotbox-fullwidth',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '52e3cbb3-9058-4bb0-97a5-a040b0d6ef97';
  $display->content['new-52e3cbb3-9058-4bb0-97a5-a040b0d6ef97'] = $pane;
  $display->panels['stack2'][1] = 'new-52e3cbb3-9058-4bb0-97a5-a040b0d6ef97';
  $pane = new stdClass();
  $pane->pid = 'new-ac379483-d4d2-4493-933d-a2f91927fd81';
  $pane->panel = 'stack3';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_spotbox_view_spots-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '3',
    'offset' => '1',
    'arguments' => array(
      'field_os2web_spotbox_sitestruct_tid' => '%term:tid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'spotbox-horisontal spotbox-fullwidth',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ac379483-d4d2-4493-933d-a2f91927fd81';
  $display->content['new-ac379483-d4d2-4493-933d-a2f91927fd81'] = $pane;
  $display->panels['stack3'][0] = 'new-ac379483-d4d2-4493-933d-a2f91927fd81';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_4'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function os2web_base_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'os2web_base_panels_page_front';
  $page->task = 'page';
  $page->admin_title = 'Frontpage';
  $page->admin_description = 'Frontpage';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'os2web_base_panels_page_front';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Frontpage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'forside',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'content-with-right-sidebar-8-4';
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
      'right_' => NULL,
      'left' => NULL,
      'top' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
    ),
    'right_' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '299eb11a-b76d-4a06-98c8-d010c54839bf';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_frontpage_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2206ef4e-ec11-40d0-af58-ff0e98ce7800';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_spotbox_view_spots-panel_pane_12';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '3',
    ),
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
  $pane->uuid = '2206ef4e-ec11-40d0-af58-ff0e98ce7800';
  $display->content['new-2206ef4e-ec11-40d0-af58-ff0e98ce7800'] = $pane;
  $display->panels['bottom'][0] = 'new-2206ef4e-ec11-40d0-af58-ff0e98ce7800';
  $pane = new stdClass();
  $pane->pid = 'new-6f97b2a3-3938-4f18-8981-e530bb4d757e';
  $pane->panel = 'bottom';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Video',
    'title' => 'Bliv social og sundhedsmedhjælper',
    'body' => '<iframe src="http://www.youtube-nocookie.com/embed/n_InlKwkbUQ" frameborder="0" width="470px" height="180px" allowfullscreen></iframe>',
    'format' => 'raw',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-6 omega spotbox-row-video custom-video',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6f97b2a3-3938-4f18-8981-e530bb4d757e';
  $display->content['new-6f97b2a3-3938-4f18-8981-e530bb4d757e'] = $pane;
  $display->panels['bottom'][1] = 'new-6f97b2a3-3938-4f18-8981-e530bb4d757e';
  $pane = new stdClass();
  $pane->pid = 'new-add4dc26-59bf-41be-9607-9f0c50022626';
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
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '?field_rotating_page_value=borger&promote=1',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'alpha',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'add4dc26-59bf-41be-9607-9f0c50022626';
  $display->content['new-add4dc26-59bf-41be-9607-9f0c50022626'] = $pane;
  $display->panels['content'][0] = 'new-add4dc26-59bf-41be-9607-9f0c50022626';
  $pane = new stdClass();
  $pane->pid = 'new-0aa2cddc-e972-4ed1-a587-944b93f3540f';
  $pane->panel = 'content';
  $pane->type = 'views';
  $pane->subtype = 'os2web_base_panels_view_rotating';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '1',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
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
  $pane->uuid = '0aa2cddc-e972-4ed1-a587-944b93f3540f';
  $display->content['new-0aa2cddc-e972-4ed1-a587-944b93f3540f'] = $pane;
  $display->panels['content'][1] = 'new-0aa2cddc-e972-4ed1-a587-944b93f3540f';
  $pane = new stdClass();
  $pane->pid = 'new-0a8078f7-63b6-4421-86dc-833967feb300';
  $pane->panel = 'content';
  $pane->type = 'views';
  $pane->subtype = 'os2web_base_panels_view_newslist';
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
    'css_class' => 'omega',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0a8078f7-63b6-4421-86dc-833967feb300';
  $display->content['new-0a8078f7-63b6-4421-86dc-833967feb300'] = $pane;
  $display->panels['content'][2] = 'new-0a8078f7-63b6-4421-86dc-833967feb300';
  $pane = new stdClass();
  $pane->pid = 'new-5805871d-9b4b-4631-a713-4e9caac9e931';
  $pane->panel = 'content';
  $pane->type = 'views';
  $pane->subtype = 'os2web_kulturnaut_events_lists';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '2',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 1,
    'args' => '',
    'url' => 'http://www.djurslive.dk',
    'display' => 'blok_kulturnaut_forside',
    'override_title' => 1,
    'override_title_text' => 'Det sker',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'os2web_base_panels_view_newslist-panel omega',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5805871d-9b4b-4631-a713-4e9caac9e931';
  $display->content['new-5805871d-9b4b-4631-a713-4e9caac9e931'] = $pane;
  $display->panels['content'][3] = 'new-5805871d-9b4b-4631-a713-4e9caac9e931';
  $pane = new stdClass();
  $pane->pid = 'new-d7a3a540-9c9f-48ca-90b7-91bfe346fd47';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_spotbox_view_spots-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '',
    ),
    'items_per_page' => '0',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'omega',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'd7a3a540-9c9f-48ca-90b7-91bfe346fd47';
  $display->content['new-d7a3a540-9c9f-48ca-90b7-91bfe346fd47'] = $pane;
  $display->panels['content'][4] = 'new-d7a3a540-9c9f-48ca-90b7-91bfe346fd47';
  $pane = new stdClass();
  $pane->pid = 'new-fad8814f-1e40-4b70-8c8b-c7278bb8b083';
  $pane->panel = 'content';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'omega',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'fad8814f-1e40-4b70-8c8b-c7278bb8b083';
  $display->content['new-fad8814f-1e40-4b70-8c8b-c7278bb8b083'] = $pane;
  $display->panels['content'][5] = 'new-fad8814f-1e40-4b70-8c8b-c7278bb8b083';
  $pane = new stdClass();
  $pane->pid = 'new-d1d4e151-839f-4915-8014-56ce8c8e0ff8';
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
    'args' => '',
    'url' => '',
    'display' => 'sb_block_forside',
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
  $pane->uuid = 'd1d4e151-839f-4915-8014-56ce8c8e0ff8';
  $display->content['new-d1d4e151-839f-4915-8014-56ce8c8e0ff8'] = $pane;
  $display->panels['sidebar'][0] = 'new-d1d4e151-839f-4915-8014-56ce8c8e0ff8';
  $pane = new stdClass();
  $pane->pid = 'new-c58fb6cc-613a-48c3-a35a-32dfa1589bb8';
  $pane->panel = 'sidebar';
  $pane->type = 'views';
  $pane->subtype = 'os2web_hearings';
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
    'display' => 'block_1',
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
  $pane->uuid = 'c58fb6cc-613a-48c3-a35a-32dfa1589bb8';
  $display->content['new-c58fb6cc-613a-48c3-a35a-32dfa1589bb8'] = $pane;
  $display->panels['sidebar'][1] = 'new-c58fb6cc-613a-48c3-a35a-32dfa1589bb8';
  $pane = new stdClass();
  $pane->pid = 'new-0bcdbe27-6ee2-4ba8-a356-6f061a5d2f76';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_spotbox_view_spots-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '3397',
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
    'css_class' => 'grid-6 omega',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0bcdbe27-6ee2-4ba8-a356-6f061a5d2f76';
  $display->content['new-0bcdbe27-6ee2-4ba8-a356-6f061a5d2f76'] = $pane;
  $display->panels['sidebar'][2] = 'new-0bcdbe27-6ee2-4ba8-a356-6f061a5d2f76';
  $pane = new stdClass();
  $pane->pid = 'new-f63d7e18-a316-423f-9a6d-64d6fe3d9cfd';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_spotbox_view_spots-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'offset' => '0',
    'arguments' => array(
      'nid' => '292878',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f63d7e18-a316-423f-9a6d-64d6fe3d9cfd';
  $display->content['new-f63d7e18-a316-423f-9a6d-64d6fe3d9cfd'] = $pane;
  $display->panels['sidebar'][3] = 'new-f63d7e18-a316-423f-9a6d-64d6fe3d9cfd';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['os2web_base_panels_page_front'] = $page;

  return $pages;

}
