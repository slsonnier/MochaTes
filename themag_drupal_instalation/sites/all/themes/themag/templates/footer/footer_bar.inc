<?php

/**
 * @file
 * footer_bar.inc
 */
?>
<div class="container py-2 footer-bar">
  <div class="row justify-content-between align-items-center">
    <div class="col-12 col-md-auto py-2 py-md-0 flex-last flex-md-first text-center">
      <div class="text-muted">
        <?php print check_plain(theme_get_setting('themag_copy_note')); ?>
      </div>
    </div>
    <?php if (theme_get_setting('themag_toggle_footer_bar_menu_menu')) : ?>
    <div class="col-12 col-md-auto py-2 py-md-0 flex-first flex-md-last text-center">
        <?php print _render_menu(theme_get_setting('themag_footer_bar_menu'), array('class' => array('list-unstyled m-0', 'd-inline-block footer-bar-menu'))); ?>
    </div>
    <?php endif; ?>
  </div>
</div>
