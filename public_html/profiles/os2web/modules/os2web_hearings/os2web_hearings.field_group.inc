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
      2 => 'field_os2web_base_field_contact',
      3 => 'field_os2web_base_case_no',
      4 => 'field_os2web_base_send_to_acadre',
      5 => 'path',
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
      4 => 'group_os2web_hearings_esdh_attac',
      5 => 'group_os2web_hearings_esdh_reply',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_hearings_esdh_attac|node|os2web_hearings_hearing_case|default';
  $field_group->group_name = 'group_os2web_hearings_esdh_attac';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_hearings_hearing_case';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bilag',
    'weight' => '26',
    'children' => array(
      0 => 'field_os2web_hearings_attac_case',
      1 => 'field_os2web_hearings_attac_doc',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Bilag',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'field group_os2web_hearings_esdh_attac',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'h5',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_os2web_hearings_esdh_attac|node|os2web_hearings_hearing_case|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_hearings_esdh_attac|node|os2web_hearings_hearing_case|form';
  $field_group->group_name = 'group_os2web_hearings_esdh_attac';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_hearings_hearing_case';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_os2web_hearings_case_tabs';
  $field_group->data = array(
    'label' => 'BIlag',
    'weight' => '10',
    'children' => array(
      0 => 'field_os2web_hearings_attac_case',
      1 => 'field_os2web_hearings_attac_doc',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-os2web-hearings-esdh-attac field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_os2web_hearings_esdh_attac|node|os2web_hearings_hearing_case|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_hearings_esdh_reply|node|os2web_hearings_hearing_case|default';
  $field_group->group_name = 'group_os2web_hearings_esdh_reply';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_hearings_hearing_case';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Høringssvar',
    'weight' => '26',
    'children' => array(
      0 => 'field_os2web_hearings_reply_case',
      1 => 'field_os2web_hearings_reply_doc',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Høringssvar',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'field group_os2web_hearings_esdh_reply',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'h5',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_os2web_hearings_esdh_reply|node|os2web_hearings_hearing_case|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_hearings_esdh_reply|node|os2web_hearings_hearing_case|form';
  $field_group->group_name = 'group_os2web_hearings_esdh_reply';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_hearings_hearing_case';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_os2web_hearings_case_tabs';
  $field_group->data = array(
    'label' => 'Høringssvar',
    'weight' => '11',
    'children' => array(
      0 => 'field_os2web_hearings_reply_case',
      1 => 'field_os2web_hearings_reply_doc',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-os2web-hearings-esdh-reply field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_os2web_hearings_esdh_reply|node|os2web_hearings_hearing_case|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('BIlag');
  t('Bilag');
  t('Emneord');
  t('Høring');
  t('Høringssvar');
  t('Indstillinger');
  t('Tekst');
  t('Vedhæftninger');

  return $field_groups;
}
