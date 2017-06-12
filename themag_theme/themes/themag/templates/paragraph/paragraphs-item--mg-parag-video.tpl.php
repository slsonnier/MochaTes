<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<?php
  hide($content['field_mg_upload_video']);
?>



<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="content" <?php print $content_attributes; ?>>

      <video  class="video-js vjs-default-skin vjs-big-play-centered vjs-16-9"
              controls
              preload="auto"
              data-setup='{"fluid" : true}'>

      <source src="<?php print file_create_url($content['field_mg_upload_video']['#items'][0]['uri']); ?>"
              type="video/mp4" />
      <p class="vjs-no-js">
         <?php print t('To view this video please enable JavaScript, and consider upgrading to a web browser that
         <a href="http://videojs.com/html5-video-support/" target="_blank">supports HTML5 video</a>'); ?>
      </p>
    </video>

    <?php print render($content); ?>
  </div>
</div>
