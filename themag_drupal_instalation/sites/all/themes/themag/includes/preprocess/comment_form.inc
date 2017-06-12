<?php

/**
 * @file
 * Comment form alter.
 */

/**
 * Implements hook_form_comment_form_alter().
 */
function themag_form_comment_form_alter(&$form, &$form_state) {

  // Name, E-mail and Homepage field goes under comment body.
  $form['author']['#weight'] = 10;

  // Name Field.
  $form['author']['name']['#title'] = 'Name';
  $form['author']['name']['#attributes']['placeholder'] = $form['author']['name']['#title'];

  // E-mail Field.
  $form['author']['mail']['#attributes']['placeholder'] = $form['author']['mail']['#title'];

  // Homepage Homepage Field.
  $form['author']['homepage']['#access'] = FALSE;

  // Hide author name.
  $form['author']['_author']['#access'] = FALSE;

  // Comment Subject.
  $form['subject']['#attributes']['placeholder'] = $form['subject']['#title'];
  $form['subject']['#weight'] = -5;
  $form['subject']['#size'] = 30;

  // Comment body field language.
  $lang = $form['comment_body']['#language'];
  // Comment Body.
  $form['comment_body']['#weight'] = -10;
  $form['comment_body'][$lang][0]['#attributes']['placeholder'] = t('Write a comment…');
  $form['comment_body'][$lang][0]['#format'] = 'plain_text';
  $form['comment_body']['#after_build'][] = 'themag_custom_comment_form';

}

/**
 * Removes formatting options on comments body field.
 */
function themag_custom_comment_form(&$form) {
  $lang = $form['#language'];
  $form[$lang][0]['format']['#access'] = FALSE;
  return $form;
}
