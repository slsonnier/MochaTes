<?php

/**
 * @file
 * Preprocessing forms.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function themag_form_search_block_form_alter(&$form, &$form_state, $form_id) {
  $form['search_block_form']['#attributes']['placeholder'] = theme_get_setting('themag_search_field_placeholder_text');

  // Use "Go" instead of "Submit".
  $form['actions']['submit']['#value'] = theme_get_setting('themag_search_button_text');
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function themag_form_search_form_alter(&$form, &$form_state, $form_id) {

  // Add 'basic-search-wrapper' class to basic search wrapper.
  $form['basic']['#attributes']['class'][] = 'basic-search-wrapper';

  // Use placeholders instead of label.
  $form['basic']['keys']['#attributes']['placeholder'] = theme_get_setting('themag_search_field_placeholder_text');
  unset($form['basic']['keys']['#title']);

  // Use theme settings to change default "Submit" button text.
  $form['basic']['submit']['#value'] = theme_get_setting('themag_search_button_text');

  // Advanced search form.
  if (isset($form['advanced']['keywords'])) {
    $form['advanced']['keywords']['or']['#attributes']['placeholder'] = $form['advanced']['keywords']['or']['#title'];
    $form['advanced']['keywords']['phrase']['#attributes']['placeholder'] = $form['advanced']['keywords']['phrase']['#title'];
    $form['advanced']['keywords']['negative']['#attributes']['placeholder'] = $form['advanced']['keywords']['negative']['#title'];

    unset($form['advanced']['keywords']['or']['#title']);
    unset($form['advanced']['keywords']['phrase']['#title']);
    unset($form['advanced']['keywords']['negative']['#title']);
  }

}
