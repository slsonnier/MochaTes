<?php
/**
 * @file
 * mg_pages_and_panels.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function mg_pages_and_panels_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'ad_300x250';
  $content->admin_title = 'IAB Medium Rectangle (banner example 300x250)';
  $content->admin_description = 'IAB Medium Rectangle (banner example 300x250)';
  $content->category = 'TheMAG Examples';
  $content->settings = array(
    'admin_title' => 'Banner 300x250',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div style="width: 100%; height: 250px; background: #00bcd4; text-align: center; line-height: 250px"><small style="color: #FFF;">advertisement</small></div>
',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $export['ad_300x250'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'ad_300x600';
  $content->admin_title = 'IAB Half Page (banner example 300x600)';
  $content->admin_description = 'IAB Half Page (banner example 300x600)';
  $content->category = 'TheMAG Examples';
  $content->settings = array(
    'admin_title' => 'Banner 300x250',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div style="width: 100%;  height: 600px; background: #00bcd4; text-align: center; line-height: 600px"><small style="color: #FFF;">advertisement</small></div>
',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $export['ad_300x600'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'mg_adbout_us';
  $content->admin_title = 'About Us';
  $content->admin_description = 'About Us';
  $content->category = 'TheMAG Examples';
  $content->settings = array(
    'admin_title' => 'About',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>Sed nulla lorem, posuere sed venenatis et, consequat vitae risus. Duis viverra mauris vel sapien laoreet ultrices.</p>

<p>Vivamus vel erat mi. Pellentesque lobortis nunc sed egestas elementum. Phasellus volutpat fringilla diam, eu fermentum ante tincidunt quis. Sed congue dui nisl, sit amet ornare turpis blandit et.</p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['mg_adbout_us'] = $content;

  return $export;
}
