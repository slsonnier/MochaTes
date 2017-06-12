<?php
/**
 * @file
 * mg_pages_and_panels.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mg_pages_and_panels_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['panels_mini-footer'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'footer',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'themag' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'themag',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'themag' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'themag',
        'weight' => -1,
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

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'themag' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'themag',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'themag' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'themag',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
