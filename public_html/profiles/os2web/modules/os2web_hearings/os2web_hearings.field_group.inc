<?php
/**
 * @file
 * os2web_hearings.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2web_hearings_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_hearings_case_attac|node|os2web_hearings_hearing_case|form';
  $field_group->group_name = 'group_os2web_hearings_case_attac';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_hearings_hearing_case';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_os2web_hearings_case_tabs';
  $field_group->data = array(
    'label' => 'Vedhæftninger',
    'weight' => '9',
    'children' => array(
      0 => 'field_os2web_hearings_files',
      1 => 'field_os2web_hearings_meeting',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-os2web-hearings-case-attac field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_os2web_hearings_case_attac|node|os2web_hearings_hearing_case|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_hearings_case_setti|node|os2web_hearings_hearing_case|form';
  $field_group->group_name = 'group_os2web_hearings_case_setti';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_hearings_hearing_case';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_os2web_hearings_case_tabs';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '8',
    'children' => array(
      0 => 'field_os2web_hearings_enddate',
      1 => 'field_os2web_hearings_type',
      2 => 'path',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-os2web-hearings-case-setti field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_os2web_hearings_case_setti|node|os2web_hearings_hearing_case|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_hearings_case_tabs|node|os2web_hearings_hearing_case|form';
  $field_group->group_name = 'group_os2web_hearings_case_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_hearings_hearing_case';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Høring',
    'weight' => '0',
    'children' => array(
      0 => 'group_os2web_hearings_case_attac',
      1 => 'group_os2web_hearings_case_setti',
      2 => 'group_os2web_hearings_case_taxon',
      3 => 'group_os2web_hearings_case_text',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Høring',
      'instance_settings' => array(
        'classes' => ' group-os2web-hearings-case-tabs field-group-htabs',
      ),
    ),
  );
  $field_groups['group_os2web_hearings_case_tabs|node|os2web_hearings_hearing_case|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_hearings_case_taxon|node|os2web_hearings_hearing_case|form';
  $field_group->group_name = 'group_os2web_hearings_case_taxon';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_hearings_hearing_case';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_os2web_hearings_case_tabs';
  $field_group->data = array(
    'label' => 'Emneord',
    'weight' => '7',
    'children' => array(
      0 => 'field_os2web_base_field_edi_tags',
      1 => 'field_os2web_base_field_kle_ref',
      2 => 'field_os2web_base_field_loca_ref',
      3 => 'field_os2web_base_field_organiz',
      4 => 'field_os2web_base_field_politics',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-os2web-hearings-case-taxon field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_os2web_hearings_case_taxon|node|os2web_hearings_hearing_case|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_hearings_case_text|node|os2web_hearings_hearing_case|form';
  $field_group->group_name = 'group_os2web_hearings_case_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_hearings_hearing_case';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_os2web_hearings_case_tabs';
  $field_group->data = array(
    'label' => 'Tekst',
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'field_os2web_base_field_lead_img',
      2 => 'field_os2web_base_field_summary',
      3 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-os2web-hearings-case-text field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_os2web_hearings_case_text|node|os2web_hearings_hearing_case|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Emneord');
  t('Høring');
  t('Indstillinger');
  t('Tekst');
  t('Vedhæftninger');

  return $field_groups;
}
