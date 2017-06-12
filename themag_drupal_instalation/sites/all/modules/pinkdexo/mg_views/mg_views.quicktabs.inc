<?php
/**
 * @file
 * mg_views.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function mg_views_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'popular';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Popular Content';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'popular_content',
      'display' => 'embed_3',
      'args' => '',
      'title' => 'Most Viewed This Week',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'most_commented',
      'display' => 'default',
      'args' => '',
      'title' => 'Most Commented',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Most Commented');
  t('Most Viewed This Week');
  t('Popular Content');

  $export['popular'] = $quicktabs;

  return $export;
}
