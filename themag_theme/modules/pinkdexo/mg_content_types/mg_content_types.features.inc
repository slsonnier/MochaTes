<?php
/**
 * @file
 * mg_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mg_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function mg_content_types_image_default_styles() {
  $styles = array();

  // Exported image style: gallery_grid_thumb.
  $styles['gallery_grid_thumb'] = array(
    'label' => 'Gallery Grid Thumb',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 170,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_slider_thumb.
  $styles['gallery_slider_thumb'] = array(
    'label' => 'Gallery Slider Thumb',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumb_1.
  $styles['thumb_1'] = array(
    'label' => 'Thumb 1 (370x208)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 370,
          'height' => 208,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumb_2.
  $styles['thumb_2'] = array(
    'label' => 'Thumb 2 (135x76)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 135,
          'height' => 76,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumb_3.
  $styles['thumb_3'] = array(
    'label' => 'Thumb 2 (770x440)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 770,
          'height' => 440,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumb_4.
  $styles['thumb_4'] = array(
    'label' => 'Thumb 4 (370x370)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 555,
          'height' => 555,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumb_5.
  $styles['thumb_5'] = array(
    'label' => 'Thumb 5 (170x170)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 170,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumb_6.
  $styles['thumb_6'] = array(
    'label' => 'Thumb 6 (700x700)',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 560,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumb_7.
  $styles['thumb_7'] = array(
    'label' => 'Thumb 7 (570x320)',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 570,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumb_8.
  $styles['thumb_8'] = array(
    'label' => 'Thumb 8 (1170x600)',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1170,
          'height' => 600,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function mg_content_types_node_info() {
  $items = array(
    'mg_article' => array(
      'name' => t('TheMAG Article'),
      'base' => 'node_content',
      'description' => t('Use articles for news or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function mg_content_types_paragraphs_info() {
  $items = array(
    'mg_parag_embedded_video' => array(
      'name' => 'Embedded Video',
      'bundle' => 'mg_parag_embedded_video',
      'locked' => '1',
    ),
    'mg_parag_image' => array(
      'name' => 'Image',
      'bundle' => 'mg_parag_image',
      'locked' => '1',
    ),
    'mg_parag_photo_gallery' => array(
      'name' => 'Photo Gallery Grid',
      'bundle' => 'mg_parag_photo_gallery',
      'locked' => '1',
    ),
    'mg_parag_photo_gallery_slider' => array(
      'name' => 'Photo Gallery Slider',
      'bundle' => 'mg_parag_photo_gallery_slider',
      'locked' => '1',
    ),
    'mg_parag_text_html' => array(
      'name' => 'Text & HTML',
      'bundle' => 'mg_parag_text_html',
      'locked' => '1',
    ),
    'mg_parag_video' => array(
      'name' => 'Video',
      'bundle' => 'mg_parag_video',
      'locked' => '1',
    ),
  );
  return $items;
}
