<?php

/**
 * @file template.php
 */

function bootstrap_nhmrc_preprocess_html(&$variables) {
  // Send X-UA-Compatible HTTP header to force IE to use the most recent
  // rendering engine or use Chrome's frame rendering engine if available.
  // This also prevents the IE compatibility mode button to appear when using
  // conditional classes on the html tag.
  if (is_null(drupal_get_http_header('X-UA-Compatible'))) {
      drupal_add_http_header('X-UA-Compatible', 'IE=edge,chrome=1');
    }

  drupal_add_js(path_to_theme() . '/html5shiv/dist/html5shiv.js', array('browsers' => array('IE' => 'IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_js(path_to_theme() . '/Respond-master/respond.min.js', array('browsers' => array('IE' => 'IE 8', '!IE' => FALSE), 'preprocess' => FALSE)); 

  drupal_add_css(path_to_theme() . '/css/ie8.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 8', '!IE' => FALSE), 'preprocess' => FALSE));

  drupal_add_library('system', 'jquery.cookie');
}

if (! function_exists('dump')) {
  function dump($what) {
    die('<pre>' . print_r($what, true) . '</pre>');
  }
}

function bootstrap_nhmrc_preprocess_panels_pane(&$vars, $hook) {
  // Add odd, even, first and last classes to panes.
  $panel = $vars['pane']->panel;
  $count = count($vars['display']->panels[$panel]);
  if ($vars['pane']->position % 2) {
    $vars['classes_array'][] = 'odd';
  }
  else {
    $vars['classes_array'][] = 'even';
  }
  if ($vars['pane']->position == 0) {
    $vars['classes_array'][] = 'first';
  }
  if ($vars['pane']->position == $count - 1) {
    $vars['classes_array'][] = 'last';
  }
}

function bootstrap_nhmrc_preprocess_node(&$vars, $hook) {
  // Add the terms to the body classes for "media" node type'.
  $node = $vars['node'];
  // Return an array of taxonomy term ID's.
  $termids = field_get_items('node', $node, 'media');
  print($termids);
  // Load all the terms to get the name and vocab.
  if (is_array($termids)){
    foreach ($termids as $termid) {
      $terms[] = taxonomy_term_load($termid['tid']);
    }
  }
  // Assign the taxonomy values.
  if (is_array($termids)){
    foreach ($terms as $term) {
      $class = strtolower(drupal_clean_css_identifier($term->name));
      $vocabulary = drupal_clean_css_identifier($term->vocabulary_machine_name);
      $vars['classes_array'][] = $class;
   }
  }

  // Zhao Pickup custom tpl for custom display mode
  if ($vars['node']->type == 'resource' && $vars['view_mode'] == 'resource_search') {
      $vars['theme_hook_suggestions'][] = 'node__resource__resource_search';
  }

  // Zhao Rm login in to comment and add comment link for SNS
  if ($vars['node']->type == 'sns') {
      unset($vars['content']['links']['comment']['#links']);
  }

}

/**
 * audiofield overrides
 */
function bootstrap_nhmrc_audiofield_players_wpaudioplayer($variables) {
  $player_path = $variables['player_path'];
  $audio_file = $variables['audio_file'];
  return '<object class="audioplayer2" height="24" width="290" data="' . $player_path . '" type="application/x-shockwave-flash">
                          <param value="' . $player_path . '" name="movie"/>
                          <param value="animation=no&amp;playerID=2&amp;bg=0xCDDFF3&amp;leftbg=0x9D2023&amp;lefticon=0xF2F2F2&amp;rightbg=0xD48721&amp;rightbghover=0xAF2910&amp;righticon=0xF2F2F2&amp;righticonhover=0xFFFFFF&amp;text=0x357DCE&amp;slider=0x357DCE&amp;track=0xFFFFFF&amp;border=0xFFFFFF&amp;loader=0xAF2910&amp;soundFile=' . $audio_file . '" name="FlashVars"/>
                          <param value="high" name="quality"/>
                          <param value="false" name="menu"/>
                          <param value="transparent" name="wmode"/>
                          </object>';
}


function bootstrap_nhmrc_date_nav_title($params) {
  $granularity = $params['granularity'];
  $view = $params['view'];
  $date_info = $view->date_info;
  $link = !empty($params['link']) ? $params['link'] : FALSE;
  $format = !empty($params['format']) ? $params['format'] : NULL;
  switch ($granularity) {
    case 'year':
      $title = $date_info->year;
      $date_arg = $date_info->year;
    break;
    case 'month':
      $format = !empty($format) ? $format : (empty($date_info->mini) ? 'F Y' : 'F Y');
      $title = date_format_date($date_info->min_date, 'custom', $format);
      $date_arg = $date_info->year .'-'. date_pad($date_info->month);
    break;
    case 'day':
      $format = !empty($format) ? $format : (empty($date_info->mini) ? 'l, F j Y' : 'l, F j');
      $title = date_format_date($date_info->min_date, 'custom', $format);
      $date_arg = $date_info->year .'-'. date_pad($date_info->month) .'-'. date_pad($date_info->day);
    break;
    case 'week':
      $format = !empty($format) ? $format : (empty($date_info->mini) ? 'F j Y' : 'F j');
      $title = t('Week of @date', array('@date' => date_format_date($date_info->min_date, 'custom', $format)));
      $date_arg = $date_info->year .'-W'. date_pad($date_info->week);
    break;
  }
  if (!empty($date_info->mini) || $link) {
    // Month navigation titles are used as links in the mini view.
    $attributes = array('title' => t('View full page month'));
    $url = date_pager_url($view, $granularity, $date_arg, TRUE);
    return l($title, $url, array('attributes' => $attributes));
  }
  else {
    return $title;
  }
}

function bootstrap_nhmrc_preprocess_views_view_table(&$vars) {
  $vars['classes_array'][] = 'table';
  if ( path_is_admin( current_path() ) ){
    $vars['classes_array'][] = 'table-bordered';
    $vars['classes_array'][] = 'table-striped';
  }
}

/**
 * Add stripping to tables (in case they don't have .table-no-striping class)
 */
function bootstrap_nhmrc_preprocess_table(&$variables) {

  if (isset($variables['attributes']['class']) && is_string($variables['attributes']['class'])) {
    // Convert classes to an array.
    $variables['attributes']['class'] = explode(' ', $variables['attributes']['class']);
  }

  $variables['attributes']['class'][] = 'table';
  if(!in_array('table-no-striping', $variables['attributes']['class'])) {
    $variables['attributes']['class'][] = 'table-striped';
  }
  if ( path_is_admin( current_path() ) ) {
    $variables['attributes']['class'][] = 'table-bordered';
  }

}

//Zhao 07/14/16, Implement hook_preprocess_page()
function bootstrap_nhmrc_preprocess_page(&$variables) {
  $path = drupal_get_path_alias();
  if (drupal_match_path($path, 'events-archive')) {
    drupal_add_js(drupal_get_path('theme', 'bootstrap_nhmrc') . '/scripts/stoplayer.js');
  }
  if (isset($variables['node']->type)) {
    $nodetype = $variables['node']->type;
    $variables['theme_hook_suggestions'][] = 'page__' . $nodetype;
  }
}

function bootstrap_nhmrc_preprocess_block(&$variables) {
        $search_form = drupal_get_form('search_form');
        $search_form_box = drupal_render($search_form);
        $variables['search_box'] = $search_form_box;
}

/**
 * Zhao 05/11/17 Select resource_search for resource content type, may add further condition after search function done
 * Implements hook_entity_view_mode_alter() // for switching the view mode
 */
function bootstrap_nhmrc_entity_view_mode_alter(&$view_mode, $context) {
    if ($context['entity_type'] == 'node' && $context['entity']->type == 'resource') {
        $view_mode = 'resource_search';
    }
}
function bootstrap_nhmrc_preprocess_field(&$vars) {
    if ($vars[element]['#title'] == 'Learn More' && $vars[element]['#entity_type'] == 'paragraphs_item' && $vars[element]['#field_name'] == 'field_body') {
//        print_r('<pre>');print_r($vars);print_r('</pre>');
        // Use new template for paragraphs field
        $vars['theme_hook_suggestions'][] = 'field__sns__field_body';
    }

    if ($vars[element]['#title'] == 'Image Text' && $vars[element]['#entity_type'] == 'paragraphs_item' && $vars[element]['#field_name'] == 'field_image') {
        $vars['theme_hook_suggestions'][] = 'field__sns__field_image';
    }

    if ($vars[element]['#title'] == 'Image Text' && $vars[element]['#entity_type'] == 'paragraphs_item' && $vars[element]['#field_name'] == 'field_text') {
        $vars['theme_hook_suggestions'][] = 'field__sns__field_text';
    }

}


function bootstrap_nhmrc_facet_items_alter(&$build, &$settings) {
      // if ($settings->facet == "search_api@node_index:block:field_ressource_keywords") {
        foreach($build as $key => $item) {
          $build[$key]["#markup"] = drupal_strtoupper($item["#markup"]);
        }
      // }
    }