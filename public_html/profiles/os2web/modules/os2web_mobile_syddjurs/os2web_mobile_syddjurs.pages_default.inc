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
  $display->uuid = '462685d1-7b90-4356-b561-bae5d89302b0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_mobile_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-859ad384-cd70-45f3-aced-82878c74b9b3';
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
  $pane->uuid = '859ad384-cd70-45f3-aced-82878c74b9b3';
  $display->content['new-859ad384-cd70-45f3-aced-82878c74b9b3'] = $pane;
  $display->panels['bottom'][0] = 'new-859ad384-cd70-45f3-aced-82878c74b9b3';
  $pane = new stdClass();
  $pane->pid = 'new-fea6132c-3031-4e40-af38-23e4d769dca0';
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
  $pane->uuid = 'fea6132c-3031-4e40-af38-23e4d769dca0';
  $display->content['new-fea6132c-3031-4e40-af38-23e4d769dca0'] = $pane;
  $display->panels['bottom'][1] = 'new-fea6132c-3031-4e40-af38-23e4d769dca0';
  $pane = new stdClass();
  $pane->pid = 'new-ec83b8cb-a44b-4243-b51f-12822a96b399';
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
  $pane->uuid = 'ec83b8cb-a44b-4243-b51f-12822a96b399';
  $display->content['new-ec83b8cb-a44b-4243-b51f-12822a96b399'] = $pane;
  $display->panels['bottom'][2] = 'new-ec83b8cb-a44b-4243-b51f-12822a96b399';
  $pane = new stdClass();
  $pane->pid = 'new-c72c7a51-52f1-4883-935d-3f4fa71afdcc';
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
  $pane->uuid = 'c72c7a51-52f1-4883-935d-3f4fa71afdcc';
  $display->content['new-c72c7a51-52f1-4883-935d-3f4fa71afdcc'] = $pane;
  $display->panels['bottom'][3] = 'new-c72c7a51-52f1-4883-935d-3f4fa71afdcc';
  $pane = new stdClass();
  $pane->pid = 'new-e53c77ad-e84f-4d9c-82bd-424bead9afc9';
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
  $pane->uuid = 'e53c77ad-e84f-4d9c-82bd-424bead9afc9';
  $display->content['new-e53c77ad-e84f-4d9c-82bd-424bead9afc9'] = $pane;
  $display->panels['bottom'][4] = 'new-e53c77ad-e84f-4d9c-82bd-424bead9afc9';
  $pane = new stdClass();
  $pane->pid = 'new-a571c7ce-7839-4416-aed7-3fab36c2773c';
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
  $pane->uuid = 'a571c7ce-7839-4416-aed7-3fab36c2773c';
  $display->content['new-a571c7ce-7839-4416-aed7-3fab36c2773c'] = $pane;
  $display->panels['center'][0] = 'new-a571c7ce-7839-4416-aed7-3fab36c2773c';
  $pane = new stdClass();
  $pane->pid = 'new-db04d010-e053-483b-adb4-26c222b7becc';
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
  $pane->uuid = 'db04d010-e053-483b-adb4-26c222b7becc';
  $display->content['new-db04d010-e053-483b-adb4-26c222b7becc'] = $pane;
  $display->panels['center'][1] = 'new-db04d010-e053-483b-adb4-26c222b7becc';
  $pane = new stdClass();
  $pane->pid = 'new-2fca290a-dbfd-4d8c-9aed-4a329690ed86';
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
  $pane->uuid = '2fca290a-dbfd-4d8c-9aed-4a329690ed86';
  $display->content['new-2fca290a-dbfd-4d8c-9aed-4a329690ed86'] = $pane;
  $display->panels['center'][2] = 'new-2fca290a-dbfd-4d8c-9aed-4a329690ed86';
  $pane = new stdClass();
  $pane->pid = 'new-c51d50fb-ac71-422e-a465-40ef98437fb3';
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
  $pane->uuid = 'c51d50fb-ac71-422e-a465-40ef98437fb3';
  $display->content['new-c51d50fb-ac71-422e-a465-40ef98437fb3'] = $pane;
  $display->panels['center'][3] = 'new-c51d50fb-ac71-422e-a465-40ef98437fb3';
  $pane = new stdClass();
  $pane->pid = 'new-4c0d99a3-212a-4455-99ee-09eb3d794293';
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
  $pane->uuid = '4c0d99a3-212a-4455-99ee-09eb3d794293';
  $display->content['new-4c0d99a3-212a-4455-99ee-09eb3d794293'] = $pane;
  $display->panels['top'][0] = 'new-4c0d99a3-212a-4455-99ee-09eb3d794293';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mobile'] = $page;

  return $pages;

}
