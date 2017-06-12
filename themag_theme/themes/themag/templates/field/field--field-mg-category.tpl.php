<?php

/**
 * @file field--field-mg-category.tpl.php
 *
 * Default template implementation to display the value of a field.
 *
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 *
 * @ingroup themeable
 */
?>

<?php
  $fiels_category_items = field_get_items('node', $element['#object'], $element['#field_name'], $langcode = NULL);
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>

  <div class="field-items"<?php print $content_attributes; ?>>
    <?php if($element['#view_mode'] != 'teaser_a'): ?>
      <?php foreach ($items as $delta => $item): ?>
        <div class="field-item category" <?php print $item_attributes[$delta]; ?>>
          <i class="category-icon" style="background-color: <?php print $fiels_category_items[$delta]['taxonomy_term']->field_mg_category_color['und'][0]['rgb']; ?>;"></i>
          <div class="category-name"><?php print render($item); ?></div>
        </div>
      <?php endforeach; ?>
    <?php else: ?>
      <?php foreach ($items as $delta => $item): ?>
        <div class="field-item category">
          <div class="category-name" style="background-color: <?php print $fiels_category_items[$delta]['taxonomy_term']->field_mg_category_color['und'][0]['rgb']; ?>;">
            <?php print render($item); ?>
          </div>
          <div class="category-sahdow" style="background-color: <?php print $fiels_category_items[$delta]['taxonomy_term']->field_mg_category_color['und'][0]['rgb']; ?>;"></div>
        </div>
      <?php endforeach; ?>
    <?php endif; ?>
  </div>
</div>
