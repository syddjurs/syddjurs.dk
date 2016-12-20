<?php
/**
 * @file
 * os2web_mobile_syddjurs.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function os2web_mobile_syddjurs_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mobile';
  $page->task = 'page';
  $page->admin_title = 'mobile';
  $page->admin_description = '';
  $page->path = 'mobile';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
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
  $handler->name = 'page_mobile_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'mobile';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
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
      'lead' => NULL,
      'middle_top' => NULL,
      'middle_center' => NULL,
      'middle_right' => NULL,
      'center' => NULL,
      'top' => NULL,
      'bund' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<none>';
  $display->uuid = '10d2fa1d-5453-4c4c-a3f6-3f844442f320';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_mobile_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4f074bc2-e371-408f-81e8-4f376ae51e0a';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'os2web_mobile_news';
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
    'css_class' => 'pane-content-well',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4f074bc2-e371-408f-81e8-4f376ae51e0a';
  $display->content['new-4f074bc2-e371-408f-81e8-4f376ae51e0a'] = $pane;
  $display->panels['bottom'][0] = 'new-4f074bc2-e371-408f-81e8-4f376ae51e0a';
  $pane = new stdClass();
  $pane->pid = 'new-62ffc1f0-ca9a-4a73-a73f-0af5a1ae0da1';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'os2web_mobile_news';
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
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'news-list pane-content-well',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '62ffc1f0-ca9a-4a73-a73f-0af5a1ae0da1';
  $display->content['new-62ffc1f0-ca9a-4a73-a73f-0af5a1ae0da1'] = $pane;
  $display->panels['bottom'][1] = 'new-62ffc1f0-ca9a-4a73-a73f-0af5a1ae0da1';
  $pane = new stdClass();
  $pane->pid = 'new-b0164938-a83a-433b-8975-03db45d81b8b';
  $pane->panel = 'bottom';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Syddjurs specifik',
    'title' => '<none>',
    'body' => '<a href="http://webkort.syddjurs.dk" target="_blank" class="btn btn-block btn-syddjurs btn-kort"><h3>Digitale kort</h3></a>
<br />

<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_GB/all.js#xfbml=1";
  fjs.parentNode.insertBefore(js, fjs);
}(document, \'script\', \'facebook-jssdk\'));</script>

<h2>Facebook</h2>
<div class="well">
<div class="fb-like-box" data-href="https://www.facebook.com/syddjurskommune" data-width="292" data-show-faces="false" data-stream="false" data-header="false"></div>
<p><a href="https://www.facebook.com/syddjurskommune" >Få nyheder og information, deltag i debatten</a></p>
</div>
</div>
',
    'format' => 'raw',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b0164938-a83a-433b-8975-03db45d81b8b';
  $display->content['new-b0164938-a83a-433b-8975-03db45d81b8b'] = $pane;
  $display->panels['bottom'][2] = 'new-b0164938-a83a-433b-8975-03db45d81b8b';
  $pane = new stdClass();
  $pane->pid = 'new-9cd04623-2e5d-488c-a328-cf5b28622b31';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'block-5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Kontakt Borgerservice',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '9cd04623-2e5d-488c-a328-cf5b28622b31';
  $display->content['new-9cd04623-2e5d-488c-a328-cf5b28622b31'] = $pane;
  $display->panels['bottom'][3] = 'new-9cd04623-2e5d-488c-a328-cf5b28622b31';
  $pane = new stdClass();
  $pane->pid = 'new-c9e632cf-5f25-4688-bb83-4cd49e8f2280';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c9e632cf-5f25-4688-bb83-4cd49e8f2280';
  $display->content['new-c9e632cf-5f25-4688-bb83-4cd49e8f2280'] = $pane;
  $display->panels['bottom'][4] = 'new-c9e632cf-5f25-4688-bb83-4cd49e8f2280';
  $pane = new stdClass();
  $pane->pid = 'new-7220d381-ee1b-46a7-94f5-1e7b207a3aac';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-OS2Web_mobile-15';
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
  $pane->uuid = '7220d381-ee1b-46a7-94f5-1e7b207a3aac';
  $display->content['new-7220d381-ee1b-46a7-94f5-1e7b207a3aac'] = $pane;
  $display->panels['center'][0] = 'new-7220d381-ee1b-46a7-94f5-1e7b207a3aac';
  $pane = new stdClass();
  $pane->pid = 'new-67924efb-bae3-4824-91ab-ca953aed61b6';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-OS2Web_mobile-16';
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
  $pane->uuid = '67924efb-bae3-4824-91ab-ca953aed61b6';
  $display->content['new-67924efb-bae3-4824-91ab-ca953aed61b6'] = $pane;
  $display->panels['center'][1] = 'new-67924efb-bae3-4824-91ab-ca953aed61b6';
  $pane = new stdClass();
  $pane->pid = 'new-f5f08480-cd31-46aa-9ec4-73e40ea8005a';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-OS2Web_mobile-17';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f5f08480-cd31-46aa-9ec4-73e40ea8005a';
  $display->content['new-f5f08480-cd31-46aa-9ec4-73e40ea8005a'] = $pane;
  $display->panels['center'][2] = 'new-f5f08480-cd31-46aa-9ec4-73e40ea8005a';
  $pane = new stdClass();
  $pane->pid = 'new-233c30c6-8499-47fa-9805-083e3ff951a3';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-OS2Web_mobile-20';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '233c30c6-8499-47fa-9805-083e3ff951a3';
  $display->content['new-233c30c6-8499-47fa-9805-083e3ff951a3'] = $pane;
  $display->panels['center'][3] = 'new-233c30c6-8499-47fa-9805-083e3ff951a3';
  $pane = new stdClass();
  $pane->pid = 'new-acfc133d-d5bc-4364-877b-c3beb8eef471';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-OS2Web_mobile-21';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Genveje',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'acfc133d-d5bc-4364-877b-c3beb8eef471';
  $display->content['new-acfc133d-d5bc-4364-877b-c3beb8eef471'] = $pane;
  $display->panels['top'][0] = 'new-acfc133d-d5bc-4364-877b-c3beb8eef471';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mobile'] = $page;

  return $pages;

}
