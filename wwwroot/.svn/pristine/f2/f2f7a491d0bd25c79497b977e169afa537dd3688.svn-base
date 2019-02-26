<?php
/**
 * @file
 * nhmrc_library_migration.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function nhmrc_library_migration_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Unique';
  $rule->name = 'unique';
  $rule->field_name = 'field_distributor_id';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'distributor';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'bundle',
    'per_user' => 0,
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'This Value Must Be Unique';
  $export['unique'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Unique2';
  $rule->name = 'unique2';
  $rule->field_name = 'field_resource_library_id_number';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'resource';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'global',
    'per_user' => 0,
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'This field must be unique';
  $export['unique2'] = $rule;

  return $export;
}
