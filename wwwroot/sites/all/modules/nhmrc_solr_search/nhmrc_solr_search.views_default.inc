<?php
/**
 * @file
 * nhmrc_solr_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nhmrc_solr_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'resources_library';
  $view->description = 'Admin views for Resource and Distributor content management.';
  $view->tag = 'admin';
  $view->base_table = 'node';
  $view->human_name = 'Administration: Library Resources & Distributors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Administration: Library Resources & Distributors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_acf_source' => 'field_acf_source',
    'field_articledoi' => 'field_articledoi',
    'field_borrower_telephone_number' => 'field_borrower_telephone_number',
    'field_resource_corporate_author' => 'field_resource_corporate_author',
    'field_resource_publication_date' => 'field_resource_publication_date',
    'field_journal_date' => 'field_journal_date',
    'field_journal_issue' => 'field_journal_issue',
    'field_journal_name' => 'field_journal_name',
    'field_journal_pages' => 'field_journal_pages',
    'field_resource_secondary_title' => 'field_resource_secondary_title',
    'field_journal_volume' => 'field_journal_volume',
    'field_journalelectronicissn' => 'field_journalelectronicissn',
    'field_journalprintissn' => 'field_journalprintissn',
    'field_ressource_keywords' => 'field_ressource_keywords',
    'field_resource_keywords_2' => 'field_resource_keywords_2',
    'field_mimetype' => 'field_mimetype',
    'field_resource_personal_author' => 'field_resource_personal_author',
    'field_resource_abstract' => 'field_resource_abstract',
    'field_resource_accession_number' => 'field_resource_accession_number',
    'field_resource_contact_person' => 'field_resource_contact_person',
    'field_resource_copyright' => 'field_resource_copyright',
    'field_resource_country' => 'field_resource_country',
    'field_resource_distributor' => 'field_resource_distributor',
    'field_resource_email' => 'field_resource_email',
    'field_resource_file' => 'field_resource_file',
    'field_resource_format' => 'field_resource_format',
    'field_resource_html_url' => 'field_resource_html_url',
    'field_resource_isbn' => 'field_resource_isbn',
    'field_resource_language' => 'field_resource_language',
    'field_resource_library_added_dat' => 'field_resource_library_added_dat',
    'field_resource_library_id_number' => 'field_resource_library_id_number',
    'field_resource_page_count' => 'field_resource_page_count',
    'field_resource_pagination' => 'field_resource_pagination',
    'field_resource_pdf_size' => 'field_resource_pdf_size',
    'field_resource_pdf_url' => 'field_resource_pdf_url',
    'field_resource_primary_title' => 'field_resource_primary_title',
    'field_resource_publication_year' => 'field_resource_publication_year',
    'field_resource_series_title' => 'field_resource_series_title',
    'field_resource_document_type' => 'field_resource_document_type',
    'field_resource_video_hours' => 'field_resource_video_hours',
    'field_resource_video_minutes' => 'field_resource_video_minutes',
    'config' => 'config',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_acf_source' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_articledoi' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_borrower_telephone_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_corporate_author' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_publication_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_journal_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_journal_issue' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_journal_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_journal_pages' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_secondary_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_journal_volume' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_journalelectronicissn' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_journalprintissn' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ressource_keywords' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_keywords_2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mimetype' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_personal_author' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_abstract' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_accession_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_contact_person' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_copyright' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_distributor' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_file' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_format' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_html_url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_isbn' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_language' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_library_added_dat' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_library_id_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_page_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_pagination' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_pdf_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_pdf_url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_primary_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_publication_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_series_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_document_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_video_hours' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_video_minutes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'config' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: ACF Source */
  $handler->display->display_options['fields']['field_acf_source']['id'] = 'field_acf_source';
  $handler->display->display_options['fields']['field_acf_source']['table'] = 'field_data_field_acf_source';
  $handler->display->display_options['fields']['field_acf_source']['field'] = 'field_acf_source';
  /* Field: Content: ArticleDOI */
  $handler->display->display_options['fields']['field_articledoi']['id'] = 'field_articledoi';
  $handler->display->display_options['fields']['field_articledoi']['table'] = 'field_data_field_articledoi';
  $handler->display->display_options['fields']['field_articledoi']['field'] = 'field_articledoi';
  /* Field: Content: Borrower Telephone Number */
  $handler->display->display_options['fields']['field_borrower_telephone_number']['id'] = 'field_borrower_telephone_number';
  $handler->display->display_options['fields']['field_borrower_telephone_number']['table'] = 'field_data_field_borrower_telephone_number';
  $handler->display->display_options['fields']['field_borrower_telephone_number']['field'] = 'field_borrower_telephone_number';
  /* Field: Content: Corporate Author */
  $handler->display->display_options['fields']['field_resource_corporate_author']['id'] = 'field_resource_corporate_author';
  $handler->display->display_options['fields']['field_resource_corporate_author']['table'] = 'field_data_field_resource_corporate_author';
  $handler->display->display_options['fields']['field_resource_corporate_author']['field'] = 'field_resource_corporate_author';
  $handler->display->display_options['fields']['field_resource_corporate_author']['delta_offset'] = '0';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_resource_publication_date']['id'] = 'field_resource_publication_date';
  $handler->display->display_options['fields']['field_resource_publication_date']['table'] = 'field_data_field_resource_publication_date';
  $handler->display->display_options['fields']['field_resource_publication_date']['field'] = 'field_resource_publication_date';
  $handler->display->display_options['fields']['field_resource_publication_date']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Journal Date */
  $handler->display->display_options['fields']['field_journal_date']['id'] = 'field_journal_date';
  $handler->display->display_options['fields']['field_journal_date']['table'] = 'field_data_field_journal_date';
  $handler->display->display_options['fields']['field_journal_date']['field'] = 'field_journal_date';
  /* Field: Content: Journal Issue */
  $handler->display->display_options['fields']['field_journal_issue']['id'] = 'field_journal_issue';
  $handler->display->display_options['fields']['field_journal_issue']['table'] = 'field_data_field_journal_issue';
  $handler->display->display_options['fields']['field_journal_issue']['field'] = 'field_journal_issue';
  /* Field: Content: Journal Name */
  $handler->display->display_options['fields']['field_journal_name']['id'] = 'field_journal_name';
  $handler->display->display_options['fields']['field_journal_name']['table'] = 'field_data_field_journal_name';
  $handler->display->display_options['fields']['field_journal_name']['field'] = 'field_journal_name';
  /* Field: Content: Journal Pages */
  $handler->display->display_options['fields']['field_journal_pages']['id'] = 'field_journal_pages';
  $handler->display->display_options['fields']['field_journal_pages']['table'] = 'field_data_field_journal_pages';
  $handler->display->display_options['fields']['field_journal_pages']['field'] = 'field_journal_pages';
  /* Field: Content: Journal Title */
  $handler->display->display_options['fields']['field_resource_secondary_title']['id'] = 'field_resource_secondary_title';
  $handler->display->display_options['fields']['field_resource_secondary_title']['table'] = 'field_data_field_resource_secondary_title';
  $handler->display->display_options['fields']['field_resource_secondary_title']['field'] = 'field_resource_secondary_title';
  /* Field: Content: Journal Volume */
  $handler->display->display_options['fields']['field_journal_volume']['id'] = 'field_journal_volume';
  $handler->display->display_options['fields']['field_journal_volume']['table'] = 'field_data_field_journal_volume';
  $handler->display->display_options['fields']['field_journal_volume']['field'] = 'field_journal_volume';
  /* Field: Content: JournalElectronicISSN */
  $handler->display->display_options['fields']['field_journalelectronicissn']['id'] = 'field_journalelectronicissn';
  $handler->display->display_options['fields']['field_journalelectronicissn']['table'] = 'field_data_field_journalelectronicissn';
  $handler->display->display_options['fields']['field_journalelectronicissn']['field'] = 'field_journalelectronicissn';
  /* Field: Content: JournalPrintISSN */
  $handler->display->display_options['fields']['field_journalprintissn']['id'] = 'field_journalprintissn';
  $handler->display->display_options['fields']['field_journalprintissn']['table'] = 'field_data_field_journalprintissn';
  $handler->display->display_options['fields']['field_journalprintissn']['field'] = 'field_journalprintissn';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_ressource_keywords']['id'] = 'field_ressource_keywords';
  $handler->display->display_options['fields']['field_ressource_keywords']['table'] = 'field_data_field_ressource_keywords';
  $handler->display->display_options['fields']['field_ressource_keywords']['field'] = 'field_ressource_keywords';
  $handler->display->display_options['fields']['field_ressource_keywords']['delta_offset'] = '0';
  /* Field: Content: Keywords 2 */
  $handler->display->display_options['fields']['field_resource_keywords_2']['id'] = 'field_resource_keywords_2';
  $handler->display->display_options['fields']['field_resource_keywords_2']['table'] = 'field_data_field_resource_keywords_2';
  $handler->display->display_options['fields']['field_resource_keywords_2']['field'] = 'field_resource_keywords_2';
  /* Field: Content: Mimetype */
  $handler->display->display_options['fields']['field_mimetype']['id'] = 'field_mimetype';
  $handler->display->display_options['fields']['field_mimetype']['table'] = 'field_data_field_mimetype';
  $handler->display->display_options['fields']['field_mimetype']['field'] = 'field_mimetype';
  /* Field: Content: Personal Author */
  $handler->display->display_options['fields']['field_resource_personal_author']['id'] = 'field_resource_personal_author';
  $handler->display->display_options['fields']['field_resource_personal_author']['table'] = 'field_data_field_resource_personal_author';
  $handler->display->display_options['fields']['field_resource_personal_author']['field'] = 'field_resource_personal_author';
  $handler->display->display_options['fields']['field_resource_personal_author']['delta_offset'] = '0';
  /* Field: Content: Resource Abstract */
  $handler->display->display_options['fields']['field_resource_abstract']['id'] = 'field_resource_abstract';
  $handler->display->display_options['fields']['field_resource_abstract']['table'] = 'field_data_field_resource_abstract';
  $handler->display->display_options['fields']['field_resource_abstract']['field'] = 'field_resource_abstract';
  /* Field: Content: Resource Accession Number */
  $handler->display->display_options['fields']['field_resource_accession_number']['id'] = 'field_resource_accession_number';
  $handler->display->display_options['fields']['field_resource_accession_number']['table'] = 'field_data_field_resource_accession_number';
  $handler->display->display_options['fields']['field_resource_accession_number']['field'] = 'field_resource_accession_number';
  /* Field: Content: Resource Contact Person */
  $handler->display->display_options['fields']['field_resource_contact_person']['id'] = 'field_resource_contact_person';
  $handler->display->display_options['fields']['field_resource_contact_person']['table'] = 'field_data_field_resource_contact_person';
  $handler->display->display_options['fields']['field_resource_contact_person']['field'] = 'field_resource_contact_person';
  /* Field: Content: Resource Copyright */
  $handler->display->display_options['fields']['field_resource_copyright']['id'] = 'field_resource_copyright';
  $handler->display->display_options['fields']['field_resource_copyright']['table'] = 'field_data_field_resource_copyright';
  $handler->display->display_options['fields']['field_resource_copyright']['field'] = 'field_resource_copyright';
  /* Field: Content: Resource Country */
  $handler->display->display_options['fields']['field_resource_country']['id'] = 'field_resource_country';
  $handler->display->display_options['fields']['field_resource_country']['table'] = 'field_data_field_resource_country';
  $handler->display->display_options['fields']['field_resource_country']['field'] = 'field_resource_country';
  /* Field: Content: Resource Distributor */
  $handler->display->display_options['fields']['field_resource_distributor']['id'] = 'field_resource_distributor';
  $handler->display->display_options['fields']['field_resource_distributor']['table'] = 'field_data_field_resource_distributor';
  $handler->display->display_options['fields']['field_resource_distributor']['field'] = 'field_resource_distributor';
  $handler->display->display_options['fields']['field_resource_distributor']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Resource Email */
  $handler->display->display_options['fields']['field_resource_email']['id'] = 'field_resource_email';
  $handler->display->display_options['fields']['field_resource_email']['table'] = 'field_data_field_resource_email';
  $handler->display->display_options['fields']['field_resource_email']['field'] = 'field_resource_email';
  /* Field: Content: Resource File */
  $handler->display->display_options['fields']['field_resource_file']['id'] = 'field_resource_file';
  $handler->display->display_options['fields']['field_resource_file']['table'] = 'field_data_field_resource_file';
  $handler->display->display_options['fields']['field_resource_file']['field'] = 'field_resource_file';
  $handler->display->display_options['fields']['field_resource_file']['click_sort_column'] = 'fid';
  /* Field: Content: Resource Format */
  $handler->display->display_options['fields']['field_resource_format']['id'] = 'field_resource_format';
  $handler->display->display_options['fields']['field_resource_format']['table'] = 'field_data_field_resource_format';
  $handler->display->display_options['fields']['field_resource_format']['field'] = 'field_resource_format';
  $handler->display->display_options['fields']['field_resource_format']['delta_offset'] = '0';
  /* Field: Content: Resource Link */
  $handler->display->display_options['fields']['field_resource_html_url']['id'] = 'field_resource_html_url';
  $handler->display->display_options['fields']['field_resource_html_url']['table'] = 'field_data_field_resource_html_url';
  $handler->display->display_options['fields']['field_resource_html_url']['field'] = 'field_resource_html_url';
  $handler->display->display_options['fields']['field_resource_html_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_resource_html_url']['delta_offset'] = '0';
  /* Field: Content: Resource ISBN */
  $handler->display->display_options['fields']['field_resource_isbn']['id'] = 'field_resource_isbn';
  $handler->display->display_options['fields']['field_resource_isbn']['table'] = 'field_data_field_resource_isbn';
  $handler->display->display_options['fields']['field_resource_isbn']['field'] = 'field_resource_isbn';
  /* Field: Content: Resource Language */
  $handler->display->display_options['fields']['field_resource_language']['id'] = 'field_resource_language';
  $handler->display->display_options['fields']['field_resource_language']['table'] = 'field_data_field_resource_language';
  $handler->display->display_options['fields']['field_resource_language']['field'] = 'field_resource_language';
  $handler->display->display_options['fields']['field_resource_language']['delta_offset'] = '0';
  /* Field: Content: Resource Library Added Date */
  $handler->display->display_options['fields']['field_resource_library_added_dat']['id'] = 'field_resource_library_added_dat';
  $handler->display->display_options['fields']['field_resource_library_added_dat']['table'] = 'field_data_field_resource_library_added_dat';
  $handler->display->display_options['fields']['field_resource_library_added_dat']['field'] = 'field_resource_library_added_dat';
  $handler->display->display_options['fields']['field_resource_library_added_dat']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Resource Library ID Number */
  $handler->display->display_options['fields']['field_resource_library_id_number']['id'] = 'field_resource_library_id_number';
  $handler->display->display_options['fields']['field_resource_library_id_number']['table'] = 'field_data_field_resource_library_id_number';
  $handler->display->display_options['fields']['field_resource_library_id_number']['field'] = 'field_resource_library_id_number';
  /* Field: Content: Page Count */
  $handler->display->display_options['fields']['field_resource_page_count']['id'] = 'field_resource_page_count';
  $handler->display->display_options['fields']['field_resource_page_count']['table'] = 'field_data_field_resource_page_count';
  $handler->display->display_options['fields']['field_resource_page_count']['field'] = 'field_resource_page_count';
  $handler->display->display_options['fields']['field_resource_page_count']['label'] = 'Resource Page Count';
  /* Field: Content: Resource Pagination */
  $handler->display->display_options['fields']['field_resource_pagination']['id'] = 'field_resource_pagination';
  $handler->display->display_options['fields']['field_resource_pagination']['table'] = 'field_data_field_resource_pagination';
  $handler->display->display_options['fields']['field_resource_pagination']['field'] = 'field_resource_pagination';
  /* Field: Content: Resource PDF Size */
  $handler->display->display_options['fields']['field_resource_pdf_size']['id'] = 'field_resource_pdf_size';
  $handler->display->display_options['fields']['field_resource_pdf_size']['table'] = 'field_data_field_resource_pdf_size';
  $handler->display->display_options['fields']['field_resource_pdf_size']['field'] = 'field_resource_pdf_size';
  /* Field: Content: Resource PDF URL */
  $handler->display->display_options['fields']['field_resource_pdf_url']['id'] = 'field_resource_pdf_url';
  $handler->display->display_options['fields']['field_resource_pdf_url']['table'] = 'field_data_field_resource_pdf_url';
  $handler->display->display_options['fields']['field_resource_pdf_url']['field'] = 'field_resource_pdf_url';
  $handler->display->display_options['fields']['field_resource_pdf_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_resource_pdf_url']['delta_offset'] = '0';
  /* Field: Content: Resource Primary Title */
  $handler->display->display_options['fields']['field_resource_primary_title']['id'] = 'field_resource_primary_title';
  $handler->display->display_options['fields']['field_resource_primary_title']['table'] = 'field_data_field_resource_primary_title';
  $handler->display->display_options['fields']['field_resource_primary_title']['field'] = 'field_resource_primary_title';
  /* Field: Content: Publication Year */
  $handler->display->display_options['fields']['field_resource_publication_year']['id'] = 'field_resource_publication_year';
  $handler->display->display_options['fields']['field_resource_publication_year']['table'] = 'field_data_field_resource_publication_year';
  $handler->display->display_options['fields']['field_resource_publication_year']['field'] = 'field_resource_publication_year';
  $handler->display->display_options['fields']['field_resource_publication_year']['label'] = 'Resource Publication Year';
  /* Field: Content: Resource Series Title */
  $handler->display->display_options['fields']['field_resource_series_title']['id'] = 'field_resource_series_title';
  $handler->display->display_options['fields']['field_resource_series_title']['table'] = 'field_data_field_resource_series_title';
  $handler->display->display_options['fields']['field_resource_series_title']['field'] = 'field_resource_series_title';
  /* Field: Content: Archived Resource Type */
  $handler->display->display_options['fields']['field_resource_document_type']['id'] = 'field_resource_document_type';
  $handler->display->display_options['fields']['field_resource_document_type']['table'] = 'field_data_field_resource_document_type';
  $handler->display->display_options['fields']['field_resource_document_type']['field'] = 'field_resource_document_type';
  $handler->display->display_options['fields']['field_resource_document_type']['label'] = 'Resource Type';
  $handler->display->display_options['fields']['field_resource_document_type']['delta_offset'] = '0';
  /* Field: Content: Resource Video Hours */
  $handler->display->display_options['fields']['field_resource_video_hours']['id'] = 'field_resource_video_hours';
  $handler->display->display_options['fields']['field_resource_video_hours']['table'] = 'field_data_field_resource_video_hours';
  $handler->display->display_options['fields']['field_resource_video_hours']['field'] = 'field_resource_video_hours';
  /* Field: Content: Resource Video Minutes */
  $handler->display->display_options['fields']['field_resource_video_minutes']['id'] = 'field_resource_video_minutes';
  $handler->display->display_options['fields']['field_resource_video_minutes']['table'] = 'field_data_field_resource_video_minutes';
  $handler->display->display_options['fields']['field_resource_video_minutes']['field'] = 'field_resource_video_minutes';
  /* Field: Feeds source: Source */
  $handler->display->display_options['fields']['config']['id'] = 'config';
  $handler->display->display_options['fields']['config']['table'] = 'feeds_source';
  $handler->display->display_options['fields']['config']['field'] = 'config';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resource' => 'resource',
  );

  /* Display: Resources */
  $handler = $view->new_display('page', 'Resources', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library Resources - All Fields';
  $handler->display->display_options['path'] = 'admin/library-resources';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Library Resources';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Library Resources';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Resources Data Export */
  $handler = $view->new_display('views_data_export', 'Resources Data Export', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'resources.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Feeds source: Source */
  $handler->display->display_options['fields']['config']['id'] = 'config';
  $handler->display->display_options['fields']['config']['table'] = 'feeds_source';
  $handler->display->display_options['fields']['config']['field'] = 'config';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['path'] = 'admin/library-resources.xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_2' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Distributors Per Resource */
  $handler = $view->new_display('page', 'Distributors Per Resource', 'page_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Resource Distributor */
  $handler->display->display_options['fields']['field_resource_distributor']['id'] = 'field_resource_distributor';
  $handler->display->display_options['fields']['field_resource_distributor']['table'] = 'field_data_field_resource_distributor';
  $handler->display->display_options['fields']['field_resource_distributor']['field'] = 'field_resource_distributor';
  $handler->display->display_options['fields']['field_resource_distributor']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['path'] = 'admin/library-resources/distributors';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Distributors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Dist/Resource Data Export */
  $handler = $view->new_display('views_data_export', 'Dist/Resource Data Export', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Distributors';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'distributors.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Feeds source: Source */
  $handler->display->display_options['fields']['config']['id'] = 'config';
  $handler->display->display_options['fields']['config']['table'] = 'feeds_source';
  $handler->display->display_options['fields']['config']['field'] = 'config';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'distributor' => 'distributor',
  );
  $handler->display->display_options['path'] = 'admin/library-resources/distributors.xls';
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $export['resources_library'] = $view;

  $view = new view();
  $view->name = 'search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_node_index';
  $view->human_name = 'Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results matched your search';
  $handler->display->display_options['empty']['area']['format'] = 'custom_formatting';
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'field_agency_organization' => 'field_agency_organization',
    'field_articledoi' => 'field_articledoi',
    'field_borrower_telephone_number' => 'field_borrower_telephone_number',
    'field_description' => 'field_description',
    'field_distributor_city' => 'field_distributor_city',
    'field_distributor_email' => 'field_distributor_email',
    'field_distributor_fax_number' => 'field_distributor_fax_number',
    'field_distributor_id' => 'field_distributor_id',
    'field_distributor_name' => 'field_distributor_name',
    'field_distributor_state' => 'field_distributor_state',
    'field_distributor_street_address' => 'field_distributor_street_address',
    'field_distributor_tdd_tty_number' => 'field_distributor_tdd_tty_number',
    'field_distributor_telephone_numb' => 'field_distributor_telephone_numb',
    'field_distributor_zip' => 'field_distributor_zip',
    'field_email' => 'field_email',
    'field_email_address' => 'field_email_address',
    'field_event_length' => 'field_event_length',
    'field_fax' => 'field_fax',
    'field_first_name' => 'field_first_name',
    'field_journal_date' => 'field_journal_date',
    'field_journal_issue' => 'field_journal_issue',
    'field_journal_name' => 'field_journal_name',
    'field_journal_pages' => 'field_journal_pages',
    'field_journal_volume' => 'field_journal_volume',
    'field_journalelectronicissn' => 'field_journalelectronicissn',
    'field_journalprintissn' => 'field_journalprintissn',
    'field_last_name' => 'field_last_name',
    'field_location' => 'field_location',
    'field_locationperson' => 'field_locationperson',
    'field_mimetype' => 'field_mimetype',
    'field_name' => 'field_name',
    'field_organization' => 'field_organization',
    'field_phone' => 'field_phone',
    'field_position_title' => 'field_position_title',
    'field_resource_abstract' => 'field_resource_abstract',
    'field_resource_accession_number' => 'field_resource_accession_number',
    'field_resource_contact_person' => 'field_resource_contact_person',
    'field_resource_copyright' => 'field_resource_copyright',
    'field_resource_country' => 'field_resource_country',
    'field_resource_email' => 'field_resource_email',
    'field_resource_isbn' => 'field_resource_isbn',
    'field_resource_keywords_2' => 'field_resource_keywords_2',
    'field_resource_library_id_number' => 'field_resource_library_id_number',
    'field_resource_page_count' => 'field_resource_page_count',
    'field_resource_pagination' => 'field_resource_pagination',
    'field_resource_pdf_size' => 'field_resource_pdf_size',
    'field_resource_primary_title' => 'field_resource_primary_title',
    'field_resource_publication_year' => 'field_resource_publication_year',
    'field_resource_secondary_title' => 'field_resource_secondary_title',
    'field_resource_series_title' => 'field_resource_series_title',
    'field_resource_video_hours' => 'field_resource_video_hours',
    'field_resource_video_minutes' => 'field_resource_video_minutes',
    'field_sponsor' => 'field_sponsor',
    'field_submitter_email' => 'field_submitter_email',
    'field_submitter_fax' => 'field_submitter_fax',
    'field_submitter_name' => 'field_submitter_name',
    'field_submitter_phone' => 'field_submitter_phone',
    'field_submitter_title' => 'field_submitter_title',
    'log' => 'log',
    'title' => 'title',
    'uuid' => 'uuid',
    'vuuid' => 'vuuid',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'search';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $export['search'] = $view;

  $view = new view();
  $view->name = 'solr_library_search';
  $view->description = 'Solr search view for Resources and Distributors (Library).';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_node_index';
  $view->human_name = 'Solr Library Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Library Search Results';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no matching results for this search.';
  $handler->display->display_options['empty']['area']['format'] = 'custom_formatting';
  /* Relationship: Indexed Content: Type */
  $handler->display->display_options['relationships']['field_type']['id'] = 'field_type';
  $handler->display->display_options['relationships']['field_type']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['relationships']['field_type']['field'] = 'field_type';
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Journal Title */
  $handler->display->display_options['fields']['field_resource_secondary_title']['id'] = 'field_resource_secondary_title';
  $handler->display->display_options['fields']['field_resource_secondary_title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_resource_secondary_title']['field'] = 'field_resource_secondary_title';
  $handler->display->display_options['fields']['field_resource_secondary_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_secondary_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_secondary_title']['alter']['text'] = '<a href="[url]" rel:"Link to Content">[field_resource_secondary_title]</a>';
  $handler->display->display_options['fields']['field_resource_secondary_title']['empty'] = '[title]';
  $handler->display->display_options['fields']['field_resource_secondary_title']['type'] = 'text_plain';
  /* Field: Indexed Content: Resource Primary Title */
  $handler->display->display_options['fields']['field_resource_primary_title']['id'] = 'field_resource_primary_title';
  $handler->display->display_options['fields']['field_resource_primary_title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_resource_primary_title']['field'] = 'field_resource_primary_title';
  $handler->display->display_options['fields']['field_resource_primary_title']['label'] = '';
  $handler->display->display_options['fields']['field_resource_primary_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_primary_title']['alter']['text'] = '<a href="[url]" rel:"Link to Content">[field_resource_primary_title]</a>';
  $handler->display->display_options['fields']['field_resource_primary_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_primary_title']['empty'] = '[field_resource_secondary_title]';
  $handler->display->display_options['fields']['field_resource_primary_title']['type'] = 'text_plain';
  /* Field: Indexed Content: Resource Abstract */
  $handler->display->display_options['fields']['field_resource_abstract']['id'] = 'field_resource_abstract';
  $handler->display->display_options['fields']['field_resource_abstract']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_resource_abstract']['field'] = 'field_resource_abstract';
  $handler->display->display_options['fields']['field_resource_abstract']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_resource_abstract']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resource_abstract']['settings'] = array(
    'trim_length' => '300',
  );
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resource' => 'resource',
  );
  /* Filter criterion: Aggregated Author Search */
  $handler->display->display_options['filters']['search_api_aggregation_3']['id'] = 'search_api_aggregation_3';
  $handler->display->display_options['filters']['search_api_aggregation_3']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['search_api_aggregation_3']['field'] = 'search_api_aggregation_3';
  $handler->display->display_options['filters']['search_api_aggregation_3']['ui_name'] = 'Aggregated Author Search';
  $handler->display->display_options['filters']['search_api_aggregation_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['operator_id'] = 'search_api_aggregation_3_op';
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['operator'] = 'search_api_aggregation_3_op';
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['identifier'] = 'search_api_aggregation_3';
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['search_api_aggregation_3']['group_info']['label'] = 'Aggregated Author';
  $handler->display->display_options['filters']['search_api_aggregation_3']['group_info']['identifier'] = 'search_api_aggregation_3';
  $handler->display->display_options['filters']['search_api_aggregation_3']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['search_api_aggregation_3']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Aggregated Title Search */
  $handler->display->display_options['filters']['search_api_aggregation_2']['id'] = 'search_api_aggregation_2';
  $handler->display->display_options['filters']['search_api_aggregation_2']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['search_api_aggregation_2']['field'] = 'search_api_aggregation_2';
  $handler->display->display_options['filters']['search_api_aggregation_2']['ui_name'] = 'Aggregated Title Search';
  $handler->display->display_options['filters']['search_api_aggregation_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['operator_id'] = 'search_api_aggregation_2_op';
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['operator'] = 'search_api_aggregation_2_op';
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['identifier'] = 'search_api_aggregation_2';
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Entity HTML Output Search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['ui_name'] = 'Entity HTML Output Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Full Text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'search_api_viewed' => 'search_api_viewed',
  );

  /* Display: Library Search Results */
  $handler = $view->new_display('page', 'Library Search Results', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library Search';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['query']['options']['parse_mode'] = 'direct';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset Search';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'View';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 25, 50, 100';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Results Summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['ui_name'] = 'Results Summary';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results">Results @start-@end of @total</div>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Global: Current Path */
  $handler->display->display_options['fields']['current_path']['id'] = 'current_path';
  $handler->display->display_options['fields']['current_path']['table'] = 'views';
  $handler->display->display_options['fields']['current_path']['field'] = 'current_path';
  $handler->display->display_options['fields']['current_path']['label'] = '';
  $handler->display->display_options['fields']['current_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['current_path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['current_path']['alter']['text'] = '?backtolib=0&[current_path]';
  $handler->display->display_options['fields']['current_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['current_path']['empty'] = '?backtolib=0';
  $handler->display->display_options['fields']['current_path']['path_format'] = 'query-only';
  $handler->display->display_options['fields']['current_path']['qs_support_fieldset'] = array(
    'query_string_support' => 'bypass-query-string',
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href = "[url][current_path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[url][current_path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = 'Link to Content';
  $handler->display->display_options['fields']['title']['alter']['rel'] = 'Link to Content';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Content: Journal Title */
  $handler->display->display_options['fields']['field_resource_secondary_title']['id'] = 'field_resource_secondary_title';
  $handler->display->display_options['fields']['field_resource_secondary_title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_resource_secondary_title']['field'] = 'field_resource_secondary_title';
  $handler->display->display_options['fields']['field_resource_secondary_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_secondary_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_secondary_title']['alter']['text'] = '<a href = "[url][current_path]">[field_resource_secondary_title]</a>';
  $handler->display->display_options['fields']['field_resource_secondary_title']['alter']['path'] = '[url][current_path]';
  $handler->display->display_options['fields']['field_resource_secondary_title']['alter']['alt'] = 'Link to Content';
  $handler->display->display_options['fields']['field_resource_secondary_title']['alter']['rel'] = 'Link to Content';
  $handler->display->display_options['fields']['field_resource_secondary_title']['empty'] = '[title]';
  $handler->display->display_options['fields']['field_resource_secondary_title']['type'] = 'text_plain';
  /* Field: Indexed Content: Resource Primary Title */
  $handler->display->display_options['fields']['field_resource_primary_title']['id'] = 'field_resource_primary_title';
  $handler->display->display_options['fields']['field_resource_primary_title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_resource_primary_title']['field'] = 'field_resource_primary_title';
  $handler->display->display_options['fields']['field_resource_primary_title']['label'] = '';
  $handler->display->display_options['fields']['field_resource_primary_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_primary_title']['alter']['text'] = '<a href = "[url][current_path]">[field_resource_primary_title]</a>';
  $handler->display->display_options['fields']['field_resource_primary_title']['alter']['path'] = '[url][current_path]';
  $handler->display->display_options['fields']['field_resource_primary_title']['alter']['alt'] = 'Link to Content';
  $handler->display->display_options['fields']['field_resource_primary_title']['alter']['rel'] = 'Link to Content';
  $handler->display->display_options['fields']['field_resource_primary_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_primary_title']['empty'] = '[field_resource_secondary_title]';
  $handler->display->display_options['fields']['field_resource_primary_title']['type'] = 'text_plain';
  /* Field: Indexed Content: Resource Abstract */
  $handler->display->display_options['fields']['field_resource_abstract']['id'] = 'field_resource_abstract';
  $handler->display->display_options['fields']['field_resource_abstract']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_resource_abstract']['field'] = 'field_resource_abstract';
  $handler->display->display_options['fields']['field_resource_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_resource_abstract']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_resource_abstract']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resource_abstract']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_abstract']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Indexed Content: Author */
  $handler->display->display_options['fields']['author']['id'] = 'author';
  $handler->display->display_options['fields']['author']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['author']['field'] = 'author';
  $handler->display->display_options['fields']['author']['label'] = '';
  $handler->display->display_options['fields']['author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['author']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['author']['view_mode'] = 'full';
  $handler->display->display_options['fields']['author']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resource' => 'resource',
  );
  /* Filter criterion: Aggregated Author Search */
  $handler->display->display_options['filters']['search_api_aggregation_3']['id'] = 'search_api_aggregation_3';
  $handler->display->display_options['filters']['search_api_aggregation_3']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['search_api_aggregation_3']['field'] = 'search_api_aggregation_3';
  $handler->display->display_options['filters']['search_api_aggregation_3']['ui_name'] = 'Aggregated Author Search';
  $handler->display->display_options['filters']['search_api_aggregation_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['operator_id'] = 'search_api_aggregation_3_op';
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['operator'] = 'search_api_aggregation_3_op';
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['identifier'] = 'search_api_aggregation_3';
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['search_api_aggregation_3']['group_info']['label'] = 'Aggregated Author';
  $handler->display->display_options['filters']['search_api_aggregation_3']['group_info']['identifier'] = 'search_api_aggregation_3';
  $handler->display->display_options['filters']['search_api_aggregation_3']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['search_api_aggregation_3']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Aggregated Title Search */
  $handler->display->display_options['filters']['search_api_aggregation_2']['id'] = 'search_api_aggregation_2';
  $handler->display->display_options['filters']['search_api_aggregation_2']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['search_api_aggregation_2']['field'] = 'search_api_aggregation_2';
  $handler->display->display_options['filters']['search_api_aggregation_2']['ui_name'] = 'Aggregated Title Search';
  $handler->display->display_options['filters']['search_api_aggregation_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['operator_id'] = 'search_api_aggregation_2_op';
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['operator'] = 'search_api_aggregation_2_op';
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['identifier'] = 'search_api_aggregation_2';
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Entity HTML Output Search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['ui_name'] = 'Entity HTML Output Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'attachments_field_resource_file' => 'attachments_field_resource_file',
    'field_resource_file:file:mime' => 'field_resource_file:file:mime',
    'field_resource_file:file:name' => 'field_resource_file:file:name',
    'search_api_aggregation_2' => 'search_api_aggregation_2',
    'search_api_viewed' => 'search_api_viewed',
  );
  $handler->display->display_options['path'] = 'library-search-results';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Library Search';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Web Search */
  $handler = $view->new_display('page', 'Web Search', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search Results';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Block area */
  $handler->display->display_options['header']['block']['id'] = 'block';
  $handler->display->display_options['header']['block']['table'] = 'views';
  $handler->display->display_options['header']['block']['field'] = 'block';
  $handler->display->display_options['header']['block']['empty'] = TRUE;
  $handler->display->display_options['header']['block']['block_to_insert'] = 'views:-exp-solr_library_search-page_1';
  $handler->display->display_options['header']['block']['title'] = '<none>';
  /* Header: Web, Library or Advanced Library Results Filters */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'Web, Library or Advanced Library Results Filters';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div id="filter-type" class="form-checkboxes"><div class="form-item form-type-checkbox form-item-web-res col-sm-2"><label class="btn btn-primary" for="web-res"><span>Web Results<input type="checkbox" id="web-res" name="web" value="Web Results" class="form-checkbox"></span></label></div><div class="form-item form-type-checkbox form-item-lib-res col-sm-3"><label class="btn btn-primary" for="lib-res"><span>Resource Library Results<input type="checkbox" id="lib-res" name="lib" value="Library Results" class="form-checkbox"></span></label></div><div class="form-item adv-lib-btn col-sm-3"><div class="btn btn-primary adv-lib"><a href="/library-search-results?[current_path]" data-toggle="tooltip" title="Click here to access Advance Library Search page for further functionality" data-placement="bottom">Advanced Library Results </a></div></div></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = '<div class="search-result-type-icon [type]"></div>';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 0;
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Journal Title */
  $handler->display->display_options['fields']['field_resource_secondary_title']['id'] = 'field_resource_secondary_title';
  $handler->display->display_options['fields']['field_resource_secondary_title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_resource_secondary_title']['field'] = 'field_resource_secondary_title';
  $handler->display->display_options['fields']['field_resource_secondary_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_secondary_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_secondary_title']['alter']['text'] = '<a href="[url]" rel:"Link to Content">[field_resource_secondary_title]</a>';
  $handler->display->display_options['fields']['field_resource_secondary_title']['empty'] = '[title]';
  $handler->display->display_options['fields']['field_resource_secondary_title']['type'] = 'text_plain';
  /* Field: Indexed Content: Resource Primary Title */
  $handler->display->display_options['fields']['field_resource_primary_title']['id'] = 'field_resource_primary_title';
  $handler->display->display_options['fields']['field_resource_primary_title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_resource_primary_title']['field'] = 'field_resource_primary_title';
  $handler->display->display_options['fields']['field_resource_primary_title']['label'] = '';
  $handler->display->display_options['fields']['field_resource_primary_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_primary_title']['alter']['text'] = '<a href="[url]" rel:"Link to Content">[field_resource_primary_title]</a>';
  $handler->display->display_options['fields']['field_resource_primary_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_primary_title']['empty'] = '[field_resource_secondary_title]';
  $handler->display->display_options['fields']['field_resource_primary_title']['type'] = 'text_plain';
  /* Field: Indexed Content: The main body text » Summary */
  $handler->display->display_options['fields']['body_summary']['id'] = 'body_summary';
  $handler->display->display_options['fields']['body_summary']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['body_summary']['field'] = 'body_summary';
  $handler->display->display_options['fields']['body_summary']['label'] = '';
  $handler->display->display_options['fields']['body_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_summary']['link_to_entity'] = 0;
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = '[body_summary]';
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Indexed Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['empty'] = '[body]';
  $handler->display->display_options['fields']['field_description']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Indexed Content: Resource Abstract */
  $handler->display->display_options['fields']['field_resource_abstract']['id'] = 'field_resource_abstract';
  $handler->display->display_options['fields']['field_resource_abstract']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_resource_abstract']['field'] = 'field_resource_abstract';
  $handler->display->display_options['fields']['field_resource_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_resource_abstract']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_resource_abstract']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resource_abstract']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_abstract']['empty'] = '[field_description]';
  $handler->display->display_options['fields']['field_resource_abstract']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Global: Current Path */
  $handler->display->display_options['fields']['current_path']['id'] = 'current_path';
  $handler->display->display_options['fields']['current_path']['table'] = 'views';
  $handler->display->display_options['fields']['current_path']['field'] = 'current_path';
  $handler->display->display_options['fields']['current_path']['label'] = '';
  $handler->display->display_options['fields']['current_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['current_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['current_path']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['current_path']['path_format'] = 'query-only';
  $handler->display->display_options['fields']['current_path']['qs_support_fieldset'] = array(
    'query_string_support' => 'bypass-query-string',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Content: Content type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['type']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['type']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['type']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entity HTML Output Search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['ui_name'] = 'Entity HTML Output Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '2';
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'attachments_field_audio' => 'attachments_field_audio',
    'attachments_field_media_type_video' => 'attachments_field_media_type_video',
    'attachments_field_resource_file' => 'attachments_field_resource_file',
    'attachments_field_transcript' => 'attachments_field_transcript',
    'attachments_field_video_captions_file' => 'attachments_field_video_captions_file',
    'attachments_field_webinar_media' => 'attachments_field_webinar_media',
    'attachments_field_webinar_q_a' => 'attachments_field_webinar_q_a',
    'attachments_field_webinar_slides' => 'attachments_field_webinar_slides',
    'attachments_field_webinar_transcript' => 'attachments_field_webinar_transcript',
    'search_api_viewed' => 'search_api_viewed',
  );
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array();
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['type']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Content type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Web Results',
      'operator' => '=',
      'value' => array(
        'accordion_item' => 'accordion_item',
        'advisory_panel_members' => 'advisory_panel_members',
        'archived_webinars' => 'archived_webinars',
        'article' => 'article',
        'page' => 'page',
        'event' => 'event',
        'featured_documents' => 'featured_documents',
        'media' => 'media',
        'panel' => 'panel',
        'webform' => 'webform',
        'distributor' => 0,
        'resource' => 0,
        'sns' => 0,
        'image' => 0,
        'email_template' => 0,
      ),
    ),
    2 => array(
      'title' => 'Library Results',
      'operator' => '=',
      'value' => array(
        'resource' => 'resource',
        'accordion_item' => 0,
        'advisory_panel_members' => 0,
        'archived_webinars' => 0,
        'article' => 0,
        'page' => 0,
        'distributor' => 0,
        'event' => 0,
        'featured_documents' => 0,
        'media' => 0,
        'panel' => 0,
        'sns' => 0,
        'image' => 0,
        'webform' => 0,
        'email_template' => 0,
      ),
    ),
    3 => array(
      'title' => 'All Results',
      'operator' => '=',
      'value' => array(
        'accordion_item' => 'accordion_item',
        'advisory_panel_members' => 'advisory_panel_members',
        'archived_webinars' => 'archived_webinars',
        'article' => 'article',
        'page' => 'page',
        'event' => 'event',
        'featured_documents' => 'featured_documents',
        'media' => 'media',
        'panel' => 'panel',
        'resource' => 'resource',
        'webform' => 'webform',
        'distributor' => 0,
        'sns' => 0,
        'image' => 0,
        'email_template' => 0,
      ),
    ),
  );
  $handler->display->display_options['path'] = 'search';

  /* Display: Back to Search Block */
  $handler = $view->new_display('block', 'Back to Search Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Current Path */
  $handler->display->display_options['fields']['current_path']['id'] = 'current_path';
  $handler->display->display_options['fields']['current_path']['table'] = 'views';
  $handler->display->display_options['fields']['current_path']['field'] = 'current_path';
  $handler->display->display_options['fields']['current_path']['label'] = '';
  $handler->display->display_options['fields']['current_path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['current_path']['alter']['text'] = '<a href = "/library-search-results?[current_path]">Back to Search</a>';
  $handler->display->display_options['fields']['current_path']['alter']['path'] = '/library-search-results?[current_path]';
  $handler->display->display_options['fields']['current_path']['alter']['alt'] = 'Back to Search';
  $handler->display->display_options['fields']['current_path']['alter']['link_class'] = 'btn btn-accent2';
  $handler->display->display_options['fields']['current_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['current_path']['path_format'] = 'query-only';
  $handler->display->display_options['fields']['current_path']['qs_support_fieldset'] = array(
    'query_string_support' => 'bypass-query-string',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Healthy Dating Search Results */
  $handler = $view->new_display('page', 'Healthy Dating Search Results', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Special Collections: Healthy Dating Leads to Healthy Marriage';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['query']['options']['parse_mode'] = 'direct';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset Search';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'View';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 25, 50, 100';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Results Summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['ui_name'] = 'Results Summary';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-results">Results @start-@end of @total</div>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Global: Current Path */
  $handler->display->display_options['fields']['current_path']['id'] = 'current_path';
  $handler->display->display_options['fields']['current_path']['table'] = 'views';
  $handler->display->display_options['fields']['current_path']['field'] = 'current_path';
  $handler->display->display_options['fields']['current_path']['label'] = '';
  $handler->display->display_options['fields']['current_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['current_path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['current_path']['alter']['text'] = '?backtosc=0&[current_path]';
  $handler->display->display_options['fields']['current_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['current_path']['empty'] = '?backtosc=0';
  $handler->display->display_options['fields']['current_path']['path_format'] = 'query-only';
  $handler->display->display_options['fields']['current_path']['qs_support_fieldset'] = array(
    'query_string_support' => 'bypass-query-string',
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href = "[url][current_path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[url][current_path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = 'Link to Content';
  $handler->display->display_options['fields']['title']['alter']['rel'] = 'Link to Content';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Content: Journal Title */
  $handler->display->display_options['fields']['field_resource_secondary_title']['id'] = 'field_resource_secondary_title';
  $handler->display->display_options['fields']['field_resource_secondary_title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_resource_secondary_title']['field'] = 'field_resource_secondary_title';
  $handler->display->display_options['fields']['field_resource_secondary_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_secondary_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_secondary_title']['alter']['text'] = '<a href = "[url][current_path]">[field_resource_secondary_title]</a>';
  $handler->display->display_options['fields']['field_resource_secondary_title']['alter']['path'] = '[url][current_path]';
  $handler->display->display_options['fields']['field_resource_secondary_title']['alter']['alt'] = 'Link to Content';
  $handler->display->display_options['fields']['field_resource_secondary_title']['alter']['rel'] = 'Link to Content';
  $handler->display->display_options['fields']['field_resource_secondary_title']['empty'] = '[title]';
  $handler->display->display_options['fields']['field_resource_secondary_title']['type'] = 'text_plain';
  /* Field: Indexed Content: Resource Primary Title */
  $handler->display->display_options['fields']['field_resource_primary_title']['id'] = 'field_resource_primary_title';
  $handler->display->display_options['fields']['field_resource_primary_title']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_resource_primary_title']['field'] = 'field_resource_primary_title';
  $handler->display->display_options['fields']['field_resource_primary_title']['label'] = '';
  $handler->display->display_options['fields']['field_resource_primary_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_primary_title']['alter']['text'] = '<a href = "[url][current_path]">[field_resource_primary_title]</a>';
  $handler->display->display_options['fields']['field_resource_primary_title']['alter']['path'] = '[url][current_path]';
  $handler->display->display_options['fields']['field_resource_primary_title']['alter']['alt'] = 'Link to Content';
  $handler->display->display_options['fields']['field_resource_primary_title']['alter']['rel'] = 'Link to Content';
  $handler->display->display_options['fields']['field_resource_primary_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_primary_title']['empty'] = '[field_resource_secondary_title]';
  $handler->display->display_options['fields']['field_resource_primary_title']['type'] = 'text_plain';
  /* Field: Indexed Content: Resource Abstract */
  $handler->display->display_options['fields']['field_resource_abstract']['id'] = 'field_resource_abstract';
  $handler->display->display_options['fields']['field_resource_abstract']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['field_resource_abstract']['field'] = 'field_resource_abstract';
  $handler->display->display_options['fields']['field_resource_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_resource_abstract']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_resource_abstract']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resource_abstract']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_abstract']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Indexed Content: Author */
  $handler->display->display_options['fields']['author']['id'] = 'author';
  $handler->display->display_options['fields']['author']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['author']['field'] = 'author';
  $handler->display->display_options['fields']['author']['label'] = '';
  $handler->display->display_options['fields']['author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['author']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['author']['view_mode'] = 'full';
  $handler->display->display_options['fields']['author']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resource' => 'resource',
  );
  /* Filter criterion: Aggregated Author Search */
  $handler->display->display_options['filters']['search_api_aggregation_3']['id'] = 'search_api_aggregation_3';
  $handler->display->display_options['filters']['search_api_aggregation_3']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['search_api_aggregation_3']['field'] = 'search_api_aggregation_3';
  $handler->display->display_options['filters']['search_api_aggregation_3']['ui_name'] = 'Aggregated Author Search';
  $handler->display->display_options['filters']['search_api_aggregation_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['operator_id'] = 'search_api_aggregation_3_op';
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['operator'] = 'search_api_aggregation_3_op';
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['identifier'] = 'search_api_aggregation_3';
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['search_api_aggregation_3']['group_info']['label'] = 'Aggregated Author';
  $handler->display->display_options['filters']['search_api_aggregation_3']['group_info']['identifier'] = 'search_api_aggregation_3';
  $handler->display->display_options['filters']['search_api_aggregation_3']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['search_api_aggregation_3']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Aggregated Title Search */
  $handler->display->display_options['filters']['search_api_aggregation_2']['id'] = 'search_api_aggregation_2';
  $handler->display->display_options['filters']['search_api_aggregation_2']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['search_api_aggregation_2']['field'] = 'search_api_aggregation_2';
  $handler->display->display_options['filters']['search_api_aggregation_2']['ui_name'] = 'Aggregated Title Search';
  $handler->display->display_options['filters']['search_api_aggregation_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['operator_id'] = 'search_api_aggregation_2_op';
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['operator'] = 'search_api_aggregation_2_op';
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['identifier'] = 'search_api_aggregation_2';
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Entity HTML Output Search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['ui_name'] = 'Entity HTML Output Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'attachments_field_resource_file' => 'attachments_field_resource_file',
    'field_resource_file:file:mime' => 'field_resource_file:file:mime',
    'field_resource_file:file:name' => 'field_resource_file:file:name',
    'search_api_aggregation_2' => 'search_api_aggregation_2',
    'search_api_viewed' => 'search_api_viewed',
  );
  /* Filter criterion: Indexed Content: Topics */
  $handler->display->display_options['filters']['field_ressource_keywords']['id'] = 'field_ressource_keywords';
  $handler->display->display_options['filters']['field_ressource_keywords']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['field_ressource_keywords']['field'] = 'field_ressource_keywords';
  $handler->display->display_options['filters']['field_ressource_keywords']['value'] = array(
    4035 => '4035',
  );
  $handler->display->display_options['path'] = 'healthy-dating-search-results';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Special Collection';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Back to Special Collection Block */
  $handler = $view->new_display('block', 'Back to Special Collection Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Current Path */
  $handler->display->display_options['fields']['current_path']['id'] = 'current_path';
  $handler->display->display_options['fields']['current_path']['table'] = 'views';
  $handler->display->display_options['fields']['current_path']['field'] = 'current_path';
  $handler->display->display_options['fields']['current_path']['label'] = '';
  $handler->display->display_options['fields']['current_path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['current_path']['alter']['text'] = '<a href = "/healthy-dating-search-results?[current_path]">Back to Search</a>';
  $handler->display->display_options['fields']['current_path']['alter']['path'] = '/library-search-results?[current_path]';
  $handler->display->display_options['fields']['current_path']['alter']['alt'] = 'Back to Search';
  $handler->display->display_options['fields']['current_path']['alter']['link_class'] = 'btn btn-accent2';
  $handler->display->display_options['fields']['current_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['current_path']['path_format'] = 'query-only';
  $handler->display->display_options['fields']['current_path']['qs_support_fieldset'] = array(
    'query_string_support' => 'bypass-query-string',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $export['solr_library_search'] = $view;

  return $export;
}
