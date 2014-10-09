<?php

function pledge_autocomplete_institution($string) {
  pledge_autocomplete('field_data_field_institution', 'field_institution_value', $string);
}

function pledge_autocomplete_discipline($string) {
  pledge_autocomplete('field_data_field_discipline', 'field_discipline_value', $string);
}

function pledge_autocomplete($table, $field, $string) {
  $result = db_query("SELECT $field FROM {$table} WHERE $field LIKE :pattern LIMIT 10", array(':pattern' => '%'.$string.'%'));
  $matches = array();
  foreach($result as $item) {
    $matches[$item->$field] = check_plain($item->$field);
  }
  drupal_json_output($matches);
  exit;
}
