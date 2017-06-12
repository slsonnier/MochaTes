<?php

/**
 * @file
 * Template for the Layout 1 layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['featured_content']
 *   - $content['content_1']
 *   - $content['content_2']
 *   - $content['content_3']
 *   - $content['content_4']
 *   - $content['content_5']
 *   - $content['content_6']
 */
?>

<div class="layout-wrapper" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <?php if($content['featured_content']): ?>
    <div class="full-width-container">
      <?php print $content['featured_content']; ?>
    </div>
  <?php endif; ?>

  <?php if($content['content_1']): ?>
    <div class="container">
      <div class="row">
        <div class="col-12">
          <?php print $content['content_1']; ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if($content['content_2'] || $content['content_3']): ?>
    <div class="row">
        <div class="col-12 col-lg-8">
            <?php print $content['content_2']; ?>
        </div>
        <div class="col-12 col-lg-4">
            <?php print $content['content_3']; ?>
        </div>
    </div>
  <?php endif; ?>

 <?php if($content['content_4']): ?>
    <div class="row">
        <div class="col-12">
            <?php print $content['content_4']; ?>
        </div>
    </div>
 <?php endif; ?>

 <?php if($content['content_5'] || $content['content_6']): ?>
    <div class="row">
        <div class="col-12 col-lg-8">
            <?php print $content['content_5']; ?>
        </div>
        <div class="col-12 col-lg-4">
            <?php print $content['content_6']; ?>
        </div>
    </div>
 <?php endif; ?>
  </div>

</div>
