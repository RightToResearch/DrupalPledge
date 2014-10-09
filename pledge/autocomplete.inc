<?php
/**
 * pledge: autocomplete.inc
 * ========================
 *
 * At various points changes are made to make form fields have autocomplete. Each autocomplete is handled by a
 * short function that calls pledge_autocomplete() with hard coded table and field names.
 */

/**
 * Autocomplete Institution field when signing the pledge.
 */
function pledge_autocomplete_institution($string) {
  pledge_autocomplete('field_data_field_institution', 'field_institution_value', $string);
}

/**
 * Autocomplete Discipline field when signing the pledge.
 */
function pledge_autocomplete_discipline($string) {
  pledge_autocomplete('field_data_field_discipline', 'field_discipline_value', $string);
}

/**
 * Generic autocomplete function called by other functions in this file. Will handle any situation requiring
 * querying a single field from a single table in the Drupal database. Returns a self-keyed array of text
 * strings in JSON then immediately exits execution.
 */
function pledge_autocomplete($table, $field, $string) {
  $result = db_query("SELECT $field FROM {$table} WHERE $field LIKE :pattern LIMIT 10", array(':pattern' => '%'.$string.'%'));
  $matches = array();
  foreach($result as $item) {
    $matches[$item->$field] = check_plain($item->$field);
  }
  drupal_json_output($matches);
  exit;
}
