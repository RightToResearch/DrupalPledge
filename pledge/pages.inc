<?php
/**
 * pledge: pages.inc
 * ==================
 *
 * Implementation of pages using the panels module.
 */

/**
 * The <front> page
 */
function pledge_pages_home() {
$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'home';
$page->task = 'page';
$page->admin_title = 'Home';
$page->admin_description = '';
$page->path = 'home';
$page->access = array();
$page->menu = array(
  'type' => 'normal',
  'title' => 'Home',
  'name' => 'main-menu',
  'weight' => '-50',
  'parent' => array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
  ),
);
$page->arguments = array();
$page->conf = array(
  'admin_paths' => FALSE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_home_panel_context';
$handler->task = 'page';
$handler->subtask = 'home';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 1,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
);
$display = new panels_display();
$display->layout = 'twocol_stacked';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'left' => NULL,
    'right' => NULL,
    'top' => NULL,
    'bottom' => NULL,
  ),
);
$display->cache = array();
$display->title = 'NoTitle';
$display->uuid = 'f4e83f22-0f1c-4fc1-ad39-6be43fdaa0a4';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b8f37d0c-a35e-4f8e-9c66-e476f25a79d9';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'views-signatories-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b8f37d0c-a35e-4f8e-9c66-e476f25a79d9';
  $display->content['new-b8f37d0c-a35e-4f8e-9c66-e476f25a79d9'] = $pane;
  $display->panels['bottom'][0] = 'new-b8f37d0c-a35e-4f8e-9c66-e476f25a79d9';
  $pane = new stdClass();
  $pane->pid = 'new-4e4f69b1-7a4c-4b4c-9f9b-902e379af856';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'views-signatories-block_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4e4f69b1-7a4c-4b4c-9f9b-902e379af856';
  $display->content['new-4e4f69b1-7a4c-4b4c-9f9b-902e379af856'] = $pane;
  $display->panels['bottom'][1] = 'new-4e4f69b1-7a4c-4b4c-9f9b-902e379af856';
  $pane = new stdClass();
  $pane->pid = 'new-ee5e65bf-06d2-4ea9-8b91-511b0cc62f24';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'pledge-text-pledge';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ee5e65bf-06d2-4ea9-8b91-511b0cc62f24';
  $display->content['new-ee5e65bf-06d2-4ea9-8b91-511b0cc62f24'] = $pane;
  $display->panels['left'][0] = 'new-ee5e65bf-06d2-4ea9-8b91-511b0cc62f24';
  $pane = new stdClass();
  $pane->pid = 'new-10834f5c-b8af-4a45-9e13-65f9ee66abe3';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'pledge-sign-pledge';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '10834f5c-b8af-4a45-9e13-65f9ee66abe3';
  $display->content['new-10834f5c-b8af-4a45-9e13-65f9ee66abe3'] = $pane;
  $display->panels['right'][0] = 'new-10834f5c-b8af-4a45-9e13-65f9ee66abe3';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;

return $page;
}

function pledge_pages_support() {
$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'support';
$page->task = 'page';
$page->admin_title = 'Support';
$page->admin_description = '';
$page->path = 'support';
$page->access = array();
$page->menu = array(
  'type' => 'normal',
  'title' => 'Support',
  'name' => 'navigation',
  'weight' => '0',
  'parent' => array(
    'type' => 'tab',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
  ),
);
$page->arguments = array();
$page->conf = array(
  'admin_paths' => FALSE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_support_panel_context';
$handler->task = 'page';
$handler->subtask = 'support';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
);
$display = new panels_display();
$display->layout = 'twocol_bricks';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'top' => NULL,
    'left_above' => NULL,
    'right_above' => NULL,
    'middle' => NULL,
    'left_below' => NULL,
    'right_below' => NULL,
    'bottom' => NULL,
  ),
);
$display->cache = array();
$display->title = 'We\'re here to help...';
$display->uuid = 'af7464e7-fdcd-4e0e-874b-754d4c1a4f3c';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-97addcc8-a070-43e1-9f59-1679c8976f62';
  $pane->panel = 'left_above';
  $pane->type = 'block';
  $pane->subtype = 'pledge-here-to-help';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '97addcc8-a070-43e1-9f59-1679c8976f62';
  $display->content['new-97addcc8-a070-43e1-9f59-1679c8976f62'] = $pane;
  $display->panels['left_above'][0] = 'new-97addcc8-a070-43e1-9f59-1679c8976f62';
  $pane = new stdClass();
  $pane->pid = 'new-8ac8fdb3-342f-4170-aa92-cb9f010df37a';
  $pane->panel = 'right_above';
  $pane->type = 'block';
  $pane->subtype = 'pledge-progress-pledge';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8ac8fdb3-342f-4170-aa92-cb9f010df37a';
  $display->content['new-8ac8fdb3-342f-4170-aa92-cb9f010df37a'] = $pane;
  $display->panels['right_above'][0] = 'new-8ac8fdb3-342f-4170-aa92-cb9f010df37a';
  $pane = new stdClass();
  $pane->pid = 'new-b6915101-ce43-4aa7-b87b-9542daf76140';
  $pane->panel = 'right_above';
  $pane->type = 'block';
  $pane->subtype = 'pledge-ways-to-help';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b6915101-ce43-4aa7-b87b-9542daf76140';
  $display->content['new-b6915101-ce43-4aa7-b87b-9542daf76140'] = $pane;
  $display->panels['right_above'][1] = 'new-b6915101-ce43-4aa7-b87b-9542daf76140';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;

return $page;
}
