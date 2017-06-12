<?php

/**
 * @file
 * Default theme implementation to display voting form for a poll.
 *
 * - $choice: The radio buttons for the choices in the poll.
 * - $title: The title of the poll.
 * - $block: True if this is being displayed as a block.
 * - $vote: The vote button
 * - $rest: Anything else in the form that may have been added via
 *   form_alter hooks.
 *
 * @see template_preprocess_poll_vote()
 *
 * @ingroup themeable
 */
?>
<div class="poll">

  <div class="p-2 vote-form">

  <?php if ($block): ?>
    <div class="pb-1 text-left title"><?php print $title; ?></div>
  <?php endif; ?>

    <div class="choices">
      <?php print $choice; ?>
    </div>
    <?php  print $vote; ?>
  </div>
  <?php // This is the 'rest' of the form, in case items have been added. ?>
  <?php print $rest ?>
</div>
