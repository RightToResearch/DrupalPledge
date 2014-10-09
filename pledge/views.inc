<?php

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
$handler = $view->new_display('block', 'SigCountBlock', 'block_1');
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


return $view;
}