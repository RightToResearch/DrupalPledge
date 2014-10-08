<?php

function pledge_admin_form($form, &$form_state) {
  $form = array();
  $form['pledge_pledgetext'] = array(
    '#type' => 'textfield',
    '#title' => t('Pledge Text'),
    '#default_value' => variable_get('pledge_pledgetext', 'Visit the Pledge settings page to change your pledge text.'),
    '#size' => 100,
    '#maxlength' => 1000,
    '#description' => t('The text of the pledge.'),
    '#required' => TRUE,
  );
  $form['pledge_signed'] = array(
    '#type' => 'textfield',
    '#title' => t('Pledge Signed'),
    '#default_value' => variable_get('pledge_signed', 'Thanks for signing!'),
    '#size' => 100,
    '#maxlength' => 1000,
    '#description' => t('Text to display when user has already signed the pledge'),
    '#required' => TRUE,
  );
  return $form;
}
