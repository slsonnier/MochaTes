<?php
/**
 * @file
 * mg_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mg_content_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mg_categorization|node|mg_article|form';
  $field_group->group_name = 'group_mg_categorization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mg_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '3',
    'children' => array(
      0 => 'field_mg_category',
      1 => 'field_mg_tags',
      2 => 'field_mg_post_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Categorization',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-mg-categorization field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_mg_categorization|node|mg_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mg_post_settings|node|mg_article|form';
  $field_group->group_name = 'group_mg_post_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mg_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '4',
    'children' => array(
      0 => 'field_mg_post_layout',
      1 => 'field_mg_post_options',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-mg-post-settings field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_mg_post_settings|node|mg_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mg_teaser|node|mg_article|form';
  $field_group->group_name = 'group_mg_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mg_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser',
    'weight' => '1',
    'children' => array(
      0 => 'field_mg_image',
      1 => 'field_mg_summary',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Teaser',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-mg-teaser field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_mg_teaser|node|mg_article|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categorization');
  t('Settings');
  t('Teaser');

  return $field_groups;
}
