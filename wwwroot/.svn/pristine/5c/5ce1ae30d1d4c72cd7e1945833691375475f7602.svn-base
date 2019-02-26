<?php
/**
 * @file
 * Template to display a view as a calendar month.
 * 
 * @see template_preprocess_calendar_month.
 *
 * $day_names: An array of the day of week names for the table header.
 * $rows: An array of data for each day of the week.
 * $view: The view.
 * $calendar_links: Array of formatted links to other calendar displays - year, month, week, day.
 * $display_type: year, month, day, or week.
 * $block: Whether or not this calendar is in a block.
 * $min_date_formatted: The minimum date for this calendar in the format YYYY-MM-DD HH:MM:SS.
 * $max_date_formatted: The maximum date for this calendar in the format YYYY-MM-DD HH:MM:SS.
 * $date_id: a css id that is unique for this date, 
 *   it is in the form: calendar-nid-field_name-delta
 * 
 */
?>
<div class="responsive-calendar">
  <ul class="weekdays">
    <?php foreach ($day_names as $id => $cell): ?>
      <li><?php print $cell['data']; ?></li>
    <?php endforeach; ?>
  </ul>
  <ul class="days">
    <?php 
      foreach ((array) $rows as $row) {
        print $row['data'];
      } 
    ?>
  </ul>
  <div class="clearfix"></div>
</div>
<div class="clearfix"></div>
<script>
  ;(function($) {
    try {
      $(".calendar-day").equalHeights(100,120);
    }
    catch(ex) {/* Exit gracefully*/}
  })(jQuery);
</script>