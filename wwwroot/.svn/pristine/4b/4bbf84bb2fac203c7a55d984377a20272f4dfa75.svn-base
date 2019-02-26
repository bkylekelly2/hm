<?php
/**
 * @file 
 * Template to display the date box in a calendar.
 *
 * - $view: The view.
 * - $granularity: The type of calendar this box is in -- year, month, day, or week.
 * - $mini: Whether or not this is a mini calendar.
 * - $class: The class for this box -- mini-on, mini-off, or day.
 * - $day:  The day of the month.
 * - $date: The current date, in the form YYYY-MM-DD.
 * - $link: A formatted link to the calendar day view for this day.
 * - $url:  The url to the calendar day view for this day.
 * - $selected: Whether or not this day has any items.
 * - $items: An array of items for this day.
 */
$date      = isset($date) ? $date : '' ;
$data_date = empty($date) ? '' : ' data-date="' . $date . '" ';
$data_day  = $day ? ' data-day-of-month="' . $day . '" ' : '';
$date_day  = date('D', strtotime($date));
$date_mon  = date('M', strtotime($date));
$day       = empty($day) ? intval(date('d', strtotime($date))) : $day ;
$events    = isset($items[$date]) ? $items[$date] : array();
$the_tag   = $granularity == "year" ? "div" : "li" ;
?>
<<?php print $the_tag; ?> class="calendar-day"<?php print $data_date . $data_day; ?>>
  <?php if (! empty($selected)) : ?>
    <div class="date">
      <a href="<?php print $url; ?>">
        <span class="day"><?php print $date_day; ?>,</span> 
        <span class="month"><?php print $date_mon; ?></span> 
        <?php print $day; ?>
      </a>
    </div>
    <?php if (! empty($events) && strcasecmp($granularity, "year") !== 0) : ?>
      <ul class="todays-events">
        <?php foreach ($events as $time => $event) : ?>
          <li class="days-events event-<?php print date("hi", intval($time)); ?>">
            <?php if (! is_array($event)) $event = array($event); ?>
            <?php foreach ($event as $e) : ?>
              <?php # dump($e); ?>
              <span class="event-info">
                <span class="event-time"><?php print l($e->date_start->format("h:i A"), $e->url); ?></span>
                <?php if (isset($e->title) && !empty($e->title)): ?>
                  <span class="event-title"><?php print l($e->title, $e->url); ?></span>
                <?php endif; ?>
              </span>
            <?php endforeach; ?>
          </li>
        <?php endforeach; ?>
      </ul>
    <?php endif; ?>
  <?php else: ?>
    <div class="date"><span class="day"><?php print $date_day; ?>,</span> <span class="month"><?php print $date_mon; ?></span> <?php print $day; ?></div>
  <?php endif; ?>
</<?php print $the_tag; ?>>