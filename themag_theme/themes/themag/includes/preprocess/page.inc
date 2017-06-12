<?php

/**
 * @file
 * Preprocessing page.
 */

/**
 * Implements template_preprocess_page().
 */
function themag_preprocess_page(&$variables) {

  // Create a page suggestions depending on header status.
  $drupal_header = drupal_get_http_header('status');

  if ($drupal_header == '404 Not Found') {
    $variables['theme_hook_suggestions'][] = 'page__404';
  }

  if ($drupal_header == '403 Forbidden') {
    $variables['theme_hook_suggestions'][] = 'page__403';
  }

  // Page suggestions depending on content type.
  if (isset($variables['node']->type)) {
    $variables['theme_hook_suggestions'][] = 'page__node_' . $variables['node']->type;
  }

  // Create a page suggestions when page manager is used.
  if (module_exists('page_manager') && count(page_manager_get_current_page())) {
    $variables['theme_hook_suggestions'][] = 'page__panels';
  }
}
