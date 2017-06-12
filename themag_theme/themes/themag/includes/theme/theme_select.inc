<?php

/**
 * @file
 * Overriding theme_select().
 */

/**
 * Returns HTML for a select form element with bootstrap html markup.
 *
 * @see https://api.drupal.org/api/drupal/includes!form.inc/function/theme_select/7.x
 */
function themag_select($variables) {
  $element = $variables['element'];
  element_set_attributes($element, array('id', 'name', 'size'));
  _form_set_class($element, array('form-select', 'form-control'));

  return '<select' . drupal_attributes($element['#attributes']) . '>' . form_select_options($element) . '</select>';
}
