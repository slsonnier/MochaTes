<?php

/**
 * @file
 * Overriding theme_menu_local_task().
 */

/**
 * Returns HTML for a single local task link with bootstrap html markup.
 *
 * @see https://api.drupal.org/api/drupal/includes!menu.inc/function/theme_menu_local_task/7.x
 */
function themag_menu_local_task($variables) {
  $link = $variables['element']['#link'];
  $link_text = $link['title'];

  if (!empty($variables['element']['#active'])) {
    // Add text to indicate active tab for non-visual users.
    $active = '<span class="element-invisible">' . t('(active tab)') . '</span>';

    // If the link does not contain HTML already, check_plain() it now.
    // After we set 'html'=TRUE the link will not be sanitized by l().
    if (empty($link['localized_options']['html'])) {
      $link['title'] = check_plain($link['title']);
    }
    $link['localized_options']['html'] = TRUE;
    $link_text = t('!local-task-title!active', array('!local-task-title' => $link['title'], '!active' => $active));
  }

  $options = array(
    'attributes' => array('class' => array('nav-link')),
    'html' => $link['localized_options'],
  );

  return '<li class="nav-item">' . l($link_text, $link['href'], $options) . "</li>\n";
}
