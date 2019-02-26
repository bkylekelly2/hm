<?php
/**
 * @file
 * nmhrc_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nmhrc_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'accordions_for_non_panel_pages';
  $context->description = '';
  $context->tag = 'accordions';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
        'sns' => 'sns',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-accordion-block' => array(
          'module' => 'views',
          'delta' => 'accordion-block',
          'region' => 'content',
          'weight' => '40',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('accordions');
  $export['accordions_for_non_panel_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'quicklinks';
  $context->description = 'Quick Links';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~admin/*' => '~admin/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-quicklinks_socialmedia' => array(
          'module' => 'boxes',
          'delta' => 'quicklinks_socialmedia',
          'region' => 'topper',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Quick Links');
  $export['quicklinks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_general';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-solr_library_search-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-solr_library_search-page_1',
          'region' => 'search',
          'weight' => '-10',
        ),
        'boxes-quick_links_subscribe' => array(
          'module' => 'boxes',
          'delta' => 'quick_links_subscribe',
          'region' => 'search',
          'weight' => '-9',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-9',
        ),
        'menu_block-7' => array(
          'module' => 'menu_block',
          'delta' => '7',
          'region' => 'footer',
          'weight' => '-52',
        ),
        'menu_block-5' => array(
          'module' => 'menu_block',
          'delta' => '5',
          'region' => 'footer',
          'weight' => '-51',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'footer',
          'weight' => '-50',
        ),
        'menu_block-6' => array(
          'module' => 'menu_block',
          'delta' => '6',
          'region' => 'footer',
          'weight' => '-49',
        ),
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'footer',
          'weight' => '-48',
        ),
        'menu_block-4' => array(
          'module' => 'menu_block',
          'delta' => '4',
          'region' => 'footer',
          'weight' => '-47',
        ),
        'boxes-our_social_media_pages' => array(
          'module' => 'boxes',
          'delta' => 'our_social_media_pages',
          'region' => 'footer',
          'weight' => '-46',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'footer',
          'weight' => '-45',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['sitewide_general'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'socialbar';
  $context->description = '';
  $context->tag = 'sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-social_bar' => array(
          'module' => 'boxes',
          'delta' => 'social_bar',
          'region' => 'social_bar',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('sitewide');
  $export['socialbar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'survey';
  $context->description = 'These are the pages where the survey popup can appear';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~survey' => '~survey',
        '~accessibility-plug-ins' => '~accessibility-plug-ins',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'webform-client-block-82' => array(
          'module' => 'webform',
          'delta' => 'client-block-82',
          'region' => 'footer',
          'weight' => '-40',
        ),
        'boxes-survey_pop_button' => array(
          'module' => 'boxes',
          'delta' => 'survey_pop_button',
          'region' => 'footer',
          'weight' => '-39',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('These are the pages where the survey popup can appear');
  $export['survey'] = $context;

  return $export;
}
