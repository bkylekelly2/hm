<?php

/**
 * @file
 * Views style plugin for the Calendar module.
 *
 * The style plugin is responsible for setting global values needed by
 * the row plugin. It then gathers up an array of view results (as restructured
 * by the row plugin) and organizes them into year/month/day/time
 * arrays that the theme can use to display the results in a calendar.
 */

/**
 * Default style plugin to render an iCal feed.
 */
class calendar_plus_plugin_style extends views_plugin_style {

  var $date_info;
  var $items;
  var $curday;

  function init(&$view, &$display, $options = NULL) {
    parent::init($view, $display, $options);
    if (empty($view->date_info)) {
      $this->date_info = new stdClass();
    }
    $this->date_info = &$this->view->date_info;
    
  }

  /**
   * Add custom option definitions.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['calendar_type'] = array('default' => 'month');
    $options['name_size'] = array('default' => 3);
    $options['mini'] = array('default' => 0);
    $options['with_weekno'] = array('default' => 0);
    $options['multiday_theme'] = array('default' => 1);
    $options['theme_style'] = array('default' => 1);
    $options['max_items'] = array('default' => 0);
    $options['max_items_behavior'] = array('default' => 'more');
    $options['groupby_times'] = array('default' => 'hour');
    $options['groupby_times_custom'] = array('default' => '');
    $options['groupby_field'] = array('default' => '');
    $options['multiday_hidden'] = array('default' => array());
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['calendar_type'] = array(
      '#title' => t('Calendar type'),
      '#type' => 'select',
      '#description' => t('Select the calendar time period for this display.'),
      '#default_value' => $this->options['calendar_type'],
      '#options' => calendar_display_types(),
      );
    $form['mini'] = array(
      '#title' => t('Display as mini calendar'),
      '#default_value' => $this->options['mini'],
      '#type' => 'radios',
      '#options' => array(0 => t('No'), 1 => t('Yes')),
      '#description' => t('Display the mini style calendar, with no item details. Suitable for a calendar displayed in a block.'),
      '#dependency' => array('edit-style-options-calendar-type' => array('month')),
      );
    $form['name_size'] = array(
      '#title' => t('Calendar day of week names'),
      '#default_value' => $this->options['name_size'],
      '#type' => 'radios',
      '#options' => array(1 => t('First letter of name'), 2 => t('First two letters of name'), 3 => t('Abbreviated name'), 99 => t('Full name')),
      '#description' => t('The way day of week names should be displayed in a calendar.'),
      '#dependency' => array('edit-style-options-calendar-type' => array('month', 'week', 'year')),
      );
    $form['with_weekno'] = array(
      '#title' => t('Show week numbers'),
      '#default_value' => $this->options['with_weekno'],
      '#type' => 'radios',
      '#options' => array(0 => t('No'), 1 => t('Yes')),
      '#description' => t('Whether or not to show week numbers in the left column of calendar weeks and months.'),
      '#dependency' => array('edit-style-options-calendar-type' => array('month')),
      );
    $form['max_items'] = array(
      '#title' => t('Maximum items'),
      '#type' => 'select',
      '#options' => array(0 => t('Unlimited'), 1 => t('1 item'), 3 => t('3 items'), 5 => t('5 items'), 10 => t('10 items')),
      '#default_value' => $this->options['calendar_type'] != 'day' ? $this->options['max_items'] : 0,
      '#description' => t('Maximum number of items to show in calendar cells, used to keep the calendar from expanding to a huge size when there are lots of items in one day.'),
      '#dependency' => array('edit-style-options-calendar-type' => array('month')),
      );
    $form['max_items_behavior'] = array(
      '#title' => t('Too many items'),
      '#type' => 'select',
      '#options' => array('more' => t("Show maximum, add 'more' link"), 'hide' => t('Hide all, add link to day')),
      '#default_value' => $this->options['calendar_type'] != 'day' ? $this->options['max_items_behavior'] : 'more',
      '#description' => t('Behavior when there are more than the above number of items in a single day. When there more items than this limit, a link to the day view will be displayed.'),
      '#dependency' => array('edit-style-options-calendar-type' => array('month')),
      );
    $form['groupby_times'] = array(
      '#title' => t('Time grouping'),
      '#type' => 'select',
      '#default_value' => $this->options['groupby_times'],
      '#description' => t("Group items together into time periods based on their start time."),
      '#options' => array('' => t('None'), 'hour' => t('Hour'), 'half' => t('Half hour'), 'custom' => t('Custom')),
      '#dependency' => array('edit-style-options-calendar-type' => array('day', 'week')),
      );
    $form['groupby_times_custom'] = array(
      '#title' => t('Custom time grouping'),
      '#type' => 'textarea',
      '#default_value' => $this->options['groupby_times_custom'],
      '#description' => t("When choosing the 'custom' Time grouping option above, create custom time period groupings as a comma-separated list of 24-hour times in the format HH:MM:SS, like '00:00:00,08:00:00,18:00:00'. Be sure to start with '00:00:00'. All items after the last time will go in the final group."),
      '#dependency' => array('edit-style-options-groupby-times' => array('custom')),
      );
    $form['theme_style'] = array(
      '#title' => t('Overlapping time style'),
      '#default_value' => $this->options['theme_style'],
      '#type' => 'select',
      '#options' => array(0 => t('Do not display overlapping items'), 1 => t('Display overlapping items, with scrolling'), 2 => t('Display overlapping items, no scrolling')),
      '#description' => t('Select whether calendar items are displayed as overlapping items. Use scrolling to shrink the window and focus on the selected items, or omit scrolling to display the whole day. This only works if hour or half hour time grouping is chosen!'),
      '#dependency' => array('edit-style-options-calendar-type' => array('day', 'week')),
      );

    // Create a list of fields that are available for grouping,
    $field_options = array();
    $fields = $this->display->handler->get_option('fields');
    foreach ($fields as $field_name => $field) {
      $field_options[$field_name] = $field['field'];
    }
    $form['groupby_field'] = array(
      '#title' => t('Field grouping'),
      '#type' => 'select',
      '#default_value' => $this->options['groupby_field'],
      '#description' => t("Optionally group items into columns by a field value, for instance select the content type to show items for each content type in their own column, or use a location field to organize items into columns by location. NOTE! This is incompatible with the overlapping style option."),
      '#options' => array('' => '') + $field_options,
      '#dependency' => array('edit-style-options-calendar-type' => array('day')),
      );
    $form['multiday_theme'] = array(
      '#title' => t('Multi-day style'),
      '#default_value' => $this->options['multiday_theme'],
      '#type' => 'select',
      '#options' => array(0 => t('Display multi-day item as a single column'), 1 => t('Display multi-day item as a multiple column row')),
      '#description' => t('If selected, items which span multiple days will displayed as a multi-column row.  If not selected, items will be displayed as an individual column.'),
      '#dependency' => array('edit-style-options-calendar-type' => array('month', 'week')),
      );
    $form['multiday_hidden'] = array(
      '#title' => t('Fields to hide in Multi-day rows'),
      '#default_value' => $this->options['multiday_hidden'],
      '#type' => 'checkboxes',
      '#options' => $field_options,
      '#description' => t('Choose fields to hide when displayed in multi-day rows. Usually you only want to see the title or Colorbox selector in multi-day rows and would hide all other fields.'),
      '#dependency' => array('edit-style-options-calendar-type' => array('month', 'week', 'day')),
      );
  }

  function options_validate(&$form, &$form_state) {
    $values = $form_state['values']['style_options'];
    if ($values['groupby_times'] == 'custom' && empty($values['groupby_times_custom'])) {
      form_set_error('style_options][groupby_times_custom', t('Custom groupby times cannot be empty.'));
    }
    if (!empty($values['theme_style']) && (empty($values['groupby_times']) || !in_array($values['groupby_times'], array('hour', 'half')))) {
      form_set_error('style_options][theme_style', t('Overlapping items only work with hour or half hour groupby times.'));
    }
    if (!empty($values['theme_style']) && !empty($values['groupby_field'])) {
      form_set_error('style_options][theme_style', t('You cannot use overlapping items and also try to group by a field value.'));
    }
    if ($values['groupby_times'] != 'custom') {
      form_set_value($form['groupby_times_custom'], NULL, $form_state);
    }

  }

  function options_submit(&$form, &$form_state, &$options = array()) {
    $form_state['values']['style_options']['multiday_hidden'] = array_filter($form_state['values']['style_options']['multiday_hidden']);
  }

  /**
   * Helper function to find the date argument handler for this view.
   */
  function date_argument_handler() {
    $i = 0;
    foreach ($this->view->argument as $name => $handler) {
      if (date_views_handler_is_date($handler, 'argument')) {
        $this->date_info->date_arg_pos = $i;
        return $handler;
      }
      $i++;
    }
    return FALSE;
  }

  /**
   * Inspect argument and view information to see which calendar
   * period we should show. The argument tells us what to use
   * if there is no value, the view args tell us what to use
   * if there are values.
   */
  function granularity() {

    if (!$handler = $this->date_argument_handler()) {
      return 'month';
    }
    $default_granularity = !empty($handler) && !empty($handler->granularity) ? $handler->granularity : 'month';
    $wildcard = !empty($handler) ? $handler->options['exception']['value'] : '';
    $argument = $handler->argument;

    // TODO Anything else we need to do for 'all' arguments?
    if ($argument == $wildcard) {
      $this->view_granularity = $default_granularity;
    }
    elseif (!empty($argument)) {
      module_load_include('inc', 'date_api', 'date_api_sql');

      $date_handler = new date_sql_handler();
      $this->view_granularity = $date_handler->arg_granularity($argument);
    }
    else {
      $this->view_granularity = $default_granularity;
    }
    return $this->view_granularity;
  }

  function has_calendar_row_plugin() {
    return $this->row_plugin instanceof calendar_plus_plugin_row || $this->row_plugin instanceof calendar_plus_plugin_row;
  }

  function render() {

    if (empty($this->row_plugin) || !$this->has_calendar_row_plugin()) {
      debug('calendar_plus_plugin_style: The calendar row plugin is required when using the calendar style, but it is missing.');
      return;
    }
    if (!$argument = $this->date_argument_handler()) {
      debug('calendar_plus_plugin_style: A date argument is required when using the calendar style, but it is missing or is not using the default date.');
      return;
    }

    // There are date arguments that have not been added by Date Views.
    // They will be missing the information we would need to render the field.
    if (empty($argument->min_date)) {
      return;
    }

    // Add information from the date argument to the view.
    $this->date_info->granularity = $this->granularity();
    $this->date_info->calendar_type = $this->options['calendar_type'];
    $this->date_info->date_arg = $argument->argument;
    $this->date_info->year = date_format($argument->min_date, 'Y');
    $this->date_info->month = date_format($argument->min_date, 'n');;
    $this->date_info->day = date_format($argument->min_date, 'j');
    $this->date_info->week = date_week(date_format($argument->min_date, DATE_FORMAT_DATE));
    $this->date_info->date_range = $argument->date_range;
    $this->date_info->min_date = $argument->min_date;
    $this->date_info->max_date = $argument->max_date;
    $this->date_info->limit = $argument->limit;
    $this->date_info->url = $this->view->get_url();
    $this->date_info->min_date_date = date_format($this->date_info->min_date, DATE_FORMAT_DATE);
    $this->date_info->max_date_date = date_format($this->date_info->max_date, DATE_FORMAT_DATE);
    $this->date_info->forbid = isset($argument->forbid) ? $argument->forbid : FALSE;

    // Add calendar style information to the view.
    $this->date_info->calendar_popup = $this->display->handler->get_option('calendar_popup');
    $this->date_info->style_name_size = $this->options['name_size'];
    $this->date_info->mini = $this->options['mini'];
    $this->date_info->style_with_weekno = $this->options['with_weekno'];
    $this->date_info->style_multiday_theme = $this->options['multiday_theme'];
    $this->date_info->style_theme_style = $this->options['theme_style'];
    $this->date_info->style_max_items = $this->options['max_items'];
    $this->date_info->style_max_items_behavior = $this->options['max_items_behavior'];
    if (!empty($this->options['groupby_times_custom'])) {
      $this->date_info->style_groupby_times = explode(',', $this->options['groupby_times_custom']);
    }
    else {
      $this->date_info->style_groupby_times = calendar_groupby_times($this->options['groupby_times']);
    }
    $this->date_info->style_groupby_field = $this->options['groupby_field'];

    // TODO make this an option setting.
    $this->date_info->style_show_empty_times = !empty($this->options['groupby_times_custom']) ? TRUE : FALSE;

    // Set up parameters for the current view that can be used by the row plugin.
    $display_timezone = date_timezone_get($this->date_info->min_date);
    $this->date_info->display_timezone = $display_timezone;
    $this->date_info->display_timezone_name = timezone_name_get($display_timezone);
    $date = clone($this->date_info->min_date);
    date_timezone_set($date, $display_timezone);
    $this->date_info->min_zone_string = date_format($date, DATE_FORMAT_DATE);
    $date = clone($this->date_info->max_date);
    date_timezone_set($date, $display_timezone);
    $this->date_info->max_zone_string = date_format($date, DATE_FORMAT_DATE);

    // Let views render fields the way it thinks they should look before we start massaging them.
    $this->render_fields($this->view->result);

    // Invoke the row plugin to massage each result row into calendar items.
    // Gather the row items into an array grouped by date and time.
    $items = array();
    foreach ($this->view->result as $row_index => $row) {
      $this->view->row_index = $row_index;
      $rows = $this->row_plugin->render($row);
      foreach ($rows as $key => $item) {
        $item->granularity = $this->date_info->granularity;
        $item_start = date_format($item->calendar_start_date, DATE_FORMAT_DATE);
        $time_start = date_format($item->calendar_start_date, 'H:i:s');
        $item->rendered_fields = $this->rendered_fields[$row_index];
        $items[$item_start][$time_start][] = $item;
      }
    }

    ksort($items);

    $rows = array();
    $this->curday = clone($this->date_info->min_date);
    $this->items = $items;

    // Retrieve the results array using a the right method for the granularity of the display.
    switch ($this->options['calendar_type']) {
      case 'year':
        $rows = array();
        $this->view->date_info->mini = TRUE;
        for ($i = 1; $i <= 12; $i++) {
          $rows[$i] = $this->calendar_build_mini_month();
        }
        $this->view->date_info->mini = FALSE;
        break;
      case 'month':
        $rows = !empty($this->date_info->mini) ? $this->calendar_build_mini_month() : $this->calendar_build_month();
        break;
      case 'day':
        $rows = $this->calendar_build_day();
        break;
      case 'week':
        $rows = $this->calendar_build_week();
        // Merge the day names in as the first row.
        $rows = array_merge(array(calendar_week_header($this->view)), $rows);
        break;
    }

    // Send the sorted rows to the right theme for this type of calendar.
    $this->definition['theme'] = 'calendar_' . $this->options['calendar_type'];

    // Adjust the theme to match the currently selected default.
    // Only the month view needs the special 'mini' class,
    // which is used to retrieve a different, more compact, theme.
    if ($this->options['calendar_type'] == 'month' && !empty($this->view->date_info->mini)) {
      $this->definition['theme'] = 'calendar_mini';
    }
    // If the overlap option was selected, choose the overlap version of the theme.
    elseif (in_array($this->options['calendar_type'], array('week', 'day')) && !empty($this->options['multiday_theme']) && !empty($this->options['theme_style'])) {
      $this->definition['theme'] .= '_overlap';
    }
    
    // slewis: By the time the code execution gets to this point,
    // all of the calendar cells have been themed with HTML.

    $output = theme($this->theme_functions(),
      array(
        'view' => $this->view,
        'options' => $this->options,
        'rows' => $rows
      ));
    unset($this->view->row_index);
    return $output;
  }

  /**
   * Build one month.
   */
  function calendar_build_month() {
    
    $rows            = array();
    $translated_days = date_week_days_ordered(date_week_days(TRUE));
    $month           = date_format($this->curday, 'n');
    $curday_date     = date_format($this->curday, DATE_FORMAT_DATE);
    $weekdays        = calendar_untranslated_days($this->items, $this->view);
    
    date_modify($this->curday, '-' . strval(date_format($this->curday, 'j')-1) . ' days');
    
    do {
      $init_day          = clone($this->curday);
      $today             = date_format(date_now(date_default_timezone()), DATE_FORMAT_DATE);
      $month             = date_format($this->curday, 'n');
      $first_day         = variable_get('date_first_day', 0);
      
      // slewis: The $multiday_buckets items have to be rendered here.
      // It's the only possibility.
      
      $week_rows         = $this->calendar_build_week(TRUE);
      
      $multiday_buckets  = array();
      $singleday_buckets = $week_rows['singleday_buckets'];
      $total_rows        = 1;
      
      // slewis: at this point, $multiday_buckets cells have already been rendered. But where & when?

      // Theme each row
      $output = "";
      $final_day = clone($this->curday);

      $iehint = 0;
      
      for ($i = 0; $i < intval($total_rows); $i++) {
        $inner = "";

        $this->curday = clone($init_day);

        // move backwards to the first day of the week
        $day_wday = date_format($this->curday, 'w');
        date_modify($this->curday, '-' . strval((7 + $day_wday - $first_day) % 7) . ' days');

        for ($wday = 0; $wday < 7; $wday++) {

          $curday_date = date_format($this->curday, DATE_FORMAT_DATE);
          $item        = NULL;
          $in_month    = !($curday_date < $this->date_info->min_date_date || $curday_date > $this->date_info->max_date_date || date_format($this->curday, 'n') != $month);

          $variables = array(
            'date'     => $curday_date,
            'view'     => $this->view,
            'items'    => $this->items,
            'selected' => $in_month ? count($multiday_buckets[$wday]) + count($singleday_buckets[$wday]) : FALSE,
          );
          
          $item = array(
            'entry' => theme('calendar_datebox', $variables),
            'colspan' => 1,
            'rowspan' => 1,
            'class' => 'date-box',
            'date' => $curday_date,
            'id' => $this->view->name . '-' . $curday_date . '-date-box',
            'header_id' => isset($translated_days[$wday]) ? $translated_days[$wday] : null,
            'day_of_month' => $this->curday->format('j'),
          );
          $item['class'] .= ($curday_date == $today && $in_month ? ' today' : '') .
            ($curday_date < $today ? ' past' : '') .
            ($curday_date > $today ? ' future' : '');

          // If there isn't an item, then add empty class
          if ($item != NULL) {
            if (!$in_month) {
              $item['class'] .= ' empty';
            }
            // Style this entry - it will be a <td>.
            // slewis: this is the actual call to theme the item
            $inner .= theme('calendar_month_col', array('item' => $item));
          }

          date_modify($this->curday, '+1 day');
        }

        if ($i == 0) {
          $output .= theme('calendar_month_row', array(
            'inner'  => $inner,
            'class'  => 'date-box',
            'iehint' => $iehint,
          ));
        }
        elseif ($i == $total_rows) {
          $output .= theme('calendar_month_row', array(
            'inner'  => $inner,
            'class'  => 'single-day',
            'iehint' => $iehint,
          ));
          $iehint = 0;
          $max_singlerow_cnt = 0;
          $max_multirow_cnt = 0;
        }
        else {
          // Style all the columns into a row
          $output .= theme('calendar_month_row', array(
            'inner'  => $inner,
            'class'  => 'multi-day',
            'iehint' => 0,
          ));
        }

      } // End foreach

      $this->curday = $final_day;

      // Add the row into the row array....
      $rows[] = array('data' => $output);

      $curday_date  = date_format($this->curday, DATE_FORMAT_DATE);
      $curday_month = date_format($this->curday, 'n');
    } while ($curday_month == $month && $curday_date <= $this->date_info->max_date_date);

    // Merge the day names in as the first row.
    $rows = array_merge(array(calendar_week_header($this->view)), $rows);
    return $rows;
  }

  /**
   * Build one week row.
   */
  function calendar_build_week($check_month = FALSE) {
    
    $curday_date = date_format($this->curday, DATE_FORMAT_DATE);
    $weekdays    = calendar_untranslated_days($this->items, $this->view);
    $month       = date_format($this->curday, 'n');
    $first_day   = variable_get('date_first_day', 0);

    // Set up buckets
    $total_rows        = 0;
    $multiday_buckets  = array(array(), array(), array(), array(), array(), array(), array());
    $singleday_buckets = array(array(), array(), array(), array(), array(), array(), array());

    // move backwards to the first day of the week
    $day_wday = date_format($this->curday, 'w');
    date_modify($this->curday, '-' . strval((7 + $day_wday - $first_day) % 7) . ' days');
    $curday_date = date_format($this->curday, DATE_FORMAT_DATE);

    for ($i = 0; $i < 7; $i++) {
      
      if ($check_month && ($curday_date < $this->date_info->min_date_date || $curday_date > $this->date_info->max_date_date || date_format($this->curday, 'n') != $month)) {
        $singleday_buckets[$i][][] = "";
      }
      else {
        // slewis: This is where the multi-day events for the Week view are added
        $this->calendar_build_week_day($i, $multiday_buckets, $singleday_buckets);
      }
      $total_rows = max(count($multiday_buckets[$i]) + 1, $total_rows);
      date_modify($this->curday, '+1 day');
      $curday_date = date_format($this->curday, DATE_FORMAT_DATE);
    }

    // slewis: at this point, the $singleday_buckets contain the multiday items
    // sorted by time. In the next step of the code, try to render the items in 
    // the appropriate date cell and skip rendering the multiday rows.
    $rows = array(
      'multiday_buckets'  => $multiday_buckets,
      'singleday_buckets' => $singleday_buckets,
      'total_rows' => 1, // $total_rows,
    );
    return $rows;
  }

  /**
   * Build the contents of a single day for the $rows results.
   */
  function calendar_build_week_day($wday, &$multiday_buckets, &$singleday_buckets) {
 
    $curday_date    = date_format($this->curday, DATE_FORMAT_DATE);
    $max_events     = $this->date_info->calendar_type == 'month' && !empty($this->date_info->style_max_items) ? $this->date_info->style_max_items : 0;
    $hide           = !empty($this->date_info->style_max_items_behavior) ? ($this->date_info->style_max_items_behavior == 'hide') : FALSE;
    $multiday_theme = !empty($this->date_info->style_multiday_theme) && $this->date_info->style_multiday_theme == '1';
    $cur_cnt        = 0;
    $total_cnt      = 0;
    $ids            = array();

    // If we are hiding, count before processing further
    if ($max_events != CALENDAR_SHOW_ALL) {
      foreach ($this->items as $date => $day) {
        if ($date == $curday_date) {
          foreach ($day as $time => $hour) {
            foreach ($hour as $key => $item) {
              $total_cnt++;
              $ids[] = $item->date_id;
            }
          }
        }
      }
    }

    // If we haven't already exceeded the max or we'll showing all, then process the items
    if ($max_events == CALENDAR_SHOW_ALL || !$hide || $total_cnt < $max_events) {
      // Count currently filled items
      foreach ($multiday_buckets[$wday] as $bucket) {
        if (!$bucket['avail']) {
          $cur_cnt++;
        }
      }
      foreach ($this->items as $date => $day) {
        if ($date == $curday_date) {
          ksort($day);
          foreach ($day as $time => $hour) {
            foreach ($hour as $key => $item) {
              $all_day = $item->calendar_all_day;

              // Parse out date part
              $start_ydate  = date_format($item->date_start, DATE_FORMAT_DATE);
              $end_ydate    = date_format($item->date_end, DATE_FORMAT_DATE);
              $cur_ydate    = date_format($this->curday, DATE_FORMAT_DATE);

              $is_multi_day = ($start_ydate < $cur_ydate || $end_ydate > $cur_ydate);

              // slewis: Here is where the multi-day items are built
              
              // Does this event span multi-days?
              if ($multiday_theme && ($is_multi_day || $all_day)) {

                // Remove multiday items from the total count. We can't hide them or they will break.
                $total_cnt--;

                // If this the first day of the week, or is the start date of the multi-day event,
                // then record this item, otherwise skip over
                $day_no = date_format($this->curday, 'd');
                if ($wday == 0 || $start_ydate == $cur_ydate || ($this->date_info->granularity == 'month' && $day_no == 1) || ($all_day && !$is_multi_day)) {
                  // Calculate the colspan for this event

                  // If the last day of this event exceeds the end of the current month or week,
                  // truncate the remaining days
                  
                  $diff           =  $this->curday->difference($this->date_info->max_date, 'days');
                  
                  // The bucket_cnt defines the colspan.  colspan = bucket_cnt + 1
                  
                  $bucket_cnt     = 1; 

                  // See if there is an available slot to add an event.  This will allow
                  // an event to precede a row filled up by a previous day event

                  $bucket_index = count($multiday_buckets[$wday]);
                  for ($i = 0; $i < $bucket_index; $i++) {
                    if ($multiday_buckets[$wday][$i]['avail']) {
                      $bucket_index = $i;
                      break;
                    }
                  }

                  // Assign the item to the available bucket

                  $multiday_buckets[$wday][$bucket_index] = array(
                    'colspan' => 1,
                    'rowspan' => 1,
                    'filled'  => TRUE,
                    'avail'   => FALSE,
                    'all_day' => $all_day,
                    'item'    => $item,
                    'wday'    => $wday,
                    'entry'   => NULL,
                    // slewis: this is where the multi-day item is rendered and added to the $multiday_buckets array
                    'entry'   => theme('calendar_item', array('view' => $this->view, 'rendered_fields' => $item->rendered_fields, 'item' => $item)),
                  );
                }
              }
              elseif ($max_events == CALENDAR_SHOW_ALL || $cur_cnt < $max_events) {
                // Nothing to do here
              }

              $singleday_buckets[$wday][$time][] = array(
                // slewis: singleday/allday event is themed here
                'entry' => theme('calendar_item', array('view' => $this->view, 'rendered_fields' => $item->rendered_fields, 'item' => $item)),
                'item' => $item,
                'colspan' => 1,
                'rowspan' => 1,
                'filled' => TRUE,
                'avail' => FALSE,
                'wday' => $wday,
              );
              
            }
          }
        }
      }
    }

    // Add a more link if necessary
    if ($max_events != CALENDAR_SHOW_ALL && $total_cnt > 0 && $cur_cnt < $total_cnt) {
      $entry = theme('calendar_' . $this->date_info->calendar_type . '_multiple_entity', array(
          'curday' => $curday_date,
          'count' => $total_cnt,
          'view' => $this->view,
          'ids' => $ids,
      ));
      if (!empty($entry)) {
        $singleday_buckets[$wday][][] = array(
          'entry' => $entry,
          'more_link' => TRUE,
          'item' => NULL
        );
      }
    }
  }

  /**
   * Build the contents of a single day for the $rows results.
   */
  function calendar_build_day() {
    $curday_date = date_format($this->curday, DATE_FORMAT_DATE);
    $selected    = FALSE;
    $max_events  = !empty($this->date_info->style_max_items) ? $this->date_info->style_max_items : 0;
    $ids         = array();
    $inner       = array();
    $all_day     = array();
    $empty       = '';
    $link        = '';
    $count       = 0;
    
    foreach ($this->items as $date => $day) {
      if ($date == $curday_date) {
        $count = 0;
        $selected = TRUE;
        ksort($day);
        foreach ($day as $time => $hour) {
          foreach ($hour as $key => $item) {
            $count++;
            if (isset($item->type)) {
              $ids[$item->type] = $item;
            }
            if (empty($this->date_info->mini) && ($max_events == CALENDAR_SHOW_ALL || $count <= $max_events || ($count > 0 && $max_events == CALENDAR_HIDE_ALL))) {
              if ($item->calendar_all_day) {
                $item->is_multi_day = TRUE;
                $all_day[] = $item;
              }
              else {
                $key = date_format($item->calendar_start_date, 'H:i:s');
                $inner[$key][] = $item;
              }
            }
          }
        }
      }
    }
    ksort($inner);

    if (empty($inner) && empty($all_day)) {
      $empty = ""; // theme('calendar_plus_empty_day', array('curday' => $curday_date, 'view' => $this->view));
    }
    // We have hidden events on this day, use the theme('calendar_multiple_') to show a link.
    if ($max_events != CALENDAR_SHOW_ALL && $count > 0 && $count > $max_events && $this->date_info->calendar_type != 'day' && !$this->date_info->mini) {
      if ($this->date_info->style_max_items_behavior == 'hide' || $max_events == CALENDAR_HIDE_ALL) {
        $all_day = array();
        $inner = array();
      }
      $link = theme('calendar_' . $this->date_info->calendar_type . '_multiple_node', array(
        'curday' => $curday_date,
        'count' => $count,
        'view' => $this->view,
        'ids' => $ids,
      ));
    }

    $content = array(
      'date' => $curday_date,
      'datebox' => theme('calendar_datebox', array(
         'date' => $curday_date,
         'view' => $this->view,
         'items' => $this->items,
         'selected' => $selected,
      )),
      'empty' => $empty,
      'link' => $link,
      'all_day' => $all_day,
      'items' => $inner,
    );
    return $content;
  }

  /**
   * Build one mini month.
   */
  function calendar_build_mini_month() {
    $month = date_format($this->curday, 'n');
    date_modify($this->curday, '-' . strval(date_format($this->curday, 'j')-1) . ' days');
    $rows = array();
    do {
      $rows = array_merge($rows, $this->calendar_build_mini_week());
      $curday_date = date_format($this->curday, DATE_FORMAT_DATE);
      $curday_month = date_format($this->curday, 'n');
    } while ($curday_month == $month && $curday_date <= $this->date_info->max_date_date);
    // Merge the day names in as the first row.
    $rows = array_merge(array(calendar_week_header($this->view)), $rows);
    return $rows;
  }

  /**
   * Build one week row.
   */
  function calendar_build_mini_week($check_month = TRUE) {
    $curday_date = date_format($this->curday, DATE_FORMAT_DATE);
    $weekdays = calendar_untranslated_days($this->items, $this->view);
    $today = date_format(date_now(date_default_timezone()), DATE_FORMAT_DATE);
    $month = date_format($this->curday, 'n');
    $week = date_week($curday_date);
    $first_day = variable_get('date_first_day', 0);
    // move backwards to the first day of the week
    $day_wday = date_format($this->curday, 'w');
    date_modify($this->curday, '-' . strval((7 + $day_wday - $first_day) % 7) . ' days');
    $curday_date = date_format($this->curday, DATE_FORMAT_DATE);

    for ($i = 0; $i < 7; $i++) {
      $curday_date = date_format($this->curday, DATE_FORMAT_DATE);
      $class = strtolower($weekdays[$i] . ' mini');
      if ($check_month && ($curday_date < $this->date_info->min_date_date || $curday_date > $this->date_info->max_date_date || date_format($this->curday, 'n') != $month)) {
        $class .= ' empty';
        $content = array(
          'date' => '',
          'datebox' => '',
          'empty' => "", 
          'link' => '',
          'all_day' => array(),
          'items' => array(),
        );
      }
      else {
        $content = $this->calendar_build_day();
        $class .= ($curday_date == $today ? ' today' : '') .
          ($curday_date < $today ? ' past' : '') .
          ($curday_date > $today ? ' future' : '') .
          (empty($this->items[$curday_date]) ? ' has-no-events' : ' has-events');
      }
      $rows[$week][] = array(
        'data' => $content,
        'class' => $class,
        'id' => $this->view->name . '-' . $curday_date,
      );
      date_modify($this->curday, '+1 day');
    }
    return $rows;
  }

}