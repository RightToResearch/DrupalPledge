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

/* Display: SignatoriesPage */
$handler = $view->new_display('page', 'SignatoriesPage', 'page');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
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
$handler->display->display_options['fields']['field_family_name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_family_name']['alter']['path'] = 'user/[uid]';
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

/* Display: RecentSignatoriesBlock */
$handler = $view->new_display('block', 'RecentSignatoriesBlock', 'block');
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
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
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
$handler->display->display_options['fields']['field_family_name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_family_name']['alter']['path'] = 'user/[uid]';
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

/* Display: NotableSignatoriesBlock */
$handler = $view->new_display('block', 'NotableSignatoriesBlock', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Notable Signatories';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '0';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: User: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'users';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: User: Notable (field_notable) */
$handler->display->display_options['filters']['field_notable_value']['id'] = 'field_notable_value';
$handler->display->display_options['filters']['field_notable_value']['table'] = 'field_data_field_notable';
$handler->display->display_options['filters']['field_notable_value']['field'] = 'field_notable_value';
$handler->display->display_options['filters']['field_notable_value']['value'] = array(
  1 => '1',
);

return $view;
}

function pledge_views_support() {
$view = new view();
$view->name = 'support';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Support';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Support Articles';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'support_page' => 'support_page',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
return $view;
}

function pledge_views_mentors(){
$view = new view();
$view->name = 'mentors';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Mentors';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'field_favourites' => 'field_favourites',
  'field_tips_area' => 'field_favourites',
  'field_tips_institute' => 'field_favourites',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_favourites' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_tips_area' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_tips_institute' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
/* Field: User: About Me */
$handler->display->display_options['fields']['field_about_me']['id'] = 'field_about_me';
$handler->display->display_options['fields']['field_about_me']['table'] = 'field_data_field_about_me';
$handler->display->display_options['fields']['field_about_me']['field'] = 'field_about_me';
$handler->display->display_options['fields']['field_about_me']['label'] = '';
$handler->display->display_options['fields']['field_about_me']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_about_me']['alter']['text'] = '<h2>About Me</h2>[field_about_me]';
$handler->display->display_options['fields']['field_about_me']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_about_me']['hide_alter_empty'] = FALSE;
/* Field: User: About My Research */
$handler->display->display_options['fields']['field_about_my_research']['id'] = 'field_about_my_research';
$handler->display->display_options['fields']['field_about_my_research']['table'] = 'field_data_field_about_my_research';
$handler->display->display_options['fields']['field_about_my_research']['field'] = 'field_about_my_research';
$handler->display->display_options['fields']['field_about_my_research']['label'] = '';
$handler->display->display_options['fields']['field_about_my_research']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_about_my_research']['alter']['text'] = '<h2>About My Research</h2>[field_about_my_research]';
$handler->display->display_options['fields']['field_about_my_research']['element_label_colon'] = FALSE;
/* Field: User: Family Name */
$handler->display->display_options['fields']['field_family_name']['id'] = 'field_family_name';
$handler->display->display_options['fields']['field_family_name']['table'] = 'field_data_field_family_name';
$handler->display->display_options['fields']['field_family_name']['field'] = 'field_family_name';
$handler->display->display_options['fields']['field_family_name']['label'] = '';
$handler->display->display_options['fields']['field_family_name']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_family_name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_family_name']['element_label_colon'] = FALSE;
/* Field: User: Given Name(s) */
$handler->display->display_options['fields']['field_given_name']['id'] = 'field_given_name';
$handler->display->display_options['fields']['field_given_name']['table'] = 'field_data_field_given_name';
$handler->display->display_options['fields']['field_given_name']['field'] = 'field_given_name';
$handler->display->display_options['fields']['field_given_name']['label'] = '';
$handler->display->display_options['fields']['field_given_name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_given_name']['alter']['text'] = '<strong>Name:</strong> [field_given_name] [field_family_name]<br/>';
$handler->display->display_options['fields']['field_given_name']['element_label_colon'] = FALSE;
/* Field: User: Institution */
$handler->display->display_options['fields']['field_institution']['id'] = 'field_institution';
$handler->display->display_options['fields']['field_institution']['table'] = 'field_data_field_institution';
$handler->display->display_options['fields']['field_institution']['field'] = 'field_institution';
$handler->display->display_options['fields']['field_institution']['label'] = '';
$handler->display->display_options['fields']['field_institution']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_institution']['alter']['text'] = '<strong>Institution:</strong> [field_institution]';
$handler->display->display_options['fields']['field_institution']['element_label_colon'] = FALSE;
/* Contextual filter: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
$handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'picture' => 'picture',
  'field_about_me' => 'field_about_me',
  'field_about_my_research' => 'field_about_me',
  'field_family_name' => 'picture',
  'field_given_name' => 'picture',
  'field_institution' => 'picture',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'picture' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_about_me' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_about_my_research' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_family_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_given_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_institution' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;

/* Display: User Page 2 */
$handler = $view->new_display('block', 'User Page 2', 'block_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'field_favourites' => 'field_favourites',
  'field_tips_area' => 'field_favourites',
  'field_tips_institute' => 'field_favourites',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_favourites' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_tips_area' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_tips_institute' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: My favourite OA journal(s) / repositories */
$handler->display->display_options['fields']['field_favourites']['id'] = 'field_favourites';
$handler->display->display_options['fields']['field_favourites']['table'] = 'field_data_field_favourites';
$handler->display->display_options['fields']['field_favourites']['field'] = 'field_favourites';
$handler->display->display_options['fields']['field_favourites']['label'] = '';
$handler->display->display_options['fields']['field_favourites']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_favourites']['alter']['text'] = '<h2>My favourite OA journal(s) / repositories</h2>[field_favourites]';
$handler->display->display_options['fields']['field_favourites']['element_label_colon'] = FALSE;
/* Field: User: My tips for researchers in the same subject area */
$handler->display->display_options['fields']['field_tips_area']['id'] = 'field_tips_area';
$handler->display->display_options['fields']['field_tips_area']['table'] = 'field_data_field_tips_area';
$handler->display->display_options['fields']['field_tips_area']['field'] = 'field_tips_area';
$handler->display->display_options['fields']['field_tips_area']['label'] = '';
$handler->display->display_options['fields']['field_tips_area']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_tips_area']['alter']['text'] = '<h2>My tips for researchers in the same subject area</h2>[field_tips_area]';
$handler->display->display_options['fields']['field_tips_area']['element_label_colon'] = FALSE;
/* Field: User: My tips for researchers at my institute */
$handler->display->display_options['fields']['field_tips_institute']['id'] = 'field_tips_institute';
$handler->display->display_options['fields']['field_tips_institute']['table'] = 'field_data_field_tips_institute';
$handler->display->display_options['fields']['field_tips_institute']['field'] = 'field_tips_institute';
$handler->display->display_options['fields']['field_tips_institute']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_tips_institute']['alter']['text'] = '<h2>My tips for researchers at my institute</h2>[field_tips_institute]';
return $view;
}
