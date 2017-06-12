<!DOCTYPE html>
<html xml:lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>">

<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>

<body class="<?php print $classes; ?>" <?php print $attributes;?>>

  <?php if (!empty($title)): ?><h1 class="title" id="page-title">
    <?php print $title; ?></h1>
  <?php endif; ?>

  <?php if (!empty($messages)) { print $messages; }; ?>

  <div id="content" class="container">
    <?php print $content; ?>
  </div>

</body>
</html>
