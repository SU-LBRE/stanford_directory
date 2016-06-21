<?php
/**
 * @file
 */

/**
 * [stanford_directory_configuration_form description]
 * @param  [type] $form        [description]
 * @param  [type] &$form_state [description]
 * @return [type]              [description]
 */
function stanford_directory_configuration_form($form, &$form_state) {

  $form['sd'] = array(
    '#type' => "fieldset",
    '#title' => t('Content Types'),
    '#description' => t("Check all of the content types that apply to the Service Directory. Enabling a content type here will add fields and a vertical tab to the node edit form. Disabling a content type here will remove the fields and vertical tab."),
    '#collapsed' => FALSE,
    '#collapsible' => FALSE,
  );

  $type_names = node_type_get_names();
  $enabled_types = variable_get('stanford_directory_content_types', array());

  $form['sd']['stanford_directory_content_types'] = array(
    '#title' => t("Check To Enable Content Type"),
    '#type' => 'checkboxes',
    '#options' => $type_names,
    '#default_value' => $enabled_types,
  );

  $form['#validate'][] = "stanford_directory_configuration_form_validate";
  $form["#submit"][] = "stanford_directory_configuration_form_submit";


  return system_settings_form($form);
}

/**
 * Implements hook_form_validate().
 */
function stanford_directory_configuration_form_validate($form, &$form_state) {
  $wat = "this";
}

/**
 * Stanford_directory_configuration_form submit function.
 *
 * @param array $form
 *   The form array.
 * @param array $form_state
 *   The submitted form state.
 */
function stanford_directory_configuration_form_submit($form, &$form_state) {

  $node_type = "stanford_gallery";
  $instances = stanford_directory_get_field_group_field_information($node_type);


  // Get the field group definition from our helper function.
  $field_group = stanford_directory_get_field_group_field_information($node_type);
  // Need to repackage the ctools export a bit.
  foreach ($field_group->data as $data_key => $data_item) {
    $field_group->{$data_key} = $data_item;
  }

  // Only save if doesn't exist.
  if (!field_group_exists($field_group->group_name, 'node', $node_type, 'form')) {
    field_group_group_save($field_group);
  }

}
