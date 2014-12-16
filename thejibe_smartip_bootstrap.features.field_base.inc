<?php
/**
 * @file
 * thejibe_smartip_bootstrap.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function thejibe_smartip_bootstrap_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_smartip_location'
  $field_bases['field_smartip_location'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_smartip_location',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'ALL' => 'Worldwide',
        'NA' => 'North America',
        'SA' => 'South America',
        'EU' => 'Europe',
        'AS' => 'Asia',
        'AF' => 'Africa',
        'AU' => 'Australia + Oceania',
        'AQ' => 'Antarctica',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
