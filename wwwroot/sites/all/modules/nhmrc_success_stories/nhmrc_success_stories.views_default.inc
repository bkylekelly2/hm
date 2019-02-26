<?php
/**
 * @file
 * nhmrc_success_stories.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nhmrc_success_stories_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'success_stories_landing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Success Stories Landing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Success Stories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-6 paragraphs-item-image-text picture-item shuffle-item shuffle-item--visible';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>The Resource Center facilitates Healthy Relationship Integration Institutes – free, one-day trainings on strategies for integrating essential healthy relationship skills into safety-net service delivery systems. Highlighted below are some of the many stories of Integration Institute alums that have successfully integrated healthy relationship education into their existing services, to the benefit of the families they serve. The stories are organized by level of engagement: </p>
<div class="btn-group filter-options">
            <button class="btn btn--primary btn-accent3" data-group="alllevel">All<br>&nbsp</button>
            <button class="btn btn--primary btn-accent3" data-group="Level 1">Level 1: <br>Basic Engagement</button>
            <button class="btn btn--primary btn-accent3" data-group="Level 2">Level 2: <br>Partnerships</button>
            <button class="btn btn--primary btn-accent3" data-group="Level 3">Level 3: <br>Full Integration</button>
          </div>';
  $handler->display->display_options['header']['area']['format'] = 'pure_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="ss-landing-sidebar col-sm-3 pull-right"><h2>Levels of Engagement</h2>
<div><span>Level 1 – Basic Engagement</span><p>Basic engagement involves distributing information on healthy relationship skills to colleagues and clients within your existing service delivery...</p><a class="col-sm-12" href="/level-1-basic-engagement">CONTINUE READING</a></div>
<div><span>Level 2 – Partnerships</span><p>Level two integration involves identifying and developing partnerships with community agencies that can teach healthy relationship skills to...</p><a class="col-sm-12" href="/level-2-partnerships">CONTINUE READING</a></div>
<div><span>Level 3 – Full Integration</span><p>Full integration incorporates a comprehensive healthy marriages and relationship education program into existing services. Full integration...</p><a class="col-sm-12" href="/level-3-full-integration">CONTINUE READING</a></div>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'pure_html';
  /* Field: Content: SS Thumbnail */
  $handler->display->display_options['fields']['field_ss_thumbnail']['id'] = 'field_ss_thumbnail';
  $handler->display->display_options['fields']['field_ss_thumbnail']['table'] = 'field_data_field_ss_thumbnail';
  $handler->display->display_options['fields']['field_ss_thumbnail']['field'] = 'field_ss_thumbnail';
  $handler->display->display_options['fields']['field_ss_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_ss_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ss_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ss_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ss_thumbnail']['settings'] = array(
    'image_style' => 'sns_image_text',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Engagement Level */
  $handler->display->display_options['fields']['field_engagement_level']['id'] = 'field_engagement_level';
  $handler->display->display_options['fields']['field_engagement_level']['table'] = 'field_data_field_engagement_level';
  $handler->display->display_options['fields']['field_engagement_level']['field'] = 'field_engagement_level';
  $handler->display->display_options['fields']['field_engagement_level']['label'] = '';
  $handler->display->display_options['fields']['field_engagement_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_engagement_level']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_engagement_level']['alter']['text'] = '[field_engagement_level]';
  $handler->display->display_options['fields']['field_engagement_level']['alter']['max_length'] = '8';
  $handler->display->display_options['fields']['field_engagement_level']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_engagement_level']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_engagement_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_engagement_level']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="content paragraph-image-n-text" data-groups="[&quot;[field_engagement_level]&quot;]">
<div class="field field-name-field-image field-type-image field-label-hidden">
[field_ss_thumbnail]
</div>
<div class="field field-name-field-text field-type-text field-label-hidden">
[title]
<p>
[body-summary]
</p>
</div>
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '80',
  );
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
    'success_stoires' => 'success_stoires',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'success-stories';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Success Stories';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-6';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['success_stories_landing'] = $view;

  $view = new view();
  $view->name = 'success_stories_sidebar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'success stories sidebar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Goal from Action Plan */
  $handler->display->display_options['fields']['field_goal_from_action_plan']['id'] = 'field_goal_from_action_plan';
  $handler->display->display_options['fields']['field_goal_from_action_plan']['table'] = 'field_data_field_goal_from_action_plan';
  $handler->display->display_options['fields']['field_goal_from_action_plan']['field'] = 'field_goal_from_action_plan';
  $handler->display->display_options['fields']['field_goal_from_action_plan']['label'] = '';
  $handler->display->display_options['fields']['field_goal_from_action_plan']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_goal_from_action_plan']['alter']['text'] = '<div class="sidebar-collapse" data-toggle="collapse" data-target="#c1">Goal from Action Plan</div>
<div id="c1" class="collapse">[field_goal_from_action_plan]</div>';
  $handler->display->display_options['fields']['field_goal_from_action_plan']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_goal_from_action_plan']['type'] = 'text_plain';
  /* Field: Content: About the Collaboration */
  $handler->display->display_options['fields']['field_about_the_collaboration_in']['id'] = 'field_about_the_collaboration_in';
  $handler->display->display_options['fields']['field_about_the_collaboration_in']['table'] = 'field_data_field_about_the_collaboration_in';
  $handler->display->display_options['fields']['field_about_the_collaboration_in']['field'] = 'field_about_the_collaboration_in';
  $handler->display->display_options['fields']['field_about_the_collaboration_in']['label'] = '';
  $handler->display->display_options['fields']['field_about_the_collaboration_in']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_about_the_collaboration_in']['alter']['text'] = '<div class="sidebar-collapse" data-toggle="collapse" data-target="#c2">About the Collaboration</div>
<div id="c2" class="collapse">[field_about_the_collaboration_in]</div>';
  $handler->display->display_options['fields']['field_about_the_collaboration_in']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_about_the_collaboration_in']['type'] = 'text_plain';
  /* Field: Content: Promising Practices */
  $handler->display->display_options['fields']['field_promising_practices']['id'] = 'field_promising_practices';
  $handler->display->display_options['fields']['field_promising_practices']['table'] = 'field_data_field_promising_practices';
  $handler->display->display_options['fields']['field_promising_practices']['field'] = 'field_promising_practices';
  $handler->display->display_options['fields']['field_promising_practices']['label'] = '';
  $handler->display->display_options['fields']['field_promising_practices']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_promising_practices']['alter']['text'] = '<div class="sidebar-collapse" data-toggle="collapse" data-target="#c3">Promising Practices</div>
<div id="c3" class="collapse">[field_promising_practices]</div>';
  $handler->display->display_options['fields']['field_promising_practices']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promising_practices']['type'] = 'text_plain';
  /* Field: Content: Lessons Learned */
  $handler->display->display_options['fields']['field_lessons_learned']['id'] = 'field_lessons_learned';
  $handler->display->display_options['fields']['field_lessons_learned']['table'] = 'field_data_field_lessons_learned';
  $handler->display->display_options['fields']['field_lessons_learned']['field'] = 'field_lessons_learned';
  $handler->display->display_options['fields']['field_lessons_learned']['label'] = '';
  $handler->display->display_options['fields']['field_lessons_learned']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lessons_learned']['alter']['text'] = '<div class="sidebar-collapse" data-toggle="collapse" data-target="#c4">Lessons Learned</div>
<div id="c4" class="collapse">[field_lessons_learned]</div>';
  $handler->display->display_options['fields']['field_lessons_learned']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lessons_learned']['type'] = 'text_plain';
  /* Field: Content: Accomplishments */
  $handler->display->display_options['fields']['field_accomplishments']['id'] = 'field_accomplishments';
  $handler->display->display_options['fields']['field_accomplishments']['table'] = 'field_data_field_accomplishments';
  $handler->display->display_options['fields']['field_accomplishments']['field'] = 'field_accomplishments';
  $handler->display->display_options['fields']['field_accomplishments']['label'] = '';
  $handler->display->display_options['fields']['field_accomplishments']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_accomplishments']['alter']['text'] = '<div class="sidebar-collapse" data-toggle="collapse" data-target="#c5">Accomplishments</div>
<div id="c5" class="collapse">[field_accomplishments]</div>';
  $handler->display->display_options['fields']['field_accomplishments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_accomplishments']['type'] = 'text_plain';
  /* Field: Content: Resource Center Resources */
  $handler->display->display_options['fields']['field_resource_center_resources']['id'] = 'field_resource_center_resources';
  $handler->display->display_options['fields']['field_resource_center_resources']['table'] = 'field_data_field_resource_center_resources';
  $handler->display->display_options['fields']['field_resource_center_resources']['field'] = 'field_resource_center_resources';
  $handler->display->display_options['fields']['field_resource_center_resources']['label'] = '';
  $handler->display->display_options['fields']['field_resource_center_resources']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_center_resources']['alter']['text'] = '<div class="sidebar-collapse" data-toggle="collapse" data-target="#c6">Resource Center Resources</div>
<div id="c6" class="collapse">[field_resource_center_resources]</div>';
  $handler->display->display_options['fields']['field_resource_center_resources']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_center_resources']['type'] = 'text_plain';
  /* Field: Content: Partners */
  $handler->display->display_options['fields']['field_partners']['id'] = 'field_partners';
  $handler->display->display_options['fields']['field_partners']['table'] = 'field_data_field_partners';
  $handler->display->display_options['fields']['field_partners']['field'] = 'field_partners';
  $handler->display->display_options['fields']['field_partners']['label'] = '';
  $handler->display->display_options['fields']['field_partners']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_partners']['alter']['text'] = '<div class="sidebar-collapse" data-toggle="collapse" data-target="#c7">Partners</div>
<div id="c7" class="collapse">[field_partners]</div>';
  $handler->display->display_options['fields']['field_partners']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partners']['type'] = 'text_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'success_stoires' => 'success_stoires',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['success_stories_sidebar'] = $view;

  return $export;
}
