<?php

/**
 * @file
 * Overriding theme_breadcrumb().
 */

/**
 * Returns HTML for breadcrumb with bootstrap html markup.
 *
 * @see https://api.drupal.org/api/drupal/includes%21theme.inc/function/theme_breadcrumb/7.x
 */
function themag_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    $output .= '<ul class="breadcrumb">';
    foreach ($breadcrumb as $crumb) {
      $output .= '<li class="breadcrumb-item">' . $crumb . '</li>';
    }
    $output .= '</ul>';
    return $output;
  }
}
