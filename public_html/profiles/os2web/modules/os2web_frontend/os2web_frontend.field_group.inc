<?php
/**
 * @file
 * os2web_frontend.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2web_frontend_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_borger_dk_content|node|os2web_borger_dk_article|form';
  $field_group->group_name = 'group_borger_dk_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_borger_dk_article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_borger_dk_side';
  $field_group->data = array(
    'label' => 'Borger.dk artikel',
    'weight' => '18',
    'children' => array(
      0 => 'body',
      1 => 'field_os2web_borger_dk_borgerurl',
      2 => 'field_os2web_borger_dk_byline',
      3 => 'field_os2web_borger_dk_header',
      4 => 'field_os2web_borger_dk_legislati',
      5 => 'field_os2web_borger_dk_pagetitle',
      6 => 'field_os2web_borger_dk_post_text',
      7 => 'field_os2web_borger_dk_pre_text',
      8 => 'field_os2web_borger_dk_recommend',
      9 => 'field_os2web_borger_dk_selfservi',
      10 => 'field_os2web_borger_dk_shortlist',
      11 => 'field_os2web_borger_dk_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-borger-dk-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_borger_dk_content|node|os2web_borger_dk_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_borger_dk_sidebar|node|os2web_borger_dk_article|form';
  $field_group->group_name = 'group_borger_dk_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_borger_dk_article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_borger_dk_side';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '19',
    'children' => array(
      0 => 'field_os2web_base_field_contact',
      1 => 'field_os2web_base_field_selfserv',
      2 => 'field_os2web_base_field_spotbox',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-borger-dk-sidebar field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_borger_dk_sidebar|node|os2web_borger_dk_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_borger_dk_side|node|os2web_borger_dk_article|form';
  $field_group->group_name = 'group_borger_dk_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_borger_dk_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Borger.dk artikel side',
    'weight' => '1',
    'children' => array(
      0 => 'group_borger_dk_content',
      1 => 'group_borger_dk_sidebar',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-borger-dk-side field-group-htabs',
      ),
    ),
  );
  $field_groups['group_borger_dk_side|node|os2web_borger_dk_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_base_group_settings|node|os2web_base_news|form';
  $field_group->group_name = 'group_os2web_base_group_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_os2web_base_news_tabs';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '3',
    'children' => array(
      0 => 'field_os2web_base_field_promote',
      1 => 'field_os2web_base_field_case',
      2 => 'field_os2web_base_field_doc',
      3 => 'path',
      4 => 'group_os2web_base_group_hidden',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Indstillinger',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-os2web-base-group-settings field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_os2web_base_group_settings|node|os2web_base_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_base_group_text|node|os2web_base_news|form';
  $field_group->group_name = 'group_os2web_base_group_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_os2web_base_news_tabs';
  $field_group->data = array(
    'label' => 'Tekst',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_os2web_base_field_lead_img',
      2 => 'field_os2web_base_field_summary',
      3 => 'field_os2web_base_field_struct',
      4 => 'field_os2web_base_field_media',
      5 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Tekst',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-os2web-base-group-text field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_os2web_base_group_text|node|os2web_base_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_base_news_tabs|node|os2web_base_news|form';
  $field_group->group_name = 'group_os2web_base_news_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News',
    'weight' => '0',
    'children' => array(
      0 => 'group_os2web_base_group_settings',
      1 => 'group_os2web_base_group_taxono',
      2 => 'group_os2web_base_group_text',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-os2web-base-news-tabs field-group-htabs',
      ),
    ),
  );
  $field_groups['group_os2web_base_news_tabs|node|os2web_base_news|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Borger.dk artikel');
  t('Borger.dk artikel side');
  t('Indstillinger');
  t('News');
  t('Tekst');

  return $field_groups;
}
