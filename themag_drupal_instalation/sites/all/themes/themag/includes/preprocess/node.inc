<?php

/**
 * @file
 * Preprocessing node.
 */

/**
 * Implements template_preprocess_node().
 */
function themag_preprocess_node(&$variables) {

  // Remove link from authors name on teasers.
  if ($variables['submitted'] && $variables['view_mode'] != 'full') {
    $variables['submitted'] = t('by: !name, !datetime', array(
      '!name' => '<span class="name">' . strip_tags($variables['name']) . '</span>',
      '!datetime' => format_date($variables['node']->created, 'short')
    ));
  }
  else {
    $variables['submitted'] = t('by: !name, !datetime', array(
      '!name' => $variables['name'],
      '!datetime' => format_date($variables['node']->created, 'short'),
    ));
  }

  // Theme suggestions by view mode.
  switch ($variables['type']) {
    case 'mg_article':
      array_splice($variables['theme_hook_suggestions'], 1, 0, 'node__mg__' . $variables['view_mode']);
      break;
  }

}
