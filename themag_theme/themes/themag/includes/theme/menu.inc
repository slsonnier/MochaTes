<?php

/**
 * @file
 * Overriding theme_link().
 */

/**
 * Returns HTML for a menu links.
 *
 * @see https://api.drupal.org/api/drupal/includes!theme.inc/function/theme_link/7.x
 */
function themag_link($variables) {

  // This allows to use HTML in the menu link titles.
  $variables['options']['html'] = TRUE;

  $output = '';
  $output .= '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . drupal_attributes($variables['options']['attributes']) . '>';
  $output .= ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text']));
  $output .= '</a>';

  return $output;
}
