<?php

/**
 * @file
 * Preprocessing html.
 */

/**
 * Implements template_preprocess_html().
 */
function themag_preprocess_html(&$variables) {

  // Viewport meta tag for controlling layout on mobile browsers.
  $viewport = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'viewport',
      'content' => 'width=device-width, initial-scale=1, shrink-to-fit=no',
    ),
  );
  drupal_add_html_head($viewport, 'viewport');

  // Instructs IE to use highest available engine
  // for established and emerging industry standards.
  $x_ua_compatible = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'http-equiv' => 'X-UA-Compatible',
      'content' => 'IE=Edge',
    ),
  );
  drupal_add_html_head($x_ua_compatible, 'x_ua_compatible');

  // This provides access to objects loaded by the current router item.
  // For example, on node/%node page, the router loads the %node object.
  $node = mg_menu_get_object('node', 1);

  // Add CSS extra classes to body depending on the node layout style.
  if ($node && isset($node->nid) && $node->type == 'mg_article') {
    $wrapper = entity_metadata_wrapper('node', $node);
    $post_layout = $wrapper->field_mg_post_layout->value();
    $post_options = $wrapper->field_mg_post_options->value();
    $variables['classes_array'][] = str_replace('_', '-', $post_layout);

    foreach ($post_options as $post_option) {
      $variables['classes_array'][] = str_replace('_', '-', $post_option);
    }
  }

  // Loading CSS Styles and JavasScript plugins.
  // Path to plugin directory.
  $themag_path = drupal_get_path('theme', 'themag');
  $plugins_path = $themag_path . '/assets/vendor';

  // Load Bootstrap JavaScripts
  drupal_add_js($plugins_path . '/tether/dist/js/tether.min.js');
  drupal_add_js($plugins_path . '/bootstrap/dist/js/bootstrap.min.js');


  // Load Waypoints.
  drupal_add_js($plugins_path . '/waypoints/lib/jquery.waypoints.min.js');
  drupal_add_js($plugins_path . '/waypoints/lib/shortcuts/inview.min.js');

  // Load Sticky-kit.
  drupal_add_js($plugins_path . '/sticky-kit/jquery.sticky-kit.min.js');

  // Smooth Scroll.
  drupal_add_js($plugins_path . '/smooth-scroll/dist/js/smooth-scroll.min.js');

  // Load Photoswipe.
  drupal_add_css($plugins_path . '/photoswipe/dist/photoswipe.css');
  drupal_add_css($plugins_path . '/photoswipe/dist/default-skin/default-skin.css');
  drupal_add_js($plugins_path . '/photoswipe/dist/photoswipe.min.js');
  drupal_add_js($plugins_path . '/photoswipe/dist/photoswipe-ui-default.min.js');

  // Load Sidr responsive menu.
  drupal_add_js($plugins_path . '/sidr/dist/jquery.sidr.min.js');

  // Load Video JS.
  drupal_add_css($plugins_path . '/video.js/dist/video-js.min.css');
  drupal_add_css($themag_path . '/assets/css/video-js.css');
  drupal_add_js($plugins_path . '/video.js/dist/video.min.js');

  // Load Video JS.
  drupal_add_js($plugins_path . '/parallax.js/parallax.min.js');

  // Load Theme CSS.
  drupal_add_css($themag_path . '/assets/css/style.css');

  // Custom color styles.
  if (theme_get_setting('themag_use_custom_theme_color')) {
    drupal_add_css($themag_path . '/includes/theme-color/color.css.php',
      array('preprocess' => FALSE));
  }

  // Custom CSS styles.
  if (theme_get_setting('themag_use_custom_css_file')) {
    drupal_add_css($themag_path . '/assets/css/custom.css');
  }

  // Additional CSS style from theme settings.
  $additional_css = theme_get_setting('themag_additional_css');
  if ($additional_css != '') {
    drupal_add_css($additional_css, array('type' => 'inline'));
  }

  // Theme main.js.
  drupal_add_js($themag_path . '/assets/js/main.min.js');

  // Custom js file.
  if (theme_get_setting('themag_use_custom_js_file')) {
    drupal_add_js($themag_path . '/assets/js/custom.js');
  }
}

/**
 * Creates a static variable for menu_get_object() results.
 */
function mg_menu_get_object($entity = 'node', $arg = '1') {
  $loaded_entity = &drupal_static(__FUNCTION__, NULL);
  if (!$loaded_entity) {
    $loaded_entity = menu_get_object($entity, $arg);
  }
  return isset($loaded_entity) ? $loaded_entity : NULL;
}
