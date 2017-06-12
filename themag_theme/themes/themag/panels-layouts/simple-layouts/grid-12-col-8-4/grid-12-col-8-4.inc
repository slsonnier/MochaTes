<?php

/**
 * @file
 * Implementation of hook_panels_layouts.
 */

// Plugin definition.
$plugin = array(
  'title' => t('2 Column'),
  'category' => t('Simple Layouts'),
  'icon' => 'grid-12-col-8-4.png',
  'theme' => 'grid-12-col-8-4',
  'admin css' => '../../mg-grid-admin.css',
  'regions' => array(
    'col_1' => t('Content'),
    'col_2' => t('Content'),
  ),
);
