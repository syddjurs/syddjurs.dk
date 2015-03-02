<?php
/**
 * @file
 * syddjurs_clear_cache_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function syddjurs_clear_cache_rules_default_rules_configuration() {
  $items = array();
  $items['rules_syddjurs_cc_selfservice_cache'] = entity_import('rules_config', '{ "rules_syddjurs_cc_selfservice_cache" : {
      "LABEL" : "Syddjurs Clear Selvbetjening Cache On Save",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Syddjurs Cache" ],
      "REQUIRES" : [ "rules", "cache_actions", "expire" ],
      "ON" : [ "node_insert", "node_delete", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "os2web_base_selfservice_link" : "os2web_base_selfservice_link" } }
          }
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : { "os2web_base_panels_view_selfserv" : "os2web_base_panels_view_selfserv" } } } },
        { "expire_flush_url" : { "urls" : "borger\\r\\nerhverv\\r\\npolitik\\r\\n\\/" } }
      ]
    }
  }');
  $items['rules_syddjurs_clear_billedekarrusel_on_save'] = entity_import('rules_config', '{ "rules_syddjurs_clear_billedekarrusel_on_save" : {
      "LABEL" : "Syddjurs Clear billedekarrusel On Save",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Syddjurs Cache" ],
      "REQUIRES" : [ "rules", "cache_actions", "expire" ],
      "ON" : [ "node_insert", "node_delete", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "os2web_base_rotating_image" : "os2web_base_rotating_image" } }
          }
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : { "os2web_base_panels_view_rotating" : "os2web_base_panels_view_rotating" } } } },
        { "expire_flush_url" : { "urls" : "\\/" } }
      ]
    }
  }');
  $items['rules_syddjurs_clear_contact_cache_on_save'] = entity_import('rules_config', '{ "rules_syddjurs_clear_contact_cache_on_save" : {
      "LABEL" : "Syddjurs Clear Contact Cache On Save",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Syddjurs Cache" ],
      "REQUIRES" : [ "rules", "cache_actions" ],
      "ON" : [ "node_insert", "node_delete", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "os2web_contact_contact" : "os2web_contact_contact" } }
          }
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : { "os2web_contact_view_contact" : "os2web_contact_view_contact" } } } }
      ]
    }
  }');
  $items['rules_syddjurs_clear_h_ring_on_save'] = entity_import('rules_config', '{ "rules_syddjurs_clear_h_ring_on_save" : {
      "LABEL" : "Syddjurs Clear h\\u00f8ring On Save",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Syddjurs Cache" ],
      "REQUIRES" : [ "rules", "cache_actions", "expire" ],
      "ON" : [ "node_insert", "node_delete", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "os2web_hearings_hearing_case" : "os2web_hearings_hearing_case" } }
          }
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : { "os2web_hearings" : "os2web_hearings" } } } },
        { "expire_flush_url" : { "urls" : "\\/\\r\\nhoeringer" } }
      ]
    }
  }');
  $items['rules_syddjurs_clear_meeting_cache_on_save'] = entity_import('rules_config', '{ "rules_syddjurs_clear_meeting_cache_on_save" : {
      "LABEL" : "Syddjurs Clear Meeting Cache On Save",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Syddjurs Cache" ],
      "REQUIRES" : [ "rules", "cache_actions" ],
      "ON" : [ "node_insert", "node_delete", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "os2web_meetings_meeting" : "os2web_meetings_meeting" } }
          }
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : {
                "os2web_meetings_meeting_details" : "os2web_meetings_meeting_details",
                "os2web_meetings_view_search" : "os2web_meetings_view_search"
              }
            }
          }
        }
      ]
    }
  }');
  $items['rules_syddjurs_clear_node_references_cache_on_save'] = entity_import('rules_config', '{ "rules_syddjurs_clear_node_references_cache_on_save" : {
      "LABEL" : "Syddjurs Clear Node Reference Cache On Save",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Syddjurs Cache" ],
      "REQUIRES" : [ "rules", "cache_actions", "expire" ],
      "ON" : [ "node_insert", "node_delete", "node_update" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_os2web_base_field_selfserv" } },
        { "OR" : [
            { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_os2web_base_field_contact" } },
            { "OR" : [
                { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_os2web_base_field_related" } },
                { "OR" : [
                    { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_os2web_base_field_spotbox" } }
                  ]
                }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : {
                "os2web_base_panels_view_selfserv" : "os2web_base_panels_view_selfserv",
                "os2web_base_panels_view_kle_link" : "os2web_base_panels_view_kle_link",
                "os2web_contact_view_contact" : "os2web_contact_view_contact",
                "os2web_spotbox_view_spot" : "os2web_spotbox_view_spot"
              }
            }
          }
        },
        { "expire_flush_url" : { "urls" : "node\\/[node:nid]" } }
      ]
    }
  }');
  $items['rules_syddjurs_clear_nyheder_on_save'] = entity_import('rules_config', '{ "rules_syddjurs_clear_nyheder_on_save" : {
      "LABEL" : "Syddjurs Clear nyheder On Save",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Syddjurs Cache" ],
      "REQUIRES" : [ "rules", "cache_actions", "expire" ],
      "ON" : [ "node_insert", "node_delete", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "os2web_base_news" : "os2web_base_news" } }
          }
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : { "os2web_base_panels_view_newslist" : "os2web_base_panels_view_newslist" } } } },
        { "expire_flush_url" : { "urls" : "\\/" } }
      ]
    }
  }');
  $items['rules_syddjurs_clear_spotbox_on_save'] = entity_import('rules_config', '{ "rules_syddjurs_clear_spotbox_on_save" : {
      "LABEL" : "Syddjurs Clear spotbox On Save",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Syddjurs Cache" ],
      "REQUIRES" : [ "rules", "cache_actions", "expire" ],
      "ON" : [ "node_insert", "node_delete", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "os2web_spotbox_box" : "os2web_spotbox_box" } }
          }
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : {
                "os2web_spotbox_view_spots" : "os2web_spotbox_view_spots",
                "os2web_spotbox_view_spot" : "os2web_spotbox_view_spot"
              }
            }
          }
        },
        { "expire_flush_url" : { "urls" : "\\/" } }
      ]
    }
  }');
  return $items;
}
