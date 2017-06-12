To add a CSS file to all pages edit the sub-theme's .info file and add this:

  stylesheets[all][] = assets/css/my-style.css

You can also add CSS files depending on a certain condition.
To do this, you need to add some PHP code in a preprocess function:

drupal_add_css(drupal_get_path('theme', 'THEME_NAME') . '/assets/css/my-style.css');

The full documentation of drupal_add_js():
  https://api.drupal.org/api/drupal/includes%21common.inc/function/drupal_add_css/7.x
