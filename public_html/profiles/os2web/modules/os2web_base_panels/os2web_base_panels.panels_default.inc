<?php
/**
 * @file
 * os2web_base_panels.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function os2web_base_panels_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'os2web_base_panels_mega_about';
  $mini->category = '';
  $mini->admin_title = 'Mega Menu Om kommunen';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega_12_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f0432427-a437-4a46-a36f-3b4b14aaba6f';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'os2web_base_panels_mega_about';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5a5e38c8-5750-414d-a3f1-a7a6e245a0a1';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '5a5e38c8-5750-414d-a3f1-a7a6e245a0a1';
  $display->content['new-5a5e38c8-5750-414d-a3f1-a7a6e245a0a1'] = $pane;
  $display->panels['middle'][0] = 'new-5a5e38c8-5750-414d-a3f1-a7a6e245a0a1';
  $pane = new stdClass();
  $pane->pid = 'new-2d8ab2ce-1af5-40da-9f22-d9f001b3ba4c';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>Gå til&nbsp;<a href="/indhold/om-syddjurs-kommune">Om kommunen</a>&nbsp;forside</p>',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2d8ab2ce-1af5-40da-9f22-d9f001b3ba4c';
  $display->content['new-2d8ab2ce-1af5-40da-9f22-d9f001b3ba4c'] = $pane;
  $display->panels['middle'][1] = 'new-2d8ab2ce-1af5-40da-9f22-d9f001b3ba4c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5a5e38c8-5750-414d-a3f1-a7a6e245a0a1';
  $mini->display = $display;
  $export['os2web_base_panels_mega_about'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'os2web_base_panels_mega_business';
  $mini->category = '';
  $mini->admin_title = 'Mega Menu Erhverv';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega_12_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd19dc649-dc92-454a-b53c-861c2185b632';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'os2web_base_panels_mega_business';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fd6e5652-a252-4d0e-94cb-9b572c1f1745';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'fd6e5652-a252-4d0e-94cb-9b572c1f1745';
  $display->content['new-fd6e5652-a252-4d0e-94cb-9b572c1f1745'] = $pane;
  $display->panels['middle'][0] = 'new-fd6e5652-a252-4d0e-94cb-9b572c1f1745';
  $pane = new stdClass();
  $pane->pid = 'new-7f03693b-e61d-47af-9371-33410cf86235';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>Gå til <a href="/erhverv">Erhverv</a> forside</p>',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7f03693b-e61d-47af-9371-33410cf86235';
  $display->content['new-7f03693b-e61d-47af-9371-33410cf86235'] = $pane;
  $display->panels['middle'][1] = 'new-7f03693b-e61d-47af-9371-33410cf86235';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['os2web_base_panels_mega_business'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'os2web_base_panels_mega_citizen';
  $mini->category = '';
  $mini->admin_title = 'Mega Menu Borger';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega_12_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '32f30871-d127-4a8f-b6a1-f39d98a1aa55';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'os2web_base_panels_mega_citizen';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ba6f0359-fb38-4498-939a-a356bcb0f8dd';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'ba6f0359-fb38-4498-939a-a356bcb0f8dd';
  $display->content['new-ba6f0359-fb38-4498-939a-a356bcb0f8dd'] = $pane;
  $display->panels['middle'][0] = 'new-ba6f0359-fb38-4498-939a-a356bcb0f8dd';
  $pane = new stdClass();
  $pane->pid = 'new-a01f5dad-ad63-446f-a4fb-0c7661a9a701';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>Gå til&nbsp;<a href="/borger">Borger</a>&nbsp;forside</p>',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a01f5dad-ad63-446f-a4fb-0c7661a9a701';
  $display->content['new-a01f5dad-ad63-446f-a4fb-0c7661a9a701'] = $pane;
  $display->panels['middle'][1] = 'new-a01f5dad-ad63-446f-a4fb-0c7661a9a701';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['os2web_base_panels_mega_citizen'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'os2web_base_panels_mega_politics';
  $mini->category = '';
  $mini->admin_title = 'Mega Menu Politik og planer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega_12_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3ca5ac8d-cb5c-4a4a-a57b-a7b55ddd1e5f';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'os2web_base_panels_mega_politics';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7e887561-8f52-4238-9f20-5f462280f3a6';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '7e887561-8f52-4238-9f20-5f462280f3a6';
  $display->content['new-7e887561-8f52-4238-9f20-5f462280f3a6'] = $pane;
  $display->panels['middle'][0] = 'new-7e887561-8f52-4238-9f20-5f462280f3a6';
  $pane = new stdClass();
  $pane->pid = 'new-5c671a34-c75b-4120-987f-c0ccb43e6c38';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>Gå til <a href="/politik-og-planer">Politik og Planer</a> forside</p>',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5c671a34-c75b-4120-987f-c0ccb43e6c38';
  $display->content['new-5c671a34-c75b-4120-987f-c0ccb43e6c38'] = $pane;
  $display->panels['middle'][1] = 'new-5c671a34-c75b-4120-987f-c0ccb43e6c38';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['os2web_base_panels_mega_politics'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'os2web_base_panels_mini_footer';
  $mini->category = '';
  $mini->admin_title = 'Footer menuer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = 'e0997288-5646-4df9-bacd-044b8c57a55d';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'os2web_base_panels_mini_footer';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9d9cddc1-cbc1-422e-936e-c9f6b0fb6a09';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Borger',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'grid-3 alpha',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9d9cddc1-cbc1-422e-936e-c9f6b0fb6a09';
  $display->content['new-9d9cddc1-cbc1-422e-936e-c9f6b0fb6a09'] = $pane;
  $display->panels['center'][0] = 'new-9d9cddc1-cbc1-422e-936e-c9f6b0fb6a09';
  $pane = new stdClass();
  $pane->pid = 'new-8e028311-5bf4-4245-b011-2010ed7ea8af';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Erhverv',
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
  $pane->uuid = '8e028311-5bf4-4245-b011-2010ed7ea8af';
  $display->content['new-8e028311-5bf4-4245-b011-2010ed7ea8af'] = $pane;
  $display->panels['center'][1] = 'new-8e028311-5bf4-4245-b011-2010ed7ea8af';
  $pane = new stdClass();
  $pane->pid = 'new-743d3dee-31e4-43a7-8b07-94ba8e05b5ba';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Politik & Planer',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '743d3dee-31e4-43a7-8b07-94ba8e05b5ba';
  $display->content['new-743d3dee-31e4-43a7-8b07-94ba8e05b5ba'] = $pane;
  $display->panels['center'][2] = 'new-743d3dee-31e4-43a7-8b07-94ba8e05b5ba';
  $pane = new stdClass();
  $pane->pid = 'new-1dcc3f05-8eec-4bcd-a72b-569a0112b45a';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'os2web_base_panels_view_selfserv';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'override_title' => 0,
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1dcc3f05-8eec-4bcd-a72b-569a0112b45a';
  $display->content['new-1dcc3f05-8eec-4bcd-a72b-569a0112b45a'] = $pane;
  $display->panels['center'][3] = 'new-1dcc3f05-8eec-4bcd-a72b-569a0112b45a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['os2web_base_panels_mini_footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'os2web_base_panels_mini_otherweb';
  $mini->category = '';
  $mini->admin_title = 'Andre kommunale websites';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f127c924-ec0e-4448-aca5-8894a288ad66';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'os2web_base_panels_mini_otherweb';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5156f3d4-2749-4836-8ef1-7fbd0cef7fa9';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'nice_menus-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '5156f3d4-2749-4836-8ef1-7fbd0cef7fa9';
  $display->content['new-5156f3d4-2749-4836-8ef1-7fbd0cef7fa9'] = $pane;
  $display->panels['middle'][0] = 'new-5156f3d4-2749-4836-8ef1-7fbd0cef7fa9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['os2web_base_panels_mini_otherweb'] = $mini;

  return $export;
}
