<?php
/**
 * @file
 * nmhrc_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nmhrc_event_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_contact_information|node|event|form';
  $field_group->group_name = 'group_event_contact_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Contact Information',
    'weight' => '8',
    'children' => array(
      0 => 'field_email',
      1 => 'field_fax',
      2 => 'field_name',
      3 => 'field_phone',
      4 => 'field_website',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Event Contact Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-event-contact-information field-group-tab',
        'description' => 'Please provide at least one type of contact information – either a phone number, Web address, or email address – where more information about the event can be obtained. ',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_event_contact_information|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|event|form';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event details',
    'weight' => '3',
    'children' => array(
      0 => 'field_date',
      1 => 'field_location',
      2 => 'field_sponsor',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Event details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-event-details field-group-tab',
        'description' => 'Disclaimer: This listing is not comprehensive; rather, it is a subset of events. This list does not reflect our endorsement of the event’s organizations, their products, or services. The National Resource Center for Healthy Marriage and Families has no control over the content of these events and cannot guarantee the appropriateness of them.',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_details|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submitter_information|node|event|form';
  $field_group->group_name = 'group_submitter_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Submitter\'s Information',
    'weight' => '9',
    'children' => array(
      0 => 'field_address',
      1 => 'field_agency_organization',
      2 => 'field_position_title',
      3 => 'field_submitter_email',
      4 => 'field_submitter_fax',
      5 => 'field_submitter_name',
      6 => 'field_submitter_phone',
      7 => 'field_submitter_title',
      8 => 'field_submitter_website',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Submitter\'s Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-submitter-information field-group-tab',
        'description' => 'Please provide information so that an information specialist can contact you if there are any questions.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_submitter_information|node|event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Event Contact Information');
  t('Event details');
  t('Submitter\'s Information');

  return $field_groups;
}
