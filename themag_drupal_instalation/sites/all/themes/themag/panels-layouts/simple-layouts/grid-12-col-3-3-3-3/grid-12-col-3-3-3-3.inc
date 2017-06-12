<?php

/**
 * @file
 * Implementation of hook_panels_layouts.
 */

// Plugin definition.
$plugin = array(
  'title' => t('4 Columns'),
  'category' => t('Simple Layouts'),
  'icon' => 'grid-12-col-3-3-3-3.png',
  'theme' => 'grid-12-col-3-3-3-3',
  'admin css' => '../../mg-grid-admin.css',
  'regions' => array(
    'col_1' => t('Content'),
    'col_2' => t('Content'),
    'col_3' => t('Content'),
    'col_4' => t('Content'),
  ),
);
