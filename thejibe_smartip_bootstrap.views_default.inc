<?php
/**
 * @file
 * thejibe_smartip_bootstrap.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function thejibe_smartip_bootstrap_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'smartip_example';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SmartIP example';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SmartIP Example';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<ul class="menu">
  <li><?php print l(\'Worldwide\', \'location/switch/ALL\'); ?></li>
  <li><?php print l(\'North America\', \'location/switch/NA\'); ?></li>
  <li><?php print l(\'South America\', \'location/switch/SA\'); ?></li>
  <li><?php print l(\'Europe\', \'location/switch/EU\'); ?></li>
  <li><?php print l(\'Asia\', \'location/switch/AS\'); ?></li>
  <li><?php print l(\'Africa\', \'location/switch/AF\'); ?></li>
  <li><?php print l(\'Australia + Oceania\', \'location/switch/AU\'); ?></li>
  <li><?php print l(\'Antarctica\', \'location/switch/AQ\'); ?></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There is no content at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
  /* Contextual filter: Content: Location (field_smartip_location) */
  $handler->display->display_options['arguments']['field_smartip_location_value']['id'] = 'field_smartip_location_value';
  $handler->display->display_options['arguments']['field_smartip_location_value']['table'] = 'field_data_field_smartip_location';
  $handler->display->display_options['arguments']['field_smartip_location_value']['field'] = 'field_smartip_location_value';
  $handler->display->display_options['arguments']['field_smartip_location_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_smartip_location_value']['exception']['value'] = 'ALL';
  $handler->display->display_options['arguments']['field_smartip_location_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_smartip_location_value']['default_argument_options']['code'] = 'return thejibe_smartip_bootstrap_smartip_location();';
  $handler->display->display_options['arguments']['field_smartip_location_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_smartip_location_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_smartip_location_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_smartip_location_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'smartip-example';
  $export['smartip_example'] = $view;

  return $export;
}
