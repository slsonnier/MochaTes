<?php

/**
 * @file
 * Common functions that many theme will need to reference.
 */

/**
 * Block Rendering.
 */
function _render_block($module, $block_id) {
  $block = block_load($module, $block_id);
  $block_content = _block_render_blocks(array($block));
  $build = _block_get_renderable_array($block_content);
  $block_rendered = drupal_render($build);

  return $block_rendered;
}

/**
 * Menu Rendering.
 */
function _render_menu($menu_name, $attributes = array('class' => array('links')), $menu_level = 0) {
  if (!is_array($menu_name)) {
    $menu_name = menu_navigation_links($menu_name, $menu_level);
  }
  return theme('links__system_main_menu', array('links' => $menu_name, 'attributes' => $attributes));
}
