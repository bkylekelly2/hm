<?php
/**
 * @file
 * nhmrc_media.box.inc
 */

/**
 * Implements hook_default_box().
 */
function nhmrc_media_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'media_gallery_bottom';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Media Gallery bottom';
  $box->options = array(
    'body' => array(
      'value' => '<div class="media-gallery-bottom">
	<div class="media-gallery-podcasts col-sm-4"><a href="/media-gallery/podcasts">
		<div class="media-gallery-header"><h1>PODCASTS</h1></div>
		<div class="media-gallery-body">Our engaging podcasts feature interviews with experts and practitioners who work at the intersection of safety net services and healthy marriage and relationship education.</div>
		<a href="" class="media-gallery-btn btn btn-accent2">LISTEN</a></a>
	</div>
	<div class="media-gallery-videos col-sm-4"><a href="/media-gallery/videos">
		<div class="media-gallery-header"><h1>VIDEOS</h1></div>
		<div class="media-gallery-body">The Resource Center’s original videos present key principles of healthy marriage and relationship education, and strategies for delivering relationship education to diverse groups of stakeholders.</div>
		<a href="" class="media-gallery-btn btn btn-accent2">WATCH</a></a>
	</div>
	<div class="media-gallery-webinars col-sm-4"><a href="/media-gallery/webinars">
		<div class="media-gallery-header"><h1>WEBINARS</h1></div>
		<div class="media-gallery-body">Our webinars feature experts from the field who connect you with new research, best practices, and innovative service integration strategies related to healthy marriage and relationship education.</div>
		<a href="" class="media-gallery-btn btn btn-accent2">LEARN</a></a>
	</div>
</div>',
      'format' => 'pure_html',
    ),
    'additional_classes' => '',
  );
  $export['media_gallery_bottom'] = $box;

  return $export;
}
