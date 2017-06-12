<?php

/**
 * @file
 * Advanced theme settings.
 */

/**
 * Implements hook_form_system_theme_settings_alter().
 */
function themag_form_system_theme_settings_alter(&$form, $form_state) {

  // Create vertical tabs for all TheMAG related settings.
  $form['themag'] = array(
    '#type' => 'vertical_tabs',
    '#prefix' => '<h2><small>' . t('TheMAG Settings') . '</small></h2>',
    '#weight' => -10,
  );

  // ------------------------
  // General.
  // ------------------------.
  $form['general'] = array(
    '#type' => 'fieldset',
    '#title' => t('General'),
    '#group' => 'themag',
  );

  // Search settings.
  $form['general']['search'] = array(
    '#type' => 'fieldset',
    '#title' => t('Search Form'),
    '#weight' => 10,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['general']['search']['themag_search_button_text'] = array(
    '#type' => 'textfield',
    '#title'  => t('Search button text'),
    '#default_value' => theme_get_setting('themag_search_button_text'),
  );

  $form['general']['search']['themag_search_field_placeholder_text'] = array(
    '#type' => 'textfield',
    '#title'  => t('Search field placeholder text'),
    '#default_value' => theme_get_setting('themag_search_field_placeholder_text'),
  );

  // Toggle settings.
  $form['general']['toggle_display'] = array(
    '#type' => 'fieldset',
    '#title' => t('Toggle Display'),
    '#weight' => 10,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['general']['toggle_display']['themag_toggle_scroll_to_top'] = array(
    '#type' => 'checkbox',
    '#title' => t('Scroll to top button'),
    '#default_value' => theme_get_setting('themag_toggle_scroll_to_top'),
  );

  // ------------------------
  // Header Settings
  // ------------------------.
  $form['header'] = array(
    '#type' => 'fieldset',
    '#title' => t('Header'),
    '#group' => 'themag',
  );

  $form['header']['themag_header_style_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Header style'),
    '#weight' => 5,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  // Select header style.
  $form['header']['themag_header_style_fieldset']['themag_header_style'] = array(
    '#type' => 'select',
    '#title' => t('Header style'),
    '#options' => array(
      'header_a' => 'Header style (A)',
      'header_b' => 'Header style (B)',
      'header_c' => 'Header style (C)',
      'header_d' => 'Header style (D)',
      'custom_header' => 'Custom Header',
      0 => 'No Header',
    ),
    '#default_value' => theme_get_setting('themag_header_style'),
    '#description' => t('Select the header styles for your site.
      You may choose "Custom Header" and create your own header by editing
      "<strong>"' . drupal_get_path('theme', 'themag') . '/templates/header/custom_header.inc"</strong>",
      or "No Header" and use Panels for create your custom header.'),
  );

  $form['header']['themag_header_style_fieldset']['themag_sticky_header'] = array(
    '#type' => 'checkbox',
    '#title' => t('Sticky header'),
    '#default_value' => theme_get_setting('themag_sticky_header'),
    '#description' => t('Use this option to enable/disable sticky header.'),
    '#states' => array(
      'visible' => array(
        array(
          ':input[name="themag_header_style"]' => array('value' => 'header_a'),
        ),
        array(
          ':input[name="themag_header_style"]' => array('value' => 'custom_header'),
        ),
      ),
    ),
  );

  // Header Banner
  // * Show the header banner slot field when either
  // * the header(C) style is used
  // * the header(D) style is used
  // * or the custom header is used.
  $form['header']['themag_header_style_fieldset']['themag_header_banner'] = array(
    '#type' => 'textarea',
    '#title' => t('Header banner slot'),
    '#default_value' => theme_get_setting('themag_header_banner'),
    '#description' => t('This ad will be displayed in a header area. Recommended ad size is 728x90px.'),
    '#states' => array(
      'visible' => array(
        array(
          ':input[name="themag_header_style"]' => array('value' => 'header_c'),
        ),
        array(
          ':input[name="themag_header_style"]' => array('value' => 'header_d'),
        ),
        array(
          ':input[name="themag_header_style"]' => array('value' => 'custom_header'),
        ),
      ),
    ),
  );

  // Select main menu.
  $form['header']['header_main_menu'] = array(
    '#type' => 'fieldset',
    '#title' => t('Main menu'),
    '#weight' => 5,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['header']['header_main_menu']['themag_main_menu'] = array(
    '#type' => 'select',
    '#title' => t('Select Main Menu'),
    '#options' => menu_get_menus($all = TRUE),
    '#default_value' => theme_get_setting('themag_main_menu'),
    '#description' => t('This menu will be used as the site\'s main menu.'),
  );

  // Select social links menu.
  $form['header']['header_social_menu'] = array(
    '#type' => 'fieldset',
    '#title' => t('Social links'),
    '#weight' => 5,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['header']['header_social_menu']['themag_social_menu'] = array(
    '#type' => 'select',
    '#title' => t('Social Menu'),
    '#options' => menu_get_menus($all = TRUE),
    '#default_value' => theme_get_setting('themag_social_menu'),
    '#description' => t('Select a social links menu.'),
    '#states' => array(
      'visible' => array(
        ':input[name="themag_social_menu_custom_html_toggle"]' => array('checked' => FALSE),
      ),
    ),
  );

  $form['header']['header_social_menu']['themag_social_menu_custom_html_toggle'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use custom HTML for social menu links'),
    '#default_value' => theme_get_setting('themag_social_menu_custom_html_toggle'),
  );

  $form['header']['header_social_menu']['themag_social_menu_custom_html'] = array(
    '#type' => 'textarea',
    '#title' => t('Social links menu HTML'),
    '#default_value' => theme_get_setting('themag_social_menu_custom_html'),
    '#description' => t('Enter custom HTML for social menu links.'),
    '#states' => array(
      'visible' => array(
        array(
          ':input[name="themag_social_menu_custom_html_toggle"]' => array('checked' => TRUE),
        ),
      ),
    ),
  );

  // Select user action menu.
  $form['header']['header_user_action'] = array(
    '#type' => 'fieldset',
    '#title' => t('User action links'),
    '#weight' => 5,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['header']['header_user_action']['themag_user_action_menu'] = array(
    '#type' => 'select',
    '#title' => t('User action menu'),
    '#options' => menu_get_menus($all = TRUE),
    '#default_value' => theme_get_setting('themag_user_action_menu'),
    '#description' => t('Select a user action menu.'),
    '#states' => array(
      'visible' => array(
        ':input[name="themag_user_action_menu_custom_html_toggle"]' => array('checked' => FALSE),
      ),
    ),
  );

  $form['header']['header_user_action']['themag_user_action_menu_custom_html_toggle'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use custom HTML for user action menu links'),
    '#default_value' => theme_get_setting('themag_user_action_menu_custom_html_toggle'),
  );

  $form['header']['header_user_action']['themag_user_action_menu_custom_html'] = array(
    '#type' => 'textarea',
    '#title' => t('User action menu HTML'),
    '#default_value' => theme_get_setting('themag_user_action_menu_custom_html'),
    '#description' => t('Enter custom HTML for user action menu links.'),
    '#states' => array(
      'visible' => array(
        array(
          ':input[name="themag_user_action_menu_custom_html_toggle"]' => array('checked' => TRUE),
        ),
      ),
    ),
  );

  // Header toggle display.
  $form['header']['toggle_display'] = array(
    '#type' => 'fieldset',
    '#title' => t('Toggle Display'),
    '#weight' => 5,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['header']['toggle_display']['themag_toggle_social_menu'] = array(
    '#type' => 'checkbox',
    '#title' => t('Social menu'),
    '#default_value' => theme_get_setting('themag_toggle_social_menu'),
  );

  $form['header']['toggle_display']['themag_toggle_user_action_menu'] = array(
    '#type' => 'checkbox',
    '#title' => t('User action menu'),
    '#default_value' => theme_get_setting('themag_toggle_user_action_menu'),
  );

  // ------------------------
  // Footer.
  // ------------------------.
  $form['footer'] = array(
    '#type' => 'fieldset',
    '#title' => t('Footer'),
    '#group' => 'themag',
  );

   // Footer toggle display.
  $form['footer']['footer_bar'] = array(
    '#type' => 'fieldset',
    '#title' => t('Footer Bottom'),
    '#weight' => 50,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  // Footer menu.
  $form['footer']['footer_bar']['themag_footer_bar_menu'] = array(
    '#type' => 'select',
    '#title' => t('Select Footer Menu'),
    '#options' => menu_get_menus($all = TRUE),
    '#default_value' => theme_get_setting('themag_footer_bar_menu'),
    '#description' => t('This menu will be used in the site\'s Footer.'),
  );

  // Copy Note.
  $form['footer']['footer_bar']['themag_copy_note'] = array(
    '#type' => 'textfield',
    '#title'  => t('Copyright Notice'),
    '#description' => t('Write a Footer Copyright Notice'),
    '#default_value' => theme_get_setting('themag_copy_note'),
  );

  // Footer toggle display.
  $form['footer']['toggle_display'] = array(
    '#type' => 'fieldset',
    '#title' => t('Toggle Display'),
    '#weight' => 50,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['footer']['toggle_display']['themag_toggle_footer_bar_menu_menu'] = array(
    '#type' => 'checkbox',
    '#title' => t('Footer bar menu'),
    '#default_value' => theme_get_setting('themag_toggle_footer_bar_menu_menu'),
  );

  // ------------------------
  // Theme Color
  // ------------------------.
  // Add spectrum color picker js and css. See http://bgrins.github.io/spectrum
  // Requires libraries api and spectrum installed in libraries/bgrins-spectrum
  // as per color_field install instructions.

  if(!module_exists('libraries') && arg(1) == 'appearance') {
    drupal_set_message(t('You have to enable Libraries API module in order to use color picker for the TheMAG theme color.'),
      'warning', FALSE);
  } else {
    drupal_add_js(libraries_get_path('bgrins-spectrum') . '/spectrum.js');
    drupal_add_css(libraries_get_path('bgrins-spectrum') . '/spectrum.css');

    $spectrum_js = 'jQuery(".spectrum-color-picker").spectrum({
      showInput: true,
      allowEmpty: false,
      showAlpha: true,
      showInitial: true,
      showInput: true,
      preferredFormat: "rgb",
      clickoutFiresChange: true,
      showButtons: false
    });';

    drupal_add_js($spectrum_js, array('type' => 'inline', 'scope' => 'footer'));
  }

  $form['theme_color'] = array(
    '#type' => 'fieldset',
    '#title' => t('Color'),
    '#group' => 'themag',
  );

  $form['theme_color']['themag_use_custom_theme_color'] = array(
    '#type' => 'checkbox',
    '#title' => t('Custom theme color'),
    '#description' => 'Enabele this option to use custom solor settings.',
    '#default_value' => theme_get_setting('themag_use_custom_theme_color'),
  );

  // General color.
  $form['theme_color']['general'] = array(
    '#type' => 'fieldset',
    '#title' => t('General'),
    '#weight' => 10,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['theme_color']['general']['themag_bg_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Background color'),
    '#default_value' => theme_get_setting('themag_bg_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgb(250, 250, 250)',
  );

  $form['theme_color']['general']['themag_brand_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Brand color'),
    '#default_value' => theme_get_setting('themag_brand_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgb(0, 188, 212)',
  );

  $form['theme_color']['general']['themag_primay_dark_text_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Primary text color'),
    '#default_value' => theme_get_setting('themag_primay_dark_text_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgba(38, 50, 56, 0.87)',
  );

  $form['theme_color']['general']['themag_secondary_dark_text_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Secondary text color'),
    '#default_value' => theme_get_setting('themag_secondary_dark_text_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgba(38, 50, 56, 0.54)',
  );

  $form['theme_color']['general']['themag_borders_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Borders color'),
    '#default_value' => theme_get_setting('themag_borders_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgb(207, 216, 220)',
  );

  // Header color.
  $form['theme_color']['header'] = array(
    '#type' => 'fieldset',
    '#title' => t('Header'),
    '#weight' => 10,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['theme_color']['header']['general'] = array(
    '#type' => 'fieldset',
    '#title' => t('General'),
    '#weight' => 10,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['theme_color']['header']['general']['themag_header_top_bg'] = array(
    '#type' => 'textfield',
    '#title'  => t('Header top background'),
    '#default_value' => theme_get_setting('themag_header_top_bg'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgb(255, 255, 255)',
    '#states' => array(
      'visible' => array(
        array(
          ':input[name="themag_header_style"]' => array('value' => 'header_b'),
        ),
        array(
          ':input[name="themag_header_style"]' => array('value' => 'header_c'),
        ),
        array(
          ':input[name="themag_header_style"]' => array('value' => 'header_d'),
        ),
        array(
          ':input[name="themag_header_style"]' => array('value' => 'custom_header'),
        ),
      ),
    ),
  );

  $form['theme_color']['header']['general']['themag_header_bg'] = array(
    '#type' => 'textfield',
    '#title'  => t('Header background'),
    '#default_value' => theme_get_setting('themag_header_bg'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgb(255, 255, 255)',
  );

  $form['theme_color']['header']['general']['themag_header_link_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Header links color'),
    '#default_value' => theme_get_setting('themag_header_link_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgba(38, 50, 56, 0.87)',
  );

  $form['theme_color']['header']['general']['themag_header_link_over_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Header links over color'),
    '#default_value' => theme_get_setting('themag_header_link_over_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgba(38, 50, 56, 0.87)',
  );

  $form['theme_color']['header']['menus'] = array(
    '#type' => 'fieldset',
    '#title' => t('Dropdown menu'),
    '#weight' => 10,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['theme_color']['header']['menus']['themag_header_dropdown_bg'] = array(
    '#type' => 'textfield',
    '#title'  => t('Dropdown menu background'),
    '#default_value' => theme_get_setting('themag_header_dropdown_bg'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgba(236, 239, 241, 0.9)',
  );

  $form['theme_color']['header']['menus']['themag_header_dropdown_over_bg'] = array(
    '#type' => 'textfield',
    '#title'  => t('Dropdown menu background over'),
    '#default_value' => theme_get_setting('themag_header_dropdown_over_bg'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgba(255, 255, 255, 0.5)',
  );

  $form['theme_color']['header']['menus']['themag_header_dropdown_link_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Dropdown menu links color'),
    '#default_value' => theme_get_setting('themag_header_dropdown_link_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgba(38, 50, 56, 0.87)',
  );

  $form['theme_color']['header']['menus']['themag_header_dropdown_link_over_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Dropdown menu links over color'),
    '#default_value' => theme_get_setting('themag_header_dropdown_link_over_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgba(38, 50, 56, 0.87)',
  );

  // Responsive side menu.
  $form['theme_color']['responsive_menu'] = array(
    '#type' => 'fieldset',
    '#title' => t('Responsive side menu'),
    '#weight' => 10,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['theme_color']['responsive_menu']['themag_resp_menu_bg'] = array(
    '#type' => 'textfield',
    '#title'  => t('Menu background color'),
    '#default_value' => theme_get_setting('themag_resp_menu_bg'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgb(255, 255, 255)',
  );

  $form['theme_color']['responsive_menu']['themag_resp_menu_link_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Menu links color'),
    '#default_value' => theme_get_setting('themag_resp_menu_link_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgba(38, 50, 56, 0.87)',
  );

  $form['theme_color']['responsive_menu']['themag_resp_menu_parent_link_bg'] = array(
    '#type' => 'textfield',
    '#title'  => t('Menu parent links background'),
    '#default_value' => theme_get_setting('themag_resp_menu_parent_link_bg'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgba(38, 50, 56, 0.87)',
  );

  $form['theme_color']['responsive_menu']['themag_resp_menu_parent_link_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Menu parent links color'),
    '#default_value' => theme_get_setting('themag_resp_menu_parent_link_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgb(255, 255, 255)',
  );

  // Blocks.
  $form['theme_color']['block'] = array(
    '#type' => 'fieldset',
    '#title' => t('Blocks'),
    '#weight' => 10,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['theme_color']['block']['themag_block_title_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Block title color'),
    '#default_value' => theme_get_setting('themag_block_title_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgb(38, 50, 56)',
  );

  $form['theme_color']['block']['themag_block_title_border_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Block title border color'),
    '#default_value' => theme_get_setting('themag_block_title_border_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgb(176, 190, 197)',
  );

  // Footer color.
  $form['theme_color']['footer'] = array(
    '#type' => 'fieldset',
    '#title' => t('Footer'),
    '#weight' => 10,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['theme_color']['footer']['general'] = array(
    '#type' => 'fieldset',
    '#title' => t('General'),
    '#weight' => 10,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['theme_color']['footer']['general']['themag_footer_bg'] = array(
    '#type' => 'textfield',
    '#title'  => t('Footer background'),
    '#default_value' => theme_get_setting('themag_footer_bg'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgb(236, 239, 241)',
  );

  $form['theme_color']['footer']['general']['themag_footer_text_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Footer text color'),
    '#default_value' => theme_get_setting('themag_footer_text_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgba(38, 50, 56, 0.87)',
  );

  $form['theme_color']['footer']['general']['themag_footer_borders_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Borders color'),
    '#default_value' => theme_get_setting('themag_footer_borders_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgb(207, 216, 220)',
  );

  $form['theme_color']['footer']['block'] = array(
    '#type' => 'fieldset',
    '#title' => t('Block'),
    '#weight' => 10,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['theme_color']['footer']['block']['themag_footer_block_title_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Block title color'),
    '#default_value' => theme_get_setting('themag_footer_block_title_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgb(38, 50, 56)',
  );

  $form['theme_color']['footer']['block']['themag_footer_block_title_border_color'] = array(
    '#type' => 'textfield',
    '#title'  => t('Block title border color'),
    '#default_value' => theme_get_setting('themag_footer_block_title_border_color'),
    '#attributes' => array('class' => array('spectrum-color-picker')),
    '#description' => 'Default: rgb(176, 190, 197)',
  );

  // ------------------------
  // Advanced.
  // ------------------------.
  $form['advanced'] = array(
    '#type' => 'fieldset',
    '#title' => t('Advanced'),
    '#group' => 'themag',
  );

  // CSS/JS Files.
  $form['advanced']['css_js_files'] = array(
    '#type' => 'fieldset',
    '#title' => t('Custom CSS and JavaScript Files'),
    '#weight' => 10,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['advanced']['css_js_files']['themag_use_custom_css_file'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable custom.css'),
    '#description' => 'Use custom.css file to write extra CSS styles.
      By using this file you can override existing theme styles. File location is: ' . drupal_get_path('theme', 'themag') . '/assets/css/custom.css)',
    '#default_value' => theme_get_setting('themag_use_custom_css_file'),
  );

  $form['advanced']['css_js_files']['themag_use_custom_js_file'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable custom.js'),
    '#description' => 'You can use this file to write your own JavaSscript code.
      File location: ' . drupal_get_path('theme', 'themag') . '/assets/js/custom.js)',
    '#default_value' => theme_get_setting('themag_use_custom_js_file'),
  );

  // Additional CSS.
  $form['advanced']['additional_css'] = array(
    '#type' => 'fieldset',
    '#title' => t('Additional CSS Style'),
    '#weight' => 10,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['advanced']['additional_css']['themag_additional_css'] = array(
    '#type' => 'textarea',
    '#title' => t('Additional CSS'),
    '#default_value' => theme_get_setting('themag_additional_css'),
    '#description' => t('Use this field to make small theme tweaks,
      or to add some custom CSS styles. If you plan to make more significant
      style changes please use "<strong>"' . drupal_get_path('theme', 'themag') . '/assets/css/custom.css"</strong>".
      Note: The CSS style from this field will override custom.css styles.'),
  );

  // Additional JavaScript Code.
  $form['advanced']['js'] = array(
    '#type' => 'fieldset',
    '#title' => t('Additional JavaScript'),
    '#weight' => 10,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['advanced']['js']['themag_additional_javascript'] = array(
    '#type' => 'textarea',
    '#title' => t('JavaScript Tracking/SDK code snipets'),
    '#default_value' => theme_get_setting('themag_additional_javascript'),
    '#description' => t(check_plain('The content of this field is inserted directly
      after the opening <body> tag on each page. Use this field to add any JavaScript
      tracking related code snippets, or JavaScript SDK code snippets. Note: Please use
      the code with <script> tag included.')),
  );

  return $form;
}
