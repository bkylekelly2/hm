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
$formatted_date = date_format(date_create($date),"l, F jS, Y");
?>
<<?php print $the_tag; ?> class="calendar-day"<?php print $data_date . $data_day; ?>>
  <?php if (! empty($selected)) : ?>
    <div class="date">
<!--      <a href="--><?php ////print $url; ?><!--">-->
        <span class="day"><?php print $date_day; ?>,</span> 
        <span class="month"><?php print $date_mon; ?></span> 
        <?php print $day; ?>
<!--      </a>-->
    </div>
    <?php if (! empty($events) && strcasecmp($granularity, "year") !== 0) : ?>
      <ul class="todays-events">
        <?php foreach ($events as $time => $event) : ?>
          <li class="days-events event-<?php print date("hi", intval($time)); ?>">
            <?php if (! is_array($event)) $event = array($event); ?>
            <?php foreach ($event as $e) : ?>
              <?php # dump($e); ?>
              <span class="event-info">
                <span class="event-category">
                  <?php
                  switch ($e->rendered_fields['field_category_of_event']) {
                    case "Integration Institute":
                      echo "<div class='integration-institute'></div>";
                      break;
                    case "training":
                      echo "<div class='training'></div>";
                      break;
                    case "event":
                      echo "<div class='event'></div>";
                      break;
                    case "webinar":
                      echo "<div class='webinar'></div>";
                      break;
                    case "workshop":
                      echo "<div class='workshop'></div>";
                      break;
                    case "conference":
                      echo "<div class='conference'></div>";
                      break;
                    default:
                      echo "<div class='all-other'></div>";
                  }
                  ?>
                </span>
                <span class="event-time"><?php if($e->calendar_all_day==1){print l("All-day ", $e->url);}else{print l($e->date_start->format("h:i A"), $e->url);} ?>
                  </span>
                <?php if (isset($e->title) && !empty($e->title)): ?>
                  <span class="event-title"><?php print l($e->title, $e->url); ?></span>
                  <span class="calendar-popover <?php
                  switch ($e->rendered_fields['field_category_of_event']) {
                    case "Integration Institute":
                      echo "integration-institute";
                      break;
                    case "training":
                      echo "training";
                      break;
                    case "event":
                      echo "event";
                      break;
                    case "webinar":
                      echo "webinar";
                      break;
                    case "workshop":
                      echo "workshop";
                      break;
                    case "conference":
                      echo "conference";
                      break;
                    default:
                      echo "all-other";
                  }
                  ?> "><button type="button" rel="popover" name="zhao" tabindex="0" class="calendar-tooltip glyphicon glyphicon-exclamation-sign" data-toggle="popover" data-placement="top" data-html="true" data-content="<?php echo $formatted_date; ?> <br> <?php if($e->calendar_all_day==1){print("All-day Event. ");}else{print($e->date_start->format("g:i A.").' to '.$e->date_end->format("g:i A."));} ?> " title="" data-original-title="<?php print($e->title); ?>"><span class="element-invisible">Preview <?php print($e->title); ?> details</span></button></span>
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