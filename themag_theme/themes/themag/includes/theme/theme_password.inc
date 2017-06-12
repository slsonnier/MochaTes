<?php

/**
 * @file
 * Overriding theme_password().
 */

/**
 * Returns HTML for a password form element with bootstrap html markup.
 *
 * @see https://api.drupal.org/api/drupal/includes!form.inc/function/theme_password/7.x
 */
function themag_password($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'password';
  element_set_attributes($element, array('id', 'name', 'size', 'maxlength'));
  _form_set_class($element, array('form-text', 'form-control'));

  return '<input' . drupal_attributes($element['#attributes']) . ' />';
}
