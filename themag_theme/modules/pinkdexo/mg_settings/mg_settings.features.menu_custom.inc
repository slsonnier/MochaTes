<?php
/**
 * @file
 * mg_settings.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function mg_settings_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-footer-bar-menu.
  $menus['menu-footer-bar-menu'] = array(
    'menu_name' => 'menu-footer-bar-menu',
    'title' => 'Footer Menu',
    'description' => '',
  );
  // Exported menu: menu-social-menu.
  $menus['menu-social-menu'] = array(
    'menu_name' => 'menu-social-menu',
    'title' => 'Social Menu',
    'description' => 'Links to social networks profile pages',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Menu');
  t('Links to social networks profile pages');
  t('Main menu');
  t('Social Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
