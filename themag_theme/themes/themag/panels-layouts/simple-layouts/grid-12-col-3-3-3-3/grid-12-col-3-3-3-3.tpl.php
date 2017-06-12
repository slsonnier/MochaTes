<?php

/**
 * @file
 * Template for the grid-12-col-3-3-3-3 layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['col_1']
 *   - $content['col_2']
 *   - $content['col_3']
 *   - $content['col_4']
 */
?>

<div class="layout-wrapper grid-12-col-4 grid-12-col-3-3-3-3" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="container">
    <div class="row">
      <div class="col-12 col-lg-6 col-xl-3"><?php print $content['col_1']; ?></div>
      <div class="col-12 col-lg-6 col-xl-3"><?php print $content['col_2']; ?></div>
      <div class="col-12 col-lg-6 col-xl-3"><?php print $content['col_3']; ?></div>
      <div class="col-12 col-lg-6 col-xl-3"><?php print $content['col_4']; ?></div>
    </div>
  </div>
</div>
