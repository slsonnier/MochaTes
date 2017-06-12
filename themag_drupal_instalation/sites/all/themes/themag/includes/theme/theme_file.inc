<?php

/**
 * @file
 * Overriding theme_file().
 */

/**
 * Returns HTML for a file upload form element with bootstrap custom-file-input markup.
 *
 * @see https://api.drupal.org/api/drupal/includes!form.inc/function/theme_file/7.x
 */
function themag_file($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'file';
  element_set_attributes($element, array('id', 'name', 'size'));
  _form_set_class($element, array('form-file', 'custom-file-input'));

  $output = '';
  $output .= '<label class="custom-file">';
  $output .= '<input' . drupal_attributes($element['#attributes']) . ' />';
  $output .= '<span class="custom-file-control"></span>';
  $output .= '</label>';

  return $output;
}
