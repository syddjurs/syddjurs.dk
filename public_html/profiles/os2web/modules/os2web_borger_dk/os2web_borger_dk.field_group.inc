<?php
/**
 * @file
 * os2web_borger_dk.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2web_borger_dk_field_group_info() {
  $export = array();

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
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_borger_dk_content|node|os2web_borger_dk_article|form'] = $field_group;

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
      1 => 'field_os2web_base_field_spotbox',
      2 => 'field_os2web_base_field_selfserv',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_borger_dk_sidebar|node|os2web_borger_dk_article|form'] = $field_group;

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
        'classes' => '',
      ),
    ),
  );
  $export['group_borger_dk_side|node|os2web_borger_dk_article|form'] = $field_group;

  return $export;
}
