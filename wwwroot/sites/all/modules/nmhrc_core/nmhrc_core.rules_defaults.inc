<?php
/**
 * @file
 * nmhrc_core.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function nmhrc_core_default_rules_configuration() {
  $items = array();
  $items['rules_redirect_single_accordion_items'] = entity_import('rules_config', '{ "rules_redirect_single_accordion_items" : {
      "LABEL" : "Redirect Single accordion items",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : { "node_view" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "accordion_item" : "accordion_item" } }
          }
        },
        { "AND" : [] },
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "3" : "3", "4" : "4", "5" : "5" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "redirect" : { "url" : "\\u003C?php\\r\\n$accordion_page = $node-\\u003Efield_accordion_item_type[\\u0027und\\u0027][0][\\u0027value\\u0027];\\r\\nswitch($accordion_page) {\\r\\n    case \\u0022loi\\u0022:\\r\\n        $redirectTo = \\u0022program-development\\u0022;\\r\\n        break;\\r\\n    case \\u0022ttae\\u0022:\\r\\n        $redirectTo = \\u0022training-and-technical-assistance\\u0022;\\r\\n        break;\\r\\n    default:\\r\\n        $redirectTo = strtolower($accordion_page);\\r\\n};\\r\\necho $redirectTo;\\r\\n?\\u003E" } }
      ]
    }
  }');
  $items['rules_redirect_single_slideshow_items'] = entity_import('rules_config', '{ "rules_redirect_single_slideshow_items" : {
      "LABEL" : "Redirect Single Slideshow Items",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_view" : [] },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "image" : "image" } } } },
        { "AND" : [] },
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "3" : "3", "4" : "4", "5" : "5" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "\\u003Cfront\\u003E" } } ]
    }
  }');
  return $items;
}
