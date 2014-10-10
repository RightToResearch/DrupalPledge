<?php
/**
 * pledge: blocks.inc
 * ==================
 *
 * Implementation of blocks defined in pledge.module.
 */

/**
 * The main text of the pledge, number of signatories, and number of countries
 */
function pledge_text_pledge_block() {
  $output  = views_embed_view('signatories', 'sig_count');
  $output .= views_embed_view('signatories', 'geo_count');
  $output .= '<p>';
  $output .= variable_get('pledge_pledgetext', 'Visit the Pledge settings page to change your pledge text.');
  $output .= '</p>';
  return $output;
}

/**
 * For anonymous users to sign the pledge (modified user_register_form)
 */
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

/**
 * For authenticated users thank them for signing the pledge and suggets what to do next (TODO)
 */
function pledge_signed_block() {
  module_load_include('install', 'pledge'); pledge_install_permissions(); drupal_set_message('changed', 'info');
  return variable_get('pledge_signed', 'Thanks for signing!');
}


/**
 * As we hide the login block on <front> add a link in the header region
 */
function pledge_signin_block() {
  return l('Already pledged? Sign in.', 'user');
}
