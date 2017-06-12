<?php

  /**
   * @file
   * Creates a dynamic CSS style based on the user's color scheme.
   */

  chdir(filesystem_base_path());
  define('DRUPAL_ROOT', getcwd());
  require_once "./includes/bootstrap.inc";
  drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
  header("Content-type: text/css");

  // General.
  $bg_color = theme_get_setting('themag_bg_color');
  $brand_color = theme_get_setting('themag_brand_color');
  $primary_dark_text = theme_get_setting('themag_primay_dark_text_color');
  $secondary_dark_text = theme_get_setting('themag_secondary_dark_text_color');
  $border_color = theme_get_setting('themag_borders_color');

  // Header.
  $header_bg = theme_get_setting('themag_header_bg');
  $header_top_bg = theme_get_setting('themag_header_top_bg');
  $header_link_color = theme_get_setting('themag_header_link_color');
  $header_link_over_color = theme_get_setting('themag_header_link_over_color');
  $themag_header_dropdown_bg = theme_get_setting('themag_header_dropdown_bg');
  $themag_header_dropdown_over_bg = theme_get_setting('themag_header_dropdown_over_bg');
  $themag_header_dropdown_link_color = theme_get_setting('themag_header_dropdown_link_color');
  $themag_header_dropdown_link_over_color = theme_get_setting('themag_header_dropdown_link_over_color');

  // Responsive menu.
  $themag_resp_menu_bg = theme_get_setting('themag_resp_menu_bg');
  $themag_resp_menu_link_color = theme_get_setting('themag_resp_menu_link_color');
  $themag_resp_menu_parent_link_bg = theme_get_setting('themag_resp_menu_parent_link_bg');
  $themag_resp_menu_parent_link_color = theme_get_setting('themag_resp_menu_parent_link_color');

  // Blocks.
  $block_title_color = theme_get_setting('themag_block_title_color');
  $block_title_border_color = theme_get_setting('themag_block_title_border_color');

  // Footer.
  $footer_bg = theme_get_setting('themag_footer_bg');
  $footer_text_color = theme_get_setting('themag_footer_text_color');
  $footer_borders_color = theme_get_setting('themag_footer_borders_color');
  $footer_block_title_color = theme_get_setting('themag_footer_block_title_color');
  $footer_block_title_border_color = theme_get_setting('themag_footer_block_title_border_color');
?>


body {
  background: <?php print $bg_color; ?>;
  color: <?php print $primary_dark_text; ?>;
}

a, a:hover {
  color: <?php print $brand_color; ?>;
}

.banner {
  border-color: <?php print $border_color; ?>;
}

.nav-tabs {
  border-color: <?php print $border_color; ?>;
}

.nav-tabs .nav-link.active,
.nav-tabs .nav-link.active:focus,
.nav-tabs .nav-link.active:hover,
.nav-tabs .nav-item.open .nav-link,
.nav-tabs .nav-item.open
.nav-link:focus,
.nav-tabs .nav-item.open .nav-link:hover {
  background-color: <?php print $bg_color; ?>;
  border-color: <?php print $border_color; ?> <?php print $border_color; ?> transparent;
}

.nav-tabs .nav-link:focus,
.nav-tabs .nav-link:hover {
  border-color: <?php print $border_color; ?>;
}

.nav-link {
  color: <?php print $primary_dark_text; ?>;
}

.nav-tabs .nav-link.active {
  color: <?php print $brand_color; ?>;
}


.nav-pills .nav-link.active,
.nav-pills .nav-link.active:focus,
.nav-pills .nav-link.active:hover,
.nav-pills .nav-item.open .nav-link,
.nav-pills .nav-item.open .nav-link:focus,
.nav-pills .nav-item.open .nav-link:hover {
  background-color: <?php print $brand_color; ?>;
}

.baack-to-top-button,
.baack-to-top-button:hover {
  background: <?php print $brand_color; ?>;
  color: #FFF;
}


<?php
  // ------------------
  // Forms
  // ------------------.
?>
.btn-outline-secondary,
.action-links a {
  border-color: <?php print $brand_color; ?>;
  color: <?php print $brand_color; ?>;
}

.btn-outline-secondary:hover,
.action-links a:hover {
  background-color: <?php print $brand_color; ?>;
  border-color: <?php print $brand_color; ?>;
}

.form-control {
  background-color: rgba(255, 255, 255, 0.5);
  border-color: rgba(200, 200, 200, 0.7);
}

.form-control:focus {
  background-color: rgba(255, 255, 255, 1);
  border-color: <?php print $brand_color; ?>;
}

.block-search input[type='submit'],
.basic-search-wrapper input[type='submit'],
.pane-search-form .container-inline input[type='submit'] {
  background-color: <?php print $brand_color; ?>;
  border-color: <?php print $brand_color; ?>;
}

.btn-primary,
.btn-primary:hover  {
  background-color: <?php print $brand_color; ?>;
  border-color: <?php print $brand_color; ?>;
}

.btn-outline-primary {
  color: <?php print $brand_color; ?>;
  border-color: <?php print $brand_color; ?>;
}

.btn-outline-primary:hover {
  background-color: <?php print $brand_color; ?>;
  border-color: <?php print $brand_color; ?>;
}


<?php
  // ------------------
  // Header
  // ------------------.
?>
.header--wrapper-top {
  background: <?php print $header_top_bg; ?>;
}

.header--wrapper {
  background: <?php print $header_bg; ?>;
  border-bottom-color: <?php print $header_bg; ?>;
  color: <?php print $header_link_color; ?>;
}

.user-action-menu {
  border-color: <?php print $header_link_color; ?>;
}

.header--wrapper a,
.sf-menu > li > a,
.sf-menu > li > .nolink {
  color: <?php print $header_link_color; ?>;
}

.header--wrapper a:hover {
  color: <?php print $header_link_over_color; ?>;
}

.sf-menu > li.sfHover > a,
.sf-menu > li.sfHover > .nolink,
.sf-menu ul sf-with-ul:before,
.sf-menu ul .nolink.sf-with-ul:before {
  color: <?php print $themag_header_dropdown_link_color; ?>;
}

.sf-menu ul,
.sf-menu ul ul,
.sf-menu li:hover,
.sf-menu li.sfHover  {
  background: <?php print $themag_header_dropdown_bg; ?>;
}

.sf-menu ul a,
.sf-menu ul sf-with-ul,
.sf-menu ul .nolink.sf-with-ul {
  color: <?php print $themag_header_dropdown_link_color; ?>;
}

.sf-menu ul a:hover,
.sf-menu ul li:hover,
.sf-menu ul li.sfHover,
.sf-menu ul sf-with-ul:hover,
.sf-menu ul .nolink.sf-with-ul:hover {
  background: <?php print $themag_header_dropdown_over_bg; ?>!important;
  color: <?php print $themag_header_dropdown_link_over_color; ?>;
}

<?php
  // ------------------
  // Responsive menu
  // ------------------.
?>

.sidr {
  background: <?php print $themag_resp_menu_bg; ?>;
  -webkit-box-shadow: none;
  box-shadow: none;
}

.sidr a {
  color: <?php print $themag_resp_menu_link_color; ?>;
}

.sidr .menu {
  background: <?php print $themag_resp_menu_parent_link_bg; ?>;
}

.sidr .menu a,
.sidr .menu .nolink {
  color: <?php print $themag_resp_menu_parent_link_color; ?>;
}

.sidr .menu li.expanded ul {
  background: <?php print $themag_resp_menu_bg; ?>;
}

.sidr .menu li.expanded ul a,
.sidr .menu li.expanded ul .nolink,
.sidr .menu li.expanded ul li.expanded ul a,
.sidr .menu li.expanded ul li.expanded > a:before,
.sidr .menu li.expanded ul li.expanded > .nolink:before {
  color: <?php print $themag_resp_menu_link_color; ?>;
  border-color: rgba(0, 0, 0, 0.1);
}


<?php
  // ------------------
  // Quicktabs
  // ------------------.
?>
ul.quicktabs-tabs li a,
ul.quicktabs-tabs li a:hover {
  color: <?php print $primary_dark_text; ?>;
}

ul.quicktabs-tabs li.active a,
ul.quicktabs-tabs li a:hover {
  color: <?php print $primary_dark_text; ?>;
  border-bottom-color: <?php print $brand_color; ?>;
}


<?php
  // ------------------
  // Block
  // ------------------.
?>
.pane-title .title-text {
  background: <?php print $bg_color; ?>;
  color: <?php print $block_title_color; ?>;
}

.pane-title:before,
.pane-title:after {
  border-color: <?php print $block_title_border_color; ?>;
}


<?php
  // ------------------
  // Pool
  // ------------------.
?>

.poll {
  background: rgba(200,200,200,0.1);
}

.poll .title {
  border-color: <?php print $block_title_border_color; ?>;
}

.poll .bar .foreground {
  background: <?php print $brand_color; ?>;
}


<?php
  // ------------------
  // Comments
  // ------------------.
?>
.most-commented .comments-count-wrapper i.fa,
.comment-user-name  {
  color: <?php print $brand_color; ?>;
}


<?php
  // ------------------
  // Taxonomy
  // ------------------.
?>
.mg-teaser--list .teaser--default,
.mg-teaser--list .teaser--d,
.mg-teaser--list .teaser--e,
.mg-teaser--2-col-grid .views-row .teaser--d,
.mg-teaser--2-col-grid .views-row .teaser--e {
  border-color: <?php print $border_color; ?>;
}


<?php
  // ------------------
  // Pager
  // ------------------.
?>

.item-list ul.pager {
  border-color: <?php print $border_color; ?>;
}

.item-list ul.pager li a {
  border-color: <?php print $border_color; ?>;
  color: <?php print $primary_dark_text; ?>
}

.item-list ul.pager li a:hover {
  background: none;
  border-color: <?php print $brand_color; ?>;
}

.item-list ul.pager li.pager-current {
  background: <?php print $brand_color; ?>;
  border-color: <?php print $brand_color; ?>;
  color: #FFF;
}


<?php
  // ------------------
  // Teasers
  // ------------------.
?>
.teaser .title a {
  color: <?php print $primary_dark_text; ?>;
}

.teaser .title a:hover span,
.teaser .title a:hover {
  background: <?php print $primary_dark_text; ?>;
}

.teaser:not(.teaser-compact) .category,
.teaser:not(.teaser-compact) .field-mg-summary,
.teaser:not(.teaser-compact) .submitted  {
  color: <?php print $secondary_dark_text; ?>;
}


.page-taxonomy .article-title,
.page-taxonomy .pane-page-title h1,
.page-taxonomy .pane-page-title h2,
.page-taxonomy .pane-page-title h3,
.page-taxonomy .pane-page-title h4,
.page-taxonomy .page-title {
  border-color: <?php print $border_color; ?>;
}


<?php
  // ------------------
  // Post
  // ------------------.
?>
.article-title,
.pane-page-title h1,
.pane-page-title h2,
.pane-page-title h3,
.pane-page-title h4,
.page-title {
  color: <?php print $primary_dark_text; ?>;
}

body.node-type-mg-article.post-layout-2.include-teaser-image .pane-page-title h1 {
  background: <?php print $bg_color; ?>;
  box-shadow: 15px 0 0 <?php print $bg_color; ?>, -15px 0 0 <?php print $bg_color; ?>;
}

.pane-entity-field.pane-node-field-mg-category a,
.author-wrapper .submitted {
  color: <?php print $secondary_dark_text; ?>;
}

body.node-type-mg-article.post-layout-1 .pane-content-author-social-buttons,
body.node-type-mg-article.post-layout-3 .pane-content-author-social-buttons,
.pane-content-author-social-buttons {
  border-color: <?php print $border_color; ?>;
}


<?php
  // ------------------
  // Author profile
  // ------------------.
?>
.user-profile-wrapper {
  background: rgba(200,200,200,0.5);
}

<?php
  // ------------------
  // Footer
  // ------------------.
?>
.region-footer {
  background: <?php print $footer_bg; ?>;
  color: <?php print $footer_text_color; ?>;
}

.region-footer .pane-title .title-text {
  background: <?php print $footer_bg; ?>;
  color: <?php print $footer_block_title_color; ?>;
}

.region-footer .pane-title:before,
.region-footer .pane-title:after {
  border-color: <?php print $footer_block_title_border_color; ?>;
}

.region-footer .teaser .title a {
  color: <?php print $footer_text_color; ?>;
}

.region-footer .teaser .title a:hover span,
.region-footer .teaser .title a:hover {
  background: <?php print $footer_text_color; ?>;
  color: #FFF;
}

.region-footer .mg-teaser--list .teaser--default,
.region-footer .mg-teaser--list .teaser--d,
.region-footer .mg-teaser--list .teaser--e,
.region-footer .mg-teaser--2-col-grid .views-row .teaser--d,
.region-footer .mg-teaser--2-col-grid .views-row .teaser--e {
  border-top-color: <?php print $footer_borders_color; ?>;
}

.region-footer .tag-list ul li a {
  color: <?php print $footer_text_color; ?>;
}

.footer-bar-menu li a {
  color: <?php print $secondary_dark_text; ?>;
}


<?php
  /**
   * Returns the base filesystem path of the Drupal installation.
   *
   * @author: Radon8472
   * @version: 1.0 (2013-10-19)
   *
   * @return string: absolute local filesystem path of the Drupal installation.
   */
  function filesystem_base_path()
  {
    if(!isset($GLOBALS['filesystem_base_path']))
    {
      $search = "includes".DIRECTORY_SEPARATOR."bootstrap.inc";
      // Walk directories up until we find the $search-path (which is relative to root)
      for($path=dirname(__FILE__); !file_exists($path.DIRECTORY_SEPARATOR.$search); $path.= DIRECTORY_SEPARATOR."..") {
        // no need to do anything
      }
      // store the path if it one was found
      $GLOBALS['filesystem_base_path'] = realpath($path);
    }
    return $GLOBALS['filesystem_base_path'];
  }
?>
