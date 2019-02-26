<?php
/**
 * @file
 * nhmrc_special_collection.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nhmrc_special_collection_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'special_collection_audience';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Special Collection Audience';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Special Collection Audience';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-4 my-work-image';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Special Collection thumbnail */
  $handler->display->display_options['fields']['field_sc_thumbnail']['id'] = 'field_sc_thumbnail';
  $handler->display->display_options['fields']['field_sc_thumbnail']['table'] = 'field_data_field_sc_thumbnail';
  $handler->display->display_options['fields']['field_sc_thumbnail']['field'] = 'field_sc_thumbnail';
  $handler->display->display_options['fields']['field_sc_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_sc_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sc_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sc_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sc_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-sm-4">
[field_sc_thumbnail]
<div class="img__description_layer">
          <span class="img__description">[name]</span>
       </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    6 => '6',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Audience';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Special Collection thumbnail */
  $handler->display->display_options['fields']['field_sc_thumbnail']['id'] = 'field_sc_thumbnail';
  $handler->display->display_options['fields']['field_sc_thumbnail']['table'] = 'field_data_field_sc_thumbnail';
  $handler->display->display_options['fields']['field_sc_thumbnail']['field'] = 'field_sc_thumbnail';
  $handler->display->display_options['fields']['field_sc_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_sc_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sc_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sc_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sc_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_sc_thumbnail]
<div class="img__description_layer">
<a href="/healthy-dating-search-results?f%5B0%5D=field_audience%3A[tid]">
          <span class="img__description">[name]
<img class="img-responsive description-arrow" src="/sites/all/themes/bootstrap_nhmrc/images/sc-arrow.png" width="27" height="24" alt="arrow.png" title="arrow.png">
</span></a>
       </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    6 => '6',
  );
  $export['special_collection_audience'] = $view;

  $view = new view();
  $view->name = 'special_collection_topics';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Special Collection Topics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Topics';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-4 my-work-image';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Special Collection thumbnail */
  $handler->display->display_options['fields']['field_sc_thumbnail']['id'] = 'field_sc_thumbnail';
  $handler->display->display_options['fields']['field_sc_thumbnail']['table'] = 'field_data_field_sc_thumbnail';
  $handler->display->display_options['fields']['field_sc_thumbnail']['field'] = 'field_sc_thumbnail';
  $handler->display->display_options['fields']['field_sc_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_sc_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sc_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sc_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sc_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sc_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_sc_thumbnail]
<div class="img__description_layer">
          <span class="img__description">[name]
<img class="img-responsive description-arrow" src="/sites/all/themes/bootstrap_nhmrc/images/sc-arrow.png" width="27" height="24" alt="arrow.png" title="arrow.png">
</span>
       </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'healthy_dating_topics' => 'healthy_dating_topics',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Special Collection thumbnail */
  $handler->display->display_options['fields']['field_sc_thumbnail']['id'] = 'field_sc_thumbnail';
  $handler->display->display_options['fields']['field_sc_thumbnail']['table'] = 'field_data_field_sc_thumbnail';
  $handler->display->display_options['fields']['field_sc_thumbnail']['field'] = 'field_sc_thumbnail';
  $handler->display->display_options['fields']['field_sc_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_sc_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sc_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sc_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sc_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sc_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_sc_thumbnail]
<div class="img__description_layer">
<a href="/healthy-dating-search-results?f%5B0%5D=field_healthy_dating_topics%3A[tid]">
          <span class="img__description">[name]
<img class="img-responsive description-arrow" src="/sites/all/themes/bootstrap_nhmrc/images/sc-arrow.png" width="27" height="24" alt="arrow.png" title="arrow.png">
</span></a>
       </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['special_collection_topics'] = $view;

  return $export;
}
