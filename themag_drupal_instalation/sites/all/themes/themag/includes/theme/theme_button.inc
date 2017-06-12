<?php

/**
 * @file
 * Overriding theme_button().
 */

/**
 * Returns HTML for buttons with bootstrap markup.
 *
 * @see https://api.drupal.org/api/drupal/includes!form.inc/function/theme_button/7.x
 */
function themag_button($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'submit';
  element_set_attributes($element, array('id', 'name', 'value'));

  $element['#attributes']['class'][] = 'form-' . $element['#button_type'];
  $element['#attributes']['class'][] = 'btn';
  $element['#attributes']['class'][] = 'btn-outline-primary';
  if (!empty($element['#attributes']['disabled'])) {
    $element['#attributes']['class'][] = 'form-button-disabled';
  }

  return '<input' . drupal_attributes($element['#attributes']) . ' />';
}
