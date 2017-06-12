<?php

/**
 * @file
 * Header.
 */

// Get Theme Settings.
$header_style = theme_get_setting('themag_header_style');
$toggle_main_menu = theme_get_setting('toggle_main_menu');
$toggle_social_menu = theme_get_setting('themag_toggle_social_menu');
$themag_social_menu_custom_html_toggle = theme_get_setting('themag_social_menu_custom_html_toggle');
$themag_user_action_menu_custom_html_toggle = theme_get_setting('themag_user_action_menu_custom_html_toggle');
$toggle_user_action_menu = theme_get_setting('themag_toggle_user_action_menu');
$themag_main_menu = theme_get_setting('themag_main_menu');

// Make main menu to use the Superfish plugin.
variable_set('superfish_menu_1', $themag_main_menu . ':0');

// Add Sticky Header status to Drupal.settings.ThrMAG
drupal_add_js(array('TheMAG' => array('sticky_header' => theme_get_setting('themag_sticky_header'))), 'setting');


if ($header_style) {
  switch ($header_style) {
    case 'header_a':
      $themag_sticky_header = theme_get_setting('themag_sticky_header');
      include_once 'header_a.inc';
      break;

    case 'header_b':
      include_once 'header_b.inc';
      break;

    case 'header_c':
      $themag_header_banner = theme_get_setting('themag_header_banner');
      include_once 'header_c.inc';
      break;

    case 'header_d':
      $themag_header_banner = theme_get_setting('themag_header_banner');
      include_once 'header_d.inc';
      break;

    case 'custom_header':
      $themag_sticky_header = theme_get_setting('themag_sticky_header');
      $themag_header_banner = theme_get_setting('themag_header_banner');
      include_once 'custom_header.inc';
      break;
  }
}
?>

<?php
 // Responsive side menu.
?>
<div class="responsive-menu-overlay"></div>
<div id="responsive-navigation" style="display: none;">
  <?php if ($toggle_main_menu) : ?>
    <?php print _render_block('system', $themag_main_menu); ?>
  <?php endif; ?>
</div>
