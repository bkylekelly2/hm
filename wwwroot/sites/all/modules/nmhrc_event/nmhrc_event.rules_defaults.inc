<?php
/**
 * @file
 * nmhrc_event.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function nmhrc_event_default_rules_configuration() {
  $items = array();
  $items['rules_upon_new_event_creation_send_email'] = entity_import('rules_config', '{ "rules_upon_new_event_creation_send_email" : {
      "LABEL" : "upon new event creation, send email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "nmhrc_event" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "event" : "event" } } } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "info@healthymarriageandfamilies.org",
            "subject" : "NHMRC event creation notification",
            "message" : "A new event has been submitted on NHMRC website. Please click on the following link to review it.\\r\\n\\r\\nhttps:\\/\\/healthymarriageandfamilies.org\\/admin\\/moderate-content?revision_moderation=1\\u0026state=2",
            "from" : "info@healthymarriageandfamilies.org",
            "language" : [ "" ]
          }
        },
        { "redirect" : { "url" : "calendar\\/month" } }
      ]
    }
  }');
  return $items;
}
