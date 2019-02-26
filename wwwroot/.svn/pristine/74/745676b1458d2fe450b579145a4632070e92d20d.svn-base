<?php
/**
 * @file
 * nhmrc_solr_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nhmrc_solr_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nhmrc_solr_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function nhmrc_solr_search_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_search'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_search",
    "name" : "Search",
    "index_id" : "node_index",
    "suggester_id" : "server",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : {
      "suggester_configuration" : { "fields" : [] },
      "min_length" : "1",
      "results" : 1,
      "custom" : { "display" : "default" },
      "submit_button_selector" : ":submit",
      "autosubmit" : 1
    }
  }');
  $items['search_api_views_solr_library_search'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_solr_library_search",
    "name" : "Solr Library Search",
    "index_id" : "node_index",
    "suggester_id" : "server",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : {
      "suggester_configuration" : { "fields" : [
          "field_ressource_keywords:name",
          "search_api_aggregation_2",
          "search_api_viewed"
        ]
      },
      "min_length" : "2",
      "results" : 1,
      "custom" : { "display" : "page" },
      "submit_button_selector" : ":submit",
      "autosubmit" : 1
    }
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function nhmrc_solr_search_default_search_api_index() {
  $items = array();
  $items['node_index'] = entity_import('search_api_index', '{
    "name" : "Node Index",
    "machine_name" : "node_index",
    "description" : null,
    "server" : "solr_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [
          "accordion_item",
          "advisory_panel_members",
          "archived_webinars",
          "article",
          "page",
          "distributor",
          "event",
          "featured_documents",
          "media",
          "panel",
          "resource"
        ]
      },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "attachments_field_audio" : { "type" : "text" },
        "attachments_field_media_type_video" : { "type" : "text" },
        "attachments_field_resource_file" : { "type" : "text" },
        "attachments_field_transcript" : { "type" : "text" },
        "attachments_field_video_captions_file" : { "type" : "text" },
        "attachments_field_webinar_media" : { "type" : "text" },
        "attachments_field_webinar_q_a" : { "type" : "text" },
        "attachments_field_webinar_slides" : { "type" : "text" },
        "attachments_field_webinar_transcript" : { "type" : "text" },
        "edit_url" : { "type" : "uri" },
        "feed_nid" : { "type" : "integer" },
        "feed_node" : { "type" : "integer", "entity_type" : "node" },
        "field_acf_source" : { "type" : "string" },
        "field_articledoi" : { "type" : "string" },
        "field_audience" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_borrower_telephone_number" : { "type" : "string" },
        "field_distributor_city" : { "type" : "string" },
        "field_distributor_email" : { "type" : "list\\u003Cstring\\u003E" },
        "field_distributor_fax_number" : { "type" : "list\\u003Cstring\\u003E" },
        "field_distributor_id" : { "type" : "string" },
        "field_distributor_name" : { "type" : "string" },
        "field_distributor_state" : { "type" : "string" },
        "field_distributor_street_address" : { "type" : "list\\u003Cstring\\u003E" },
        "field_distributor_tdd_tty_number" : { "type" : "list\\u003Cstring\\u003E" },
        "field_distributor_telephone_numb" : { "type" : "list\\u003Cstring\\u003E" },
        "field_distributor_zip" : { "type" : "string" },
        "field_healthy_dating_topics" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_journal_date" : { "type" : "string" },
        "field_journal_issue" : { "type" : "string" },
        "field_journal_name" : { "type" : "string" },
        "field_journal_pages" : { "type" : "string" },
        "field_journal_volume" : { "type" : "string" },
        "field_journalelectronicissn" : { "type" : "string" },
        "field_journalprintissn" : { "type" : "string" },
        "field_mimetype" : { "type" : "string" },
        "field_resource_accession_number" : { "type" : "string" },
        "field_resource_contact_person" : { "type" : "string" },
        "field_resource_copyright" : { "type" : "string" },
        "field_resource_corporate_author" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_resource_country" : { "type" : "string" },
        "field_resource_distributor" : { "type" : "integer", "entity_type" : "node" },
        "field_resource_doc_type" : { "type" : "list\\u003Cstring\\u003E" },
        "field_resource_document_type" : { "type" : "list\\u003Cstring\\u003E" },
        "field_resource_email" : { "type" : "string" },
        "field_resource_file:file" : { "type" : "integer", "entity_type" : "file" },
        "field_resource_file:file:feed_nid" : { "type" : "integer" },
        "field_resource_file:file:feed_node" : { "type" : "integer", "entity_type" : "node" },
        "field_resource_file:file:fid" : { "type" : "integer" },
        "field_resource_file:file:mime" : { "type" : "text" },
        "field_resource_file:file:name" : { "type" : "text" },
        "field_resource_file:file:size" : { "type" : "integer" },
        "field_resource_file:file:type" : { "type" : "string" },
        "field_resource_file:file:url" : { "type" : "text" },
        "field_resource_format" : { "type" : "list\\u003Cstring\\u003E" },
        "field_resource_isbn" : { "type" : "string" },
        "field_resource_keywords_2" : { "type" : "text" },
        "field_resource_language" : { "type" : "list\\u003Cstring\\u003E" },
        "field_resource_library_added_dat" : { "type" : "date" },
        "field_resource_library_id_number" : { "type" : "string" },
        "field_resource_page_count" : { "type" : "string" },
        "field_resource_pagination" : { "type" : "string" },
        "field_resource_pdf_size" : { "type" : "string" },
        "field_resource_personal_author" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_resource_primary_title" : { "type" : "string" },
        "field_resource_publication_date" : { "type" : "date" },
        "field_resource_publication_year" : { "type" : "text" },
        "field_resource_secondary_title" : { "type" : "string" },
        "field_resource_series_title" : { "type" : "string" },
        "field_resource_video_hours" : { "type" : "string" },
        "field_resource_video_minutes" : { "type" : "string" },
        "field_ressource_keywords" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_ressource_keywords:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "2.0" },
        "nid" : { "type" : "integer" },
        "search_api_aggregation_2" : { "type" : "text", "boost" : "3.0" },
        "search_api_aggregation_3" : { "type" : "text", "boost" : "0.8" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "search_api_viewed" : { "type" : "text", "boost" : "0.2" },
        "status" : { "type" : "boolean" },
        "title" : { "type" : "string" },
        "type" : { "type" : "string" },
        "url" : { "type" : "uri" },
        "uuid" : { "type" : "string" },
        "vid" : { "type" : "integer" },
        "vuuid" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_attachments_entityreference_alter_settings" : {
          "status" : 0,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "search_api_aggregation_2" : {
                "name" : "Aggregated Title",
                "type" : "fulltext",
                "fields" : [
                  "title",
                  "field_resource_primary_title",
                  "field_resource_secondary_title"
                ],
                "description" : "A Fulltext aggregation of the following fields: Title, Resource Primary Title, Journal Title."
              },
              "search_api_aggregation_3" : {
                "name" : "Aggregated Author",
                "type" : "fulltext",
                "fields" : [ "field_resource_corporate_author", "field_resource_personal_author" ],
                "description" : "A Fulltext aggregation of the following fields: Corporate Author, Personal Author."
              }
            }
          }
        },
        "search_api_metatag_alter_callback" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_acf_source" : true,
              "field_resource_country" : true,
              "field_resource_personal_author" : true,
              "field_resource_primary_title" : true,
              "field_resource_secondary_title" : true,
              "field_resource_series_title" : true,
              "field_ressource_keywords" : true,
              "field_resource_doc_type" : true,
              "field_distributor_city" : true,
              "field_distributor_name" : true,
              "search_api_aggregation_2" : true,
              "search_api_aggregation_3" : true,
              "search_api_url" : true,
              "search_api_viewed" : true,
              "field_resource_file:file" : true,
              "field_ressource_keywords:name" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_acf_source" : true,
              "field_journal_name" : true,
              "field_mimetype" : true,
              "field_resource_corporate_author" : true,
              "field_resource_distributor" : true,
              "field_resource_keywords_2" : true,
              "field_resource_secondary_title" : true,
              "field_resource_series_title" : true,
              "field_ressource_keywords" : true,
              "field_resource_doc_type" : true,
              "field_distributor_name" : true,
              "search_api_aggregation_2" : true,
              "search_api_aggregation_3" : true,
              "search_api_url" : true,
              "search_api_viewed" : true,
              "field_resource_file:file" : true,
              "field_ressource_keywords:name" : true
            },
            "title" : 1,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "field_resource_keywords_2" : true,
              "field_resource_publication_year" : true,
              "search_api_aggregation_2" : true,
              "search_api_aggregation_3" : true,
              "search_api_viewed" : true,
              "field_ressource_keywords:name" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "field_distributor_email" : true,
              "search_api_aggregation_2" : true,
              "search_api_viewed" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "fields" : {
              "field_ressource_keywords" : true,
              "field_resource_doc_type" : true,
              "field_distributor_name" : true,
              "search_api_aggregation_2" : true,
              "search_api_aggregation_3" : true,
              "search_api_viewed" : true,
              "field_ressource_keywords:name" : true
            },
            "exceptions" : "texan=texa"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      },
      "sorts_widget" : { "enabled" : 1, "autosubmit" : 1, "autosubmit_hide" : 1, "title" : "" }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_sort().
 */
function nhmrc_solr_search_default_search_api_sort() {
  $items = array();
  $items['node_index__author'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "author",
    "name" : "Author",
    "enabled" : "0",
    "weight" : "-86",
    "identifier" : "node_index__author",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "author" }
  }');
  $items['node_index__changed'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "changed",
    "name" : "Date changed",
    "enabled" : "0",
    "weight" : "-87",
    "identifier" : "node_index__changed",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "changed" }
  }');
  $items['node_index__created'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "created",
    "name" : "Date created",
    "enabled" : "0",
    "weight" : "-88",
    "identifier" : "node_index__created",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "created" }
  }');
  $items['node_index__day_views'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "day_views",
    "name" : "Views today",
    "enabled" : "0",
    "weight" : "-82",
    "identifier" : "node_index__day_views",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "day_views" }
  }');
  $items['node_index__edit_url'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "edit_url",
    "name" : "Edit URL",
    "enabled" : "0",
    "weight" : "-92",
    "identifier" : "node_index__edit_url",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Edit URL" }
  }');
  $items['node_index__feed_nid'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "feed_nid",
    "name" : "Feed NID",
    "enabled" : "0",
    "weight" : "-80",
    "identifier" : "node_index__feed_nid",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Feed NID" }
  }');
  $items['node_index__feed_node'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "feed_node",
    "name" : "Feed node",
    "enabled" : "0",
    "weight" : "-79",
    "identifier" : "node_index__feed_node",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Feed node" }
  }');
  $items['node_index__field_acf_source'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "field_acf_source",
    "name" : "ACF Source",
    "enabled" : "0",
    "weight" : "-78",
    "identifier" : "node_index__field_acf_source",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "ACF Source" }
  }');
  $items['node_index__field_journal_date'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "field_journal_date",
    "name" : "Journal Date",
    "enabled" : "0",
    "weight" : "-77",
    "identifier" : "node_index__field_journal_date",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Journal Date" }
  }');
  $items['node_index__field_resource_distributor'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "field_resource_distributor",
    "name" : "Resource Distributor",
    "enabled" : "0",
    "weight" : "-76",
    "identifier" : "node_index__field_resource_distributor",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Resource Distributor" }
  }');
  $items['node_index__field_resource_file:file'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "field_resource_file:file",
    "name" : "Resource File \\u00bb The file.",
    "enabled" : "0",
    "weight" : "-73",
    "identifier" : "node_index__field_resource_file:file",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Resource File \\u00bb The file." }
  }');
  $items['node_index__field_resource_keywords_2'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "field_resource_keywords_2",
    "name" : "Keywords 2",
    "enabled" : "0",
    "weight" : "-72",
    "identifier" : "node_index__field_resource_keywords_2",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Keywords 2" }
  }');
  $items['node_index__field_resource_library_added_dat'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "field_resource_library_added_dat",
    "name" : "Resource Library Added Date",
    "enabled" : "0",
    "weight" : "-75",
    "identifier" : "node_index__field_resource_library_added_dat",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Resource Library Added Date" }
  }');
  $items['node_index__field_resource_publication_date'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "field_resource_publication_date",
    "name" : "Date",
    "enabled" : "1",
    "weight" : "-99",
    "identifier" : "node_index__field_resource_publication_date",
    "default_sort" : "0",
    "default_sort_no_terms" : "1",
    "default_order" : "desc",
    "options" : { "field_name" : "Date" }
  }');
  $items['node_index__is_new'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "is_new",
    "name" : "Is new",
    "enabled" : "0",
    "weight" : "-96",
    "identifier" : "node_index__is_new",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "is_new" }
  }');
  $items['node_index__language'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "language",
    "name" : "Language",
    "enabled" : "0",
    "weight" : "-94",
    "identifier" : "node_index__language",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "language" }
  }');
  $items['node_index__last_view'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "last_view",
    "name" : "Last view",
    "enabled" : "0",
    "weight" : "-81",
    "identifier" : "node_index__last_view",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "last_view" }
  }');
  $items['node_index__nid'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "nid",
    "name" : "Node ID",
    "enabled" : "0",
    "weight" : "-98",
    "identifier" : "node_index__nid",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Node ID" }
  }');
  $items['node_index__promote'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "promote",
    "name" : "Promoted to frontpage",
    "enabled" : "0",
    "weight" : "-90",
    "identifier" : "node_index__promote",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "promote" }
  }');
  $items['node_index__revision'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "revision",
    "name" : "Creates revision",
    "enabled" : "0",
    "weight" : "-84",
    "identifier" : "node_index__revision",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "revision" }
  }');
  $items['node_index__search_api_aggregation_1'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "search_api_aggregation_1",
    "name" : "Aggregated Keyword",
    "enabled" : "0",
    "weight" : "-70",
    "identifier" : "node_index__search_api_aggregation_1",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "search_api_aggregation_1" }
  }');
  $items['node_index__search_api_language'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "search_api_language",
    "name" : "Item language",
    "enabled" : "0",
    "weight" : "-74",
    "identifier" : "node_index__search_api_language",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Item language" }
  }');
  $items['node_index__search_api_relevance'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "search_api_relevance",
    "name" : "Relevance",
    "enabled" : "1",
    "weight" : "-100",
    "identifier" : "node_index__search_api_relevance",
    "default_sort" : "1",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "search_api_relevance" }
  }');
  $items['node_index__search_api_url'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "search_api_url",
    "name" : "URI",
    "enabled" : "0",
    "weight" : "-71",
    "identifier" : "node_index__search_api_url",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "URI" }
  }');
  $items['node_index__source'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "source",
    "name" : "Translation source node",
    "enabled" : "0",
    "weight" : "-85",
    "identifier" : "node_index__source",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "source" }
  }');
  $items['node_index__status'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "status",
    "name" : "Status",
    "enabled" : "0",
    "weight" : "-91",
    "identifier" : "node_index__status",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Status" }
  }');
  $items['node_index__sticky'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "sticky",
    "name" : "Sticky in lists",
    "enabled" : "0",
    "weight" : "-89",
    "identifier" : "node_index__sticky",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "sticky" }
  }');
  $items['node_index__type'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "type",
    "name" : "Content type",
    "enabled" : "0",
    "weight" : "-95",
    "identifier" : "node_index__type",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Content type" }
  }');
  $items['node_index__url'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "url",
    "name" : "URL",
    "enabled" : "0",
    "weight" : "-93",
    "identifier" : "node_index__url",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "URL" }
  }');
  $items['node_index__vid'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "vid",
    "name" : "Revision ID",
    "enabled" : "0",
    "weight" : "-97",
    "identifier" : "node_index__vid",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Revision ID" }
  }');
  $items['node_index__views'] = entity_import('search_api_sort', '{
    "index_id" : "node_index",
    "field" : "views",
    "name" : "Number of views",
    "enabled" : "0",
    "weight" : "-83",
    "identifier" : "node_index__views",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "views" }
  }');
  $items['resource_index_item_type_content___field_resource_distributor'] = entity_import('search_api_sort', '{
    "index_id" : "resource_index_item_type_content_",
    "field" : "field_resource_distributor",
    "name" : "Resource Distributor",
    "enabled" : "0",
    "weight" : "-94",
    "identifier" : "resource_index_item_type_content___field_resource_distributor",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "field_resource_distributor" }
  }');
  $items['resource_index_item_type_content___field_resource_publication_date'] = entity_import('search_api_sort', '{
    "index_id" : "resource_index_item_type_content_",
    "field" : "field_resource_publication_date",
    "name" : "Date",
    "enabled" : "1",
    "weight" : "-99",
    "identifier" : "resource_index_item_type_content___field_resource_publication_date",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "field_resource_publication_date" }
  }');
  $items['resource_index_item_type_content___nid'] = entity_import('search_api_sort', '{
    "index_id" : "resource_index_item_type_content_",
    "field" : "nid",
    "name" : "Node ID",
    "enabled" : "0",
    "weight" : "-98",
    "identifier" : "resource_index_item_type_content___nid",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "nid" }
  }');
  $items['resource_index_item_type_content___search_api_language'] = entity_import('search_api_sort', '{
    "index_id" : "resource_index_item_type_content_",
    "field" : "search_api_language",
    "name" : "Item language",
    "enabled" : "0",
    "weight" : "-93",
    "identifier" : "resource_index_item_type_content___search_api_language",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "search_api_language" }
  }');
  $items['resource_index_item_type_content___search_api_relevance'] = entity_import('search_api_sort', '{
    "index_id" : "resource_index_item_type_content_",
    "field" : "search_api_relevance",
    "name" : "Relevance",
    "enabled" : "1",
    "weight" : "-100",
    "identifier" : "resource_index_item_type_content___search_api_relevance",
    "default_sort" : "1",
    "default_sort_no_terms" : "1",
    "default_order" : "desc",
    "options" : { "field_name" : "search_api_relevance" }
  }');
  $items['resource_index_item_type_content___status'] = entity_import('search_api_sort', '{
    "index_id" : "resource_index_item_type_content_",
    "field" : "status",
    "name" : "Status",
    "enabled" : "0",
    "weight" : "-95",
    "identifier" : "resource_index_item_type_content___status",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "status" }
  }');
  $items['resource_index_item_type_content___type'] = entity_import('search_api_sort', '{
    "index_id" : "resource_index_item_type_content_",
    "field" : "type",
    "name" : "Content type",
    "enabled" : "0",
    "weight" : "-97",
    "identifier" : "resource_index_item_type_content___type",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "type" }
  }');
  $items['resource_index_item_type_content___url'] = entity_import('search_api_sort', '{
    "index_id" : "resource_index_item_type_content_",
    "field" : "url",
    "name" : "URL",
    "enabled" : "0",
    "weight" : "-96",
    "identifier" : "resource_index_item_type_content___url",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "url" }
  }');
  return $items;
}
