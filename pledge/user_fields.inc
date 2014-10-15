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
  $fields   = pledge_mentor_fields();
  $fields['field_family_name'] = pledge_user_fields_family_name();
  $fields['field_given_name'] = pledge_user_fields_given_names();
  $fields['field_institution'] = pledge_user_fields_institution();
  $fields['field_discipline'] = pledge_user_fields_discipline();
  $fields['field_country'] = pledge_user_fields_country();
  $fields['field_notable'] = pledge_user_fields_notable();
  $fields['field_twitter'] = pledge_user_fields_twitter();
  $fields['field_website'] = pledge_user_fields_website();
  $fields['field_career_stage'] = pledge_user_fields_career_stage();
  $fields['field_research_funding'] = pledge_user_fields_research_funding();
  return $fields;
}

//Access to these fields is controlled by pledge_field_access().
function pledge_mentor_fields() {
  $fields = array();
  $fields['field_about_me'] = pledge_mentor_fields_about_me();
  $fields['field_about_my_research'] = pledge_mentor_fields_about_my_research();
  $fields['field_favourites'] = pledge_mentor_fields_favourites();
  $fields['field_tips_area'] = pledge_mentor_fields_tips_area();
  $fields['field_tips_institute'] = pledge_mentor_fields_tips_institute();
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
      'weight' => 2,
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
      'weight' => 3,
      'module' => 'text',
      'active' => 1,
    ),
  );
  return $field;
}

function pledge_user_fields_twitter() {
  $field = array(
    'field_name' => 'field_twitter',
    'type' => 'text',
    'settings' => array(
      'required' => 0,
      'user_register_form' => 0,
    ),
    'label' => 'Twitter username (without @)',
    'widget' => array(
      'type' => 'text_textfield',
      'weight' => 5,
      'module' => 'text',
      'active' => 1,
    ),
  );
  return $field;
}

function pledge_user_fields_website() {
  $field = array(
    'field_name' => 'field_website',
    'type' => 'text',
    'settings' => array(
      'required' => 0,
      'user_register_form' => 0,
    ),
    'label' => 'Website (Include http://)',
    'widget' => array(
      'type' => 'text_textfield',
      'weight' => 4,
      'module' => 'text',
      'active' => 1,
    ),
  );
  return $field;
}
function pledge_user_fields_career_stage() {
  $field = array(
    'field_name' => 'field_career_stage',
    'type' => 'text',
    'settings' => array(
      'required' => 0,
      'user_register_form' => 0,
    ),
    'label' => 'Career Stage (e.g. PhD student, PostDoc)',
    'widget' => array(
      'type' => 'text_textfield',
      'weight' => 6,
      'module' => 'text',
      'active' => 1,
    ),
  );
  return $field;
}
function pledge_user_fields_research_funding() {
  $field = array(
    'field_name' => 'field_research_funding',
    'type' => 'text',
    'settings' => array(
      'required' => 0,
      'user_register_form' => 0,
    ),
    'label' => 'Research Funding (e.g. NERC, EU)',
    'widget' => array(
      'type' => 'text_textfield',
      'weight' => 7,
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
      'weight' => 1,
      'module' => 'countries',
      'active' => 1,
    ),
  );
  return $field;
}

function pledge_user_fields_notable() {
  $field = array(
    'field_name' => 'field_notable',
    'type' => 'list_boolean',
    'settings' => array(
      'required' => 0,
      'user_register_form' => 0,
      'allowed_values' => array(
        '0' => 'No',
        '1' => 'Yes',
      ),
    ),
    'label' => 'Notable',
    'widget' => array(
      'type' => 'options_onoff',
      'weight' => 50,
      'module' => 'options',
      'active' => 1,
      'settings' => array(
              'display_label' => 1,
      ),
    ),
  );
  return $field;
}

function pledge_mentor_fields_about_me() {
  $field = array(
    'field_name' => 'field_about_me',
    'type' => 'text_long',
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'label' => 'About Me',
    'widget' => array(
      'type' => 'text_textarea',
      'weight' => 21,
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'rows' => 5,
      ),
    ),
  );
  return $field;
}

function pledge_mentor_fields_about_my_research() {
  $field = array(
    'field_name' => 'field_about_my_research',
    'type' => 'text_long',
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'label' => 'About My Research',
    'widget' => array(
      'type' => 'text_textarea',
      'weight' => 22,
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'rows' => 5,
      ),
    ),
  );
  return $field;
}

function pledge_mentor_fields_favourites() {
  $field = array(
    'field_name' => 'field_favourites',
    'type' => 'text_long',
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'label' => 'My favourite OA journal(s) / repositories',
    'widget' => array(
      'type' => 'text_textarea',
      'weight' => 23,
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'rows' => 5,
      ),
    ),
  );
  return $field;
}

function pledge_mentor_fields_tips_area() {
  $field = array(
    'field_name' => 'field_tips_area',
    'type' => 'text_long',
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'label' => 'My tips for researchers in the same subject area',
    'widget' => array(
      'type' => 'text_textarea',
      'weight' => 24,
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'rows' => 5,
      ),
    ),
  );
  return $field;
}

function pledge_mentor_fields_tips_institute() {
  $field = array(
    'field_name' => 'field_tips_institute',
    'type' => 'text_long',
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'label' => 'My tips for researchers at my institute',
    'widget' => array(
      'type' => 'text_textarea',
      'weight' => 25,
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'rows' => 5,
      ),
    ),
  );
  return $field;
}
