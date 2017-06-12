<?php
/**
 * @file
 * mg_pages_and_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function mg_pages_and_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'contact_site__panel_context_cffd477d-9f70-4b2d-99e8-b68cab39571b';
  $handler->task = 'contact_site';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'l2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content_top' => NULL,
      'content_main' => NULL,
      'content_bottom' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a8bb423c-37ea-45ee-9fe9-2b08131d00d8';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'contact_site__panel_context_cffd477d-9f70-4b2d-99e8-b68cab39571b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1b0b5e79-3dcb-40a4-a4e2-d719dccb9149';
  $pane->panel = 'content_main';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1b0b5e79-3dcb-40a4-a4e2-d719dccb9149';
  $display->content['new-1b0b5e79-3dcb-40a4-a4e2-d719dccb9149'] = $pane;
  $display->panels['content_main'][0] = 'new-1b0b5e79-3dcb-40a4-a4e2-d719dccb9149';
  $pane = new stdClass();
  $pane->pid = 'new-50107f24-3161-49a0-8cb5-2e8930e54244';
  $pane->panel = 'content_main';
  $pane->type = 'contact';
  $pane->subtype = 'contact';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '50107f24-3161-49a0-8cb5-2e8930e54244';
  $display->content['new-50107f24-3161-49a0-8cb5-2e8930e54244'] = $pane;
  $display->panels['content_main'][1] = 'new-50107f24-3161-49a0-8cb5-2e8930e54244';
  $pane = new stdClass();
  $pane->pid = 'new-cfe7f666-d917-405f-a8f7-03be1fd9fcb3';
  $pane->panel = 'sidebar_right';
  $pane->type = 'custom';
  $pane->subtype = 'ad_300x250';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner stick-in-parent',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cfe7f666-d917-405f-a8f7-03be1fd9fcb3';
  $display->content['new-cfe7f666-d917-405f-a8f7-03be1fd9fcb3'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-cfe7f666-d917-405f-a8f7-03be1fd9fcb3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['contact_site__panel_context_cffd477d-9f70-4b2d-99e8-b68cab39571b'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__article-layout-1';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Post (Layout 1)',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'article-layout-1',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:mg_article:field_mg_post_layout',
          'settings' => array(
            'field_mg_post_layout' => array(
              'und' => array(
                0 => array(
                  'value' => 'post_layout_1',
                ),
              ),
            ),
            'field_mg_post_layout_value' => array(
              0 => 'post_layout_1',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'l2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'featured_content' => NULL,
      'content_1' => NULL,
      'content_2' => NULL,
      'content_3' => NULL,
      'content_4' => NULL,
      'content_5' => NULL,
      'content_6' => NULL,
      'content_top' => NULL,
      'content_main' => NULL,
      'content_bottom' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2febcb16-c3b2-40f2-8d74-430c79c198e3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__article-layout-1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-995d9a1e-f70f-48d1-8442-c7b7465bb319';
  $pane->panel = 'content_bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'related_content_by_terms-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '3',
    'context' => array(
      1 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--3-col-grid',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '995d9a1e-f70f-48d1-8442-c7b7465bb319';
  $display->content['new-995d9a1e-f70f-48d1-8442-c7b7465bb319'] = $pane;
  $display->panels['content_bottom'][0] = 'new-995d9a1e-f70f-48d1-8442-c7b7465bb319';
  $pane = new stdClass();
  $pane->pid = 'new-3694926f-f6b1-421c-bcd1-1b0575e13985';
  $pane->panel = 'content_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mg_category';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mb-1',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3694926f-f6b1-421c-bcd1-1b0575e13985';
  $display->content['new-3694926f-f6b1-421c-bcd1-1b0575e13985'] = $pane;
  $display->panels['content_main'][0] = 'new-3694926f-f6b1-421c-bcd1-1b0575e13985';
  $pane = new stdClass();
  $pane->pid = 'new-7a594464-4b56-49c2-87dd-55215a2c7e35';
  $pane->panel = 'content_main';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mb-2',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7a594464-4b56-49c2-87dd-55215a2c7e35';
  $display->content['new-7a594464-4b56-49c2-87dd-55215a2c7e35'] = $pane;
  $display->panels['content_main'][1] = 'new-7a594464-4b56-49c2-87dd-55215a2c7e35';
  $pane = new stdClass();
  $pane->pid = 'new-8f402be4-1a1b-438b-8a7f-0405375b3542';
  $pane->panel = 'content_main';
  $pane->type = 'panels_mini';
  $pane->subtype = 'content_author_social_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mb-2',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8f402be4-1a1b-438b-8a7f-0405375b3542';
  $display->content['new-8f402be4-1a1b-438b-8a7f-0405375b3542'] = $pane;
  $display->panels['content_main'][2] = 'new-8f402be4-1a1b-438b-8a7f-0405375b3542';
  $pane = new stdClass();
  $pane->pid = 'new-ac389cb5-7e11-4e96-aa2e-0774ecf7f039';
  $pane->panel = 'content_main';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ac389cb5-7e11-4e96-aa2e-0774ecf7f039';
  $display->content['new-ac389cb5-7e11-4e96-aa2e-0774ecf7f039'] = $pane;
  $display->panels['content_main'][3] = 'new-ac389cb5-7e11-4e96-aa2e-0774ecf7f039';
  $pane = new stdClass();
  $pane->pid = 'new-c9daf0e0-2d25-4882-b0f5-79bff6482796';
  $pane->panel = 'content_main';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c9daf0e0-2d25-4882-b0f5-79bff6482796';
  $display->content['new-c9daf0e0-2d25-4882-b0f5-79bff6482796'] = $pane;
  $display->panels['content_main'][4] = 'new-c9daf0e0-2d25-4882-b0f5-79bff6482796';
  $pane = new stdClass();
  $pane->pid = 'new-68026fca-8307-4c16-bee9-810f33b62fdc';
  $pane->panel = 'content_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mg_paragraph';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'paragraphs_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'full',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '68026fca-8307-4c16-bee9-810f33b62fdc';
  $display->content['new-68026fca-8307-4c16-bee9-810f33b62fdc'] = $pane;
  $display->panels['content_main'][5] = 'new-68026fca-8307-4c16-bee9-810f33b62fdc';
  $pane = new stdClass();
  $pane->pid = 'new-1e116c75-000c-4b32-9447-329b7458934f';
  $pane->panel = 'content_main';
  $pane->type = 'node_comment_wrapper';
  $pane->subtype = 'node_comment_wrapper';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '10',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '1e116c75-000c-4b32-9447-329b7458934f';
  $display->content['new-1e116c75-000c-4b32-9447-329b7458934f'] = $pane;
  $display->panels['content_main'][6] = 'new-1e116c75-000c-4b32-9447-329b7458934f';
  $pane = new stdClass();
  $pane->pid = 'new-94613ef6-2d94-4191-b526-98b2e20e73be';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'related_content_by_terms-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '3',
    'context' => array(
      1 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Related',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--list',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '94613ef6-2d94-4191-b526-98b2e20e73be';
  $display->content['new-94613ef6-2d94-4191-b526-98b2e20e73be'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-94613ef6-2d94-4191-b526-98b2e20e73be';
  $pane = new stdClass();
  $pane->pid = 'new-5f408ea2-c1ac-4920-b7f3-2dd2426b471b';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '3',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
      'field_mg_article_options_value' => 'featured',
    ),
    'override_title' => 1,
    'override_title_text' => 'Featured',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--list',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5f408ea2-c1ac-4920-b7f3-2dd2426b471b';
  $display->content['new-5f408ea2-c1ac-4920-b7f3-2dd2426b471b'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-5f408ea2-c1ac-4920-b7f3-2dd2426b471b';
  $pane = new stdClass();
  $pane->pid = 'new-74805681-2f70-43cf-b266-f4e1f3429ed7';
  $pane->panel = 'sidebar_right';
  $pane->type = 'custom';
  $pane->subtype = 'ad_300x250';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner stick-in-parent',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '74805681-2f70-43cf-b266-f4e1f3429ed7';
  $display->content['new-74805681-2f70-43cf-b266-f4e1f3429ed7'] = $pane;
  $display->panels['sidebar_right'][2] = 'new-74805681-2f70-43cf-b266-f4e1f3429ed7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__article-layout-1'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__article-variant-1';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Post (Layout 2)',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'article-variant-1',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:mg_article:field_mg_post_layout',
          'settings' => array(
            'field_mg_post_layout' => array(
              'und' => array(
                0 => array(
                  'value' => 'post_layout_2',
                ),
              ),
            ),
            'field_mg_post_layout_value' => array(
              0 => 'post_layout_2',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l3';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'featured_content' => NULL,
      'content_1' => NULL,
      'content_2' => NULL,
      'content_3' => NULL,
      'content_4' => NULL,
      'content_5' => NULL,
      'content_6' => NULL,
      'content_top' => NULL,
      'content_main' => NULL,
      'content_bottom' => NULL,
      'sidebar_right' => NULL,
      'col_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2febcb16-c3b2-40f2-8d74-430c79c198e3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__article-variant-1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1bd21183-b9dc-4b2f-bfaf-b2bcd726b06a';
  $pane->panel = 'content_bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'related_content_by_terms-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '3',
    'context' => array(
      1 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--3-col-grid',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1bd21183-b9dc-4b2f-bfaf-b2bcd726b06a';
  $display->content['new-1bd21183-b9dc-4b2f-bfaf-b2bcd726b06a'] = $pane;
  $display->panels['content_bottom'][0] = 'new-1bd21183-b9dc-4b2f-bfaf-b2bcd726b06a';
  $pane = new stdClass();
  $pane->pid = 'new-e83946c7-84d0-4646-94a6-5144052a6ec7';
  $pane->panel = 'content_main';
  $pane->type = 'panels_mini';
  $pane->subtype = 'content_author_social_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e83946c7-84d0-4646-94a6-5144052a6ec7';
  $display->content['new-e83946c7-84d0-4646-94a6-5144052a6ec7'] = $pane;
  $display->panels['content_main'][0] = 'new-e83946c7-84d0-4646-94a6-5144052a6ec7';
  $pane = new stdClass();
  $pane->pid = 'new-4f0c7870-a16a-464f-ae6c-59b5dd8b1246';
  $pane->panel = 'content_main';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4f0c7870-a16a-464f-ae6c-59b5dd8b1246';
  $display->content['new-4f0c7870-a16a-464f-ae6c-59b5dd8b1246'] = $pane;
  $display->panels['content_main'][1] = 'new-4f0c7870-a16a-464f-ae6c-59b5dd8b1246';
  $pane = new stdClass();
  $pane->pid = 'new-a5e6e456-f696-48da-af71-604617039f0f';
  $pane->panel = 'content_main';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a5e6e456-f696-48da-af71-604617039f0f';
  $display->content['new-a5e6e456-f696-48da-af71-604617039f0f'] = $pane;
  $display->panels['content_main'][2] = 'new-a5e6e456-f696-48da-af71-604617039f0f';
  $pane = new stdClass();
  $pane->pid = 'new-c3406857-b6ab-4dff-b45f-b75e3305a102';
  $pane->panel = 'content_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mg_paragraph';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'paragraphs_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'full',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c3406857-b6ab-4dff-b45f-b75e3305a102';
  $display->content['new-c3406857-b6ab-4dff-b45f-b75e3305a102'] = $pane;
  $display->panels['content_main'][3] = 'new-c3406857-b6ab-4dff-b45f-b75e3305a102';
  $pane = new stdClass();
  $pane->pid = 'new-90b417c0-b071-46e8-be42-ef72ab3e2c3a';
  $pane->panel = 'content_main';
  $pane->type = 'node_comment_wrapper';
  $pane->subtype = 'node_comment_wrapper';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '10',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '90b417c0-b071-46e8-be42-ef72ab3e2c3a';
  $display->content['new-90b417c0-b071-46e8-be42-ef72ab3e2c3a'] = $pane;
  $display->panels['content_main'][4] = 'new-90b417c0-b071-46e8-be42-ef72ab3e2c3a';
  $pane = new stdClass();
  $pane->pid = 'new-ead76f57-0af7-4549-8ff1-b0c5633dfafa';
  $pane->panel = 'featured_content';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'view_mode' => 'image_parallax',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ead76f57-0af7-4549-8ff1-b0c5633dfafa';
  $display->content['new-ead76f57-0af7-4549-8ff1-b0c5633dfafa'] = $pane;
  $display->panels['featured_content'][0] = 'new-ead76f57-0af7-4549-8ff1-b0c5633dfafa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__article-variant-1'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__basic-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Basic Page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'basic-page',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'grid-12-col-1';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'featured_content' => NULL,
      'content_1' => NULL,
      'content_2' => NULL,
      'content_3' => NULL,
      'content_4' => NULL,
      'content_5' => NULL,
      'content_6' => NULL,
      'content_top' => NULL,
      'content_main' => NULL,
      'content_bottom' => NULL,
      'sidebar_right' => NULL,
      'col_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2febcb16-c3b2-40f2-8d74-430c79c198e3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__basic-page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-799669c2-c8b4-4366-8e2f-2a39a9cb75b9';
  $pane->panel = 'col_1';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => 'page-title',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mt-2 mb-3',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '799669c2-c8b4-4366-8e2f-2a39a9cb75b9';
  $display->content['new-799669c2-c8b4-4366-8e2f-2a39a9cb75b9'] = $pane;
  $display->panels['col_1'][0] = 'new-799669c2-c8b4-4366-8e2f-2a39a9cb75b9';
  $pane = new stdClass();
  $pane->pid = 'new-d6e6cf7e-f783-480b-aa9f-cd7a5161a855';
  $pane->panel = 'col_1';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd6e6cf7e-f783-480b-aa9f-cd7a5161a855';
  $display->content['new-d6e6cf7e-f783-480b-aa9f-cd7a5161a855'] = $pane;
  $display->panels['col_1'][1] = 'new-d6e6cf7e-f783-480b-aa9f-cd7a5161a855';
  $pane = new stdClass();
  $pane->pid = 'new-a3454eb7-f057-4ceb-8c6c-c58e7b8ee4ef';
  $pane->panel = 'col_1';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a3454eb7-f057-4ceb-8c6c-c58e7b8ee4ef';
  $display->content['new-a3454eb7-f057-4ceb-8c6c-c58e7b8ee4ef'] = $pane;
  $display->panels['col_1'][2] = 'new-a3454eb7-f057-4ceb-8c6c-c58e7b8ee4ef';
  $pane = new stdClass();
  $pane->pid = 'new-2df2bd10-1287-460d-8985-3d6ad7a20068';
  $pane->panel = 'col_1';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2df2bd10-1287-460d-8985-3d6ad7a20068';
  $display->content['new-2df2bd10-1287-460d-8985-3d6ad7a20068'] = $pane;
  $display->panels['col_1'][3] = 'new-2df2bd10-1287-460d-8985-3d6ad7a20068';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__basic-page'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_d752235d-8562-4459-8889-ce58b64b0b46';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'featured_content' => NULL,
      'content_1' => NULL,
      'content_2' => NULL,
      'content_3' => NULL,
      'content_4' => NULL,
      'content_5' => NULL,
      'content_6' => NULL,
      'content_top' => NULL,
      'content_main' => NULL,
      'content_bottom' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2febcb16-c3b2-40f2-8d74-430c79c198e3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_d752235d-8562-4459-8889-ce58b64b0b46';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1692468e-005b-47b5-976f-78e15916d095';
  $pane->panel = 'content_bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'related_by_category-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--3-col-grid',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1692468e-005b-47b5-976f-78e15916d095';
  $display->content['new-1692468e-005b-47b5-976f-78e15916d095'] = $pane;
  $display->panels['content_bottom'][0] = 'new-1692468e-005b-47b5-976f-78e15916d095';
  $pane = new stdClass();
  $pane->pid = 'new-42396cca-6e33-4aa5-ab55-4c1d81a81a7d';
  $pane->panel = 'content_main';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '42396cca-6e33-4aa5-ab55-4c1d81a81a7d';
  $display->content['new-42396cca-6e33-4aa5-ab55-4c1d81a81a7d'] = $pane;
  $display->panels['content_main'][0] = 'new-42396cca-6e33-4aa5-ab55-4c1d81a81a7d';
  $pane = new stdClass();
  $pane->pid = 'new-3480eda9-de68-42e0-bd01-e93b5c6be72d';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '3',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
      'field_mg_article_options_value' => 'All',
    ),
    'override_title' => 1,
    'override_title_text' => 'Latest',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--list',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3480eda9-de68-42e0-bd01-e93b5c6be72d';
  $display->content['new-3480eda9-de68-42e0-bd01-e93b5c6be72d'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-3480eda9-de68-42e0-bd01-e93b5c6be72d';
  $pane = new stdClass();
  $pane->pid = 'new-204d4892-1ae7-4848-8ed2-d79057655931';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'most_commented-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '204d4892-1ae7-4848-8ed2-d79057655931';
  $display->content['new-204d4892-1ae7-4848-8ed2-d79057655931'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-204d4892-1ae7-4848-8ed2-d79057655931';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_d752235d-8562-4459-8889-ce58b64b0b46'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__post-layout-3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -3;
  $handler->conf = array(
    'title' => 'Post (Layout 3)',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'post-layout-3',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:mg_article:field_mg_post_layout',
          'settings' => array(
            'field_mg_post_layout' => array(
              'und' => array(
                0 => array(
                  'value' => 'post_layout_3',
                ),
              ),
            ),
            'field_mg_post_layout_value' => array(
              0 => 'post_layout_3',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'featured_content' => NULL,
      'content_1' => NULL,
      'content_2' => NULL,
      'content_3' => NULL,
      'content_4' => NULL,
      'content_5' => NULL,
      'content_6' => NULL,
      'content_top' => NULL,
      'content_main' => NULL,
      'content_bottom' => NULL,
      'sidebar_right' => NULL,
      'col_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2febcb16-c3b2-40f2-8d74-430c79c198e3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__post-layout-3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1bd21183-b9dc-4b2f-bfaf-b2bcd726b06a';
  $pane->panel = 'content_bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'related_content_by_terms-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '3',
    'context' => array(
      1 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--3-col-grid',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1bd21183-b9dc-4b2f-bfaf-b2bcd726b06a';
  $display->content['new-1bd21183-b9dc-4b2f-bfaf-b2bcd726b06a'] = $pane;
  $display->panels['content_bottom'][0] = 'new-1bd21183-b9dc-4b2f-bfaf-b2bcd726b06a';
  $pane = new stdClass();
  $pane->pid = 'new-b4a1126c-7bae-4d1a-b24b-e9be64f69e83';
  $pane->panel = 'content_main';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b4a1126c-7bae-4d1a-b24b-e9be64f69e83';
  $display->content['new-b4a1126c-7bae-4d1a-b24b-e9be64f69e83'] = $pane;
  $display->panels['content_main'][0] = 'new-b4a1126c-7bae-4d1a-b24b-e9be64f69e83';
  $pane = new stdClass();
  $pane->pid = 'new-cba3491b-6122-432c-8785-afc878126042';
  $pane->panel = 'content_main';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cba3491b-6122-432c-8785-afc878126042';
  $display->content['new-cba3491b-6122-432c-8785-afc878126042'] = $pane;
  $display->panels['content_main'][1] = 'new-cba3491b-6122-432c-8785-afc878126042';
  $pane = new stdClass();
  $pane->pid = 'new-8369f13b-28bd-4a31-b388-6451e291a13b';
  $pane->panel = 'content_main';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8369f13b-28bd-4a31-b388-6451e291a13b';
  $display->content['new-8369f13b-28bd-4a31-b388-6451e291a13b'] = $pane;
  $display->panels['content_main'][2] = 'new-8369f13b-28bd-4a31-b388-6451e291a13b';
  $pane = new stdClass();
  $pane->pid = 'new-c3406857-b6ab-4dff-b45f-b75e3305a102';
  $pane->panel = 'content_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mg_paragraph';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'paragraphs_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'full',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c3406857-b6ab-4dff-b45f-b75e3305a102';
  $display->content['new-c3406857-b6ab-4dff-b45f-b75e3305a102'] = $pane;
  $display->panels['content_main'][3] = 'new-c3406857-b6ab-4dff-b45f-b75e3305a102';
  $pane = new stdClass();
  $pane->pid = 'new-90b417c0-b071-46e8-be42-ef72ab3e2c3a';
  $pane->panel = 'content_main';
  $pane->type = 'node_comment_wrapper';
  $pane->subtype = 'node_comment_wrapper';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '10',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '90b417c0-b071-46e8-be42-ef72ab3e2c3a';
  $display->content['new-90b417c0-b071-46e8-be42-ef72ab3e2c3a'] = $pane;
  $display->panels['content_main'][4] = 'new-90b417c0-b071-46e8-be42-ef72ab3e2c3a';
  $pane = new stdClass();
  $pane->pid = 'new-e83946c7-84d0-4646-94a6-5144052a6ec7';
  $pane->panel = 'content_top';
  $pane->type = 'panels_mini';
  $pane->subtype = 'content_author_social_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e83946c7-84d0-4646-94a6-5144052a6ec7';
  $display->content['new-e83946c7-84d0-4646-94a6-5144052a6ec7'] = $pane;
  $display->panels['content_top'][0] = 'new-e83946c7-84d0-4646-94a6-5144052a6ec7';
  $pane = new stdClass();
  $pane->pid = 'new-9d96c82a-787a-42ed-8809-4b963b1197be';
  $pane->panel = 'featured_content';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'image_parallax',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9d96c82a-787a-42ed-8809-4b963b1197be';
  $display->content['new-9d96c82a-787a-42ed-8809-4b963b1197be'] = $pane;
  $display->panels['featured_content'][0] = 'new-9d96c82a-787a-42ed-8809-4b963b1197be';
  $pane = new stdClass();
  $pane->pid = 'new-a7c6454a-025a-4a75-ad90-4c4af7f3231d';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'related_content_by_terms-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      2 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Related',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--list',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a7c6454a-025a-4a75-ad90-4c4af7f3231d';
  $display->content['new-a7c6454a-025a-4a75-ad90-4c4af7f3231d'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-a7c6454a-025a-4a75-ad90-4c4af7f3231d';
  $pane = new stdClass();
  $pane->pid = 'new-086de32e-34a2-4af0-ab34-8565afbeada8';
  $pane->panel = 'sidebar_right';
  $pane->type = 'custom';
  $pane->subtype = 'ad_300x250';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner stick-in-parent',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '086de32e-34a2-4af0-ab34-8565afbeada8';
  $display->content['new-086de32e-34a2-4af0-ab34-8565afbeada8'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-086de32e-34a2-4af0-ab34-8565afbeada8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__post-layout-3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_node__panel_context_848c682b-2c6a-4482-9465-5dc6c7e0d643';
  $handler->task = 'search';
  $handler->subtask = 'node';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'l2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content_top' => NULL,
      'content_main' => NULL,
      'content_bottom' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '104247fc-a91b-4f4d-9da6-a055322b752a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'search_node__panel_context_848c682b-2c6a-4482-9465-5dc6c7e0d643';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-76052808-744f-4285-9479-a02d3aa0f4b1';
  $pane->panel = 'content_main';
  $pane->type = 'search_result';
  $pane->subtype = 'search_result';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'node',
    'log' => 1,
    'override_empty' => 0,
    'empty_title' => '',
    'empty' => '',
    'empty_format' => 'plain_text',
    'override_no_key' => 0,
    'no_key_title' => '',
    'no_key' => '',
    'no_key_format' => 'plain_text',
    'context' => 'argument_string_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '76052808-744f-4285-9479-a02d3aa0f4b1';
  $display->content['new-76052808-744f-4285-9479-a02d3aa0f4b1'] = $pane;
  $display->panels['content_main'][0] = 'new-76052808-744f-4285-9479-a02d3aa0f4b1';
  $pane = new stdClass();
  $pane->pid = 'new-37cbfe2d-d1be-445d-8561-e80984b01485';
  $pane->panel = 'content_top';
  $pane->type = 'search_form';
  $pane->subtype = 'search_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'node',
    'form' => 'advanced',
    'path_type' => 'same',
    'path' => '',
    'override_prompt' => 0,
    'prompt' => '',
    'context' => 'argument_string_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '37cbfe2d-d1be-445d-8561-e80984b01485';
  $display->content['new-37cbfe2d-d1be-445d-8561-e80984b01485'] = $pane;
  $display->panels['content_top'][0] = 'new-37cbfe2d-d1be-445d-8561-e80984b01485';
  $pane = new stdClass();
  $pane->pid = 'new-77b39d5c-ff81-42e6-8a6d-091a69469d29';
  $pane->panel = 'content_top';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'm-y-1',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '77b39d5c-ff81-42e6-8a6d-091a69469d29';
  $display->content['new-77b39d5c-ff81-42e6-8a6d-091a69469d29'] = $pane;
  $display->panels['content_top'][1] = 'new-77b39d5c-ff81-42e6-8a6d-091a69469d29';
  $pane = new stdClass();
  $pane->pid = 'new-e66fc7b9-a462-46f2-810e-6e925dec173c';
  $pane->panel = 'sidebar_right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
    'name' => '300x250',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e66fc7b9-a462-46f2-810e-6e925dec173c';
  $display->content['new-e66fc7b9-a462-46f2-810e-6e925dec173c'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-e66fc7b9-a462-46f2-810e-6e925dec173c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['search_node__panel_context_848c682b-2c6a-4482-9465-5dc6c7e0d643'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_user__panel_context_7b7b6461-bb18-47f4-b56b-c128269637a6';
  $handler->task = 'search';
  $handler->subtask = 'user';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'l2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content_top' => NULL,
      'content_main' => NULL,
      'content_bottom' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '104247fc-a91b-4f4d-9da6-a055322b752a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'search_user__panel_context_7b7b6461-bb18-47f4-b56b-c128269637a6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-76052808-744f-4285-9479-a02d3aa0f4b1';
  $pane->panel = 'content_main';
  $pane->type = 'search_result';
  $pane->subtype = 'search_result';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'user',
    'log' => 1,
    'override_empty' => 0,
    'empty_title' => '',
    'empty' => '',
    'empty_format' => 'plain_text',
    'override_no_key' => 0,
    'no_key_title' => '',
    'no_key' => '',
    'no_key_format' => 'plain_text',
    'context' => 'argument_string_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '76052808-744f-4285-9479-a02d3aa0f4b1';
  $display->content['new-76052808-744f-4285-9479-a02d3aa0f4b1'] = $pane;
  $display->panels['content_main'][0] = 'new-76052808-744f-4285-9479-a02d3aa0f4b1';
  $pane = new stdClass();
  $pane->pid = 'new-37cbfe2d-d1be-445d-8561-e80984b01485';
  $pane->panel = 'content_top';
  $pane->type = 'search_form';
  $pane->subtype = 'search_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'user',
    'form' => 'advanced',
    'path_type' => 'same',
    'path' => '',
    'override_prompt' => 0,
    'prompt' => '',
    'context' => 'argument_string_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '37cbfe2d-d1be-445d-8561-e80984b01485';
  $display->content['new-37cbfe2d-d1be-445d-8561-e80984b01485'] = $pane;
  $display->panels['content_top'][0] = 'new-37cbfe2d-d1be-445d-8561-e80984b01485';
  $pane = new stdClass();
  $pane->pid = 'new-77b39d5c-ff81-42e6-8a6d-091a69469d29';
  $pane->panel = 'content_top';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'm-y-1',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '77b39d5c-ff81-42e6-8a6d-091a69469d29';
  $display->content['new-77b39d5c-ff81-42e6-8a6d-091a69469d29'] = $pane;
  $display->panels['content_top'][1] = 'new-77b39d5c-ff81-42e6-8a6d-091a69469d29';
  $pane = new stdClass();
  $pane->pid = 'new-e66fc7b9-a462-46f2-810e-6e925dec173c';
  $pane->panel = 'sidebar_right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
    'name' => '300x250',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e66fc7b9-a462-46f2-810e-6e925dec173c';
  $display->content['new-e66fc7b9-a462-46f2-810e-6e925dec173c'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-e66fc7b9-a462-46f2-810e-6e925dec173c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['search_user__panel_context_7b7b6461-bb18-47f4-b56b-c128269637a6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__category-layout-2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Category: Layout 3',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'category-layout-2',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'mg_categories' => 'mg_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'This rule is used for the demo purposes only. IF YOU WANT TO USE THIS VARIANT, REMOVE THIS RULE!',
            'php' => 'if(isset($_GET["v"]) && htmlspecialchars($_GET["v"] == 3)) {
    return true;
  } else {
    return false;
  }',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content_top' => NULL,
      'content_main' => NULL,
      'content_bottom' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '97b44910-b452-4122-8606-9f5f98d70fba';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__category-layout-2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $pane->panel = 'content_top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => 'page-title',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $display->content['new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d'] = $pane;
  $display->panels['content_top'][0] = 'new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $pane = new stdClass();
  $pane->pid = 'new-b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9';
  $pane->panel = 'content_top';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9';
  $display->content['new-b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9'] = $pane;
  $display->panels['content_top'][1] = 'new-b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9';
  $pane = new stdClass();
  $pane->pid = 'new-9c2464e0-0229-4591-8a89-84906f525048';
  $pane->panel = 'content_top';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9c2464e0-0229-4591-8a89-84906f525048';
  $display->content['new-9c2464e0-0229-4591-8a89-84906f525048'] = $pane;
  $display->panels['content_top'][2] = 'new-9c2464e0-0229-4591-8a89-84906f525048';
  $pane = new stdClass();
  $pane->pid = 'new-b9ea1c4e-0da1-4272-877e-a9a2e2da47cd';
  $pane->panel = 'content_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles_taxonomy_term_context-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '8',
    'offset' => '0',
    'context' => array(
      0 => 'argument_term_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--list mg-teaser--compact mg-teaser--big ',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b9ea1c4e-0da1-4272-877e-a9a2e2da47cd';
  $display->content['new-b9ea1c4e-0da1-4272-877e-a9a2e2da47cd'] = $pane;
  $display->panels['content_top'][3] = 'new-b9ea1c4e-0da1-4272-877e-a9a2e2da47cd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__category-layout-2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__category-layout-3';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Category: Layout 2',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'category-layout-3',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'mg_categories' => 'mg_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'This rule is used for the demo purposes only. IF YOU WANT TO USE THIS VARIANT, REMOVE THIS RULE!',
            'php' => 'if(isset($_GET["v"]) && htmlspecialchars($_GET["v"] == 2)) {
    return true;
  } else {
    return false;
  }',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content_top' => NULL,
      'content_main' => NULL,
      'content_bottom' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '97b44910-b452-4122-8606-9f5f98d70fba';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__category-layout-3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3e8b906b-1407-4fb3-9214-4726ad201ea0';
  $pane->panel = 'content_main';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles_taxonomy_term_context-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '8',
    'offset' => '1',
    'context' => array(
      0 => 'argument_term_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--2-col-grid',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3e8b906b-1407-4fb3-9214-4726ad201ea0';
  $display->content['new-3e8b906b-1407-4fb3-9214-4726ad201ea0'] = $pane;
  $display->panels['content_main'][0] = 'new-3e8b906b-1407-4fb3-9214-4726ad201ea0';
  $pane = new stdClass();
  $pane->pid = 'new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $pane->panel = 'content_top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => 'page-title',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $display->content['new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d'] = $pane;
  $display->panels['content_top'][0] = 'new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $pane = new stdClass();
  $pane->pid = 'new-b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9';
  $pane->panel = 'content_top';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9';
  $display->content['new-b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9'] = $pane;
  $display->panels['content_top'][1] = 'new-b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9';
  $pane = new stdClass();
  $pane->pid = 'new-9c2464e0-0229-4591-8a89-84906f525048';
  $pane->panel = 'content_top';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9c2464e0-0229-4591-8a89-84906f525048';
  $display->content['new-9c2464e0-0229-4591-8a89-84906f525048'] = $pane;
  $display->panels['content_top'][2] = 'new-9c2464e0-0229-4591-8a89-84906f525048';
  $pane = new stdClass();
  $pane->pid = 'new-b9ea1c4e-0da1-4272-877e-a9a2e2da47cd';
  $pane->panel = 'content_top';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles_taxonomy_term_context-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '1',
    'offset' => '0',
    'context' => array(
      0 => 'argument_term_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--list mg-teaser--compact mg-teaser--big ',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b9ea1c4e-0da1-4272-877e-a9a2e2da47cd';
  $display->content['new-b9ea1c4e-0da1-4272-877e-a9a2e2da47cd'] = $pane;
  $display->panels['content_top'][3] = 'new-b9ea1c4e-0da1-4272-877e-a9a2e2da47cd';
  $pane = new stdClass();
  $pane->pid = 'new-6bdaa918-0d2a-4475-98d4-93fbbceab195';
  $pane->panel = 'sidebar_right';
  $pane->type = 'custom';
  $pane->subtype = 'ad_300x600';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner stick-in-parent',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6bdaa918-0d2a-4475-98d4-93fbbceab195';
  $display->content['new-6bdaa918-0d2a-4475-98d4-93fbbceab195'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-6bdaa918-0d2a-4475-98d4-93fbbceab195';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__category-layout-3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__category-layout-4';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Category: Layout 4',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'category-layout-4',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'mg_categories' => 'mg_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'This rule is used for the demo purposes only. IF YOU WANT TO USE THIS VARIANT, REMOVE THIS RULE!',
            'php' => 'if(isset($_GET["v"]) && htmlspecialchars($_GET["v"] == 4)) {
    return true;
  } else {
    return false;
  }',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'grid-12-col-1';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content_top' => NULL,
      'content_main' => NULL,
      'content_bottom' => NULL,
      'sidebar_right' => NULL,
      'col_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '97b44910-b452-4122-8606-9f5f98d70fba';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__category-layout-4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $pane->panel = 'col_1';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => 'page-title',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $display->content['new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d'] = $pane;
  $display->panels['col_1'][0] = 'new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $pane = new stdClass();
  $pane->pid = 'new-b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9';
  $pane->panel = 'col_1';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9';
  $display->content['new-b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9'] = $pane;
  $display->panels['col_1'][1] = 'new-b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9';
  $pane = new stdClass();
  $pane->pid = 'new-9c2464e0-0229-4591-8a89-84906f525048';
  $pane->panel = 'col_1';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9c2464e0-0229-4591-8a89-84906f525048';
  $display->content['new-9c2464e0-0229-4591-8a89-84906f525048'] = $pane;
  $display->panels['col_1'][2] = 'new-9c2464e0-0229-4591-8a89-84906f525048';
  $pane = new stdClass();
  $pane->pid = 'new-dfe646b4-b896-48cc-a6cf-8dd9a8b69d23';
  $pane->panel = 'col_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles_taxonomy_term_context-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '12',
    'offset' => '1',
    'context' => array(
      0 => 'argument_term_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--4-col-grid mg-teaser--compact',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'dfe646b4-b896-48cc-a6cf-8dd9a8b69d23';
  $display->content['new-dfe646b4-b896-48cc-a6cf-8dd9a8b69d23'] = $pane;
  $display->panels['col_1'][3] = 'new-dfe646b4-b896-48cc-a6cf-8dd9a8b69d23';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__category-layout-4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__category-layout-5';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -3;
  $handler->conf = array(
    'title' => 'Category: Layout 5',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'category-layout-5',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'mg_categories' => 'mg_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'This rule is used for the demo purposes only. IF YOU WANT TO USE THIS VARIANT, REMOVE THIS RULE!',
            'php' => 'if(isset($_GET["v"]) && htmlspecialchars($_GET["v"] == 5)) {
    return true;
  } else {
    return false;
  }',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content_top' => NULL,
      'content_main' => NULL,
      'content_bottom' => NULL,
      'sidebar_right' => NULL,
      'col_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '97b44910-b452-4122-8606-9f5f98d70fba';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__category-layout-5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9c2464e0-0229-4591-8a89-84906f525048';
  $pane->panel = 'content_main';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9c2464e0-0229-4591-8a89-84906f525048';
  $display->content['new-9c2464e0-0229-4591-8a89-84906f525048'] = $pane;
  $display->panels['content_main'][0] = 'new-9c2464e0-0229-4591-8a89-84906f525048';
  $pane = new stdClass();
  $pane->pid = 'new-b6e62fa2-7996-42b3-ae27-497234bbb4ec';
  $pane->panel = 'content_main';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles_taxonomy_term_context-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '1',
    'offset' => '0',
    'context' => array(
      0 => 'argument_term_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--compact',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b6e62fa2-7996-42b3-ae27-497234bbb4ec';
  $display->content['new-b6e62fa2-7996-42b3-ae27-497234bbb4ec'] = $pane;
  $display->panels['content_main'][1] = 'new-b6e62fa2-7996-42b3-ae27-497234bbb4ec';
  $pane = new stdClass();
  $pane->pid = 'new-1e41c19c-3251-4150-b02e-c5e5fa6ae062';
  $pane->panel = 'content_main';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles_taxonomy_term_context-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '8',
    'offset' => '1',
    'context' => array(
      0 => 'argument_term_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--2-col-grid mg-teaser--compact',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1e41c19c-3251-4150-b02e-c5e5fa6ae062';
  $display->content['new-1e41c19c-3251-4150-b02e-c5e5fa6ae062'] = $pane;
  $display->panels['content_main'][2] = 'new-1e41c19c-3251-4150-b02e-c5e5fa6ae062';
  $pane = new stdClass();
  $pane->pid = 'new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $pane->panel = 'content_top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => 'page-title',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $display->content['new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d'] = $pane;
  $display->panels['content_top'][0] = 'new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $pane = new stdClass();
  $pane->pid = 'new-b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9';
  $pane->panel = 'content_top';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9';
  $display->content['new-b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9'] = $pane;
  $display->panels['content_top'][1] = 'new-b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9';
  $pane = new stdClass();
  $pane->pid = 'new-c3fbce01-b148-454c-b837-29710ec8ffff';
  $pane->panel = 'sidebar_right';
  $pane->type = 'custom';
  $pane->subtype = 'ad_300x600';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner stick-in-parent',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c3fbce01-b148-454c-b837-29710ec8ffff';
  $display->content['new-c3fbce01-b148-454c-b837-29710ec8ffff'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-c3fbce01-b148-454c-b837-29710ec8ffff';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__category-layout-5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_bcfbf617-7456-4a62-96f9-cb0deaf8cadf';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Category: Layout 1',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'mg_categories' => 'mg_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content_top' => NULL,
      'content_main' => NULL,
      'content_bottom' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '97b44910-b452-4122-8606-9f5f98d70fba';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_bcfbf617-7456-4a62-96f9-cb0deaf8cadf';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8cdaaa53-8d6d-4605-9560-a90002016a89';
  $pane->panel = 'content_main';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8cdaaa53-8d6d-4605-9560-a90002016a89';
  $display->content['new-8cdaaa53-8d6d-4605-9560-a90002016a89'] = $pane;
  $display->panels['content_main'][0] = 'new-8cdaaa53-8d6d-4605-9560-a90002016a89';
  $pane = new stdClass();
  $pane->pid = 'new-9c2464e0-0229-4591-8a89-84906f525048';
  $pane->panel = 'content_main';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9c2464e0-0229-4591-8a89-84906f525048';
  $display->content['new-9c2464e0-0229-4591-8a89-84906f525048'] = $pane;
  $display->panels['content_main'][1] = 'new-9c2464e0-0229-4591-8a89-84906f525048';
  $pane = new stdClass();
  $pane->pid = 'new-f7e7d15e-10ab-4a86-9535-ec8d2cac8d27';
  $pane->panel = 'content_main';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles_taxonomy_term_context-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '8',
    'offset' => '0',
    'context' => array(
      0 => 'argument_term_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--list',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f7e7d15e-10ab-4a86-9535-ec8d2cac8d27';
  $display->content['new-f7e7d15e-10ab-4a86-9535-ec8d2cac8d27'] = $pane;
  $display->panels['content_main'][2] = 'new-f7e7d15e-10ab-4a86-9535-ec8d2cac8d27';
  $pane = new stdClass();
  $pane->pid = 'new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $pane->panel = 'content_top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => 'page-title',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $display->content['new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d'] = $pane;
  $display->panels['content_top'][0] = 'new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $pane = new stdClass();
  $pane->pid = 'new-6bdaa918-0d2a-4475-98d4-93fbbceab195';
  $pane->panel = 'sidebar_right';
  $pane->type = 'custom';
  $pane->subtype = 'ad_300x600';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner stick-in-parent',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6bdaa918-0d2a-4475-98d4-93fbbceab195';
  $display->content['new-6bdaa918-0d2a-4475-98d4-93fbbceab195'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-6bdaa918-0d2a-4475-98d4-93fbbceab195';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_bcfbf617-7456-4a62-96f9-cb0deaf8cadf'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__tags-list';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -4;
  $handler->conf = array(
    'title' => 'Tags: List',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'tags-list',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'mg_tags' => 'mg_tags',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content_top' => NULL,
      'content_main' => NULL,
      'content_bottom' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '97b44910-b452-4122-8606-9f5f98d70fba';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__tags-list';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9';
  $pane->panel = 'content_main';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9';
  $display->content['new-b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9'] = $pane;
  $display->panels['content_main'][0] = 'new-b41ec6bf-d5ca-47d1-8cf9-7b0ff32d65e9';
  $pane = new stdClass();
  $pane->pid = 'new-9c2464e0-0229-4591-8a89-84906f525048';
  $pane->panel = 'content_main';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9c2464e0-0229-4591-8a89-84906f525048';
  $display->content['new-9c2464e0-0229-4591-8a89-84906f525048'] = $pane;
  $display->panels['content_main'][1] = 'new-9c2464e0-0229-4591-8a89-84906f525048';
  $pane = new stdClass();
  $pane->pid = 'new-f7e7d15e-10ab-4a86-9535-ec8d2cac8d27';
  $pane->panel = 'content_main';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles_taxonomy_term_context-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '12',
    'offset' => '0',
    'context' => array(
      0 => 'argument_term_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--list',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f7e7d15e-10ab-4a86-9535-ec8d2cac8d27';
  $display->content['new-f7e7d15e-10ab-4a86-9535-ec8d2cac8d27'] = $pane;
  $display->panels['content_main'][2] = 'new-f7e7d15e-10ab-4a86-9535-ec8d2cac8d27';
  $pane = new stdClass();
  $pane->pid = 'new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $pane->panel = 'content_top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => 'page-title',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $display->content['new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d'] = $pane;
  $display->panels['content_top'][0] = 'new-27d7a5cc-d72c-49d0-bb06-bffc0b67a44d';
  $pane = new stdClass();
  $pane->pid = 'new-6bdaa918-0d2a-4475-98d4-93fbbceab195';
  $pane->panel = 'sidebar_right';
  $pane->type = 'custom';
  $pane->subtype = 'ad_300x600';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner stick-in-parent',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6bdaa918-0d2a-4475-98d4-93fbbceab195';
  $display->content['new-6bdaa918-0d2a-4475-98d4-93fbbceab195'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-6bdaa918-0d2a-4475-98d4-93fbbceab195';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__tags-list'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_c209fb70-4dd2-42a9-b378-1e3ae4b2c150';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'l2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content_top' => NULL,
      'content_main' => NULL,
      'content_bottom' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a1324018-3f1e-464f-8c40-2bb06c8627dc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'user_view__panel_context_c209fb70-4dd2-42a9-b378-1e3ae4b2c150';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1e37a65a-dd6e-4130-80f2-c86b8ae49d09';
  $pane->panel = 'content_main';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_related_by_author-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:user_1',
    ),
    'override_title' => 0,
    'override_title_text' => 'Author - %title',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--list',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1e37a65a-dd6e-4130-80f2-c86b8ae49d09';
  $display->content['new-1e37a65a-dd6e-4130-80f2-c86b8ae49d09'] = $pane;
  $display->panels['content_main'][0] = 'new-1e37a65a-dd6e-4130-80f2-c86b8ae49d09';
  $pane = new stdClass();
  $pane->pid = 'new-5b66f297-56f9-4731-a726-8546fbf3fd1b';
  $pane->panel = 'content_top';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5b66f297-56f9-4731-a726-8546fbf3fd1b';
  $display->content['new-5b66f297-56f9-4731-a726-8546fbf3fd1b'] = $pane;
  $display->panels['content_top'][0] = 'new-5b66f297-56f9-4731-a726-8546fbf3fd1b';
  $pane = new stdClass();
  $pane->pid = 'new-c832f5c9-cea5-4d8b-a50b-c0a222842d70';
  $pane->panel = 'content_top';
  $pane->type = 'entity_view';
  $pane->subtype = 'user';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_entity_id:user_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c832f5c9-cea5-4d8b-a50b-c0a222842d70';
  $display->content['new-c832f5c9-cea5-4d8b-a50b-c0a222842d70'] = $pane;
  $display->panels['content_top'][1] = 'new-c832f5c9-cea5-4d8b-a50b-c0a222842d70';
  $pane = new stdClass();
  $pane->pid = 'new-4b025f93-bb7d-46b1-bb33-8aaca252fa9b';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'most_commented-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '3',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4b025f93-bb7d-46b1-bb33-8aaca252fa9b';
  $display->content['new-4b025f93-bb7d-46b1-bb33-8aaca252fa9b'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-4b025f93-bb7d-46b1-bb33-8aaca252fa9b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_c209fb70-4dd2-42a9-b378-1e3ae4b2c150'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function mg_pages_and_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home Page';
  $page->admin_description = 'Home Page';
  $page->path = 'home/!variant';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'variant' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__home-page-6';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = -4;
  $handler->conf = array(
    'title' => 'Home Page 6',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'home-page-6',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'v6',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l1';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content_1' => NULL,
      'content_2' => NULL,
      'content_3' => NULL,
      'content_4' => NULL,
      'content_5' => NULL,
      'content_6' => NULL,
      'featured_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'drupal magazine theme';
  $display->uuid = '385faa23-03ea-4e8e-96e6-31d67e4aa6fe';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_page__home-page-6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-38624808-1764-49ee-8b12-a9c5e5789d1a';
  $pane->panel = 'content_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '6',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
      'field_mg_article_options_value' => 'All',
    ),
    'override_title' => 0,
    'override_title_text' => 'Latest',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--2-col-grid',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '38624808-1764-49ee-8b12-a9c5e5789d1a';
  $display->content['new-38624808-1764-49ee-8b12-a9c5e5789d1a'] = $pane;
  $display->panels['content_1'][0] = 'new-38624808-1764-49ee-8b12-a9c5e5789d1a';
  $pane = new stdClass();
  $pane->pid = 'new-e3e332b1-cc55-4e5d-ae6b-58cdb2286141';
  $pane->panel = 'featured_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e3e332b1-cc55-4e5d-ae6b-58cdb2286141';
  $display->content['new-e3e332b1-cc55-4e5d-ae6b-58cdb2286141'] = $pane;
  $display->panels['featured_content'][0] = 'new-e3e332b1-cc55-4e5d-ae6b-58cdb2286141';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__home-page-5';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = -3;
  $handler->conf = array(
    'title' => 'Home Page 5',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'home-page-5',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'v5',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l1';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content_1' => NULL,
      'content_2' => NULL,
      'content_3' => NULL,
      'content_4' => NULL,
      'content_5' => NULL,
      'content_6' => NULL,
      'featured_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Drupal Magazine Template';
  $display->uuid = '385faa23-03ea-4e8e-96e6-31d67e4aa6fe';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_page__home-page-5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5dd7ea2d-777c-40b1-acc3-1227ea100824';
  $pane->panel = 'content_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '3',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
    ),
    'override_title' => 1,
    'override_title_text' => 'Title',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--3-col-grid mg-teaser--compact',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5dd7ea2d-777c-40b1-acc3-1227ea100824';
  $display->content['new-5dd7ea2d-777c-40b1-acc3-1227ea100824'] = $pane;
  $display->panels['content_1'][0] = 'new-5dd7ea2d-777c-40b1-acc3-1227ea100824';
  $pane = new stdClass();
  $pane->pid = 'new-8d3e10dd-92a0-414f-89b4-036dd2f62a0f';
  $pane->panel = 'content_2';
  $pane->type = 'panels_mini';
  $pane->subtype = 'panel_style_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8d3e10dd-92a0-414f-89b4-036dd2f62a0f';
  $display->content['new-8d3e10dd-92a0-414f-89b4-036dd2f62a0f'] = $pane;
  $display->panels['content_2'][0] = 'new-8d3e10dd-92a0-414f-89b4-036dd2f62a0f';
  $pane = new stdClass();
  $pane->pid = 'new-89b61483-bee2-4af7-83f9-cd34850ee2fa';
  $pane->panel = 'content_2';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '4',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
    ),
    'override_title' => 1,
    'override_title_text' => 'Title',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--2-col-grid',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '89b61483-bee2-4af7-83f9-cd34850ee2fa';
  $display->content['new-89b61483-bee2-4af7-83f9-cd34850ee2fa'] = $pane;
  $display->panels['content_2'][1] = 'new-89b61483-bee2-4af7-83f9-cd34850ee2fa';
  $pane = new stdClass();
  $pane->pid = 'new-97c00373-e1c3-4639-b218-11991ac389ff';
  $pane->panel = 'content_3';
  $pane->type = 'views';
  $pane->subtype = 'popular_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'embed_3',
    'override_title' => 1,
    'override_title_text' => 'Popular',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--list stick-in-parent',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '97c00373-e1c3-4639-b218-11991ac389ff';
  $display->content['new-97c00373-e1c3-4639-b218-11991ac389ff'] = $pane;
  $display->panels['content_3'][0] = 'new-97c00373-e1c3-4639-b218-11991ac389ff';
  $pane = new stdClass();
  $pane->pid = 'new-e4130bf8-012b-4610-86ed-13fb626af2b4';
  $pane->panel = 'content_4';
  $pane->type = 'panels_mini';
  $pane->subtype = 'panel_style_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'Life Style',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--compact',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e4130bf8-012b-4610-86ed-13fb626af2b4';
  $display->content['new-e4130bf8-012b-4610-86ed-13fb626af2b4'] = $pane;
  $display->panels['content_4'][0] = 'new-e4130bf8-012b-4610-86ed-13fb626af2b4';
  $pane = new stdClass();
  $pane->pid = 'new-bb5e4dd5-dd57-4c4c-afa7-8ee789569bfc';
  $pane->panel = 'content_5';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '10',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
    ),
    'override_title' => 1,
    'override_title_text' => 'Title',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--list',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bb5e4dd5-dd57-4c4c-afa7-8ee789569bfc';
  $display->content['new-bb5e4dd5-dd57-4c4c-afa7-8ee789569bfc'] = $pane;
  $display->panels['content_5'][0] = 'new-bb5e4dd5-dd57-4c4c-afa7-8ee789569bfc';
  $pane = new stdClass();
  $pane->pid = 'new-abbffa66-c657-4567-9798-d30d260f5217';
  $pane->panel = 'content_6';
  $pane->type = 'custom';
  $pane->subtype = 'ad_300x250';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner stick-in-parent',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'abbffa66-c657-4567-9798-d30d260f5217';
  $display->content['new-abbffa66-c657-4567-9798-d30d260f5217'] = $pane;
  $display->panels['content_6'][0] = 'new-abbffa66-c657-4567-9798-d30d260f5217';
  $pane = new stdClass();
  $pane->pid = 'new-815aa794-c23a-4cad-8b10-e1b277b648df';
  $pane->panel = 'featured_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '815aa794-c23a-4cad-8b10-e1b277b648df';
  $display->content['new-815aa794-c23a-4cad-8b10-e1b277b648df'] = $pane;
  $display->panels['featured_content'][0] = 'new-815aa794-c23a-4cad-8b10-e1b277b648df';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__panel_context_fc907b3b-5721-4c30-aa73-07327da023a7';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Home Page 4',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => 'not-front',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'v4',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l1';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content_1' => NULL,
      'content_2' => NULL,
      'content_3' => NULL,
      'content_4' => NULL,
      'content_5' => NULL,
      'content_6' => NULL,
      'featured_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'drupal magazine theme';
  $display->uuid = '385faa23-03ea-4e8e-96e6-31d67e4aa6fe';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_page__panel_context_fc907b3b-5721-4c30-aa73-07327da023a7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-631fb275-828a-44b4-862e-eef98f85120f';
  $pane->panel = 'content_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '9',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
    ),
    'override_title' => 1,
    'override_title_text' => 'Title',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--3-col-grid mg-teaser--card',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '631fb275-828a-44b4-862e-eef98f85120f';
  $display->content['new-631fb275-828a-44b4-862e-eef98f85120f'] = $pane;
  $display->panels['content_1'][0] = 'new-631fb275-828a-44b4-862e-eef98f85120f';
  $pane = new stdClass();
  $pane->pid = 'new-ac92babf-945a-4954-afbd-493fad15e94e';
  $pane->panel = 'featured_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ac92babf-945a-4954-afbd-493fad15e94e';
  $display->content['new-ac92babf-945a-4954-afbd-493fad15e94e'] = $pane;
  $display->panels['featured_content'][0] = 'new-ac92babf-945a-4954-afbd-493fad15e94e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__panel_context_4048c2bb-907e-4c75-a6d2-6eedbccbc311';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Home Page 3',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => 'not-front',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'v3',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l1';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content_1' => NULL,
      'content_2' => NULL,
      'content_3' => NULL,
      'content_4' => NULL,
      'content_5' => NULL,
      'content_6' => NULL,
      'featured_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'drupal magazine theme';
  $display->uuid = '385faa23-03ea-4e8e-96e6-31d67e4aa6fe';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_page__panel_context_4048c2bb-907e-4c75-a6d2-6eedbccbc311';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bb48c60b-5a7d-4b0c-b9d4-c473c828adb0';
  $pane->panel = 'content_1';
  $pane->type = 'panels_mini';
  $pane->subtype = 'panel_style_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--compact',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bb48c60b-5a7d-4b0c-b9d4-c473c828adb0';
  $display->content['new-bb48c60b-5a7d-4b0c-b9d4-c473c828adb0'] = $pane;
  $display->panels['content_1'][0] = 'new-bb48c60b-5a7d-4b0c-b9d4-c473c828adb0';
  $pane = new stdClass();
  $pane->pid = 'new-3b0d09fe-b33f-4a1f-9065-28079ec027ec';
  $pane->panel = 'content_2';
  $pane->type = 'panels_mini';
  $pane->subtype = 'panel_style_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3b0d09fe-b33f-4a1f-9065-28079ec027ec';
  $display->content['new-3b0d09fe-b33f-4a1f-9065-28079ec027ec'] = $pane;
  $display->panels['content_2'][0] = 'new-3b0d09fe-b33f-4a1f-9065-28079ec027ec';
  $pane = new stdClass();
  $pane->pid = 'new-4ae3e9a3-2d4d-4691-afb4-c1b3b6cd7a24';
  $pane->panel = 'content_3';
  $pane->type = 'block';
  $pane->subtype = 'quicktabs-popular';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--list',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4ae3e9a3-2d4d-4691-afb4-c1b3b6cd7a24';
  $display->content['new-4ae3e9a3-2d4d-4691-afb4-c1b3b6cd7a24'] = $pane;
  $display->panels['content_3'][0] = 'new-4ae3e9a3-2d4d-4691-afb4-c1b3b6cd7a24';
  $pane = new stdClass();
  $pane->pid = 'new-5dd7ea2d-777c-40b1-acc3-1227ea100824';
  $pane->panel = 'content_4';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '4',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
    ),
    'override_title' => 1,
    'override_title_text' => 'Title',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--4-col-grid mg-teaser--compact',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5dd7ea2d-777c-40b1-acc3-1227ea100824';
  $display->content['new-5dd7ea2d-777c-40b1-acc3-1227ea100824'] = $pane;
  $display->panels['content_4'][0] = 'new-5dd7ea2d-777c-40b1-acc3-1227ea100824';
  $pane = new stdClass();
  $pane->pid = 'new-38624808-1764-49ee-8b12-a9c5e5789d1a';
  $pane->panel = 'content_5';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '8',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
    ),
    'override_title' => 1,
    'override_title_text' => 'Title',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--2-col-grid',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '38624808-1764-49ee-8b12-a9c5e5789d1a';
  $display->content['new-38624808-1764-49ee-8b12-a9c5e5789d1a'] = $pane;
  $display->panels['content_5'][0] = 'new-38624808-1764-49ee-8b12-a9c5e5789d1a';
  $pane = new stdClass();
  $pane->pid = 'new-4e4d1639-3b23-43b7-800f-112173881b66';
  $pane->panel = 'content_6';
  $pane->type = 'block';
  $pane->subtype = 'poll-recent';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4e4d1639-3b23-43b7-800f-112173881b66';
  $display->content['new-4e4d1639-3b23-43b7-800f-112173881b66'] = $pane;
  $display->panels['content_6'][0] = 'new-4e4d1639-3b23-43b7-800f-112173881b66';
  $pane = new stdClass();
  $pane->pid = 'new-fe1979aa-c311-4319-b5c1-939bcd9008f6';
  $pane->panel = 'content_6';
  $pane->type = 'custom';
  $pane->subtype = 'ad_300x250';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner stick-in-parent',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fe1979aa-c311-4319-b5c1-939bcd9008f6';
  $display->content['new-fe1979aa-c311-4319-b5c1-939bcd9008f6'] = $pane;
  $display->panels['content_6'][1] = 'new-fe1979aa-c311-4319-b5c1-939bcd9008f6';
  $pane = new stdClass();
  $pane->pid = 'new-580cb64c-c4b6-4535-8620-56180bca88f9';
  $pane->panel = 'featured_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '580cb64c-c4b6-4535-8620-56180bca88f9';
  $display->content['new-580cb64c-c4b6-4535-8620-56180bca88f9'] = $pane;
  $display->panels['featured_content'][0] = 'new-580cb64c-c4b6-4535-8620-56180bca88f9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__panel_context_57313885-bd2e-4948-8bba-dcb108aa6bc8';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home Page 2',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'v2',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l1';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content_1' => NULL,
      'content_2' => NULL,
      'content_3' => NULL,
      'content_4' => NULL,
      'content_5' => NULL,
      'content_6' => NULL,
      'featured_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Drupal Magazine Theme';
  $display->uuid = '385faa23-03ea-4e8e-96e6-31d67e4aa6fe';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_page__panel_context_57313885-bd2e-4948-8bba-dcb108aa6bc8';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e4130bf8-012b-4610-86ed-13fb626af2b4';
  $pane->panel = 'content_1';
  $pane->type = 'panels_mini';
  $pane->subtype = 'panel_style_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'Life Style',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--compact',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e4130bf8-012b-4610-86ed-13fb626af2b4';
  $display->content['new-e4130bf8-012b-4610-86ed-13fb626af2b4'] = $pane;
  $display->panels['content_1'][0] = 'new-e4130bf8-012b-4610-86ed-13fb626af2b4';
  $pane = new stdClass();
  $pane->pid = 'new-f591dfb6-ecc6-4d3b-a6ba-253da277b0e3';
  $pane->panel = 'content_2';
  $pane->type = 'panels_mini';
  $pane->subtype = 'panel_style_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'Technology',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f591dfb6-ecc6-4d3b-a6ba-253da277b0e3';
  $display->content['new-f591dfb6-ecc6-4d3b-a6ba-253da277b0e3'] = $pane;
  $display->panels['content_2'][0] = 'new-f591dfb6-ecc6-4d3b-a6ba-253da277b0e3';
  $pane = new stdClass();
  $pane->pid = 'new-cd187e43-c6e7-4243-b819-76a5af1c56b4';
  $pane->panel = 'content_2';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '4',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
    ),
    'override_title' => 1,
    'override_title_text' => 'Title',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--2-col-grid',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cd187e43-c6e7-4243-b819-76a5af1c56b4';
  $display->content['new-cd187e43-c6e7-4243-b819-76a5af1c56b4'] = $pane;
  $display->panels['content_2'][1] = 'new-cd187e43-c6e7-4243-b819-76a5af1c56b4';
  $pane = new stdClass();
  $pane->pid = 'new-4ae3e9a3-2d4d-4691-afb4-c1b3b6cd7a24';
  $pane->panel = 'content_3';
  $pane->type = 'block';
  $pane->subtype = 'quicktabs-popular';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Popular',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--list',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4ae3e9a3-2d4d-4691-afb4-c1b3b6cd7a24';
  $display->content['new-4ae3e9a3-2d4d-4691-afb4-c1b3b6cd7a24'] = $pane;
  $display->panels['content_3'][0] = 'new-4ae3e9a3-2d4d-4691-afb4-c1b3b6cd7a24';
  $pane = new stdClass();
  $pane->pid = 'new-fe1979aa-c311-4319-b5c1-939bcd9008f6';
  $pane->panel = 'content_3';
  $pane->type = 'custom';
  $pane->subtype = 'ad_300x250';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner stick-in-parent',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fe1979aa-c311-4319-b5c1-939bcd9008f6';
  $display->content['new-fe1979aa-c311-4319-b5c1-939bcd9008f6'] = $pane;
  $display->panels['content_3'][1] = 'new-fe1979aa-c311-4319-b5c1-939bcd9008f6';
  $pane = new stdClass();
  $pane->pid = 'new-488d9d32-c564-4f42-a7f5-5dc772713455';
  $pane->panel = 'content_4';
  $pane->type = 'panels_mini';
  $pane->subtype = 'panel_style_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '488d9d32-c564-4f42-a7f5-5dc772713455';
  $display->content['new-488d9d32-c564-4f42-a7f5-5dc772713455'] = $pane;
  $display->panels['content_4'][0] = 'new-488d9d32-c564-4f42-a7f5-5dc772713455';
  $pane = new stdClass();
  $pane->pid = 'new-b9d8763b-2878-41c4-a8e7-982cfdc3e83a';
  $pane->panel = 'content_5';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '8',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
    ),
    'override_title' => 1,
    'override_title_text' => 'Title',
    'override_title_heading' => 'h2',
    'use_pager' => 0,
    'pager_id' => '0',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--list',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b9d8763b-2878-41c4-a8e7-982cfdc3e83a';
  $display->content['new-b9d8763b-2878-41c4-a8e7-982cfdc3e83a'] = $pane;
  $display->panels['content_5'][0] = 'new-b9d8763b-2878-41c4-a8e7-982cfdc3e83a';
  $pane = new stdClass();
  $pane->pid = 'new-ceaa9fb1-78c0-44bd-a242-ccb7adbb17a6';
  $pane->panel = 'content_6';
  $pane->type = 'custom';
  $pane->subtype = 'ad_300x600';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner stick-in-parent',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ceaa9fb1-78c0-44bd-a242-ccb7adbb17a6';
  $display->content['new-ceaa9fb1-78c0-44bd-a242-ccb7adbb17a6'] = $pane;
  $display->panels['content_6'][0] = 'new-ceaa9fb1-78c0-44bd-a242-ccb7adbb17a6';
  $pane = new stdClass();
  $pane->pid = 'new-51266676-3e7f-477b-9b17-9a4a2f39dd41';
  $pane->panel = 'featured_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '51266676-3e7f-477b-9b17-9a4a2f39dd41';
  $display->content['new-51266676-3e7f-477b-9b17-9a4a2f39dd41'] = $pane;
  $display->panels['featured_content'][0] = 'new-51266676-3e7f-477b-9b17-9a4a2f39dd41';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__panel_context_44a74f3f-f70d-4ca8-ac1b-ceb02483d10e';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Home Page 1',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'l1';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content_1' => NULL,
      'content_2' => NULL,
      'content_3' => NULL,
      'content_4' => NULL,
      'content_5' => NULL,
      'content_6' => NULL,
      'featured_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Drupal Magazine Template';
  $display->uuid = '385faa23-03ea-4e8e-96e6-31d67e4aa6fe';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_page__panel_context_44a74f3f-f70d-4ca8-ac1b-ceb02483d10e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5dd7ea2d-777c-40b1-acc3-1227ea100824';
  $pane->panel = 'content_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '4',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
    ),
    'override_title' => 1,
    'override_title_text' => 'Title',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--4-col-grid mg-teaser--compact',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5dd7ea2d-777c-40b1-acc3-1227ea100824';
  $display->content['new-5dd7ea2d-777c-40b1-acc3-1227ea100824'] = $pane;
  $display->panels['content_1'][0] = 'new-5dd7ea2d-777c-40b1-acc3-1227ea100824';
  $pane = new stdClass();
  $pane->pid = 'new-cbf7dcc9-6d50-47aa-a6b0-bcc351b4da4a';
  $pane->panel = 'content_2';
  $pane->type = 'panels_mini';
  $pane->subtype = 'panel_style_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--list mg-teaser--card',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cbf7dcc9-6d50-47aa-a6b0-bcc351b4da4a';
  $display->content['new-cbf7dcc9-6d50-47aa-a6b0-bcc351b4da4a'] = $pane;
  $display->panels['content_2'][0] = 'new-cbf7dcc9-6d50-47aa-a6b0-bcc351b4da4a';
  $pane = new stdClass();
  $pane->pid = 'new-97c00373-e1c3-4639-b218-11991ac389ff';
  $pane->panel = 'content_3';
  $pane->type = 'views';
  $pane->subtype = 'popular_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'embed_3',
    'override_title' => 1,
    'override_title_text' => 'POPULAR',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--list stick-in-parent',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '97c00373-e1c3-4639-b218-11991ac389ff';
  $display->content['new-97c00373-e1c3-4639-b218-11991ac389ff'] = $pane;
  $display->panels['content_3'][0] = 'new-97c00373-e1c3-4639-b218-11991ac389ff';
  $pane = new stdClass();
  $pane->pid = 'new-e4130bf8-012b-4610-86ed-13fb626af2b4';
  $pane->panel = 'content_4';
  $pane->type = 'panels_mini';
  $pane->subtype = 'panel_style_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'Life Style',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--compact',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e4130bf8-012b-4610-86ed-13fb626af2b4';
  $display->content['new-e4130bf8-012b-4610-86ed-13fb626af2b4'] = $pane;
  $display->panels['content_4'][0] = 'new-e4130bf8-012b-4610-86ed-13fb626af2b4';
  $pane = new stdClass();
  $pane->pid = 'new-07c24cc7-4fec-409a-b1ee-7060463b0a68';
  $pane->panel = 'content_5';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '8',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
    ),
    'override_title' => 1,
    'override_title_text' => 'Title',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mg-teaser--2-col-grid',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '07c24cc7-4fec-409a-b1ee-7060463b0a68';
  $display->content['new-07c24cc7-4fec-409a-b1ee-7060463b0a68'] = $pane;
  $display->panels['content_5'][0] = 'new-07c24cc7-4fec-409a-b1ee-7060463b0a68';
  $pane = new stdClass();
  $pane->pid = 'new-9a41a7ae-5c15-4b13-8785-a98f178d0aac';
  $pane->panel = 'content_6';
  $pane->type = 'custom';
  $pane->subtype = 'ad_300x250';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner stick-in-parent',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9a41a7ae-5c15-4b13-8785-a98f178d0aac';
  $display->content['new-9a41a7ae-5c15-4b13-8785-a98f178d0aac'] = $pane;
  $display->panels['content_6'][0] = 'new-9a41a7ae-5c15-4b13-8785-a98f178d0aac';
  $pane = new stdClass();
  $pane->pid = 'new-815aa794-c23a-4cad-8b10-e1b277b648df';
  $pane->panel = 'featured_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '815aa794-c23a-4cad-8b10-e1b277b648df';
  $display->content['new-815aa794-c23a-4cad-8b10-e1b277b648df'] = $pane;
  $display->panels['featured_content'][0] = 'new-815aa794-c23a-4cad-8b10-e1b277b648df';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}
