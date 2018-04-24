<?php
/**
 * @file
 * syddjurs_emply_jobvisning.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function syddjurs_emply_jobvisning_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__jobliste';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Jobliste',
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
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/3559741',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'jobliste',
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
  $display->title = 'Ledige stillinger i Syddjurs Kommune';
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
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'override_title_heading' => 'h2',
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
  $pane->pid = 'new-03422533-aab7-41df-aa8c-d74b2b4a64bb';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'emply_jobliste-panel_pane_1';
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
  $pane->uuid = '03422533-aab7-41df-aa8c-d74b2b4a64bb';
  $display->content['new-03422533-aab7-41df-aa8c-d74b2b4a64bb'] = $pane;
  $display->panels['center'][3] = 'new-03422533-aab7-41df-aa8c-d74b2b4a64bb';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '9d255400-2d93-4770-ba89-2b98f622df14';
  $display->content['new-9d255400-2d93-4770-ba89-2b98f622df14'] = $pane;
  $display->panels['center'][4] = 'new-9d255400-2d93-4770-ba89-2b98f622df14';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__jobliste'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__jobs';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'Jobs',
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
              'os2web_ofir_job' => 'os2web_ofir_job',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'jobs',
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
  $pane->pid = 'new-789456b8-9e1f-4b20-a881-82f4f975f26f';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'emply_job_secondary-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '789456b8-9e1f-4b20-a881-82f4f975f26f';
  $display->content['new-789456b8-9e1f-4b20-a881-82f4f975f26f'] = $pane;
  $display->panels['center'][0] = 'new-789456b8-9e1f-4b20-a881-82f4f975f26f';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '971cb383-5f1e-4686-8e56-b879b99db0ab';
  $display->content['new-971cb383-5f1e-4686-8e56-b879b99db0ab'] = $pane;
  $display->panels['center'][1] = 'new-971cb383-5f1e-4686-8e56-b879b99db0ab';
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
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd4efa5d7-8b6b-4d7b-8fd5-69bdf0a377b2';
  $display->content['new-d4efa5d7-8b6b-4d7b-8fd5-69bdf0a377b2'] = $pane;
  $display->panels['center'][2] = 'new-d4efa5d7-8b6b-4d7b-8fd5-69bdf0a377b2';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '6ea35097-a8bd-4af6-b4b5-2dffcb884ddb';
  $display->content['new-6ea35097-a8bd-4af6-b4b5-2dffcb884ddb'] = $pane;
  $display->panels['center'][3] = 'new-6ea35097-a8bd-4af6-b4b5-2dffcb884ddb';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '98a60987-9b78-46ba-8fcb-8a336a4af2ee';
  $display->content['new-98a60987-9b78-46ba-8fcb-8a336a4af2ee'] = $pane;
  $display->panels['center'][4] = 'new-98a60987-9b78-46ba-8fcb-8a336a4af2ee';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'a442d874-9606-42ca-ad94-2e8a2f91ca20';
  $display->content['new-a442d874-9606-42ca-ad94-2e8a2f91ca20'] = $pane;
  $display->panels['center'][5] = 'new-a442d874-9606-42ca-ad94-2e8a2f91ca20';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '9d255400-2d93-4770-ba89-2b98f622df14';
  $display->content['new-9d255400-2d93-4770-ba89-2b98f622df14'] = $pane;
  $display->panels['center'][6] = 'new-9d255400-2d93-4770-ba89-2b98f622df14';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-d4efa5d7-8b6b-4d7b-8fd5-69bdf0a377b2';
  $handler->conf['display'] = $display;
  $export['node_view__jobs'] = $handler;

  return $export;
}
