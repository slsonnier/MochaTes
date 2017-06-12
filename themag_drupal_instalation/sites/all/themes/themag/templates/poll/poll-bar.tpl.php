<?php

/**
 * @file
 * Default theme implementation to display the bar for a single choice in a
 * poll.
 *
 * Variables available:
 * - $title: The title of the poll.
 * - $votes: The number of votes for this choice
 * - $total_votes: The number of votes for this choice
 * - $percentage: The percentage of votes for this choice.
 * - $vote: The choice number of the current user's vote.
 * - $voted: Set to TRUE if the user voted for this choice.
 *
 * @see template_preprocess_poll_bar()
 */
?>

<div class="mb-1 choice-wrapper">

  <div class="row text-wrapper">
    <div class="col-lg-8 col-xl-9 text-md-left text"><?php print $title; ?></div>
    <div class="col-lg-4 col-xl-3 text-md-left text-lg-right">
      <small><?php print $percentage; ?>% (<?php print format_plural($votes, '1 vote', '@count votes'); ?>)</small>
    </div>
  </div>

  <div class="bar">
    <div style="width: <?php print $percentage; ?>%;" class="foreground"></div>
  </div>

</div>
