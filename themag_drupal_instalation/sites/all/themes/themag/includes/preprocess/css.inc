<?php

/**
 * @file
 * Preprocessing CSS.
 */

/**
 * Implements hook_css_alter().
 */
function themag_css_alter(&$css) {
  $exclude = array(
    'modules/system/system.messages.css' => FALSE,
    'sites/all/modules/panels/panels_ipe/css/panels_ipe.css' => FALSE,
    'modules/comment/comment.css' => FALSE,
    'modules/user/user.css' => FALSE,
    'modules/node/node.css' => FALSE,
    'modules/system/system.menus.css' => FALSE,
    'sites/all/modules/views/css/views.css' => FALSE,
    'modules/system/system.theme.css' => FALSE,
  );

  $css = array_diff_key($css, $exclude);
}
