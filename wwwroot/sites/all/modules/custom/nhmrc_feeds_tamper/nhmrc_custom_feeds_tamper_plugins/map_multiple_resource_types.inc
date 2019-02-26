<?php

$plugin = array(
  'form' => 'nhmrc_map_multiple_resource_types_form',
  'callback' => 'nhmrc_map_multiple_resource_types_callback',
  'name' => 'NHMRC Map Multiple Resource Types',
  'multi' => 'loop',
  'category' => 'Text',
  'validate' => 'nhmrc_map_multiple_resource_types_validate',
);

function nhmrc_map_multiple_resource_types_form($importer, $element_key, $settings) {
  $form = array();
  $form['words'] = array(
    '#type' => 'textarea',
    '#title' => t('Words or phrases to map to a resource type'),
    '#default_value' => isset($settings['words']) ? $settings['words'] : '',
    '#description' => t('A list of words/phrases to map to a type. Enter one value per line.'),
  );
  $form['replace'] = array(
    '#type' => 'textfield',
    '#title' => t('Text to replace'),
    '#default_value' => isset($settings['replace']) ? $settings['replace'] : '',
  );
  $form['word_boundaries'] = array(
    '#type' => 'checkbox',
    '#title' => t('Respect word boundaries'),
    '#default_value' => isset($settings['word_boundaries']) ? $settings['word_boundaries'] : FALSE,
    '#description' => t('If checked, then "book" will match "book" but not "bookcase".'),
  );
  $form['exact'] = array(
    '#type' => 'checkbox',
    '#title' => t('Exact'),
    '#default_value' => isset($settings['exact']) ? $settings['exact'] : FALSE,
    '#description' => t('If checked, then "book" will only match "book". This will override the "Respect word boundaries" setting above.'),
  );
  $form['case_sensitive'] = array(
    '#type' => 'checkbox',
    '#title' => t('Case sensitive'),
    '#default_value' => isset($settings['case_sensitive']) ? $settings['case_sensitive'] : FALSE,
    '#description' => t('If checked, then "book" will match "book" but not "Book" or "BOOK".'),
  );
  return $form;
}

function nhmrc_map_multiple_resource_types_validate(&$settings) {
  global $multibyte;
  $is_multibyte = ($multibyte == UNICODE_MULTIBYTE) ? TRUE : FALSE;

  $settings['words'] = str_replace("\r", '', $settings['words']);
  $settings['word_list'] = explode("\n", $settings['words']);
  $settings['word_list'] = array_map('trim', $settings['word_list']);
  $settings['regex'] = FALSE;

  if (!empty($settings['exact']) || $settings['word_boundaries']) {
    foreach ($settings['word_list'] as &$word) {
      if (!empty($settings['exact'])) {
        $word = '/^' . preg_quote($word, '/') . '$/u';
      }
      elseif ($settings['word_boundaries']) {
        // Word boundaries can only match a word with letters at the end.
        if (!preg_match('/^\w(.*\w)?$/u', $word)) {
          form_set_error('settings][words', t('Search text must begin and end with a letter, number, or underscore to use the %option option.', array('%option' => t('Respect word boundaries'))));
        }
        $word = '/\b' . preg_quote($word, '/') . '\b/u';
      }
      if (!$settings['case_sensitive']) {
        $word .= 'i';
      }
    }
    $settings['regex'] = TRUE;
  }

  elseif (!$settings['word_boundaries'] && $settings['case_sensitive']) {
    $settings['func'] = $is_multibyte ? 'mb_strpos' : 'strpos';
  }
  elseif (!$settings['word_boundaries'] && !$settings['case_sensitive']) {
    $settings['func'] = $is_multibyte ? 'mb_stripos' : 'stripos';
  }
}

function nhmrc_map_multiple_resource_types_callback($result, $item_key, $element_key, &$field, array $settings) {
  $match_func = '_nhmrc_map_multiple_resource_types_regex';

  if (empty($settings['regex'])) {
    $match_func = $settings['func'];
  }

  $match = FALSE;

  if (is_array($field)) {
    foreach ($field as $value) {
      if (_nhmrc_map_multiple_resource_types_match($match_func, $value, $settings['word_list'])) {
        $match = TRUE;
        break;
      }
    }
    reset($field);
  }
  else {
    $match = _nhmrc_map_multiple_resource_types_match($match_func, $field, $settings['word_list']);
  }

  if ($match) {
    $field = $settings['replace'];
    return;
  }
}

function _nhmrc_map_multiple_resource_types_match($match_func, $field, array $word_list) {
  foreach ($word_list as $word) {
    if ($match_func($field, $word) !== FALSE) {
      return TRUE;
    }
  }

  return FALSE;
}

function _nhmrc_map_multiple_resource_types_regex($field, $word) {
  return preg_match($word, $field) > 0;
}
