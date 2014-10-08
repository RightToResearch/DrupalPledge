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
  $form = drupal_get_form('user_register_form');
  $form['actions']['submit']['#value'] = "Sign the Pledge!";
  return drupal_render($form);
}

function pledge_signed_block() {
  return variable_get('pledge_signed', 'Thanks for signing!');
}

function pledge_signin_block() {
  return '<a href="user">Already pledged? Sign in.</a>';
}
