<?php
/**
 * @file
 * syddjurs_emply_jobvisning.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function syddjurs_emply_jobvisning_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'emply_job_secondary';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Emply Job Secondary';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Indhold: Design (field_os2web_ofir_design) */
  $handler->display->display_options['relationships']['field_os2web_ofir_design_tid']['id'] = 'field_os2web_ofir_design_tid';
  $handler->display->display_options['relationships']['field_os2web_ofir_design_tid']['table'] = 'field_data_field_os2web_ofir_design';
  $handler->display->display_options['relationships']['field_os2web_ofir_design_tid']['field'] = 'field_os2web_ofir_design_tid';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Stillingskategori */
  $handler->display->display_options['fields']['field_os2web_ofir_category']['id'] = 'field_os2web_ofir_category';
  $handler->display->display_options['fields']['field_os2web_ofir_category']['table'] = 'field_data_field_os2web_ofir_category';
  $handler->display->display_options['fields']['field_os2web_ofir_category']['field'] = 'field_os2web_ofir_category';
  $handler->display->display_options['fields']['field_os2web_ofir_category']['label'] = 'Jobkategori';
  $handler->display->display_options['fields']['field_os2web_ofir_category']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_os2web_ofir_category']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Ansøgningsfrist */
  $handler->display->display_options['fields']['field_os2web_ofir_job_period']['id'] = 'field_os2web_ofir_job_period';
  $handler->display->display_options['fields']['field_os2web_ofir_job_period']['table'] = 'field_data_field_os2web_ofir_job_period';
  $handler->display->display_options['fields']['field_os2web_ofir_job_period']['field'] = 'field_os2web_ofir_job_period';
  $handler->display->display_options['fields']['field_os2web_ofir_job_period']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_os2web_ofir_job_period']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Felt: Indhold: Kontaktperson */
  $handler->display->display_options['fields']['field_os2web_ofir_contact_person']['id'] = 'field_os2web_ofir_contact_person';
  $handler->display->display_options['fields']['field_os2web_ofir_contact_person']['table'] = 'field_data_field_os2web_ofir_contact_person';
  $handler->display->display_options['fields']['field_os2web_ofir_contact_person']['field'] = 'field_os2web_ofir_contact_person';
  $handler->display->display_options['fields']['field_os2web_ofir_contact_person']['element_label_type'] = 'strong';
  /* Felt: Indhold: Telefonnummer */
  $handler->display->display_options['fields']['field_os2web_ofir_contact_no']['id'] = 'field_os2web_ofir_contact_no';
  $handler->display->display_options['fields']['field_os2web_ofir_contact_no']['table'] = 'field_data_field_os2web_ofir_contact_no';
  $handler->display->display_options['fields']['field_os2web_ofir_contact_no']['field'] = 'field_os2web_ofir_contact_no';
  $handler->display->display_options['fields']['field_os2web_ofir_contact_no']['element_label_type'] = 'strong';
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
  /* Filterkriterie: Ord i ordforråd: Billede (field_os2web_job_image:fid) */
  $handler->display->display_options['filters']['field_os2web_job_image_fid']['id'] = 'field_os2web_job_image_fid';
  $handler->display->display_options['filters']['field_os2web_job_image_fid']['table'] = 'field_data_field_os2web_job_image';
  $handler->display->display_options['filters']['field_os2web_job_image_fid']['field'] = 'field_os2web_job_image_fid';
  $handler->display->display_options['filters']['field_os2web_job_image_fid']['relationship'] = 'field_os2web_ofir_design_tid';
  $handler->display->display_options['filters']['field_os2web_job_image_fid']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<hr>
<p>Syddjurs kommune skal være en attraktiv og dynamisk arbejdsplads med et højt fagligt niveau.</p>
<p>Det betyder: Vi vil skabe robuste og faglige miljøer. Vi vil være åbne, lydhøre og hylde de kreative og gode idéer. Vi tror på, at trivsel skaber engagerede og dygtigere medarbejdere og forventer derfor, at ledelse og medarbejdere er i dialog om de bærende værdier på arbejdspladsen. </p>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';

  /* Display: Emply - billede fra design */
  $handler = $view->new_display('panel_pane', 'Emply - billede fra design', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Design (field_os2web_ofir_design) */
  $handler->display->display_options['relationships']['field_os2web_ofir_design_tid']['id'] = 'field_os2web_ofir_design_tid';
  $handler->display->display_options['relationships']['field_os2web_ofir_design_tid']['table'] = 'field_data_field_os2web_ofir_design';
  $handler->display->display_options['relationships']['field_os2web_ofir_design_tid']['field'] = 'field_os2web_ofir_design_tid';
  $handler->display->display_options['relationships']['field_os2web_ofir_design_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Ord i ordforråd: Billede */
  $handler->display->display_options['fields']['field_os2web_job_image']['id'] = 'field_os2web_job_image';
  $handler->display->display_options['fields']['field_os2web_job_image']['table'] = 'field_data_field_os2web_job_image';
  $handler->display->display_options['fields']['field_os2web_job_image']['field'] = 'field_os2web_job_image';
  $handler->display->display_options['fields']['field_os2web_job_image']['relationship'] = 'field_os2web_ofir_design_tid';
  $handler->display->display_options['fields']['field_os2web_job_image']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_job_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_job_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_os2web_job_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.field-os2web-meetings-bpa-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $translatables['emply_job_secondary'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('term fra field_os2web_ofir_design'),
    t('Jobkategori'),
    t('Ansøgningsfrist'),
    t('Kontaktperson'),
    t('Telefonnummer'),
    t('Alle'),
    t('Block'),
    t('<hr>
<p>Syddjurs kommune skal være en attraktiv og dynamisk arbejdsplads med et højt fagligt niveau.</p>
<p>Det betyder: Vi vil skabe robuste og faglige miljøer. Vi vil være åbne, lydhøre og hylde de kreative og gode idéer. Vi tror på, at trivsel skaber engagerede og dygtigere medarbejdere og forventer derfor, at ledelse og medarbejdere er i dialog om de bærende værdier på arbejdspladsen. </p>'),
    t('Emply - billede fra design'),
    t('View panes'),
  );
  $export['emply_job_secondary'] = $view;

  $view = new view();
  $view->name = 'emply_jobliste';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Emply Jobliste';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
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
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_os2web_ofir_category',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_os2web_ofir_job_text' => 'field_os2web_ofir_job_text',
  );
  /* Forbindelse: Indhold: Stillingskategori (field_os2web_ofir_category) */
  $handler->display->display_options['relationships']['field_os2web_ofir_category_tid']['id'] = 'field_os2web_ofir_category_tid';
  $handler->display->display_options['relationships']['field_os2web_ofir_category_tid']['table'] = 'field_data_field_os2web_ofir_category';
  $handler->display->display_options['relationships']['field_os2web_ofir_category_tid']['field'] = 'field_os2web_ofir_category_tid';
  $handler->display->display_options['relationships']['field_os2web_ofir_category_tid']['relationship'] = 'tid_representative';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'col-md-9';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Ansøgningsfrist */
  $handler->display->display_options['fields']['field_os2web_ofir_job_period']['id'] = 'field_os2web_ofir_job_period';
  $handler->display->display_options['fields']['field_os2web_ofir_job_period']['table'] = 'field_data_field_os2web_ofir_job_period';
  $handler->display->display_options['fields']['field_os2web_ofir_job_period']['field'] = 'field_os2web_ofir_job_period';
  $handler->display->display_options['fields']['field_os2web_ofir_job_period']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_ofir_job_period']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_ofir_job_period']['element_class'] = 'pull-right';
  $handler->display->display_options['fields']['field_os2web_ofir_job_period']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_ofir_job_period']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_ofir_job_period']['element_wrapper_class'] = 'col-md-3';
  $handler->display->display_options['fields']['field_os2web_ofir_job_period']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_ofir_job_period']['settings'] = array(
    'format_type' => 'os2web_base_date_only',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Felt: Indhold: Beskrivelse */
  $handler->display->display_options['fields']['field_os2web_ofir_job_text']['id'] = 'field_os2web_ofir_job_text';
  $handler->display->display_options['fields']['field_os2web_ofir_job_text']['table'] = 'field_data_field_os2web_ofir_job_text';
  $handler->display->display_options['fields']['field_os2web_ofir_job_text']['field'] = 'field_os2web_ofir_job_text';
  $handler->display->display_options['fields']['field_os2web_ofir_job_text']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_ofir_job_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_ofir_job_text']['alter']['text'] = '[field_os2web_ofir_job_text]
<br>
<hr>
<br>';
  $handler->display->display_options['fields']['field_os2web_ofir_job_text']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_os2web_ofir_job_text']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_ofir_job_text']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_ofir_job_text']['alter']['preserve_tags'] = '<p> <br> <hr>';
  $handler->display->display_options['fields']['field_os2web_ofir_job_text']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_ofir_job_text']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_ofir_job_text']['element_class'] = 'col-md-9';
  $handler->display->display_options['fields']['field_os2web_ofir_job_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_ofir_job_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_ofir_job_text']['settings'] = array(
    'trim_length' => '200',
  );
  /* Felt: Indhold: Stillingskategori */
  $handler->display->display_options['fields']['field_os2web_ofir_category']['id'] = 'field_os2web_ofir_category';
  $handler->display->display_options['fields']['field_os2web_ofir_category']['table'] = 'field_data_field_os2web_ofir_category';
  $handler->display->display_options['fields']['field_os2web_ofir_category']['field'] = 'field_os2web_ofir_category';
  $handler->display->display_options['fields']['field_os2web_ofir_category']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_ofir_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_ofir_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_ofir_category']['type'] = 'taxonomy_term_reference_plain';
  /* Sorteringskriterie: Indhold: Stillingskategori (field_os2web_ofir_category) */
  $handler->display->display_options['sorts']['field_os2web_ofir_category_tid']['id'] = 'field_os2web_ofir_category_tid';
  $handler->display->display_options['sorts']['field_os2web_ofir_category_tid']['table'] = 'field_data_field_os2web_ofir_category';
  $handler->display->display_options['sorts']['field_os2web_ofir_category_tid']['field'] = 'field_os2web_ofir_category_tid';
  /* Sorteringskriterie: Indhold: Ansøgningsfrist - slutdato (field_os2web_ofir_job_period:value2) */
  $handler->display->display_options['sorts']['field_os2web_ofir_job_period_value2']['id'] = 'field_os2web_ofir_job_period_value2';
  $handler->display->display_options['sorts']['field_os2web_ofir_job_period_value2']['table'] = 'field_data_field_os2web_ofir_job_period';
  $handler->display->display_options['sorts']['field_os2web_ofir_job_period_value2']['field'] = 'field_os2web_ofir_job_period_value2';
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
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['expose']['label'] = 'Stillingskategori';
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['expose']['operator'] = 'field_os2web_ofir_category_tid_op';
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['expose']['identifier'] = 'kategori';
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2web_ofir_category_tid']['vocabulary'] = 'os2web_job_categories';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['emply_jobliste'] = array(
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
    t('term fra field_os2web_ofir_category'),
    t('[field_os2web_ofir_job_text]
<br>
<hr>
<br>'),
    t('Stillingskategori'),
    t('Content pane'),
    t('View panes'),
  );
  $export['emply_jobliste'] = $view;

  return $export;
}
