<?php

/**
 * @file
 * Overriding theme_progress_bar().
 */

/**
 * Returns HTML for a progress bar with bootstrap html markup.
 *
 * @see https://api.drupal.org/api/drupal/includes%21theme.inc/function/theme_progress_bar/7.x
 */
function themag_progress_bar($variables) {
  $output = '<div class="my-2">';
  $output .= '<div class="text-xs-center">' . $variables['message'] . ': ' . $variables['percent'] . '%</div>';
  $output .= '<progress class="progress" value="' . $variables['percent'] . '" max="100" aria-describedby="' . $variables['message'] . '">';
  $output .= '<div class="progress">';
  $output .= '<span class="progress-bar" style="width: ' . $variables['percent'] . '%"></span>';
  $output .= '</div>';
  $output .= '</progress>';
  $output .= '</div>';
  return $output;
}
