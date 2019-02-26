<?php

$plugin = array(
  'form' => 'nhmrc_find_correct_pdf_file_form',
  'name' => 'NHMRC Find Correct PDF File',
  'callback' => 'nhmrc_find_correct_pdf_file_callback',
  'multi' => 'direct',
  'category' => 'Text',
);

function nhmrc_find_correct_pdf_file_form($importer, $element_key, $settings) {
  $form = array();
  return $form;
}

function nhmrc_find_correct_pdf_file_callback($result, $item_key, $element_key, &$field, array $settings) {
  static $filename_lookup_table;
  if (!$filename_lookup_table) {
    $filename_lookup_table = _populate_filename_lookup_table();
  }
  $record_number = $field;
  $path_to_pdfs = 'public://HM_txt_pdf_files/';
  if (!empty($filename_lookup_table[$record_number])) {
    $field = $path_to_pdfs . $filename_lookup_table[$record_number] . '.pdf';
  }
}

function _populate_filename_lookup_table() {
  $lookup_table = array();
  $dir_path = 'public://HM_txt_pdf_files/';
  if (is_dir($dir_path)) {
    if ($dh = opendir($dir_path)) {
      while (($file = readdir($dh)) !== false) {
        if (substr($file, -4) == '.txt') {
          $contents = file_get_contents($dir_path . '/' . $file);
          preg_match('/<#FIELD NAME = RECNO>(.*)<\/#FIELD>/', $contents, $matches);
          $record_number = trim($matches[1]);
          $lookup_table[$record_number] = substr($file, 0, -4);
        }
      }
    }
  }
  return $lookup_table;
}