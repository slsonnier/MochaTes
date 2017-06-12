<?php
/**
 * @file
 * mg_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mg_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['panels_mini-content_author_social_buttons'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'content_author_social_buttons',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'themag' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'themag',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'themag' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'themag',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
