<?php
/**
 * pledge: views.inc
 * ==================
 *
 * Definition of standard pledge views.
 */

/**
 * The signatories view provides all list of signatories, and counts of signatories.
 * The Mentors views are also included here, and are essentially the same views with
 * an additional role filter.
 */
function pledge_views_signatories() {
$view = new view();
$view->name = 'signatories';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Signatories';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Signatories';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
/* Field: User: Given Name(s) */
$handler->display->display_options['fields']['field_given_name']['id'] = 'field_given_name';
$handler->display->display_options['fields']['field_given_name']['table'] = 'field_data_field_given_name';
$handler->display->display_options['fields']['field_given_name']['field'] = 'field_given_name';
$handler->display->display_options['fields']['field_given_name']['exclude'] = TRUE;
/* Field: User: Family Name */
$handler->display->display_options['fields']['field_family_name']['id'] = 'field_family_name';
$handler->display->display_options['fields']['field_family_name']['table'] = 'field_data_field_family_name';
$handler->display->display_options['fields']['field_family_name']['field'] = 'field_family_name';
$handler->display->display_options['fields']['field_family_name']['label'] = 'Name';
$handler->display->display_options['fields']['field_family_name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_family_name']['alter']['text'] = '[field_family_name], [field_given_name]';
/* Field: User: Institution */
$handler->display->display_options['fields']['field_institution']['id'] = 'field_institution';
$handler->display->display_options['fields']['field_institution']['table'] = 'field_data_field_institution';
$handler->display->display_options['fields']['field_institution']['field'] = 'field_institution';
/* Field: User: Discipline */
$handler->display->display_options['fields']['field_discipline']['id'] = 'field_discipline';
$handler->display->display_options['fields']['field_discipline']['table'] = 'field_data_field_discipline';
$handler->display->display_options['fields']['field_discipline']['field'] = 'field_discipline';
/* Field: User: Country */
$handler->display->display_options['fields']['field_country']['id'] = 'field_country';
$handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
$handler->display->display_options['fields']['field_country']['field'] = 'field_country';
$handler->display->display_options['fields']['field_country']['type'] = 'country_icon';
$handler->display->display_options['fields']['field_country']['settings'] = array(
  'countryiconset' => 'icon_shiny',
  'property' => 'name',
);
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
/* Sort criterion: User: Family Name (field_family_name) */
$handler->display->display_options['sorts']['field_family_name_value']['id'] = 'field_family_name_value';
$handler->display->display_options['sorts']['field_family_name_value']['table'] = 'field_data_field_family_name';
$handler->display->display_options['sorts']['field_family_name_value']['field'] = 'field_family_name_value';
$handler->display->display_options['sorts']['field_family_name_value']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_family_name_value']['expose']['label'] = 'Family Name (field_family_name)';
/* Sort criterion: User: Given Name(s) (field_given_name) */
$handler->display->display_options['sorts']['field_given_name_value']['id'] = 'field_given_name_value';
$handler->display->display_options['sorts']['field_given_name_value']['table'] = 'field_data_field_given_name';
$handler->display->display_options['sorts']['field_given_name_value']['field'] = 'field_given_name_value';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: User: Family Name (field_family_name) */
$handler->display->display_options['sorts']['field_family_name_value']['id'] = 'field_family_name_value';
$handler->display->display_options['sorts']['field_family_name_value']['table'] = 'field_data_field_family_name';
$handler->display->display_options['sorts']['field_family_name_value']['field'] = 'field_family_name_value';
$handler->display->display_options['sorts']['field_family_name_value']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_family_name_value']['expose']['label'] = 'Family Name';
/* Sort criterion: User: Given Name(s) (field_given_name) */
$handler->display->display_options['sorts']['field_given_name_value']['id'] = 'field_given_name_value';
$handler->display->display_options['sorts']['field_given_name_value']['table'] = 'field_data_field_given_name';
$handler->display->display_options['sorts']['field_given_name_value']['field'] = 'field_given_name_value';
/* Sort criterion: User: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'users';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['exposed'] = TRUE;
$handler->display->display_options['sorts']['created']['expose']['label'] = 'Date Signed';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: User: Institution (field_institution) */
$handler->display->display_options['filters']['field_institution_value']['id'] = 'field_institution_value';
$handler->display->display_options['filters']['field_institution_value']['table'] = 'field_data_field_institution';
$handler->display->display_options['filters']['field_institution_value']['field'] = 'field_institution_value';
$handler->display->display_options['filters']['field_institution_value']['operator'] = 'contains';
$handler->display->display_options['filters']['field_institution_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_institution_value']['expose']['operator_id'] = 'field_institution_value_op';
$handler->display->display_options['filters']['field_institution_value']['expose']['label'] = 'Institution';
$handler->display->display_options['filters']['field_institution_value']['expose']['operator'] = 'field_institution_value_op';
$handler->display->display_options['filters']['field_institution_value']['expose']['identifier'] = 'field_institution_value';
$handler->display->display_options['filters']['field_institution_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
);
$handler->display->display_options['filters']['field_institution_value']['group_info']['label'] = 'Institution (field_institution)';
$handler->display->display_options['filters']['field_institution_value']['group_info']['identifier'] = 'field_institution_value';
$handler->display->display_options['filters']['field_institution_value']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['field_institution_value']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
/* Filter criterion: User: Discipline (field_discipline) */
$handler->display->display_options['filters']['field_discipline_value']['id'] = 'field_discipline_value';
$handler->display->display_options['filters']['field_discipline_value']['table'] = 'field_data_field_discipline';
$handler->display->display_options['filters']['field_discipline_value']['field'] = 'field_discipline_value';
$handler->display->display_options['filters']['field_discipline_value']['operator'] = 'contains';
$handler->display->display_options['filters']['field_discipline_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_discipline_value']['expose']['operator_id'] = 'field_discipline_value_op';
$handler->display->display_options['filters']['field_discipline_value']['expose']['label'] = 'Discipline';
$handler->display->display_options['filters']['field_discipline_value']['expose']['operator'] = 'field_discipline_value_op';
$handler->display->display_options['filters']['field_discipline_value']['expose']['identifier'] = 'field_discipline_value';
$handler->display->display_options['filters']['field_discipline_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
);
/* Filter criterion: User: Country (field_country) */
$handler->display->display_options['filters']['field_country_iso2']['id'] = 'field_country_iso2';
$handler->display->display_options['filters']['field_country_iso2']['table'] = 'field_data_field_country';
$handler->display->display_options['filters']['field_country_iso2']['field'] = 'field_country_iso2';
$handler->display->display_options['filters']['field_country_iso2']['operator'] = 'contains';
$handler->display->display_options['filters']['field_country_iso2']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_iso2']['expose']['operator_id'] = 'field_country_iso2_op';
$handler->display->display_options['filters']['field_country_iso2']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['field_country_iso2']['expose']['operator'] = 'field_country_iso2_op';
$handler->display->display_options['filters']['field_country_iso2']['expose']['identifier'] = 'field_country_iso2';
$handler->display->display_options['filters']['field_country_iso2']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
);
$handler->display->display_options['path'] = 'signatories';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Signatories';
$handler->display->display_options['menu']['name'] = 'main-menu';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Recent Signatories';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: User: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'users';
$handler->display->display_options['sorts']['created']['field'] = 'created';

/* Display: SigCountBlock */
$handler = $view->new_display('block', 'SigCountBlock', 'sig_count');
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['uid']['alter']['text'] = '<h2>[uid] people have signed.</h2>';
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;

/* Display: GeoCountBlock */
$handler = $view->new_display('block', 'GeoCountBlock', 'geo_count');
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Country */
$handler->display->display_options['fields']['field_country']['id'] = 'field_country';
$handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
$handler->display->display_options['fields']['field_country']['field'] = 'field_country';
$handler->display->display_options['fields']['field_country']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['field_country']['label'] = '';
$handler->display->display_options['fields']['field_country']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_country']['alter']['text'] = '<h2>[field_country] countries.</h2>';
$handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_country']['separator'] = ', ';
$handler->display->display_options['defaults']['sorts'] = FALSE;

/* Display: MentorsPage */
$handler = $view->new_display('page', 'MentorsPage', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Mentors';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: User: Family Name (field_family_name) */
$handler->display->display_options['sorts']['field_family_name_value']['id'] = 'field_family_name_value';
$handler->display->display_options['sorts']['field_family_name_value']['table'] = 'field_data_field_family_name';
$handler->display->display_options['sorts']['field_family_name_value']['field'] = 'field_family_name_value';
$handler->display->display_options['sorts']['field_family_name_value']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_family_name_value']['expose']['label'] = 'Family Name';
/* Sort criterion: User: Given Name(s) (field_given_name) */
$handler->display->display_options['sorts']['field_given_name_value']['id'] = 'field_given_name_value';
$handler->display->display_options['sorts']['field_given_name_value']['table'] = 'field_data_field_given_name';
$handler->display->display_options['sorts']['field_given_name_value']['field'] = 'field_given_name_value';
/* Sort criterion: User: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'users';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['exposed'] = TRUE;
$handler->display->display_options['sorts']['created']['expose']['label'] = 'Date Signed';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: User: Institution (field_institution) */
$handler->display->display_options['filters']['field_institution_value']['id'] = 'field_institution_value';
$handler->display->display_options['filters']['field_institution_value']['table'] = 'field_data_field_institution';
$handler->display->display_options['filters']['field_institution_value']['field'] = 'field_institution_value';
$handler->display->display_options['filters']['field_institution_value']['operator'] = 'contains';
$handler->display->display_options['filters']['field_institution_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_institution_value']['expose']['operator_id'] = 'field_institution_value_op';
$handler->display->display_options['filters']['field_institution_value']['expose']['label'] = 'Institution';
$handler->display->display_options['filters']['field_institution_value']['expose']['operator'] = 'field_institution_value_op';
$handler->display->display_options['filters']['field_institution_value']['expose']['identifier'] = 'field_institution_value';
$handler->display->display_options['filters']['field_institution_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
);
$handler->display->display_options['filters']['field_institution_value']['group_info']['label'] = 'Institution (field_institution)';
$handler->display->display_options['filters']['field_institution_value']['group_info']['identifier'] = 'field_institution_value';
$handler->display->display_options['filters']['field_institution_value']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['field_institution_value']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
/* Filter criterion: User: Discipline (field_discipline) */
$handler->display->display_options['filters']['field_discipline_value']['id'] = 'field_discipline_value';
$handler->display->display_options['filters']['field_discipline_value']['table'] = 'field_data_field_discipline';
$handler->display->display_options['filters']['field_discipline_value']['field'] = 'field_discipline_value';
$handler->display->display_options['filters']['field_discipline_value']['operator'] = 'contains';
$handler->display->display_options['filters']['field_discipline_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_discipline_value']['expose']['operator_id'] = 'field_discipline_value_op';
$handler->display->display_options['filters']['field_discipline_value']['expose']['label'] = 'Discipline';
$handler->display->display_options['filters']['field_discipline_value']['expose']['operator'] = 'field_discipline_value_op';
$handler->display->display_options['filters']['field_discipline_value']['expose']['identifier'] = 'field_discipline_value';
$handler->display->display_options['filters']['field_discipline_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
);
/* Filter criterion: User: Country (field_country) */
$handler->display->display_options['filters']['field_country_iso2']['id'] = 'field_country_iso2';
$handler->display->display_options['filters']['field_country_iso2']['table'] = 'field_data_field_country';
$handler->display->display_options['filters']['field_country_iso2']['field'] = 'field_country_iso2';
$handler->display->display_options['filters']['field_country_iso2']['operator'] = 'contains';
$handler->display->display_options['filters']['field_country_iso2']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_country_iso2']['expose']['operator_id'] = 'field_country_iso2_op';
$handler->display->display_options['filters']['field_country_iso2']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['field_country_iso2']['expose']['operator'] = 'field_country_iso2_op';
$handler->display->display_options['filters']['field_country_iso2']['expose']['identifier'] = 'field_country_iso2';
$handler->display->display_options['filters']['field_country_iso2']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
);
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['value'] = array(
  3 => '3',
);
$handler->display->display_options['path'] = 'mentors';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Mentors';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


return $view;
}
