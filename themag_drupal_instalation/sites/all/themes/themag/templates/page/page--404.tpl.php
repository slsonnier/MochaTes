<?php

/**
 * @file
 * Error 404 page.
 */
?>

<div class="container">
  <div class="row">
    <div class="offset-lg-3 col-lg-6 mt-3 error-wrapper">

      <div class="error-code">404</div>
      <h1 class="display-4"><?php print $title; ?></h1>

      <?php if($messages): ?>
        <div class="my-2"><?php print $messages; ?></div>
      <?php endif; ?>

      <?php print render($page['content']); ?>

      <?php print _render_block('search', 'form'); ?>

      <a href="<?php print $front_page; ?>" class="d-block mt-2">Back to Home</a>

    </div>
  </div>
</div>
