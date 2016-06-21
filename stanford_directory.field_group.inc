<?php
/**
 * @file
 * stanford_directory.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_directory_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stanford_directory|node|stanford_page|form';
  $field_group->group_name = 'group_stanford_directory';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Service Directory',
    'weight' => '40',
    'children' => array(
      0 => 'field_s_directory_is',
      1 => 'field_s_directory_cat',
      2 => 'field_s_directory_aud',
      3 => 'field_s_directory_img',
      4 => 'field_s_directory_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Service Directory',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-service-directory field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_stanford_directory|node|stanford_page|form'] = $field_group;

  return $export;
}
