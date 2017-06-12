<?php

/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 *
 * @ingroup themeable
 */
?>

<?php

  // Hide user_picture and summary.
  hide($user_profile['user_picture']);
  hide($user_profile['summary']);

  // Load the author's account.
  $uid = arg(1);
  $account = user_load($uid);
?>

<div class="user-profile-wrapper"<?php print $attributes; ?>>

  <div class="row align-items-center">
    <div class="col-6 col-md-4 col-lg-3 col-xl-2 offset-3 offset-md-0 offset-lg-1 offset-xl-2">
      <!-- Author picture (username) -->
      <?php print render($user_profile['user_picture']); ?>
      </div>
    <div class="col-12 col-md-8 col-lg-7 col-xl-6">
      <!-- Author name (username) -->
      <h1 class="user-name"><?php print $account->name; ?></h1>
      <!-- Author social box -->
      <ul class="list-unstyled user-social">
        <li><a href="https://www.facebook.com"><i class="fa fa-facebook" aria-hidden="true"></i></a></li>
        <li><a href="https://twitter.com"><i class="fa fa-twitter" aria-hidden="true"></i></a></li>
        <li><a href="https://youtube.com"><i class="fa fa-youtube" aria-hidden="true"></i></a></li>
        <li><a href="https://pinterest.com"><i class="fa fa-pinterest" aria-hidden="true"></i></a></li>
        <li><a href="https://instagram.com"><i class="fa fa-instagram" aria-hidden="true"></i></a></li>
      </ul>
      <!-- Author signature (username) -->
      <div class="user-signature"><?php print $account->signature; ?></div>
      <?php print render($user_profile); ?>
    </div>
  </div>

</div>
