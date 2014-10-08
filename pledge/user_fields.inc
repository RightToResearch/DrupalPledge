<?php

function pledge_user_fields() {
  $fields = array();
  $fields[] = pledge_user_fields_family_name();
  $fields[] = pledge_user_fields_given_names();
  return $fields;
}

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
