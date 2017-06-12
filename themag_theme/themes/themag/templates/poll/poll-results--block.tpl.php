<?php

/**
 * @file
 * Default theme implementation to display the poll results in a block.
 *
 * Variables available:
 * - $title: The title of the poll.
 * - $results: The results of the poll.
 * - $votes: The total results in the poll.
 * - $links: Links in the poll.
 * - $nid: The nid of the poll
 * - $cancel_form: A form to cancel the user's vote, if allowed.
 * - $raw_links: The raw array of links. Should be run through theme('links')
 *   if used.
 * - $vote: The choice number of the current user's vote.
 *
 * @see template_preprocess_poll_results()
 */
?>

<div class="p-2 poll">
  <div class="mb-1 pb-1 title"><?php print $title ?></div>
  <?php print $results ?>

  <div class="row mt-2 totoal-wrapper">
    <div class="col-7 text-left total"><?php print t('Total votes: @votes', array('@votes' => $votes)); ?></div>
    <div class="col-5 text-right links"><?php print $links; ?></div>
  </div>
</div>
