<?php
/**
 * @file
 * content_type_frontpage.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function content_type_frontpage_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'cntrmd_frontpage'
  $field_bases['cntrmd_frontpage'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'cntrmd_frontpage',
    'indexes' => array(
      'date' => array(
        0 => 'date',
      ),
    ),
    'locked' => 0,
    'module' => 'content_reminder',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'content_reminder',
  );

  return $field_bases;
}
