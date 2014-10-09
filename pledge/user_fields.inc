<?php
/**
 * pledge: user_fields.inc
 * =======================
 *
 * Definitions of fields added to the user bundle.
 */

/**
 * Build an array of field definitions (this is called from pledge_install)
 */
function pledge_user_fields() {
  $fields = array();
  $fields[] = pledge_user_fields_family_name();
  $fields[] = pledge_user_fields_given_names();
  $fields[] = pledge_user_fields_institution();
  $fields[] = pledge_user_fields_discipline();
  $fields[] = pledge_user_fields_country();
  return $fields;
}

/////////////////////////////////////////////////
// Field definitions below, one per function

function pledge_user_fields_family_name() {
  $field = array(
    'field_name' => 'field_family_name',
    'type' => 'text',
    'settings' => array(
      'required' => 1,
      'user_register_form'=> 1,
    ),
    'label' => 'Family Name',
    'widget' => array(
      'type' => 'text_textfield',
      'weight' => 1,
      'module' => 'text',
      'active' => 1,
    ),
  );
  return $field;
}

function pledge_user_fields_given_names() {
  $field = array(
    'field_name' => 'field_given_name',
    'type' => 'text',
    'settings' => array(
      'required' => 1,
      'user_register_form' => 1,
    ),
    'label' => 'Given Name(s)',
    'widget' => array(
      'type' => 'text_textfield',
      'weight' => 0,
      'module' => 'text',
      'active' => 1,
    ),
  );
  return $field;
}

function pledge_user_fields_institution() {
  $field = array(
    'field_name' => 'field_institution',
    'type' => 'text',
    'settings' => array(
      'required' => 0,
      'user_register_form' => 1,
    ),
    'label' => 'Institution',
    'widget' => array(
      'type' => 'text_textfield',
      'weight' => 0,
      'module' => 'text',
      'active' => 1,
    ),
  );
  return $field;
}

function pledge_user_fields_discipline() {
  $field = array(
    'field_name' => 'field_discipline',
    'type' => 'text',
    'settings' => array(
      'required' => 1,
      'user_register_form' => 1,
    ),
    'label' => 'Discipline',
    'widget' => array(
      'type' => 'text_textfield',
      'weight' => 0,
      'module' => 'text',
      'active' => 1,
    ),
  );
  return $field;
}

function pledge_user_fields_country() {
  $field = array(
    'field_name' => 'field_country',
    'type' => 'country',
    'settings' => array(
      'required' => 1,
      'user_register_form' => 1,
    ),
    'label' => 'Country',
    'widget' => array(
      'type' => 'options_select',
      'weight' => 0,
      'module' => 'countries',
      'active' => 1,
    ),
  );
  return $field;
}
