<?php

/**
 * @file
 * Template for the Layout 2 layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['content_top']
 *   - $content['content_main']
 *   - $content['sidebar_right']
 *   - $content['content_bottom']
 */
?>

<div class="layout-wrapper">

  <?php if($content['featured_content']): ?>
    <div class="full-width-container">
      <?php print $content['featured_content']; ?>
    </div>
  <?php endif; ?>

  <div class="container main-content-container">
    <?php if($content['content_top']): ?>
      <div class="row">
          <div class="col-12">
              <?php print $content['content_top']; ?>
          </div>
      </div>
    <?php endif; ?>

    <?php if($content['content_main'] || $content['sidebar_right']): ?>
      <div class="row">
        <div class="content--main col-12 col-lg-10 offset-lg-1">
            <?php print $content['content_main']; ?>
        </div>
      </div>
    <?php endif; ?>

    <?php if($content['content_bottom']): ?>
      <div class="row">
          <div class="col-12">
              <?php print $content['content_bottom']; ?>
          </div>
      </div>
    <?php endif; ?>
  </div>
</div>
