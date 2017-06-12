<?php

/**
 * @file
 * Implementation of hook_panels_layouts.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Layout 3'),
  'category' => t('TheMAG'),
  'icon' => 'l3.png',
  'theme' => 'l3',
  'admin css' => '../mg-grid-admin.css',
  'regions' => array(
    'featured_content' => t('Featured Content'),
    'content_top' => t('Content Top'),
    'content_main' => t('Main Content'),
    'content_bottom' => t('Content Bottom'),
    'sidebar_right' => t('Sidebar Right'),
  ),
);
