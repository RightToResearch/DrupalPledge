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
  return variable_get('pledge_signed', 'Thanks for signing!');
}

function pledge_here_to_help_block() {
  return variable_get('pledge_heretohelp', 'We have several ways of helping you!');
}


/**
 * As we hide the login block on <front> add a link in the header region
 */
function pledge_signin_block() {
  return l('Already pledged? Sign in.', 'user');
}

/**
 * Progress block
 */
function pledge_progress_block() {
  $progress = array();
  pledge_progress_user($progress);
  pledge_progress_forum($progress);
  pledge_progress_support_pages($progress);

  //Create output
  $output = '<table>';
  $tick_path = drupal_get_path('theme', 'seven') . '/images/task-check.png';

  foreach ($progress as $task => $status) {
    $output .= '<tr><td>';
    $output .= $status 
      ? "<img src='$tick_path' />" 
      : '';
    $output .= '</td><td>' . $task;
    $output .= '</td></tr>';
  }
  $output .= '</table>';
  return $output;
}

function pledge_progress_user(&$progress) {
  global $user;
  $progress['Signed the pledge'] = ($user->uid != 0) ? TRUE : FALSE;
}

function pledge_progress_forum(&$progress) {
  global $user;
  $result = db_query("SELECT COUNT(nid) as count FROM node WHERE type = 'forum' AND uid = :uid;", array(':uid' => $user->uid));
  $progress['Asked a question in the '.l('forum', 'forum')] = ($result->fetchCol()[0] > 0) ? TRUE : FALSE;
}

function pledge_progress_support_pages(&$progress) {
  global $user;

  //Get list of support pages
  $result = db_query("SELECT nid, title FROM node WHERE type = 'support_page'");
  $pages = $result->fetchAllKeyed();
  //Get list of pages user has visited
  $result = db_query("SELECT type_id FROM pledge_tasks WHERE type = 'support_page' AND uid = :uid", array(':uid' => $user->uid));
  $visited = $result->fetchCol();

  //Append data to $progress array
  foreach ($pages as $nid => $title) {
    $progress['Read '. l($title, 'node/'.$nid)] = (in_array($nid, $visited)) ? TRUE : FALSE;
  }
}

function pledge_read_block() {
  $nid = arg(1); //Assumes block is used only as specified in this modulw
  global $user;

  $result = db_query("SELECT COUNT(uid) FROM pledge_tasks WHERE type = 'support_page' AND uid = :uid AND type_id = :tid", array(':uid' => $user->uid, ':tid' => $nid));
  if ($result->fetchCol()[0] > 0) {
    return '';
  }
  //If not previously read
  return drupal_get_form('pledge_mark_as_read_form');
}
