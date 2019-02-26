<?php
/**
 * @file
 * nmhrc_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nmhrc_core_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'accordion';
  $view->description = 'Accordion layout for interior pages';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Accordion';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    1 => '1',
    2 => '2',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'accordion-group';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Title Text */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Title Text';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Heading */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Heading';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="accordion-heading">
<a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion" href="#collapse[nid]">
<span class="plus-minus"></span>
<h2 class="words">[title]</h2>
</a>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_accordion_item_url']['id'] = 'field_accordion_item_url';
  $handler->display->display_options['fields']['field_accordion_item_url']['table'] = 'field_data_field_accordion_item_url';
  $handler->display->display_options['fields']['field_accordion_item_url']['field'] = 'field_accordion_item_url';
  $handler->display->display_options['fields']['field_accordion_item_url']['label'] = '';
  $handler->display->display_options['fields']['field_accordion_item_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_accordion_item_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_accordion_item_url']['alter']['text'] = '<a href="[field_accordion_item_url]">More About [title_1]</a>';
  $handler->display->display_options['fields']['field_accordion_item_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_accordion_item_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_accordion_item_url']['type'] = 'link_plain';
  /* Field: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div id="collapse[nid]" class="accordion-body collapse">
<div class="accordion-inner">
[body]
<div class="moreAbout">[field_accordion_item_url]</div>
[edit_node]
</div>
</div>';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'accordion:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Accordion Item Type (field_accordion_item_type) */
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['id'] = 'field_accordion_item_type_value';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['table'] = 'field_data_field_accordion_item_type';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['field'] = 'field_accordion_item_type_value';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['case'] = 'lower';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['path_case'] = 'lower';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'accordion_item' => 'accordion_item',
  );

  /* Display: AccordionBlock */
  $handler = $view->new_display('block', 'AccordionBlock', 'block_1');

  /* Display: AdminPage */
  $handler = $view->new_display('page', 'AdminPage', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Accordion reorder';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access draggableviews';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title_1' => 'title_1',
    'edit_node' => 'edit_node',
    'title' => 'title',
    'field_accordion_item_url' => 'field_accordion_item_url',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_accordion_item_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="#" class="showhidefooter">Edit Display Order</a>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Title Text */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Title Text';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Heading */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Heading';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span>[title]</span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_accordion_item_url']['id'] = 'field_accordion_item_url';
  $handler->display->display_options['fields']['field_accordion_item_url']['table'] = 'field_data_field_accordion_item_url';
  $handler->display->display_options['fields']['field_accordion_item_url']['field'] = 'field_accordion_item_url';
  $handler->display->display_options['fields']['field_accordion_item_url']['label'] = '';
  $handler->display->display_options['fields']['field_accordion_item_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_accordion_item_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_accordion_item_url']['alter']['text'] = '<a href="[field_accordion_item_url]">More About [title_1]</a>';
  $handler->display->display_options['fields']['field_accordion_item_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_accordion_item_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_accordion_item_url']['type'] = 'link_plain';
  /* Field: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div id="collapse[nid]" class="accordion-body collapse">
<div class="accordion-inner">
[body]
<div class="moreAbout">[field_accordion_item_url]</div>
[edit_node]
</div>
</div>';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['path'] = 'admin/accordion';

  /* Display: Accordion w/ Admin Block */
  $handler = $view->new_display('block', 'Accordion w/ Admin Block', 'block');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'accordion:page_1';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;

  /* Display: Accordion w/ Admin Block for Basic Pages */
  $handler = $view->new_display('block', 'Accordion w/ Admin Block for Basic Pages', 'block_2');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'accordion:page_1';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Title Text */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Title Text';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Heading */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Heading';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="accordion-heading">
<a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion" href="#collapse[nid]">
<span class="plus-minus"></span>
<h2 class="words">[title]</h2>
</a>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_accordion_item_url']['id'] = 'field_accordion_item_url';
  $handler->display->display_options['fields']['field_accordion_item_url']['table'] = 'field_data_field_accordion_item_url';
  $handler->display->display_options['fields']['field_accordion_item_url']['field'] = 'field_accordion_item_url';
  $handler->display->display_options['fields']['field_accordion_item_url']['label'] = '';
  $handler->display->display_options['fields']['field_accordion_item_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_accordion_item_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_accordion_item_url']['alter']['text'] = '<a href="[field_accordion_item_url]">More About [title_1]</a>';
  $handler->display->display_options['fields']['field_accordion_item_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_accordion_item_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_accordion_item_url']['type'] = 'link_plain';
  /* Field: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div id="collapse[nid]" class="accordion-body collapse">
<div class="accordion-inner">
[body]
<div class="moreAbout">[field_accordion_item_url]</div>
[edit_node]
</div>
</div>';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Accordion Item Type */
  $handler->display->display_options['fields']['field_accordion_item_type']['id'] = 'field_accordion_item_type';
  $handler->display->display_options['fields']['field_accordion_item_type']['table'] = 'field_data_field_accordion_item_type';
  $handler->display->display_options['fields']['field_accordion_item_type']['field'] = 'field_accordion_item_type';
  $handler->display->display_options['fields']['field_accordion_item_type']['type'] = 'list_key';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Accordion Item Type (field_accordion_item_type) */
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['id'] = 'field_accordion_item_type_value';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['table'] = 'field_data_field_accordion_item_type';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['field'] = 'field_accordion_item_type_value';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['case'] = 'lower';
  $handler->display->display_options['arguments']['field_accordion_item_type_value']['path_case'] = 'lower';
  $export['accordion'] = $view;

  $view = new view();
  $view->name = 'archive_webinars';
  $view->description = 'list of Archived Webinars for the Archived Webinars page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Archive Webinars';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Webinars';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_webinar_image']['id'] = 'field_webinar_image';
  $handler->display->display_options['fields']['field_webinar_image']['table'] = 'field_data_field_webinar_image';
  $handler->display->display_options['fields']['field_webinar_image']['field'] = 'field_webinar_image';
  $handler->display->display_options['fields']['field_webinar_image']['label'] = '';
  $handler->display->display_options['fields']['field_webinar_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_webinar_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_webinar_image']['settings'] = array(
    'image_style' => 'file_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href=[path]>See More</a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Transcript */
  $handler->display->display_options['fields']['field_webinar_transcript']['id'] = 'field_webinar_transcript';
  $handler->display->display_options['fields']['field_webinar_transcript']['table'] = 'field_data_field_webinar_transcript';
  $handler->display->display_options['fields']['field_webinar_transcript']['field'] = 'field_webinar_transcript';
  $handler->display->display_options['fields']['field_webinar_transcript']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_transcript']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_transcript']['click_sort_column'] = 'fid';
  /* Field: Content: Slides */
  $handler->display->display_options['fields']['field_webinar_slides']['id'] = 'field_webinar_slides';
  $handler->display->display_options['fields']['field_webinar_slides']['table'] = 'field_data_field_webinar_slides';
  $handler->display->display_options['fields']['field_webinar_slides']['field'] = 'field_webinar_slides';
  $handler->display->display_options['fields']['field_webinar_slides']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_slides']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_slides']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_webinar_slides']['delta_offset'] = '0';
  /* Field: Content: Q&A */
  $handler->display->display_options['fields']['field_webinar_q_a']['id'] = 'field_webinar_q_a';
  $handler->display->display_options['fields']['field_webinar_q_a']['table'] = 'field_data_field_webinar_q_a';
  $handler->display->display_options['fields']['field_webinar_q_a']['field'] = 'field_webinar_q_a';
  $handler->display->display_options['fields']['field_webinar_q_a']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_q_a']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_q_a']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_webinar_q_a']['delta_offset'] = '0';
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_webinar_media']['id'] = 'field_webinar_media';
  $handler->display->display_options['fields']['field_webinar_media']['table'] = 'field_data_field_webinar_media';
  $handler->display->display_options['fields']['field_webinar_media']['field'] = 'field_webinar_media';
  $handler->display->display_options['fields']['field_webinar_media']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_webinar_media']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'archived_webinars' => 'archived_webinars',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_webinar_image']['id'] = 'field_webinar_image';
  $handler->display->display_options['fields']['field_webinar_image']['table'] = 'field_data_field_webinar_image';
  $handler->display->display_options['fields']['field_webinar_image']['field'] = 'field_webinar_image';
  $handler->display->display_options['fields']['field_webinar_image']['label'] = '';
  $handler->display->display_options['fields']['field_webinar_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_webinar_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_webinar_image']['settings'] = array(
    'image_style' => 'file_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: YouTube Video */
  $handler->display->display_options['fields']['field_youtube']['id'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['table'] = 'field_data_field_youtube';
  $handler->display->display_options['fields']['field_youtube']['field'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['label'] = '';
  $handler->display->display_options['fields']['field_youtube']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_youtube']['alter']['text'] = '<p><a href="#[field_youtube-video_id]" data-toggle="modal">Watch the Webinar</a></p>
<div id="[field_youtube-video_id]" class="modal fade" tabindex="-1" role="dialog" aria-labelledby="modalLabel-[field_youtube-video_id]" aria-hidden="true">
<div class="modal-header">
<h3 id="modalLabel-[field_youtube-video_id]">[title]</h3></div>
<div class="modal-body"><div class="youtube-container--responsive">[field_youtube]</div></div>
</div>';
  $handler->display->display_options['fields']['field_youtube']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_youtube']['settings'] = array(
    'youtube_size' => 'custom',
    'youtube_width' => '840',
    'youtube_height' => '600',
    'youtube_autoplay' => 0,
    'youtube_loop' => 0,
    'youtube_showinfo' => 0,
    'youtube_controls' => 0,
    'youtube_autohide' => 0,
    'youtube_iv_load_policy' => 0,
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href=[path]>See More</a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Transcript */
  $handler->display->display_options['fields']['field_webinar_transcript']['id'] = 'field_webinar_transcript';
  $handler->display->display_options['fields']['field_webinar_transcript']['table'] = 'field_data_field_webinar_transcript';
  $handler->display->display_options['fields']['field_webinar_transcript']['field'] = 'field_webinar_transcript';
  $handler->display->display_options['fields']['field_webinar_transcript']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_transcript']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_transcript']['click_sort_column'] = 'fid';
  /* Field: Content: Slides */
  $handler->display->display_options['fields']['field_webinar_slides']['id'] = 'field_webinar_slides';
  $handler->display->display_options['fields']['field_webinar_slides']['table'] = 'field_data_field_webinar_slides';
  $handler->display->display_options['fields']['field_webinar_slides']['field'] = 'field_webinar_slides';
  $handler->display->display_options['fields']['field_webinar_slides']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_slides']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_slides']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_webinar_slides']['delta_offset'] = '0';
  /* Field: Content: Q&A */
  $handler->display->display_options['fields']['field_webinar_q_a']['id'] = 'field_webinar_q_a';
  $handler->display->display_options['fields']['field_webinar_q_a']['table'] = 'field_data_field_webinar_q_a';
  $handler->display->display_options['fields']['field_webinar_q_a']['field'] = 'field_webinar_q_a';
  $handler->display->display_options['fields']['field_webinar_q_a']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_q_a']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_q_a']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_webinar_q_a']['delta_offset'] = '0';
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_webinar_media']['id'] = 'field_webinar_media';
  $handler->display->display_options['fields']['field_webinar_media']['table'] = 'field_data_field_webinar_media';
  $handler->display->display_options['fields']['field_webinar_media']['field'] = 'field_webinar_media';
  $handler->display->display_options['fields']['field_webinar_media']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_webinar_media']['delta_offset'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_webinar_image']['id'] = 'field_webinar_image';
  $handler->display->display_options['fields']['field_webinar_image']['table'] = 'field_data_field_webinar_image';
  $handler->display->display_options['fields']['field_webinar_image']['field'] = 'field_webinar_image';
  $handler->display->display_options['fields']['field_webinar_image']['label'] = '';
  $handler->display->display_options['fields']['field_webinar_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_webinar_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_webinar_image']['settings'] = array(
    'image_style' => 'file_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: YouTube Video */
  $handler->display->display_options['fields']['field_youtube']['id'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['table'] = 'field_data_field_youtube';
  $handler->display->display_options['fields']['field_youtube']['field'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['label'] = '';
  $handler->display->display_options['fields']['field_youtube']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_youtube']['settings'] = array(
    'youtube_size' => '420x315',
    'youtube_width' => '',
    'youtube_height' => '',
    'youtube_autoplay' => 0,
    'youtube_loop' => 0,
    'youtube_showinfo' => 0,
    'youtube_controls' => 0,
    'youtube_autohide' => 0,
    'youtube_iv_load_policy' => 0,
  );
  /* Field: Content: Transcript */
  $handler->display->display_options['fields']['field_webinar_transcript']['id'] = 'field_webinar_transcript';
  $handler->display->display_options['fields']['field_webinar_transcript']['table'] = 'field_data_field_webinar_transcript';
  $handler->display->display_options['fields']['field_webinar_transcript']['field'] = 'field_webinar_transcript';
  $handler->display->display_options['fields']['field_webinar_transcript']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_transcript']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_transcript']['click_sort_column'] = 'fid';
  /* Field: Content: Slides */
  $handler->display->display_options['fields']['field_webinar_slides']['id'] = 'field_webinar_slides';
  $handler->display->display_options['fields']['field_webinar_slides']['table'] = 'field_data_field_webinar_slides';
  $handler->display->display_options['fields']['field_webinar_slides']['field'] = 'field_webinar_slides';
  $handler->display->display_options['fields']['field_webinar_slides']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_webinar_slides']['delta_offset'] = '0';
  /* Field: Content: Q&A */
  $handler->display->display_options['fields']['field_webinar_q_a']['id'] = 'field_webinar_q_a';
  $handler->display->display_options['fields']['field_webinar_q_a']['table'] = 'field_data_field_webinar_q_a';
  $handler->display->display_options['fields']['field_webinar_q_a']['field'] = 'field_webinar_q_a';
  $handler->display->display_options['fields']['field_webinar_q_a']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_webinar_q_a']['delta_offset'] = '0';
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_webinar_media']['id'] = 'field_webinar_media';
  $handler->display->display_options['fields']['field_webinar_media']['table'] = 'field_data_field_webinar_media';
  $handler->display->display_options['fields']['field_webinar_media']['field'] = 'field_webinar_media';
  $handler->display->display_options['fields']['field_webinar_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_webinar_media']['delta_offset'] = '0';
  $export['archive_webinars'] = $view;

  $view = new view();
  $view->name = 'featured_documents';
  $view->description = 'Lists of "Featured Documents" that are being Featured on the homepage and the library page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Documents';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = '[field_file_type]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: File Type */
  $handler->display->display_options['fields']['field_file_type']['id'] = 'field_file_type';
  $handler->display->display_options['fields']['field_file_type']['table'] = 'field_data_field_file_type';
  $handler->display->display_options['fields']['field_file_type']['field'] = 'field_file_type';
  $handler->display->display_options['fields']['field_file_type']['label'] = '';
  $handler->display->display_options['fields']['field_file_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_type']['type'] = 'list_key';
  /* Field: Content: url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '92';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Promoted to front page */
  $handler->display->display_options['sorts']['promote']['id'] = 'promote';
  $handler->display->display_options['sorts']['promote']['table'] = 'node';
  $handler->display->display_options['sorts']['promote']['field'] = 'promote';
  $handler->display->display_options['sorts']['promote']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_documents' => 'featured_documents',
  );

  /* Display: On Home Page */
  $handler = $view->new_display('block', 'On Home Page', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-featured-documents_home';

  /* Display: On Library Page */
  $handler = $view->new_display('block', 'On Library Page', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'featured_resource_library',
    'image_link' => '',
  );
  /* Field: Content: url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '92';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_documents' => 'featured_documents',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $export['featured_documents'] = $view;

  $view = new view();
  $view->name = 'frontpage_accordionview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FrontPage_AccordionView';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FrontPage_AccordionView';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9999';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['row-start-open'] = '0';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['style_options']['clearstyle'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_menu_order']['id'] = 'field_menu_order';
  $handler->display->display_options['fields']['field_menu_order']['table'] = 'field_data_field_menu_order';
  $handler->display->display_options['fields']['field_menu_order']['field'] = 'field_menu_order';
  $handler->display->display_options['fields']['field_menu_order']['label'] = '';
  $handler->display->display_options['fields']['field_menu_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_menu_order']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_content_title_1']['id'] = 'field_content_title_1';
  $handler->display->display_options['fields']['field_content_title_1']['table'] = 'field_data_field_content_title_1';
  $handler->display->display_options['fields']['field_content_title_1']['field'] = 'field_content_title_1';
  $handler->display->display_options['fields']['field_content_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_content_title_1']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_content_title_2']['id'] = 'field_content_title_2';
  $handler->display->display_options['fields']['field_content_title_2']['table'] = 'field_data_field_content_title_2';
  $handler->display->display_options['fields']['field_content_title_2']['field'] = 'field_content_title_2';
  $handler->display->display_options['fields']['field_content_title_2']['label'] = '';
  $handler->display->display_options['fields']['field_content_title_2']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_content_title_3']['id'] = 'field_content_title_3';
  $handler->display->display_options['fields']['field_content_title_3']['table'] = 'field_data_field_content_title_3';
  $handler->display->display_options['fields']['field_content_title_3']['field'] = 'field_content_title_3';
  $handler->display->display_options['fields']['field_content_title_3']['label'] = '';
  $handler->display->display_options['fields']['field_content_title_3']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image_1';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_image_2']['id'] = 'field_image_2';
  $handler->display->display_options['fields']['field_image_2']['table'] = 'field_data_field_image_2';
  $handler->display->display_options['fields']['field_image_2']['field'] = 'field_image_2';
  $handler->display->display_options['fields']['field_image_2']['label'] = '';
  $handler->display->display_options['fields']['field_image_2']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_image_3']['id'] = 'field_image_3';
  $handler->display->display_options['fields']['field_image_3']['table'] = 'field_data_field_image_3';
  $handler->display->display_options['fields']['field_image_3']['field'] = 'field_image_3';
  $handler->display->display_options['fields']['field_image_3']['label'] = '';
  $handler->display->display_options['fields']['field_image_3']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_summary_1']['id'] = 'field_summary_1';
  $handler->display->display_options['fields']['field_summary_1']['table'] = 'field_data_field_summary_1';
  $handler->display->display_options['fields']['field_summary_1']['field'] = 'field_summary_1';
  $handler->display->display_options['fields']['field_summary_1']['label'] = '';
  $handler->display->display_options['fields']['field_summary_1']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_summary_2']['id'] = 'field_summary_2';
  $handler->display->display_options['fields']['field_summary_2']['table'] = 'field_data_field_summary_2';
  $handler->display->display_options['fields']['field_summary_2']['field'] = 'field_summary_2';
  $handler->display->display_options['fields']['field_summary_2']['label'] = '';
  $handler->display->display_options['fields']['field_summary_2']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_summary_3']['id'] = 'field_summary_3';
  $handler->display->display_options['fields']['field_summary_3']['table'] = 'field_data_field_summary_3';
  $handler->display->display_options['fields']['field_summary_3']['field'] = 'field_summary_3';
  $handler->display->display_options['fields']['field_summary_3']['label'] = '';
  $handler->display->display_options['fields']['field_summary_3']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_link_1']['id'] = 'field_link_1';
  $handler->display->display_options['fields']['field_link_1']['table'] = 'field_data_field_link_1';
  $handler->display->display_options['fields']['field_link_1']['field'] = 'field_link_1';
  $handler->display->display_options['fields']['field_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_link_1']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_link_2']['id'] = 'field_link_2';
  $handler->display->display_options['fields']['field_link_2']['table'] = 'field_data_field_link_2';
  $handler->display->display_options['fields']['field_link_2']['field'] = 'field_link_2';
  $handler->display->display_options['fields']['field_link_2']['label'] = '';
  $handler->display->display_options['fields']['field_link_2']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_link_3']['id'] = 'field_link_3';
  $handler->display->display_options['fields']['field_link_3']['table'] = 'field_data_field_link_3';
  $handler->display->display_options['fields']['field_link_3']['field'] = 'field_link_3';
  $handler->display->display_options['fields']['field_link_3']['label'] = '';
  $handler->display->display_options['fields']['field_link_3']['element_label_colon'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_menu_order_value']['id'] = 'field_menu_order_value';
  $handler->display->display_options['sorts']['field_menu_order_value']['table'] = 'field_data_field_menu_order';
  $handler->display->display_options['sorts']['field_menu_order_value']['field'] = 'field_menu_order_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'front_page_content' => 'front_page_content',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['frontpage_accordionview'] = $view;

  $view = new view();
  $view->name = 'home_calendar';
  $view->description = 'Lists events on the homepage';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Calendar of Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '92';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'just_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Type of Event (field_type_of_event) */
  $handler->display->display_options['filters']['field_type_of_event_value']['id'] = 'field_type_of_event_value';
  $handler->display->display_options['filters']['field_type_of_event_value']['table'] = 'field_data_field_type_of_event';
  $handler->display->display_options['filters']['field_type_of_event_value']['field'] = 'field_type_of_event_value';
  $handler->display->display_options['filters']['field_type_of_event_value']['value'] = array(
    0 => '0',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-6';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<ul><li class="views-row views-row-1 views-row-odd views-row-first"><div class="views-field views-field-title">   <div class="calendar-content-title">There are currently no upcoming events. Please visit the <a href="/calendar/month">calendar page</a> to add a new event. </div></div></li></ul>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'just_date',
    'custom_date_format' => '',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="calendar-content"><div class="calendar-content-date">[field_date]</div><div class="calendar-content-title">[title]</div></div>';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '92';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type of Event (field_type_of_event) */
  $handler->display->display_options['filters']['field_type_of_event_value_1']['id'] = 'field_type_of_event_value_1';
  $handler->display->display_options['filters']['field_type_of_event_value_1']['table'] = 'field_data_field_type_of_event';
  $handler->display->display_options['filters']['field_type_of_event_value_1']['field'] = 'field_type_of_event_value';
  $handler->display->display_options['filters']['field_type_of_event_value_1']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_type_of_event_value_1']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+10';
  $export['home_calendar'] = $view;

  $view = new view();
  $view->name = 'slideshow';
  $view->description = 'The slideshow on the homepage';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = '10000';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 1;
  $handler->display->display_options['style_options']['pause'] = 1;
  $handler->display->display_options['row_plugin'] = 'views_bootstrap_carousel_plugin_rows';
  $handler->display->display_options['row_options']['image'] = 'field_image';
  $handler->display->display_options['row_options']['description'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = '10000';
  $handler->display->display_options['style_options']['navigation'] = 0;
  $handler->display->display_options['style_options']['indicators'] = 0;
  $handler->display->display_options['style_options']['pause'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'views_bootstrap_carousel_plugin_rows';
  $handler->display->display_options['row_options']['image'] = 'field_image';
  $handler->display->display_options['row_options']['description'] = '';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['slideshow'] = $view;

  $view = new view();
  $view->name = 'twitter_feed';
  $view->description = 'Imported Tweeter Feed';
  $view->tag = 'default';
  $view->base_table = 'twitter';
  $view->human_name = 'Twitter Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest Tweets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: profile name (hidden) */
  $handler->display->display_options['fields']['screen_name_1']['id'] = 'screen_name_1';
  $handler->display->display_options['fields']['screen_name_1']['table'] = 'twitter';
  $handler->display->display_options['fields']['screen_name_1']['field'] = 'screen_name';
  $handler->display->display_options['fields']['screen_name_1']['ui_name'] = 'profile name (hidden)';
  $handler->display->display_options['fields']['screen_name_1']['label'] = '';
  $handler->display->display_options['fields']['screen_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['screen_name_1']['element_label_colon'] = FALSE;
  /* Field: Tweet ID (hidden) */
  $handler->display->display_options['fields']['twitter_id']['id'] = 'twitter_id';
  $handler->display->display_options['fields']['twitter_id']['table'] = 'twitter';
  $handler->display->display_options['fields']['twitter_id']['field'] = 'twitter_id';
  $handler->display->display_options['fields']['twitter_id']['ui_name'] = 'Tweet ID (hidden)';
  $handler->display->display_options['fields']['twitter_id']['label'] = '';
  $handler->display->display_options['fields']['twitter_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['twitter_id']['element_label_colon'] = FALSE;
  /* Field: Tweet Author (hidden) */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'twitter_account';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Tweet Author (hidden)';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href="https://twitter.com/[screen_name_1]" class="name">[name]</a>';
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Tweet Author @username (hidden) */
  $handler->display->display_options['fields']['screen_name']['id'] = 'screen_name';
  $handler->display->display_options['fields']['screen_name']['table'] = 'twitter';
  $handler->display->display_options['fields']['screen_name']['field'] = 'screen_name';
  $handler->display->display_options['fields']['screen_name']['ui_name'] = 'Tweet Author @username (hidden)';
  $handler->display->display_options['fields']['screen_name']['label'] = '';
  $handler->display->display_options['fields']['screen_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['screen_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['screen_name']['alter']['text'] = '<a href="https://twitter.com/[screen_name]" class="handle">@[screen_name]</a>';
  $handler->display->display_options['fields']['screen_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['screen_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['screen_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['screen_name']['element_default_classes'] = FALSE;
  /* Field: Author Container */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Author Container';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[name] [screen_name]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'tweet-author-info';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Tweet Created (how long ago) */
  $handler->display->display_options['fields']['created_time']['id'] = 'created_time';
  $handler->display->display_options['fields']['created_time']['table'] = 'twitter';
  $handler->display->display_options['fields']['created_time']['field'] = 'created_time';
  $handler->display->display_options['fields']['created_time']['ui_name'] = 'Tweet Created (how long ago)';
  $handler->display->display_options['fields']['created_time']['label'] = '';
  $handler->display->display_options['fields']['created_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created_time']['alter']['text'] = '<a href="https://twitter.com/[screen_name_1]/status/[twitter_id]">[created_time]</a>';
  $handler->display->display_options['fields']['created_time']['element_type'] = 'div';
  $handler->display->display_options['fields']['created_time']['element_class'] = 'tweet-time';
  $handler->display->display_options['fields']['created_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_time']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['created_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created_time']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created_time']['second_date_format'] = 'long';
  /* Field: Tweet */
  $handler->display->display_options['fields']['text']['id'] = 'text';
  $handler->display->display_options['fields']['text']['table'] = 'twitter';
  $handler->display->display_options['fields']['text']['field'] = 'text';
  $handler->display->display_options['fields']['text']['ui_name'] = 'Tweet';
  $handler->display->display_options['fields']['text']['label'] = '';
  $handler->display->display_options['fields']['text']['element_type'] = 'div';
  $handler->display->display_options['fields']['text']['element_class'] = 'tweet-text';
  $handler->display->display_options['fields']['text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['text']['link_urls'] = 1;
  $handler->display->display_options['fields']['text']['link_usernames'] = 1;
  $handler->display->display_options['fields']['text']['link_hashtags'] = 1;
  $handler->display->display_options['fields']['text']['link_attributes'] = 1;
  /* Field: Follow up actions */
  $handler->display->display_options['fields']['web_intents']['id'] = 'web_intents';
  $handler->display->display_options['fields']['web_intents']['table'] = 'twitter';
  $handler->display->display_options['fields']['web_intents']['field'] = 'web_intents';
  $handler->display->display_options['fields']['web_intents']['ui_name'] = 'Follow up actions';
  $handler->display->display_options['fields']['web_intents']['label'] = '';
  $handler->display->display_options['fields']['web_intents']['element_type'] = 'div';
  $handler->display->display_options['fields']['web_intents']['element_class'] = 'tweet-actions';
  $handler->display->display_options['fields']['web_intents']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['web_intents']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['web_intents']['element_default_classes'] = FALSE;
  /* Sort criterion: Twitter: Created time */
  $handler->display->display_options['sorts']['created_time']['id'] = 'created_time';
  $handler->display->display_options['sorts']['created_time']['table'] = 'twitter';
  $handler->display->display_options['sorts']['created_time']['field'] = 'created_time';
  $handler->display->display_options['sorts']['created_time']['order'] = 'DESC';
  /* Filter criterion: Twitter: Login name */
  $handler->display->display_options['filters']['screen_name']['id'] = 'screen_name';
  $handler->display->display_options['filters']['screen_name']['table'] = 'twitter';
  $handler->display->display_options['filters']['screen_name']['field'] = 'screen_name';
  $handler->display->display_options['filters']['screen_name']['value'] = 'MarriageResCtr';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $export['twitter_feed'] = $view;

  return $export;
}
