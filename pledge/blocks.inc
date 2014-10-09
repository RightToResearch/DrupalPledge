<?php

function pledge_text_pledge_block() {
  $output = '';
  $output .= views_embed_view('signatories', 'block_1');
  $output .= '<p>';
  $output .= variable_get('pledge_pledgetext', 'Visit the Pledge settings page to change your pledge text.');
  $output .= '</p>';
  return $output;
}

function pledge_sign_pledge_block() {
  //Autocomplete box appears in wrong place if no relative positioned elements immediately above textfield
  drupal_add_css(drupal_get_path('module', 'pledge') . '/css/autocomplete.css');
  //We need to modify the user registration form
  $form = drupal_get_form('user_register_form');
  //Add autocompletes
  $lang = $form['field_institution']['#language'];
  $form['field_institution'][$lang][0]['value']['#autocomplete_path'] = 'pledge/autocomplete/institution';
  $lang = $form['field_discipline']['#language'];
  $form['field_discipline'][$lang][0]['value']['#autocomplete_path'] = 'pledge/autocomplete/discipline';
  //Modify submit button text
  $form['actions']['submit']['#value'] = "Sign the Pledge!";
  return drupal_render($form);
}

function pledge_signed_block() {
  //print "<PRE>";
  //print_r(field_info_instance('user', 'field_country', 'user'));exit;
  return variable_get('pledge_signed', 'Thanks for signing!');
}

function pledge_signin_block() {
  return '<a href="user">Already pledged? Sign in.</a>';
}
