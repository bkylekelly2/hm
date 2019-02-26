<?php
/**
 * @file
 * nmhrc_event.box.inc
 */

/**
 * Implements hook_default_box().
 */
function nmhrc_event_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'event_discalimer_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Disclaimer displayed on the create event page';
  $box->options = array(
    'body' => array(
      'value' => '<p>Disclaimer: This listing is not comprehensive; rather, it is a subset of events. This list does not reflect our endorsement of the event’s organizations, their products, or services. The National Resource Center for Healthy Marriage and Families has no control over the content of these events and cannot guarantee the appropriateness of them.</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['event_discalimer_box'] = $box;

  return $export;
}
