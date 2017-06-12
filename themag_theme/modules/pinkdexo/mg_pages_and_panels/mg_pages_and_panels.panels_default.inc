<?php
/**
 * @file
 * mg_pages_and_panels.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function mg_pages_and_panels_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'content_author_social_buttons';
  $mini->category = 'TheMAG Widgets';
  $mini->admin_title = 'Content Author + Share Buttons';
  $mini->admin_description = 'Content Author + Share Buttons';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'optional' => 0,
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array(
    0 => array(
      'identifier' => 'Node from User (on node.node_author)',
      'keyword' => 'user_2',
      'name' => 'entity_from_schema:uid-user-node',
      'context' => 'relationship_entity_from_schema:uid-node-user_1',
      'id' => 1,
    ),
    1 => array(
      'identifier' => 'User from Node (on node.node_author)',
      'keyword' => 'user',
      'name' => 'entity_from_schema:uid-node-user',
      'context' => 'requiredcontext_entity:node_1',
      'id' => 1,
    ),
  );
  $display = new panels_display();
  $display->layout = 'grid-12-col-8-4';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'col_1' => NULL,
      'col_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '97621881-1815-4627-b31c-eb23b8dd2c17';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'content_author_social_buttons';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d95603b3-7e5d-418b-9b23-9468358caee7';
  $pane->panel = 'col_1';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="author-wrapper">
  <?php if(theme_get_setting(\'toggle_node_user_picture\')): ?>
    %user:picture
  <?php endif; ?>
  <div class="submitted">By %node:author on %node:created</div>
</div>
',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd95603b3-7e5d-418b-9b23-9468358caee7';
  $display->content['new-d95603b3-7e5d-418b-9b23-9468358caee7'] = $pane;
  $display->panels['col_1'][0] = 'new-d95603b3-7e5d-418b-9b23-9468358caee7';
  $pane = new stdClass();
  $pane->pid = 'new-8d7c7eba-3f9b-4ff0-9305-7836844637a0';
  $pane->panel = 'col_2';
  $pane->type = 'block';
  $pane->subtype = 'rrssb-rrssb';
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
  $pane->uuid = '8d7c7eba-3f9b-4ff0-9305-7836844637a0';
  $display->content['new-8d7c7eba-3f9b-4ff0-9305-7836844637a0'] = $pane;
  $display->panels['col_2'][0] = 'new-8d7c7eba-3f9b-4ff0-9305-7836844637a0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8d7c7eba-3f9b-4ff0-9305-7836844637a0';
  $mini->display = $display;
  $export['content_author_social_buttons'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = 'TheMAG Examples';
  $mini->admin_title = 'Footer';
  $mini->admin_description = 'Page Footer';
  $mini->requiredcontexts = array();
  $mini->contexts = array(
    0 => array(
      'identifier' => 'Token',
      'keyword' => 'token',
      'name' => 'token',
      'id' => 1,
    ),
  );
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'grid-12-col-4-4-4';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'col_1' => NULL,
      'col_2' => NULL,
      'col_3' => NULL,
      'col_4' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c173d481-ba94-4a71-bfa8-a42d72100e25';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'footer';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-45e7e8ba-ccb2-4608-a718-b9daad3fc71d';
  $pane->panel = 'col_1';
  $pane->type = 'page_logo';
  $pane->subtype = 'page_logo';
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
  $pane->uuid = '45e7e8ba-ccb2-4608-a718-b9daad3fc71d';
  $display->content['new-45e7e8ba-ccb2-4608-a718-b9daad3fc71d'] = $pane;
  $display->panels['col_1'][0] = 'new-45e7e8ba-ccb2-4608-a718-b9daad3fc71d';
  $pane = new stdClass();
  $pane->pid = 'new-779fce87-4e14-422f-bf89-d6d64d1ab645';
  $pane->panel = 'col_1';
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
    'name' => 'mg_adbout_us',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '779fce87-4e14-422f-bf89-d6d64d1ab645';
  $display->content['new-779fce87-4e14-422f-bf89-d6d64d1ab645'] = $pane;
  $display->panels['col_1'][1] = 'new-779fce87-4e14-422f-bf89-d6d64d1ab645';
  $pane = new stdClass();
  $pane->pid = 'new-afb73f8d-f75c-4bc4-81fc-72da192252b7';
  $pane->panel = 'col_2';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_5';
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
    'override_title_text' => 'Latest Posts',
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
  $pane->uuid = 'afb73f8d-f75c-4bc4-81fc-72da192252b7';
  $display->content['new-afb73f8d-f75c-4bc4-81fc-72da192252b7'] = $pane;
  $display->panels['col_2'][0] = 'new-afb73f8d-f75c-4bc4-81fc-72da192252b7';
  $pane = new stdClass();
  $pane->pid = 'new-a178f92a-8316-41f1-9df0-d6f416b176fb';
  $pane->panel = 'col_3';
  $pane->type = 'views_panes';
  $pane->subtype = 'popular_tags-mg_popular_tags';
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
  $pane->uuid = 'a178f92a-8316-41f1-9df0-d6f416b176fb';
  $display->content['new-a178f92a-8316-41f1-9df0-d6f416b176fb'] = $pane;
  $display->panels['col_3'][0] = 'new-a178f92a-8316-41f1-9df0-d6f416b176fb';
  $pane = new stdClass();
  $pane->pid = 'new-cf2c80c2-d85e-4ca1-b6ff-b837dbf1c5f7';
  $pane->panel = 'col_3';
  $pane->type = 'block';
  $pane->subtype = 'search-form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Search %token:site:name',
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
  $pane->uuid = 'cf2c80c2-d85e-4ca1-b6ff-b837dbf1c5f7';
  $display->content['new-cf2c80c2-d85e-4ca1-b6ff-b837dbf1c5f7'] = $pane;
  $display->panels['col_3'][1] = 'new-cf2c80c2-d85e-4ca1-b6ff-b837dbf1c5f7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'panel_style_1';
  $mini->category = 'TheMAG Examples';
  $mini->admin_title = 'Mini Panel Example Layout 1';
  $mini->admin_description = 'Mini Panel Example Layout 1';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'grid-12-col-4-4-4';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'col_1' => NULL,
      'col_2' => NULL,
      'col_3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Title';
  $display->uuid = 'ad2cb08e-abbb-4517-a628-545f04e39294';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'panel_style_1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e6f5429a-f295-4935-861d-ffae75b1a9c2';
  $pane->panel = 'col_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '1',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
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
  $pane->uuid = 'e6f5429a-f295-4935-861d-ffae75b1a9c2';
  $display->content['new-e6f5429a-f295-4935-861d-ffae75b1a9c2'] = $pane;
  $display->panels['col_1'][0] = 'new-e6f5429a-f295-4935-861d-ffae75b1a9c2';
  $pane = new stdClass();
  $pane->pid = 'new-f88095a8-d95a-4be6-ad2c-44a69ebe2207';
  $pane->panel = 'col_2';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '2',
    'offset' => '1',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f88095a8-d95a-4be6-ad2c-44a69ebe2207';
  $display->content['new-f88095a8-d95a-4be6-ad2c-44a69ebe2207'] = $pane;
  $display->panels['col_2'][0] = 'new-f88095a8-d95a-4be6-ad2c-44a69ebe2207';
  $pane = new stdClass();
  $pane->pid = 'new-72319945-febe-4dd8-9792-7b2b43b05f69';
  $pane->panel = 'col_3';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '1',
    'offset' => '3',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
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
  $pane->uuid = '72319945-febe-4dd8-9792-7b2b43b05f69';
  $display->content['new-72319945-febe-4dd8-9792-7b2b43b05f69'] = $pane;
  $display->panels['col_3'][0] = 'new-72319945-febe-4dd8-9792-7b2b43b05f69';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e6f5429a-f295-4935-861d-ffae75b1a9c2';
  $mini->display = $display;
  $export['panel_style_1'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'panel_style_2';
  $mini->category = 'TheMAG Examples';
  $mini->admin_title = 'Mini Panel Example Layout 2';
  $mini->admin_description = 'Mini Panel Example Layout 2';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'grid-12-col-1';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'col_1' => NULL,
      'col_2' => NULL,
      'col_3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Title';
  $display->uuid = '42ac4286-51bc-46a5-b21e-8447aa40c5b0';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'panel_style_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3a868a70-df1e-4a11-ba9b-ee7a40d92114';
  $pane->panel = 'col_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '1',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
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
    'css_class' => 'mg-teaser--md-compact',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3a868a70-df1e-4a11-ba9b-ee7a40d92114';
  $display->content['new-3a868a70-df1e-4a11-ba9b-ee7a40d92114'] = $pane;
  $display->panels['col_1'][0] = 'new-3a868a70-df1e-4a11-ba9b-ee7a40d92114';
  $pane = new stdClass();
  $pane->pid = 'new-d7a09ecb-9c42-404e-8fe8-95f2ef81ae62';
  $pane->panel = 'col_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '2',
    'offset' => '1',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd7a09ecb-9c42-404e-8fe8-95f2ef81ae62';
  $display->content['new-d7a09ecb-9c42-404e-8fe8-95f2ef81ae62'] = $pane;
  $display->panels['col_1'][1] = 'new-d7a09ecb-9c42-404e-8fe8-95f2ef81ae62';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['panel_style_2'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'panel_style_3';
  $mini->category = 'TheMAG Examples';
  $mini->admin_title = 'Mini Panel Example Layout 3';
  $mini->admin_description = 'Mini Panel Example Layout 3';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'grid-12-col-6-6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'col_1' => NULL,
      'col_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Title';
  $display->uuid = 'e2eed29a-c87d-4549-a9c8-051d2f72f6ad';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'panel_style_3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-10912d34-d313-421f-bceb-9124d983646b';
  $pane->panel = 'col_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '1',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
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
  $pane->uuid = '10912d34-d313-421f-bceb-9124d983646b';
  $display->content['new-10912d34-d313-421f-bceb-9124d983646b'] = $pane;
  $display->panels['col_1'][0] = 'new-10912d34-d313-421f-bceb-9124d983646b';
  $pane = new stdClass();
  $pane->pid = 'new-e04e43c5-3517-4bb6-b293-17de4305a301';
  $pane->panel = 'col_2';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '3',
    'offset' => '1',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e04e43c5-3517-4bb6-b293-17de4305a301';
  $display->content['new-e04e43c5-3517-4bb6-b293-17de4305a301'] = $pane;
  $display->panels['col_2'][0] = 'new-e04e43c5-3517-4bb6-b293-17de4305a301';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-10912d34-d313-421f-bceb-9124d983646b';
  $mini->display = $display;
  $export['panel_style_3'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'panel_style_4';
  $mini->category = 'TheMAG Examples';
  $mini->admin_title = 'Mini Panel Example Layout 4';
  $mini->admin_description = 'Mini Panel Example Layout 4';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'grid-12-col-4-4-4';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'col_1' => NULL,
      'col_2' => NULL,
      'col_3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Tech';
  $display->uuid = '42ac4286-51bc-46a5-b21e-8447aa40c5b0';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'panel_style_4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-64c4830a-3875-4844-9ad5-6813a3c7aaf3';
  $pane->panel = 'col_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '1',
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
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '64c4830a-3875-4844-9ad5-6813a3c7aaf3';
  $display->content['new-64c4830a-3875-4844-9ad5-6813a3c7aaf3'] = $pane;
  $display->panels['col_1'][0] = 'new-64c4830a-3875-4844-9ad5-6813a3c7aaf3';
  $pane = new stdClass();
  $pane->pid = 'new-3c75db14-82a5-491b-bcab-d7bfdb816c04';
  $pane->panel = 'col_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '3',
    'offset' => '1',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3c75db14-82a5-491b-bcab-d7bfdb816c04';
  $display->content['new-3c75db14-82a5-491b-bcab-d7bfdb816c04'] = $pane;
  $display->panels['col_1'][1] = 'new-3c75db14-82a5-491b-bcab-d7bfdb816c04';
  $pane = new stdClass();
  $pane->pid = 'new-15d45da6-134c-4de0-849e-31c2b01d61aa';
  $pane->panel = 'col_2';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '1',
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '15d45da6-134c-4de0-849e-31c2b01d61aa';
  $display->content['new-15d45da6-134c-4de0-849e-31c2b01d61aa'] = $pane;
  $display->panels['col_2'][0] = 'new-15d45da6-134c-4de0-849e-31c2b01d61aa';
  $pane = new stdClass();
  $pane->pid = 'new-553fe324-ee6a-45e8-8379-ca64cd2b4877';
  $pane->panel = 'col_2';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '3',
    'offset' => '1',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '553fe324-ee6a-45e8-8379-ca64cd2b4877';
  $display->content['new-553fe324-ee6a-45e8-8379-ca64cd2b4877'] = $pane;
  $display->panels['col_2'][1] = 'new-553fe324-ee6a-45e8-8379-ca64cd2b4877';
  $pane = new stdClass();
  $pane->pid = 'new-ee9bdb83-f6f9-4ce7-88c8-23f0d7189f02';
  $pane->panel = 'col_3';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '1',
    'offset' => '0',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
    ),
    'override_title' => 1,
    'override_title_text' => 'Fashion',
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
  $pane->uuid = 'ee9bdb83-f6f9-4ce7-88c8-23f0d7189f02';
  $display->content['new-ee9bdb83-f6f9-4ce7-88c8-23f0d7189f02'] = $pane;
  $display->panels['col_3'][0] = 'new-ee9bdb83-f6f9-4ce7-88c8-23f0d7189f02';
  $pane = new stdClass();
  $pane->pid = 'new-d47c9d38-1f0c-43b0-aa1c-4d357b195bb3';
  $pane->panel = 'col_3';
  $pane->type = 'views_panes';
  $pane->subtype = 'teaser_styles-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '3',
    'offset' => '1',
    'exposed' => array(
      'term_node_tid_depth_join' => array(),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd47c9d38-1f0c-43b0-aa1c-4d357b195bb3';
  $display->content['new-d47c9d38-1f0c-43b0-aa1c-4d357b195bb3'] = $pane;
  $display->panels['col_3'][1] = 'new-d47c9d38-1f0c-43b0-aa1c-4d357b195bb3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['panel_style_4'] = $mini;

  return $export;
}
