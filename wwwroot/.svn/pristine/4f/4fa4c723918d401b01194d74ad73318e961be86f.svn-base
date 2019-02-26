<?php
/**
 * @file
 * nmhrc_core.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function nmhrc_core_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'aboutus';
  $page->task = 'page';
  $page->admin_title = 'About Us';
  $page->admin_description = '';
  $page->path = 'about-us';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_aboutus_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'aboutus';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'The National Resource Center for Healthy Marriage and Families helps agencies develop the capacity to promote healthy relationship skills for families.',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right_side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '69.99294366694107',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right_side' => array(
        'type' => 'region',
        'title' => 'right-side',
        'width' => '30.007056333058923',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'region',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_side' => NULL,
      'top' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_size' => '8',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_size' => '4',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'About Us';
  $display->uuid = 'f0801f42-aa4a-4feb-aca1-2630b9963e96';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_aboutus_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d42e55f9-8b21-4bb9-ba60-75086efbc249';
  $pane->panel = 'left';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '270',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd42e55f9-8b21-4bb9-ba60-75086efbc249';
  $display->content['new-d42e55f9-8b21-4bb9-ba60-75086efbc249'] = $pane;
  $display->panels['left'][0] = 'new-d42e55f9-8b21-4bb9-ba60-75086efbc249';
  $pane = new stdClass();
  $pane->pid = 'new-0da05572-011f-405e-9490-d57827c11bf5';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'radioactivity_most_popular';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'MOST POPULAR',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0da05572-011f-405e-9490-d57827c11bf5';
  $display->content['new-0da05572-011f-405e-9490-d57827c11bf5'] = $pane;
  $display->panels['right'][0] = 'new-0da05572-011f-405e-9490-d57827c11bf5';
  $pane = new stdClass();
  $pane->pid = 'new-b012de7e-9662-4991-a002-472706c5903f';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'mostpopular-1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Most Popular',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b012de7e-9662-4991-a002-472706c5903f';
  $display->content['new-b012de7e-9662-4991-a002-472706c5903f'] = $pane;
  $display->panels['right'][1] = 'new-b012de7e-9662-4991-a002-472706c5903f';
  $pane = new stdClass();
  $pane->pid = 'new-fa0948c7-3bf7-4a3d-80a1-711eba84d96d';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'boxes-survey_btn';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'fa0948c7-3bf7-4a3d-80a1-711eba84d96d';
  $display->content['new-fa0948c7-3bf7-4a3d-80a1-711eba84d96d'] = $pane;
  $display->panels['right'][2] = 'new-fa0948c7-3bf7-4a3d-80a1-711eba84d96d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['aboutus'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'calendar_lists';
  $page->task = 'page';
  $page->admin_title = 'Calendar Lists';
  $page->admin_description = '';
  $page->path = 'calendar-lists';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_calendar_lists_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'calendar_lists';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8fb88129-4e7c-45d4-a738-afab3151c447';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_calendar_lists_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-47064aae-5bc8-4a5c-9c03-ef0d6b04df27';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'nmhrc_calendar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'override_title' => 1,
    'override_title_text' => 'Upcoming Events (this shows the next 5)',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '47064aae-5bc8-4a5c-9c03-ef0d6b04df27';
  $display->content['new-47064aae-5bc8-4a5c-9c03-ef0d6b04df27'] = $pane;
  $display->panels['center'][0] = 'new-47064aae-5bc8-4a5c-9c03-ef0d6b04df27';
  $pane = new stdClass();
  $pane->pid = 'new-be0523ff-8995-43ba-ba22-cd0f94bc86e0';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'nmhrc_calendar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '20',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'override_title' => 1,
    'override_title_text' => 'User Filterable Event List create for accessiblity',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'be0523ff-8995-43ba-ba22-cd0f94bc86e0';
  $display->content['new-be0523ff-8995-43ba-ba22-cd0f94bc86e0'] = $pane;
  $display->panels['center'][1] = 'new-be0523ff-8995-43ba-ba22-cd0f94bc86e0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-47064aae-5bc8-4a5c-9c03-ef0d6b04df27';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['calendar_lists'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'library';
  $page->task = 'page';
  $page->admin_title = 'Library';
  $page->admin_description = 'Intermediary page that shows information about the Library as well as links to the Library';
  $page->path = 'library';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_library_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'library';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'top' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_size' => '8',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_size' => '4',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
      'default' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'About The Resource Center Library';
  $display->uuid = 'f40f2f0a-973e-4b21-84c1-356bf1630c06';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_library_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-867845c2-8511-46b8-aedd-716556294100';
  $pane->panel = 'left';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '21',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '867845c2-8511-46b8-aedd-716556294100';
  $display->content['new-867845c2-8511-46b8-aedd-716556294100'] = $pane;
  $display->panels['left'][0] = 'new-867845c2-8511-46b8-aedd-716556294100';
  $pane = new stdClass();
  $pane->pid = 'new-88b87f22-cdd6-4988-8986-98685e57839a';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'featured_documents';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 1,
    'override_title_text' => 'Featured Resource',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '88b87f22-cdd6-4988-8986-98685e57839a';
  $display->content['new-88b87f22-cdd6-4988-8986-98685e57839a'] = $pane;
  $display->panels['left'][1] = 'new-88b87f22-cdd6-4988-8986-98685e57839a';
  $pane = new stdClass();
  $pane->pid = 'new-9742dfb2-7370-409a-ac53-ef233eabf8fe';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Search the Library',
    'title' => 'SEARCH THE LIBRARY',
    'body' => '<form action="https://library.healthymarriageandfamilies.org/cwig/ws/library/docs/MARRIAGE/Search" id="searchform" method="post" name="searchform" onsubmit="return checkCriteria()">
	<div class="input-append"><label class="ui-helper-hidden-accessible" for="librarySeach">Search Resources</label><input name="form_f0o" type="hidden" value="ph is"><input class="span2" id="librarySeach" name="form_f0i" size="55" type="text"><input class="span2" name="form_f0" type="HIDDEN" value="SIMPLE_SRCH"><button class="btn" id="subbutton" name="submit_button" onclick="checkCriteria()" style="margin-top:1.5%;height: 20px;" type="submit"><span class="element-invisible">Search</span></button></div>
<p class="element-invisible"><input name="rpp" type="hidden" value="25"><input name="r" type="hidden" value="1"><input name="form_sf0" type="hidden" value="year"><input name="form_so0" type="hidden" value="Descend"><input name="sid" type="hidden" value="BE37117F6EA1E1C12E378153348200E5"><input name="searchType" type="hidden" value="simple"></p></form>
<div class="arrow-list">
	<ul>
		<li><a href="http://library.healthymarriageandfamilies.org/cwig/ws/library/docs/marriage/SimpleSearchForm">Simple Search Form</a></li>
		<li><a href="http://library.healthymarriageandfamilies.org/cwig/ws/library/docs/marriage/SearchForm">Advanced Search Form</a></li>
		<li><a href="/additional-search-tips">Search Tips</a></li>
	</ul>
</div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9742dfb2-7370-409a-ac53-ef233eabf8fe';
  $display->content['new-9742dfb2-7370-409a-ac53-ef233eabf8fe'] = $pane;
  $display->panels['right'][0] = 'new-9742dfb2-7370-409a-ac53-ef233eabf8fe';
  $pane = new stdClass();
  $pane->pid = 'new-e11b120a-fdaf-4283-b99e-c72298510086';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Resource by Topic',
    'title' => 'RESOURCES BY TOPIC',
    'body' => '<div class="arrow-list"><ul><li><a href="http://library.healthymarriageandfamilies.org/cwig/ws/library/docs/marriage/ResultSet?w=NATIVE%28%27BASIC+ph+is+%27%27childrens+services%27%27%2C%27%27youth+services%27%27%2C%27%27*school+children%27%27%2C%27%27students%27%27%2C%27%27adolescen*%27%27%2C%27%27early+education%27%27%2C%27%27early+learning%27%27%2C%27%27head+start%27%27%2C%27%27child+development%27%27%2C%27%27youth+development%27%27%27%29&amp;amp;upp=0&amp;amp;rpp=25&amp;amp;order=native%28%27year%2FDescend%27%29&amp;amp;r=1#.U1k0bqIvBnQ">Children and Youth Services</a></li><li><a href="http://library.healthymarriageandfamilies.org/cwig/ws/library/docs/marriage/ResultSet?w=NATIVE%28%27BASIC+ph+is+%27%27refugee*%27%27%2C%27%27immigrant*%27%27%2C%27%27african+american*%27%27%2C%27%27latino*%27%27%2C%27%27asian+american*%27%27%2C%27%27tribal%27%27%2C%27%27native+american%27%27%2C%27%27incarcerated%27%27%2C%27%27reentry%27%27%2C%27%27prisoner*%27%27%2C%27%27military%27%27%27%29&amp;amp;upp=0&amp;amp;rpp=25&amp;amp;order=native%28%27year%2FDescend%27%29&amp;amp;r=1">Cultural and Special Circumstances</a></li><li><a href="http://library.healthymarriageandfamilies.org/cwig/ws/library/docs/marriage/ResultSet?w=NATIVE%28%27BASIC+ph+is+%27%27economic+self+sufficiency%27%27%2C%27%27tanf%27%27%2C%27%27family+income%27%27%2C%27%27budgeting%27%27%2C%27%27child+support%27%27%2C%27%27postsecondary%27%27%2C%27%27housing%27%27%2C%27%27homeless%27%27%2C%27%27workforce%27%27%27%29&amp;amp;upp=0&amp;amp;rpp=25&amp;amp;order=native%28%27year%2FDescend%27%29&amp;amp;r=1">Economic Self-Sufficiency</a></li><li><a href="http://library.healthymarriageandfamilies.org/cwig/ws/library/docs/marriage/ResultSet?w=NATIVE%28%27BASIC+ph+is+%27%27safety%27%27%2C%27%27abuse%27%27%2C%27%27violence%27%27%2C%27%27child+welfare%27%27%2C%27%27maltreatment%27%27%2C%27%27neglect%27%27%2C%27%27foster%27%27%2C%27%27adopt*%27%27%2C%27%27family+group+conferencing%27%27%27%29&amp;amp;upp=0&amp;amp;rpp=25&amp;amp;order=native%28%27year%2FDescend%27%29&amp;amp;r=1">Family Safety</a></li><li><a href="http://library.healthymarriageandfamilies.org/cwig/ws/library/docs/marriage/ResultSet?w=NATIVE%28%27BASIC+ph+is+%27%27health+services%27%27%2C%27%27public+health%27%27%2C%27%27mental+health%27%27%2C%27%27child+health%27%27%2C%27%27substance+abuse%27%27%2C%27%27disabilities%27%27%27%29&amp;amp;upp=0&amp;amp;rpp=25&amp;amp;order=native%28%27year%2FDescend%27%29&amp;amp;r=1">Health and Mental Health Services</a></li><li><a href="https://library.healthymarriageandfamilies.org/cwig/ws/library/docs/marriage/ResultSet?w=NATIVE%28%27AUTHORS+ph+like+%27%27National+Resource+Center+for+Healthy+Marriage+and+Families%27%27%27%29&amp;upp=0&amp;rpp=25&amp;order=native%28%27year%2FDescend%27%29&amp;r=1&amp;bclabel=AUTHORS+ph+like+%27National+Resource+Center+for+Healthy+Marriage+and+Families%27#.VEEqhxZAHA0">Resource Center Products</a></li></ul></div>',
    'format' => 'custom_formatting',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e11b120a-fdaf-4283-b99e-c72298510086';
  $display->content['new-e11b120a-fdaf-4283-b99e-c72298510086'] = $pane;
  $display->panels['right'][1] = 'new-e11b120a-fdaf-4283-b99e-c72298510086';
  $pane = new stdClass();
  $pane->pid = 'new-cb45bada-44af-4a0d-8a4f-86f606c2dfd1';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Resources for Clients',
    'title' => 'RESOURCES FOR CLIENTS',
    'body' => '<div class="arrow-list"><ul><li><a href="http://library.healthymarriageandfamilies.org/cwig/ws/library/docs/marriage/ResultSet?w=NATIVE%28%27IPDET+ph+is+%27%27tier1%27%27+and+DT+ph+is+%27%27Fact+Sheet%27%27%27%29&amp;amp;upp=0&amp;amp;rpp=100&amp;amp;order=native%28%27YEAR%2FDescend%27%29&amp;amp;r=1">Fact Sheets</a></li><li><a href="http://library.healthymarriageandfamilies.org/cwig/ws/library/docs/marriage/ResultSet?w=NATIVE%28%27IPDET+ph+is+%27%27tier1%27%27+and+DT+ph+is+%27%27Information+Packet+or+Sheet%27%27%27%29&amp;amp;upp=0&amp;amp;rpp=100&amp;amp;order=native%28%27YEAR%2FDescend%27%29&amp;amp;r=1">Tip Sheets</a></li><li><a href="http://library.healthymarriageandfamilies.org/cwig/ws/library/docs/marriage/ResultSet?w=NATIVE%28%27IPDET+ph+is+%27%27tier1%27%27+and+DT+ph+is+%27%27Training+Material%27%27%27%29&amp;amp;upp=0&amp;amp;rpp=100&amp;amp;order=native%28%27YEAR%2FDescend%27%29&amp;amp;r=1">Training Materials</a></li></ul></div>',
    'format' => 'custom_formatting',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'cb45bada-44af-4a0d-8a4f-86f606c2dfd1';
  $display->content['new-cb45bada-44af-4a0d-8a4f-86f606c2dfd1'] = $pane;
  $display->panels['right'][2] = 'new-cb45bada-44af-4a0d-8a4f-86f606c2dfd1';
  $pane = new stdClass();
  $pane->pid = 'new-0e419fcd-a48a-4274-b3b7-52acd7ffb193';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Submit a Resource',
    'title' => 'SUBMIT A RESOURCE',
    'body' => '<div class="arrow-list"><ul><li><a href="/library-submission-policy">Library Resource Submission Policy</a></li></ul></div><p>&nbsp;</p>',
    'format' => 'custom_formatting',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0e419fcd-a48a-4274-b3b7-52acd7ffb193';
  $display->content['new-0e419fcd-a48a-4274-b3b7-52acd7ffb193'] = $pane;
  $display->panels['right'][3] = 'new-0e419fcd-a48a-4274-b3b7-52acd7ffb193';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-867845c2-8511-46b8-aedd-716556294100';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['library'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'media_gallery';
  $page->task = 'page';
  $page->admin_title = 'Media Gallery';
  $page->admin_description = '';
  $page->path = 'media-gallery';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_media_gallery_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'media_gallery';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => '[current-page:title] | Resource Center',
        ),
        'description' => array(
          'value' => 'The National Resource Center for Healthy Marriage and Families offers free podcasts, videos, and webinars on a variety of healthy relationship topics.',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_size' => '6',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_size' => '6',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Media Gallery';
  $display->uuid = '95582ddf-83a2-44d7-8081-a5823881e973';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_media_gallery_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6d6ebe7c-64c9-47a2-87f7-3d6eb4d100cc';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'boxes-media_gallery_bottom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6d6ebe7c-64c9-47a2-87f7-3d6eb4d100cc';
  $display->content['new-6d6ebe7c-64c9-47a2-87f7-3d6eb4d100cc'] = $pane;
  $display->panels['bottom'][0] = 'new-6d6ebe7c-64c9-47a2-87f7-3d6eb4d100cc';
  $pane = new stdClass();
  $pane->pid = 'new-25036242-cda8-4f55-a581-384d6ef90cee';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'media';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'override_title' => 1,
    'override_title_text' => 'Podcasts',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'podcast-pane',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '25036242-cda8-4f55-a581-384d6ef90cee';
  $display->content['new-25036242-cda8-4f55-a581-384d6ef90cee'] = $pane;
  $display->panels['bottom'][1] = 'new-25036242-cda8-4f55-a581-384d6ef90cee';
  $pane = new stdClass();
  $pane->pid = 'new-2a9a9d1f-326f-4415-a715-0c28110687b1';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'media-panel_pane_1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2a9a9d1f-326f-4415-a715-0c28110687b1';
  $display->content['new-2a9a9d1f-326f-4415-a715-0c28110687b1'] = $pane;
  $display->panels['bottom'][2] = 'new-2a9a9d1f-326f-4415-a715-0c28110687b1';
  $pane = new stdClass();
  $pane->pid = 'new-fd8c22d8-e069-43e9-b3ad-97fb8bd87e84';
  $pane->panel = 'bottom';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '271',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => 'Webinars',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'fd8c22d8-e069-43e9-b3ad-97fb8bd87e84';
  $display->content['new-fd8c22d8-e069-43e9-b3ad-97fb8bd87e84'] = $pane;
  $display->panels['bottom'][3] = 'new-fd8c22d8-e069-43e9-b3ad-97fb8bd87e84';
  $pane = new stdClass();
  $pane->pid = 'new-bade57e9-df72-4f5f-87e8-d0d716e48806';
  $pane->panel = 'bottom';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Media gallery bottom',
    'title' => '',
    'body' => '<a href="/events-archive">View our past webinars</a>.',
    'format' => 'pure_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'bade57e9-df72-4f5f-87e8-d0d716e48806';
  $display->content['new-bade57e9-df72-4f5f-87e8-d0d716e48806'] = $pane;
  $display->panels['bottom'][4] = 'new-bade57e9-df72-4f5f-87e8-d0d716e48806';
  $pane = new stdClass();
  $pane->pid = 'new-75f55f8e-bfb8-4af1-ae29-09bf205c3f86';
  $pane->panel = 'top';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '272',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '75f55f8e-bfb8-4af1-ae29-09bf205c3f86';
  $display->content['new-75f55f8e-bfb8-4af1-ae29-09bf205c3f86'] = $pane;
  $display->panels['top'][0] = 'new-75f55f8e-bfb8-4af1-ae29-09bf205c3f86';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['media_gallery'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'past_events_archive';
  $page->task = 'page';
  $page->admin_title = 'Past Events Archive';
  $page->admin_description = '';
  $page->path = 'events-archive';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_past_events_archive_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'past_events_archive';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Webinars | National Resource Center for Healthy Marriage and Families',
        ),
        'description' => array(
          'value' => 'View the National Resource Center for Healthy Marriage and Families’ webinars for new research, best practices, and innovative strategies.',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_size' => '6',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_size' => '6',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Archived Webinars';
  $display->uuid = 'bb642fa7-c226-430a-9f3e-8c428f2b7eab';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_past_events_archive_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6dace305-008c-4b39-b7ed-076355faa51e';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'archive_webinars';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '25',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6dace305-008c-4b39-b7ed-076355faa51e';
  $display->content['new-6dace305-008c-4b39-b7ed-076355faa51e'] = $pane;
  $display->panels['bottom'][0] = 'new-6dace305-008c-4b39-b7ed-076355faa51e';
  $pane = new stdClass();
  $pane->pid = 'new-19bbfda6-295d-47b0-8822-523126826304';
  $pane->panel = 'top';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '271',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '19bbfda6-295d-47b0-8822-523126826304';
  $display->content['new-19bbfda6-295d-47b0-8822-523126826304'] = $pane;
  $display->panels['top'][0] = 'new-19bbfda6-295d-47b0-8822-523126826304';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6dace305-008c-4b39-b7ed-076355faa51e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['past_events_archive'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'prog_dev';
  $page->task = 'page';
  $page->admin_title = 'Program Development';
  $page->admin_description = '';
  $page->path = 'program-development';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_prog_dev_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'prog_dev';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Integration Strategies | Resource Center',
        ),
        'description' => array(
          'value' => 'We promote the integration of healthy marriage and relationship education into safety-net services as part of a holistic approach to strengthening families.',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right_side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '69.99294855103959',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right_side' => array(
        'type' => 'region',
        'title' => 'right-side',
        'width' => '30.00705144896041',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'region',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_side' => NULL,
      'left' => array(
        'column_size' => '8',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_size' => '4',
        'offset_size' => '0',
      ),
      'top' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Integration Strategies';
  $display->uuid = '0fc70509-a22e-4e60-88f3-d0a7a98d1c4f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_prog_dev_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-12a8a7bb-5175-4c0a-95f3-1cb8ace476bf';
  $pane->panel = 'left';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '264',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '12a8a7bb-5175-4c0a-95f3-1cb8ace476bf';
  $display->content['new-12a8a7bb-5175-4c0a-95f3-1cb8ace476bf'] = $pane;
  $display->panels['left'][0] = 'new-12a8a7bb-5175-4c0a-95f3-1cb8ace476bf';
  $pane = new stdClass();
  $pane->pid = 'new-8bef3985-d5d7-44b8-9629-0e17fa25b598';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'accordion';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => 'loi',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8bef3985-d5d7-44b8-9629-0e17fa25b598';
  $display->content['new-8bef3985-d5d7-44b8-9629-0e17fa25b598'] = $pane;
  $display->panels['left'][1] = 'new-8bef3985-d5d7-44b8-9629-0e17fa25b598';
  $pane = new stdClass();
  $pane->pid = 'new-1f1b3cfb-c271-4c63-a2e6-ae756d735892';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'radioactivity_most_popular';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'MOST POPULAR',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1f1b3cfb-c271-4c63-a2e6-ae756d735892';
  $display->content['new-1f1b3cfb-c271-4c63-a2e6-ae756d735892'] = $pane;
  $display->panels['right'][0] = 'new-1f1b3cfb-c271-4c63-a2e6-ae756d735892';
  $pane = new stdClass();
  $pane->pid = 'new-dcaac2b6-5524-4877-bf11-27242e16c53f';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'mostpopular-1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Most Popular',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dcaac2b6-5524-4877-bf11-27242e16c53f';
  $display->content['new-dcaac2b6-5524-4877-bf11-27242e16c53f'] = $pane;
  $display->panels['right'][1] = 'new-dcaac2b6-5524-4877-bf11-27242e16c53f';
  $pane = new stdClass();
  $pane->pid = 'new-fc5b87ab-8f4d-4a65-b1cb-a7ff7a406fdb';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'boxes-survey_btn';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'fc5b87ab-8f4d-4a65-b1cb-a7ff7a406fdb';
  $display->content['new-fc5b87ab-8f4d-4a65-b1cb-a7ff7a406fdb'] = $pane;
  $display->panels['right'][2] = 'new-fc5b87ab-8f4d-4a65-b1cb-a7ff7a406fdb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['prog_dev'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'resources';
  $page->task = 'page';
  $page->admin_title = 'Resources';
  $page->admin_description = '';
  $page->path = 'resources';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Resources',
    'name' => 'main-menu',
    'weight' => '-44',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_resources_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'resources';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'Our online healthy relationship resources include a media gallery, virtual library, curricula guidance, calendar of events, and e-news archive.',
        ),
        'keywords' => array(
          'value' => 'Resources',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_size' => '8',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_size' => '4',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Resources';
  $display->uuid = '6dfc21db-8d48-45a6-9b76-ce99a1a0bed8';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_resources_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e15db96e-8edf-4277-b929-5d856ef2c8c7';
  $pane->panel = 'left';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '119',
    'links' => 1,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e15db96e-8edf-4277-b929-5d856ef2c8c7';
  $display->content['new-e15db96e-8edf-4277-b929-5d856ef2c8c7'] = $pane;
  $display->panels['left'][0] = 'new-e15db96e-8edf-4277-b929-5d856ef2c8c7';
  $pane = new stdClass();
  $pane->pid = 'new-4ccaf971-069c-4c97-9874-deb12d84c8fe';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'accordion';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => 'resources',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4ccaf971-069c-4c97-9874-deb12d84c8fe';
  $display->content['new-4ccaf971-069c-4c97-9874-deb12d84c8fe'] = $pane;
  $display->panels['left'][1] = 'new-4ccaf971-069c-4c97-9874-deb12d84c8fe';
  $pane = new stdClass();
  $pane->pid = 'new-22b6581d-3039-424f-b840-6aa0b13e71da';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'radioactivity_most_popular';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'MOST POPULAR',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '22b6581d-3039-424f-b840-6aa0b13e71da';
  $display->content['new-22b6581d-3039-424f-b840-6aa0b13e71da'] = $pane;
  $display->panels['right'][0] = 'new-22b6581d-3039-424f-b840-6aa0b13e71da';
  $pane = new stdClass();
  $pane->pid = 'new-9916e601-77cf-4523-b4a0-f79ac6246c78';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'mostpopular-1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9916e601-77cf-4523-b4a0-f79ac6246c78';
  $display->content['new-9916e601-77cf-4523-b4a0-f79ac6246c78'] = $pane;
  $display->panels['right'][1] = 'new-9916e601-77cf-4523-b4a0-f79ac6246c78';
  $pane = new stdClass();
  $pane->pid = 'new-9645c38a-1076-4222-ae86-d62926e7fea8';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'boxes-survey_btn';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9645c38a-1076-4222-ae86-d62926e7fea8';
  $display->content['new-9645c38a-1076-4222-ae86-d62926e7fea8'] = $pane;
  $display->panels['right'][2] = 'new-9645c38a-1076-4222-ae86-d62926e7fea8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e15db96e-8edf-4277-b929-5d856ef2c8c7';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['resources'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sns';
  $page->task = 'page';
  $page->admin_title = 'Saftey-Net Services';
  $page->admin_description = '';
  $page->path = 'sns-old';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_sns_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'sns';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'sns',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Safety-Net | [site:name]',
        ),
        'description' => array(
          'value' => 'We support integrating healthy marriage & relationship skills into safety-net services like TANF & workforce development to support family self-sufficiency.',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right_side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '69.92760724972885',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right_side' => array(
        'type' => 'region',
        'title' => 'right-side',
        'width' => '30.072392750271145',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'region',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'center' => array(
        'column_size' => '4',
        'offset_size' => '0',
      ),
      'right_side' => array(
        'column_size' => '2',
        'offset_size' => '0',
      ),
      'middle' => array(
        'column_size' => '0',
        'offset_size' => '0',
      ),
      'top' => array(),
      'left' => array(
        'column_size' => '8',
        'offset_size' => '0',
      ),
      'bottom' => array(),
      'right' => array(
        'column_size' => '4',
        'offset_size' => '0',
      ),
    ),
    'center' => array(
      'style' => 'bootstrap_region',
    ),
    'right_side' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'style' => 'bootstrap_region',
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Safety-Net Services';
  $display->uuid = '9a5bd637-169a-4b07-9c44-945b7f3db4b1';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_sns_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1f19f39c-b2cc-4591-8dd6-7d8413314e9d';
  $pane->panel = 'left';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '249',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1f19f39c-b2cc-4591-8dd6-7d8413314e9d';
  $display->content['new-1f19f39c-b2cc-4591-8dd6-7d8413314e9d'] = $pane;
  $display->panels['left'][0] = 'new-1f19f39c-b2cc-4591-8dd6-7d8413314e9d';
  $pane = new stdClass();
  $pane->pid = 'new-f3c69494-3fdb-4862-8542-5573c3177479';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'accordion';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => 'sns',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f3c69494-3fdb-4862-8542-5573c3177479';
  $display->content['new-f3c69494-3fdb-4862-8542-5573c3177479'] = $pane;
  $display->panels['left'][1] = 'new-f3c69494-3fdb-4862-8542-5573c3177479';
  $pane = new stdClass();
  $pane->pid = 'new-151542ea-e1f8-499a-91c1-37fb5a5ea768';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'radioactivity_most_popular';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'MOST POPULAR',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '151542ea-e1f8-499a-91c1-37fb5a5ea768';
  $display->content['new-151542ea-e1f8-499a-91c1-37fb5a5ea768'] = $pane;
  $display->panels['right'][0] = 'new-151542ea-e1f8-499a-91c1-37fb5a5ea768';
  $pane = new stdClass();
  $pane->pid = 'new-7b8bbdb8-8294-4c01-87c4-c1702d814d63';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'mostpopular-1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Most Popular',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(),
    'style' => 'bootstrap_region',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'arrow-list',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7b8bbdb8-8294-4c01-87c4-c1702d814d63';
  $display->content['new-7b8bbdb8-8294-4c01-87c4-c1702d814d63'] = $pane;
  $display->panels['right'][1] = 'new-7b8bbdb8-8294-4c01-87c4-c1702d814d63';
  $pane = new stdClass();
  $pane->pid = 'new-1c806b0b-4385-4a5b-9be0-b9b2b93f8baa';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'boxes-survey_btn';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1c806b0b-4385-4a5b-9be0-b9b2b93f8baa';
  $display->content['new-1c806b0b-4385-4a5b-9be0-b9b2b93f8baa'] = $pane;
  $display->panels['right'][2] = 'new-1c806b0b-4385-4a5b-9be0-b9b2b93f8baa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sns'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'style_guide';
  $page->task = 'page';
  $page->admin_title = 'Style Guide';
  $page->admin_description = '';
  $page->path = 'style-guide';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_style_guide_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'style_guide';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Style Guide';
  $display->uuid = 'e0b98feb-815a-43d3-8bd7-84e50964075c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_style_guide_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ce39327b-5393-480c-8665-05ee29da2704';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'boxes-styleguide';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ce39327b-5393-480c-8665-05ee29da2704';
  $display->content['new-ce39327b-5393-480c-8665-05ee29da2704'] = $pane;
  $display->panels['top'][0] = 'new-ce39327b-5393-480c-8665-05ee29da2704';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['style_guide'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'training_and_technical_assistance';
  $page->task = 'page';
  $page->admin_title = 'Training and Technical Assistance';
  $page->admin_description = '';
  $page->path = 'training-and-technical-assistance';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_training_and_technical_assistance_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'training_and_technical_assistance';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => 'We offer training and technical assistance, including tools and targeted support, to help integrate healthy relationship education into existing services.',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right_side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '69.99294366694107',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right_side' => array(
        'type' => 'region',
        'title' => 'right-side',
        'width' => '30.007056333058923',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'region',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_side' => NULL,
      'left' => array(
        'column_size' => '8',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_size' => '4',
        'offset_size' => '0',
      ),
      'top' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Training and Technical Assistance';
  $display->uuid = '4d83a1b8-c954-44ed-86cc-d117e381f8f2';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_training_and_technical_assistance_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1a706371-f04f-47ae-8658-6b10595062df';
  $pane->panel = 'left';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '267',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1a706371-f04f-47ae-8658-6b10595062df';
  $display->content['new-1a706371-f04f-47ae-8658-6b10595062df'] = $pane;
  $display->panels['left'][0] = 'new-1a706371-f04f-47ae-8658-6b10595062df';
  $pane = new stdClass();
  $pane->pid = 'new-1ca8cb47-0be8-4438-9012-f0652c272e93';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'accordion';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => 'ttae',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1ca8cb47-0be8-4438-9012-f0652c272e93';
  $display->content['new-1ca8cb47-0be8-4438-9012-f0652c272e93'] = $pane;
  $display->panels['left'][1] = 'new-1ca8cb47-0be8-4438-9012-f0652c272e93';
  $pane = new stdClass();
  $pane->pid = 'new-9271bb75-acd4-4ab2-9c79-34394b29e8a2';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'radioactivity_most_popular';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'MOST POPULAR',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9271bb75-acd4-4ab2-9c79-34394b29e8a2';
  $display->content['new-9271bb75-acd4-4ab2-9c79-34394b29e8a2'] = $pane;
  $display->panels['right'][0] = 'new-9271bb75-acd4-4ab2-9c79-34394b29e8a2';
  $pane = new stdClass();
  $pane->pid = 'new-dcea6fa0-0403-4515-8d70-f86c0c65e24e';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'boxes-survey_btn';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dcea6fa0-0403-4515-8d70-f86c0c65e24e';
  $display->content['new-dcea6fa0-0403-4515-8d70-f86c0c65e24e'] = $pane;
  $display->panels['right'][1] = 'new-dcea6fa0-0403-4515-8d70-f86c0c65e24e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['training_and_technical_assistance'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'what_s_new';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Home',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_what_s_new_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'what_s_new';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'homePanel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => '[site:name]',
        ),
        'description' => array(
          'value' => 'The National Resource Center for Healthy Marriage and Families supports the integration of relationship education into safety-net services to strengthen families.',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'right',
        ),
        'parent' => 'main',
        'class' => 'row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'left',
        'width' => '30.319282880354933',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'region',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'right',
        'width' => '69.68071711964507',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'region',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => 'row',
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'middle' => array(
        'column_size' => '0',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '5',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'default' => array(),
      'top' => array(
        'column_type' => 'col-sm',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '7',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
    'style' => 'stylizer',
    'top' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '91869c2c-f364-4a8d-a8f4-5180c61f5a72';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_what_s_new_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-25350d0d-b723-4a76-80fe-8dbd1c22c7e9';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Making a Difference for Families',
    'title' => '',
    'body' => '<h3><a href="/making-a-difference-for-families">Making a Difference for Families</a></h3>
<img class="img-responsive" alt="Integrate. Educate. Motivate." src="sites/all/modules/nhmrc_static_html_pages/img/promo_img.jpg">
<div class="title">
	<h4><a href="/making-a-difference-for-families">Learn how our work is making a difference for families.</a></h4>
</div>',
    'format' => 'pure_html',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-making-a-difference-promo home-uni-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '25350d0d-b723-4a76-80fe-8dbd1c22c7e9';
  $display->content['new-25350d0d-b723-4a76-80fe-8dbd1c22c7e9'] = $pane;
  $display->panels['left'][0] = 'new-25350d0d-b723-4a76-80fe-8dbd1c22c7e9';
  $pane = new stdClass();
  $pane->pid = 'new-5638f388-f3fe-49be-91e4-c85b3cd4fc92';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'media';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 0,
    'override_title_text' => 'Media Gallery',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'home-uni-title',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5638f388-f3fe-49be-91e4-c85b3cd4fc92';
  $display->content['new-5638f388-f3fe-49be-91e4-c85b3cd4fc92'] = $pane;
  $display->panels['left'][1] = 'new-5638f388-f3fe-49be-91e4-c85b3cd4fc92';
  $pane = new stdClass();
  $pane->pid = 'new-2a41f39e-07d6-4a78-862f-ed36b3e59631';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'boxes-home3icons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'home-uni-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2a41f39e-07d6-4a78-862f-ed36b3e59631';
  $display->content['new-2a41f39e-07d6-4a78-862f-ed36b3e59631'] = $pane;
  $display->panels['right'][0] = 'new-2a41f39e-07d6-4a78-862f-ed36b3e59631';
  $pane = new stdClass();
  $pane->pid = 'new-329f31ce-f088-428a-8e52-f329f43d1d2f';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'featured_documents';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => '<a href="library">Library Search</a>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'home-uni-title',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '329f31ce-f088-428a-8e52-f329f43d1d2f';
  $display->content['new-329f31ce-f088-428a-8e52-f329f43d1d2f'] = $pane;
  $display->panels['right'][1] = 'new-329f31ce-f088-428a-8e52-f329f43d1d2f';
  $pane = new stdClass();
  $pane->pid = 'new-41f1da52-c85d-4114-8e4c-0b4b11df3fce';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'slideshow';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(),
    'style' => 'stylizer',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '41f1da52-c85d-4114-8e4c-0b4b11df3fce';
  $display->content['new-41f1da52-c85d-4114-8e4c-0b4b11df3fce'] = $pane;
  $display->panels['top'][0] = 'new-41f1da52-c85d-4114-8e4c-0b4b11df3fce';
  $pane = new stdClass();
  $pane->pid = 'new-d8ea6dc9-ae58-4482-a5b3-80be211d7e86';
  $pane->panel = 'top';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd8ea6dc9-ae58-4482-a5b3-80be211d7e86';
  $display->content['new-d8ea6dc9-ae58-4482-a5b3-80be211d7e86'] = $pane;
  $display->panels['top'][1] = 'new-d8ea6dc9-ae58-4482-a5b3-80be211d7e86';
  $pane = new stdClass();
  $pane->pid = 'new-3dde51f2-d74e-4a73-89f4-9f6efdde3eda';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Special Collection',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3><a href="/special-collection">Special Collection</a></h3>
<img class="img-responsive" alt="Integrate. Educate. Motivate." src="sites/all/themes/bootstrap_nhmrc/images/specialcollection_img.jpg">
<div class="title">
	<h4><a href="/special-collections">Search Relationship Resources</a></h4>
</div>',
    'format' => 'pure_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'col-sm-6 home-special-collection home-uni-title pane-making-a-difference-promo pull-left',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3dde51f2-d74e-4a73-89f4-9f6efdde3eda';
  $display->content['new-3dde51f2-d74e-4a73-89f4-9f6efdde3eda'] = $pane;
  $display->panels['top'][2] = 'new-3dde51f2-d74e-4a73-89f4-9f6efdde3eda';
  $pane = new stdClass();
  $pane->pid = 'new-013474ac-f9cf-4ca2-bc75-d2ea8308210c';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'twitter_feed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '2',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => '<a href="/whats-new">Latest Tweets</a>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'col-sm-6 home-uni-title pull-right',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '013474ac-f9cf-4ca2-bc75-d2ea8308210c';
  $display->content['new-013474ac-f9cf-4ca2-bc75-d2ea8308210c'] = $pane;
  $display->panels['top'][3] = 'new-013474ac-f9cf-4ca2-bc75-d2ea8308210c';
  $pane = new stdClass();
  $pane->pid = 'new-fd6c39f5-257f-404d-982c-a35de38e86a0';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'home_calendar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '2',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => '<a href="/calendar/month">Calendar of Events</a>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'col-sm-6 home-uni-title pull-left',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'fd6c39f5-257f-404d-982c-a35de38e86a0';
  $display->content['new-fd6c39f5-257f-404d-982c-a35de38e86a0'] = $pane;
  $display->panels['top'][4] = 'new-fd6c39f5-257f-404d-982c-a35de38e86a0';
  $pane = new stdClass();
  $pane->pid = 'new-6d98edc9-3004-4fef-81d5-64e907f93695';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'boxes-mobile_twitter';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '6d98edc9-3004-4fef-81d5-64e907f93695';
  $display->content['new-6d98edc9-3004-4fef-81d5-64e907f93695'] = $pane;
  $display->panels['top'][5] = 'new-6d98edc9-3004-4fef-81d5-64e907f93695';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['what_s_new'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'whatsnew';
  $page->task = 'page';
  $page->admin_title = 'What\'s New';
  $page->admin_description = '';
  $page->path = 'whats-new';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'What\'s New',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_whatsnew_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'whatsnew';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right_side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '69.99294366694107',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right_side' => array(
        'type' => 'region',
        'title' => 'right-side',
        'width' => '30.007056333058923',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'region',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_side' => NULL,
      'left' => array(
        'column_size' => '8',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_size' => '4',
        'offset_size' => '0',
      ),
      'top' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'What\'s New';
  $display->uuid = '1ea33df7-1639-4012-99c7-acffdfaa3d8b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_whatsnew_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-40816488-c1f2-42f8-bbed-e6dcbf4d5593';
  $pane->panel = 'left';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '273',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '40816488-c1f2-42f8-bbed-e6dcbf4d5593';
  $display->content['new-40816488-c1f2-42f8-bbed-e6dcbf4d5593'] = $pane;
  $display->panels['left'][0] = 'new-40816488-c1f2-42f8-bbed-e6dcbf4d5593';
  $pane = new stdClass();
  $pane->pid = 'new-63f57013-ee8a-480b-b498-8d1ff3a56506';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'twitter_feed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 1,
    'use_pager' => 0,
    'nodes_per_page' => '4',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '63f57013-ee8a-480b-b498-8d1ff3a56506';
  $display->content['new-63f57013-ee8a-480b-b498-8d1ff3a56506'] = $pane;
  $display->panels['right'][0] = 'new-63f57013-ee8a-480b-b498-8d1ff3a56506';
  $pane = new stdClass();
  $pane->pid = 'new-f873efff-0eab-44e7-99bc-ffa5cb473651';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'mostpopular-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Most Popular',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f873efff-0eab-44e7-99bc-ffa5cb473651';
  $display->content['new-f873efff-0eab-44e7-99bc-ffa5cb473651'] = $pane;
  $display->panels['right'][1] = 'new-f873efff-0eab-44e7-99bc-ffa5cb473651';
  $pane = new stdClass();
  $pane->pid = 'new-4639a066-eb49-48ab-9fe4-1d89ee72abce';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'boxes-survey_btn';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4639a066-eb49-48ab-9fe4-1d89ee72abce';
  $display->content['new-4639a066-eb49-48ab-9fe4-1d89ee72abce'] = $pane;
  $display->panels['right'][2] = 'new-4639a066-eb49-48ab-9fe4-1d89ee72abce';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['whatsnew'] = $page;

  return $pages;

}
