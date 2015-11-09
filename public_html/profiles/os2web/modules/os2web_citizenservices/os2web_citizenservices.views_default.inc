<?php
/**
 * @file
 * os2web_citizenservices.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_citizenservices_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2web_citizenservices_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Borgerservices';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Borgerservices';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Mest brugte services</h3>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_os2web_citizenservices_url']['id'] = 'field_os2web_citizenservices_url';
  $handler->display->display_options['fields']['field_os2web_citizenservices_url']['table'] = 'field_data_field_os2web_citizenservices_url';
  $handler->display->display_options['fields']['field_os2web_citizenservices_url']['field'] = 'field_os2web_citizenservices_url';
  $handler->display->display_options['fields']['field_os2web_citizenservices_url']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_citizenservices_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_citizenservices_url']['element_label_colon'] = FALSE;
  /* Field: Content: Billede */
  $handler->display->display_options['fields']['field_os2web_citizenservices_img']['id'] = 'field_os2web_citizenservices_img';
  $handler->display->display_options['fields']['field_os2web_citizenservices_img']['table'] = 'field_data_field_os2web_citizenservices_img';
  $handler->display->display_options['fields']['field_os2web_citizenservices_img']['field'] = 'field_os2web_citizenservices_img';
  $handler->display->display_options['fields']['field_os2web_citizenservices_img']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_citizenservices_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_citizenservices_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_citizenservices_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_os2web_citizenservices_img']['settings'] = array(
    'image_style' => 'os2web_citizenservices_image',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_os2web_citizenservices_img']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="lineHeightHack">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_os2web_citizenservices_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_citizenservices_service' => 'os2web_citizenservices_service',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Populære borgerservices';
  $translatables['os2web_citizenservices_view'] = array(
    t('Master'),
    t('Borgerservices'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<h3>Mest brugte services</h3>'),
    t('<div class="lineHeightHack">[title]</div>'),
    t('Block'),
    t('more'),
    t('Populære borgerservices'),
  );
  $export['os2web_citizenservices_view'] = $view;

  return $export;
}
