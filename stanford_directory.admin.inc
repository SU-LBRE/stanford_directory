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
    '#description' => t("Enabled content types that can be used within a subsite."),
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

  return system_settings_form($form);
}

/**
 * [stanford_directory_configuration_form_validate description]
 * @param  [type] $form        [description]
 * @param  [type] &$form_state [description]
 */
function stanford_directory_configuration_form_validate($form, &$form_state) {

}

/**
 * [stanford_directory_configuration_form_submit description]
 * @param  [type] $form        [description]
 * @param  [type] &$form_state [description]
 */
function stanford_directory_configuration_form_submit($form, &$form_state) {

}
