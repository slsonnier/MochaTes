<?php

/**
 * @file
 * Implementation of hook_panels_layouts.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Layout 1'),
  'category' => t('TheMAG'),
  'icon' => 'l1.png',
  'theme' => 'l1',
  'admin css' => '../mg-grid-admin.css',
  'regions' => array(
    'featured_content' => t('Featured Content'),
    'content_1' => t('Content 1'),
    'content_2' => t('Content 2'),
    'content_3' => t('Content 3'),
    'content_4' => t('Content 4'),
    'content_5' => t('Content 5'),
    'content_6' => t('Content 6'),
  ),
);
