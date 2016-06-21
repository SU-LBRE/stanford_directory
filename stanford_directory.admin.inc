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

  $values = $form_state["values"];
  $types = $values['stanford_directory_content_types'];
  foreach ($types as $node_type) {
    if (empty($node_type)) {
      continue;
    }
    stanford_directory_add_service_directory($node_type);
  }

}


