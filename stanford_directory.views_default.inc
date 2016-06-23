<?php
/**
 * @file
 * stanford_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'service_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Directory';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_s_directory_aud']['id'] = 'field_s_directory_aud';
  $handler->display->display_options['fields']['field_s_directory_aud']['table'] = 'field_data_field_s_directory_aud';
  $handler->display->display_options['fields']['field_s_directory_aud']['field'] = 'field_s_directory_aud';
  $handler->display->display_options['fields']['field_s_directory_aud']['label'] = '';
  $handler->display->display_options['fields']['field_s_directory_aud']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_directory_aud']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_directory_aud']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_directory_aud']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_s_directory_aud']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_directory_aud']['separator'] = ' ';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_s_directory_cat']['id'] = 'field_s_directory_cat';
  $handler->display->display_options['fields']['field_s_directory_cat']['table'] = 'field_data_field_s_directory_cat';
  $handler->display->display_options['fields']['field_s_directory_cat']['field'] = 'field_s_directory_cat';
  $handler->display->display_options['fields']['field_s_directory_cat']['label'] = '';
  $handler->display->display_options['fields']['field_s_directory_cat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_directory_cat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_directory_cat']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_directory_cat']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_s_directory_cat']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_directory_cat']['separator'] = ' ';
  /* Field: Content: Directory Image */
  $handler->display->display_options['fields']['field_s_directory_img']['id'] = 'field_s_directory_img';
  $handler->display->display_options['fields']['field_s_directory_img']['table'] = 'field_data_field_s_directory_img';
  $handler->display->display_options['fields']['field_s_directory_img']['field'] = 'field_s_directory_img';
  $handler->display->display_options['fields']['field_s_directory_img']['label'] = '';
  $handler->display->display_options['fields']['field_s_directory_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_directory_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_directory_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_directory_img']['settings'] = array(
    'image_style' => '3-col-header',
    'image_link' => 'content',
    'custom_link_to_entity' => 1,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="stanford_directory_item">
[field_s_directory_img] 
<span class="service_directory_title"><h3>[title]</h3></span>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Include In Service Directory (field_s_directory_is) */
  $handler->display->display_options['filters']['field_s_directory_is_value']['id'] = 'field_s_directory_is_value';
  $handler->display->display_options['filters']['field_s_directory_is_value']['table'] = 'field_data_field_s_directory_is';
  $handler->display->display_options['filters']['field_s_directory_is_value']['field'] = 'field_s_directory_is_value';
  $handler->display->display_options['filters']['field_s_directory_is_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_s_directory_aud' => 'field_s_directory_aud',
    'field_s_directory_cat' => 'field_s_directory_cat',
    'field_s_directory_img' => 0,
    'title' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Category Filter */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['ui_name'] = 'Category Filter';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'service_directory:sd_category_filter';
  /* Header: Audience Filter */
  $handler->display->display_options['header']['view_1']['id'] = 'view_1';
  $handler->display->display_options['header']['view_1']['table'] = 'views';
  $handler->display->display_options['header']['view_1']['field'] = 'view';
  $handler->display->display_options['header']['view_1']['ui_name'] = 'Audience Filter';
  $handler->display->display_options['header']['view_1']['view_to_insert'] = 'service_directory:sd_audience_filter';
  $handler->display->display_options['path'] = 'services';

  /* Display: Category Filter */
  $handler = $view->new_display('block', 'Category Filter', 'sd_category_filter');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_filter';
  $handler->display->display_options['style_options']['filter_group'] = 'Category';
  $handler->display->display_options['style_options']['data_fields'] = 'field_s_directory_cat';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_s_directory_cat']['id'] = 'field_s_directory_cat';
  $handler->display->display_options['fields']['field_s_directory_cat']['table'] = 'field_data_field_s_directory_cat';
  $handler->display->display_options['fields']['field_s_directory_cat']['field'] = 'field_s_directory_cat';
  $handler->display->display_options['fields']['field_s_directory_cat']['label'] = '';
  $handler->display->display_options['fields']['field_s_directory_cat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_directory_cat']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_directory_cat']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_s_directory_cat']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_s_directory_cat']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_directory_cat']['separator'] = ' ';

  /* Display: Audience Filter */
  $handler = $view->new_display('block', 'Audience Filter', 'sd_audience_filter');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_filter';
  $handler->display->display_options['style_options']['filter_group'] = 'Audience';
  $handler->display->display_options['style_options']['data_fields'] = 'field_s_directory_aud';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_s_directory_aud']['id'] = 'field_s_directory_aud';
  $handler->display->display_options['fields']['field_s_directory_aud']['table'] = 'field_data_field_s_directory_aud';
  $handler->display->display_options['fields']['field_s_directory_aud']['field'] = 'field_s_directory_aud';
  $handler->display->display_options['fields']['field_s_directory_aud']['label'] = '';
  $handler->display->display_options['fields']['field_s_directory_aud']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_directory_aud']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_directory_aud']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_s_directory_aud']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_s_directory_aud']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_directory_aud']['separator'] = ' ';
  $export['service_directory'] = $view;

  return $export;
}
