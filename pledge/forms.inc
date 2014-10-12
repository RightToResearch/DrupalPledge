<?php
/**
 * pledge: forms.inc
 * ==================
 *
 * Implementation of custom forms for the pledge module, mostly related to module administration.
 */

/**
 * The main module administration form. Allows for various text areas used by the module to be set.
 */
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
  $form['pledge_supporttitle'] = array(
    '#type' => 'textfield',
    '#title' => t('Support Page Title'),
    '#default_value' => variable_get('pledge_supporttitle', 'We\'re here to help...'),
    '#size' => 100,
    '#maxlength' => 100,
    '#description' => t('Title of the support page'),
    '#required' => TRUE,
  );
  return $form;
}

function pledge_mark_as_read_form($form, &$form_state) {
  $nid = arg(1); //Assumes this block is only called as defined in this module
  $form['nid'] = array(
    '#type' => 'hidden',
    '#value' => $nid,
  );
  $form['pledge_read'] = array(
    '#type' => 'submit',
    '#value' => 'Mark as read',
  );
  return $form;
}

function pledge_mark_as_read_form_submit($form, &$form_state) {
  global $user;
  $record = array(
    'uid' => $user->uid,
    'type' => 'support_page',
    'type_id' => $form_state['values']['nid'],
  );
  $result = db_query("SELECT COUNT(uid) FROM pledge_tasks WHERE type = 'support_page' AND uid = :uid AND type_id = :tid", array(':uid' => $user->uid, ':tid' => $form_state['values']['nid']));
  if ($result->fetchCol()[0] > 0) {
    ;
  } else {
    drupal_write_record('pledge_tasks', $record);
  }
}
