To add a JavaScript file to all pages edit the sub-theme's .info file and add this:

  scripts[] = js/my-script.js

You can also add JavaScript files depending on a certain condition.
To do this, you need to add some PHP code in a preprocess function:

drupal_add_js(drupal_get_path('theme', 'THEME_NAME') . '/js/my-script.js');

The full documentation of drupal_add_js():
  https://api.drupal.org/api/drupal/includes%21common.inc/function/drupal_add_js/7.x
