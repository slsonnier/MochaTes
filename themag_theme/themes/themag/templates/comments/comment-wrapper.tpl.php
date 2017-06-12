<?php

/**
 * @file
 * Default theme implementation to provide an HTML container for comments.
 *
 * Available variables:
 * - $content: The array of content-related elements for the node. Use
 *   render($content) to print them all, or
 *   print a subset such as render($content['comment_form']).
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default value has the following:
 *   - comment-wrapper: The current template type, i.e., "theming hook".
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * The following variables are provided for contextual information.
 * - $node: Node object the comments are attached to.
 * The constants below the variables show the possible values and should be
 * used for comparison.
 * - $display_mode
 *   - COMMENT_MODE_FLAT
 *   - COMMENT_MODE_THREADED
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_comment_wrapper()
 *
 * @ingroup themeable
 */
?>


<?php

  // Get user picture.
  $picture = '';

  if(variable_get('user_pictures', 0) && theme_get_setting('toggle_comment_user_picture') != 0) {

      if($user->uid && $user->picture && is_numeric($user->picture)) {
        $user->picture = file_load($user->picture);
        $filepath = $user->picture->uri;
      }
      elseif (variable_get('user_picture_default', '')) {
        $filepath = variable_get('user_picture_default', '');
      }

      $style = variable_get('user_picture_style', '');
      $alt = t("@user's picture", array('@user' => format_username($user)));

      if(file_valid_uri($filepath)) {
        $picture_variables = array(
          'path' => $filepath,
          'alt' => $alt,
          'style_name' => $style,
        );
        $picture = theme('image_style', $picture_variables);
      }
      else {
        $picture = theme('image', array('path' => $filepath, 'alt' => $alt, 'title' => $alt));
      }
  }
?>

<?php if($node->comment == 2): ?>
<div id="comments" class="mt-2 mb-4 <?php print $classes; ?>"<?php print $attributes; ?>>

    <?php if ($content['comment_form']): ?>
    <div class="comment-form-wrapper">
    <?php if($picture): ?><div class="comment-user-picture-wrapper"><?php print $picture; ?></div><?php
    endif; ?>
    <div class="comment-text-input-wrapper"><?php print render($content['comment_form']); ?></div>
    </div>
    <?php endif; ?>

  <?php print render($content['comments']); ?>
</div>
<?php endif; ?>
