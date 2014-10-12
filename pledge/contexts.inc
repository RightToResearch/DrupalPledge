<?php

function pledge_contexts_support() {
$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'support';
$context->description = 'Modifies arrangement of support pages';
$context->tag = '';
$context->conditions = array(
  'node' => array(
    'values' => array(
      'support_page' => 'support_page',
    ),
    'options' => array(
      'node_form' => '0',
    ),
  ),
  'path' => array(
    'values' => array(
      'support' => 'support',
      'user/*' => 'user/*',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'views-support-block' => array(
        'module' => 'views',
        'delta' => 'support-block',
        'region' => 'sidebar_first',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 0;

return $context;
}

function pledge_contexts_users(){
$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'users';
$context->description = '';
$context->tag = '';
$context->conditions = array(
  'user_page' => array(
    'values' => array(
      'view' => 'view',
    ),
    'options' => array(
      'mode' => 'all',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'views-mentors-block' => array(
        'module' => 'views',
        'delta' => 'mentors-block',
        'region' => 'content',
        'weight' => '-10',
      ),
      'views-mentors-block_1' => array(
        'module' => 'views',
        'delta' => 'mentors-block_1',
        'region' => 'content',
        'weight' => '-9',
      ),
      'views-support-block' => array(
        'module' => 'views',
        'delta' => 'support-block',
        'region' => 'sidebar_first',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 0;
return $context;
}

function pledge_contexts_support_pages() {
$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'support_pages';
$context->description = '';
$context->tag = '';
$context->conditions = array(
  'node' => array(
    'values' => array(
      'support_page' => 'support_page',
    ),
    'options' => array(
      'node_form' => '0',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'pledge-read-pledge' => array(
        'module' => 'pledge',
        'delta' => 'read-pledge',
        'region' => 'content',
        'weight' => '1',
      ),
    ),
  ),
);
$context->condition_mode = 0;

return $context;
}
