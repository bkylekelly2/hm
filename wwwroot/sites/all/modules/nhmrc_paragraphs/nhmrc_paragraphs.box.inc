<?php
/**
 * @file
 * nhmrc_paragraphs.box.inc
 */

/**
 * Implements hook_default_box().
 */
function nhmrc_paragraphs_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'survey_btn_redesign';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Survey btn Redesign';
  $box->options = array(
    'body' => array(
      'value' => '<div class="survey_btn_redesign">
<a href="survey" target="_blank">
<div style="display: inline-block;">
<img class="img-responsive" alt="Click to Provide Feedback" src="sites/all/themes/bootstrap_nhmrc/images/survey-icon.png">
</div>
<span style="display: inline-block;position: absolute;">Take Our 2 Minute Survey</span>
</a>
</div>',
      'format' => 'pure_html',
    ),
    'additional_classes' => '',
  );
  $export['survey_btn_redesign'] = $box;

  return $export;
}
