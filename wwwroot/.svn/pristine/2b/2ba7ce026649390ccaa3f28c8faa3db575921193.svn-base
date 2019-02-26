<?php
/**
 * @file
 * nhmrc_sc_facets.box.inc
 */

/**
 * Implements hook_default_box().
 */
function nhmrc_sc_facets_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'healthy_dating_widget';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Healthy Dating Resource Node Right-hand Widget';
  $box->options = array(
    'body' => array(
      'value' => '<p><img alt="Healthy Dating Leads to Healthy Marriage" class="img-responsive" src="/sites/all/themes/bootstrap_nhmrc/images/twitter-healthy-dating-widget.png"><a href="https://twitter.com/MarriageResCtr" target="_blank" title="Link to National Resource Center for Healthy Marriages and Families Twitter page">Join Us on Twitter For More</a></p>',
      'format' => 'custom_formatting',
    ),
    'additional_classes' => 'col-sm-4',
  );
  $export['healthy_dating_widget'] = $box;

  return $export;
}
