<?php
/**
 * @file
 * os2web_ofir_job.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_ofir_job_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'job_liste';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Job liste';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Job i Syddjurs Kommune';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Overskrift: Global: Ufiltreret tekst */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p>Her kan du få et overblik over ledige stillinger i Syddjurs Kommune.<br />
Syddjurs Kommune vil gerne gøre det nemt for dig at blive opmærksom på de jobs, som er relevante for dig.</p>
<p><a href="https://syddjurs.emply.net/career/" target="_blank">Klik her for at gå til Karriercenter og jobagent</a></p>';
  /* Forbindelse: Indhold: Stillingskategori (field_os2web_ofir_category) */
  $handler->display->display_options['relationships']['field_os2web_ofir_category_tid']['id'] = 'field_os2web_ofir_category_tid';
  $handler->display->display_options['relationships']['field_os2web_ofir_category_tid']['table'] = 'field_data_field_os2web_ofir_category';
  $handler->display->display_options['relationships']['field_os2web_ofir_category_tid']['field'] = 'field_os2web_ofir_category_tid';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_ofir_job' => 'os2web_ofir_job',
  );
  /* Filterkriterie: Indhold: Stillingskategori (field_os2web_ofir_category) */
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['id'] = 'field_os2web_ofir_category_tid';
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['table'] = 'field_data_field_os2web_ofir_category';
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['field'] = 'field_os2web_ofir_category_tid';
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['expose']['operator_id'] = 'field_os2web_ofir_category_tid_op';
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['expose']['operator'] = 'field_os2web_ofir_category_tid_op';
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['expose']['identifier'] = 'field_os2web_ofir_category_tid';
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    15 => 0,
    13 => 0,
    14 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['vocabulary'] = 'os2web_job_categories';
  /* Filterkriterie: Indhold: Ansøgningsfrist - slutdato (field_os2web_ofir_job_period:value2) */
  $handler->display->display_options['filters']['field_os2web_ofir_job_period_value2']['id'] = 'field_os2web_ofir_job_period_value2';
  $handler->display->display_options['filters']['field_os2web_ofir_job_period_value2']['table'] = 'field_data_field_os2web_ofir_job_period';
  $handler->display->display_options['filters']['field_os2web_ofir_job_period_value2']['field'] = 'field_os2web_ofir_job_period_value2';
  $handler->display->display_options['filters']['field_os2web_ofir_job_period_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_os2web_ofir_job_period_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_os2web_ofir_job_period_value2']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'job-opslag';
  $translatables['job_liste'] = array(
    t('Master'),
    t('Job i Syddjurs Kommune'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<p>Her kan du få et overblik over ledige stillinger i Syddjurs Kommune.<br />
Syddjurs Kommune vil gerne gøre det nemt for dig at blive opmærksom på de jobs, som er relevante for dig.</p>
<p><a href="https://syddjurs.emply.net/career/" target="_blank">Klik her for at gå til Karriercenter og jobagent</a></p>'),
    t('term fra field_os2web_ofir_category'),
    t('Page'),
  );
  $export['job_liste'] = $view;

  $view = new view();
  $view->name = 'os2web_ofir_job_header_image';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Job';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Indhold: Design (field_os2web_ofir_design) */
  $handler->display->display_options['relationships']['field_os2web_ofir_design_tid']['id'] = 'field_os2web_ofir_design_tid';
  $handler->display->display_options['relationships']['field_os2web_ofir_design_tid']['table'] = 'field_data_field_os2web_ofir_design';
  $handler->display->display_options['relationships']['field_os2web_ofir_design_tid']['field'] = 'field_os2web_ofir_design_tid';
  /* Felt: Ord i ordforråd: Billede */
  $handler->display->display_options['fields']['field_os2web_job_image']['id'] = 'field_os2web_job_image';
  $handler->display->display_options['fields']['field_os2web_job_image']['table'] = 'field_data_field_os2web_job_image';
  $handler->display->display_options['fields']['field_os2web_job_image']['field'] = 'field_os2web_job_image';
  $handler->display->display_options['fields']['field_os2web_job_image']['relationship'] = 'field_os2web_ofir_design_tid';
  $handler->display->display_options['fields']['field_os2web_job_image']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_job_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_job_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_os2web_job_image']['settings'] = array(
    'image_style' => 'syddjurs_content_image',
    'image_link' => '',
  );
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'os2web_ofir_job' => 'os2web_ofir_job',
  );
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_ofir_job' => 'os2web_ofir_job',
  );

  /* Display: Job header image */
  $handler = $view->new_display('block', 'Job header image', 'block_1');

  /* Display: Job Facts */
  $handler = $view->new_display('block', 'Job Facts', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'panel-body-inner';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Apply Link */
  $handler->display->display_options['fields']['field_os2web_ofir_apply_link']['id'] = 'field_os2web_ofir_apply_link';
  $handler->display->display_options['fields']['field_os2web_ofir_apply_link']['table'] = 'field_data_field_os2web_ofir_apply_link';
  $handler->display->display_options['fields']['field_os2web_ofir_apply_link']['field'] = 'field_os2web_ofir_apply_link';
  $handler->display->display_options['fields']['field_os2web_ofir_apply_link']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_ofir_apply_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_ofir_apply_link']['alter']['text'] = '<a class="btn btn-default" role="button" href="[field_os2web_ofir_apply_link]">SEND ANSØGNING</a>';
  $handler->display->display_options['fields']['field_os2web_ofir_apply_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_ofir_apply_link']['element_wrapper_type'] = 'div';
  $translatables['os2web_ofir_job_header_image'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('term fra field_os2web_ofir_design'),
    t('Alle'),
    t('Job header image'),
    t('Job Facts'),
    t('<a class="btn btn-default" role="button" href="[field_os2web_ofir_apply_link]">SEND ANSØGNING</a>'),
  );
  $export['os2web_ofir_job_header_image'] = $view;

  return $export;
}
