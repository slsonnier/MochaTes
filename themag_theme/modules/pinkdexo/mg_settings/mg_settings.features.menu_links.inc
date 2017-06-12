<?php
/**
 * @file
 * mg_settings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mg_settings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_i-classfa-fa-facebook-aria-hiddentruei:https://www.facebook.com/envato.
  $menu_links['menu-social-menu_i-classfa-fa-facebook-aria-hiddentruei:https://www.facebook.com/envato'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'https://www.facebook.com/envato',
    'router_path' => '',
    'link_title' => '<i class="fa fa-facebook" aria-hidden="true"></i>',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-menu_i-classfa-fa-facebook-aria-hiddentruei:https://www.facebook.com/envato',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_i-classfa-fa-instagram-aria-hiddentruei:https://instagram.com.
  $menu_links['menu-social-menu_i-classfa-fa-instagram-aria-hiddentruei:https://instagram.com'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'https://instagram.com',
    'router_path' => '',
    'link_title' => '<i class="fa fa-instagram" aria-hidden="true"></i>',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-menu_i-classfa-fa-instagram-aria-hiddentruei:https://instagram.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_i-classfa-fa-pinterest-aria-hiddentruei:https://pinterest.com.
  $menu_links['menu-social-menu_i-classfa-fa-pinterest-aria-hiddentruei:https://pinterest.com'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'https://pinterest.com',
    'router_path' => '',
    'link_title' => '<i class="fa fa-pinterest" aria-hidden="true"></i>',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-menu_i-classfa-fa-pinterest-aria-hiddentruei:https://pinterest.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_i-classfa-fa-twitter-aria-hiddentruei:https://twitter.com.
  $menu_links['menu-social-menu_i-classfa-fa-twitter-aria-hiddentruei:https://twitter.com'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'https://twitter.com',
    'router_path' => '',
    'link_title' => '<i class="fa fa-twitter" aria-hidden="true"></i>',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-menu_i-classfa-fa-twitter-aria-hiddentruei:https://twitter.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_i-classfa-fa-youtube-aria-hiddentruei:https://youtube.com.
  $menu_links['menu-social-menu_i-classfa-fa-youtube-aria-hiddentruei:https://youtube.com'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'https://youtube.com',
    'router_path' => '',
    'link_title' => '<i class="fa fa-youtube" aria-hidden="true"></i>',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-menu_i-classfa-fa-youtube-aria-hiddentruei:https://youtube.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<i class="fa fa-facebook" aria-hidden="true"></i>');
  t('<i class="fa fa-instagram" aria-hidden="true"></i>');
  t('<i class="fa fa-pinterest" aria-hidden="true"></i>');
  t('<i class="fa fa-twitter" aria-hidden="true"></i>');
  t('<i class="fa fa-youtube" aria-hidden="true"></i>');
  t('Home');

  return $menu_links;
}
