<?php
/**
 * @file
 * Template file for the example display.
 *
 * Variables available:
 * 
 * $plugin: The pager plugin object. This contains the view.
 *
 * $plugin->view
 *   The view object for this navigation.
 *
 * $nav_title
 *   The formatted title for this view. In the case of block
 *   views, it will be a link to the full view, otherwise it will
 *   be the formatted name of the year, month, day, or week.
 *
 * $prev_url
 * $next_url
 *   Urls for the previous and next calendar pages. The links are
 *   composed in the template to make it easier to change the text,
 *   add images, etc.
 *
 * $prev_options
 * $next_options
 *   Query strings and other options for the links that need to
 *   be used in the l() function, including rel=nofollow.
 */
?>
<?php if (!empty($pager_prefix)) : ?>
<?php print $pager_prefix; ?>
<?php endif; ?>
<div class="date-nav-wrapper clearfix<?php if (!empty($extra_classes)): print $extra_classes; endif; ?>">
  <div class="date-nav item-list">
    <div class="date-heading">
      <h3><?php print $nav_title ?></h3>
    </div>
    <ul class="pager">
    <?php if (!empty($prev_url)) : ?>
      <li id="date-prev" class="date-prev">
        <?php
        $text = '<i class="icon-chevron-left"></i>';
        $text .= $mini ? '' : ' ' . t('Previous Month', array(), array('context' => 'date_nav'));
        print l(t($text), $prev_url, $prev_options);
        ?>
      </li>
    <?php endif; ?>
    <?php if (!empty($next_url)) : ?>
      <li id="date-next" class="date-next">
        <?php print l(($mini ? '' : t('Next Month', array(), array('context' => 'date_nav')) . ' ') . '<i class="icon-chevron-right"></i>', $next_url, $next_options); ?>
      </li>
    <?php endif; ?>
    </ul>
  </div>
</div>
<div class="view-footer" style=" width: 99.9%; ">
  <div class="integration-institute col-sm-2 col-md-2">Integration Institute</div>
  <div class="training col-sm-2 col-md-2">Training</div>
<!--  <div class="event col-sm-2 col-md-2">Event</div>-->
  <div class="webinar col-sm-2 col-md-2">Webinar</div>
  <div class="workshop col-sm-2 col-md-2">Workshop</div>
  <div class="conference col-sm-2 col-md-2">Conference</div>
  <div class="all-other col-sm-2 col-md-2">Other</div>
</div>
