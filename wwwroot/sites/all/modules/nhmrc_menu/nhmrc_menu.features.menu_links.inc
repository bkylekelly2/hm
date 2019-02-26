<?php
/**
 * @file
 * nhmrc_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nhmrc_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-us:about-us.
  $menu_links['main-menu_about-us:about-us'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about-us',
    'router_path' => 'about-us',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about-us:about-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_calendar-of-events:calendar/month.
  $menu_links['main-menu_calendar-of-events:calendar/month'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendar/month',
    'router_path' => 'calendar/month',
    'link_title' => 'Calendar of Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_calendar-of-events:calendar/month',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:resources',
  );
  // Exported menu link: main-menu_contact-us:contact-us.
  $menu_links['main-menu_contact-us:contact-us'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact-us',
    'router_path' => 'contact-us',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact-us:contact-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:about-us',
  );
  // Exported menu link: main-menu_curricula:node/123.
  $menu_links['main-menu_curricula:node/123'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/123',
    'router_path' => 'node/%',
    'link_title' => 'Curricula',
    'options' => array(
      'identifier' => 'main-menu_curricula:node/123',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:resources',
  );
  // Exported menu link: main-menu_e-news-archive:node/391.
  $menu_links['main-menu_e-news-archive:node/391'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/391',
    'router_path' => 'node/%',
    'link_title' => 'E-News Archive',
    'options' => array(
      'identifier' => 'main-menu_e-news-archive:node/391',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:resources',
  );
  // Exported menu link: main-menu_education:node/60.
  $menu_links['main-menu_education:node/60'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/60',
    'router_path' => 'node/%',
    'link_title' => 'Education',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_education:node/60',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_children-and-youth:node/7611',
  );
  // Exported menu link: main-menu_family-violence-prevention-advisory-panel:advisory-panel-members.
  $menu_links['main-menu_family-violence-prevention-advisory-panel:advisory-panel-members'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'advisory-panel-members',
    'router_path' => 'advisory-panel-members',
    'link_title' => 'Family Violence Prevention Advisory Panel',
    'options' => array(
      'identifier' => 'main-menu_family-violence-prevention-advisory-panel:advisory-panel-members',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:about-us',
  );
  // Exported menu link: main-menu_fostering-cultural-competency:node/393.
  $menu_links['main-menu_fostering-cultural-competency:node/393'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/393',
    'router_path' => 'node/%',
    'link_title' => 'Fostering Cultural Competency',
    'options' => array(
      'identifier' => 'main-menu_fostering-cultural-competency:node/393',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_cultural--special-circumstances:node/7618',
  );
  // Exported menu link: main-menu_head-startearly-learning:node/61.
  $menu_links['main-menu_head-startearly-learning:node/61'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/61',
    'router_path' => 'node/%',
    'link_title' => 'Head Start/Early Learning',
    'options' => array(
      'identifier' => 'main-menu_head-startearly-learning:node/61',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_children-and-youth:node/7611',
  );
  // Exported menu link: main-menu_healthy-marriage-education:node/124.
  $menu_links['main-menu_healthy-marriage-education:node/124'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/124',
    'router_path' => 'node/%',
    'link_title' => 'Healthy Marriage Education',
    'options' => array(
      'identifier' => 'main-menu_healthy-marriage-education:node/124',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:about-us',
  );
  // Exported menu link: main-menu_home:home.
  $menu_links['main-menu_home:home'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:home',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_integration-strategies:program-development.
  $menu_links['main-menu_integration-strategies:program-development'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'program-development',
    'router_path' => 'program-development',
    'link_title' => 'Integration Strategies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_integration-strategies:program-development',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_level-1-basic-engagement:node/122.
  $menu_links['main-menu_level-1-basic-engagement:node/122'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/122',
    'router_path' => 'node/%',
    'link_title' => 'Level 1: Basic Engagement',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_level-1-basic-engagement:node/122',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'main-menu_integration-strategies:program-development',
  );
  // Exported menu link: main-menu_level-2-partnerships:node/19.
  $menu_links['main-menu_level-2-partnerships:node/19'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Level 2: Partnerships',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_level-2-partnerships:node/19',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_identifier' => 'main-menu_integration-strategies:program-development',
  );
  // Exported menu link: main-menu_level-3-full-integration:node/121.
  $menu_links['main-menu_level-3-full-integration:node/121'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/121',
    'router_path' => 'node/%',
    'link_title' => 'Level 3: Full Integration',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_level-3-full-integration:node/121',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
    'parent_identifier' => 'main-menu_integration-strategies:program-development',
  );
  // Exported menu link: main-menu_media-gallery:media-gallery.
  $menu_links['main-menu_media-gallery:media-gallery'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media-gallery',
    'router_path' => 'media-gallery',
    'link_title' => 'Media Gallery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_media-gallery:media-gallery',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'main-menu_resources:resources',
  );
  // Exported menu link: main-menu_podcasts:media-gallery/podcasts.
  $menu_links['main-menu_podcasts:media-gallery/podcasts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media-gallery/podcasts',
    'router_path' => 'media-gallery/podcasts',
    'link_title' => 'Podcasts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_podcasts:media-gallery/podcasts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_media-gallery:media-gallery',
  );
  // Exported menu link: main-menu_request-assistance:node/125.
  $menu_links['main-menu_request-assistance:node/125'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/125',
    'router_path' => 'node/%',
    'link_title' => 'Request Assistance',
    'options' => array(
      'identifier' => 'main-menu_request-assistance:node/125',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
    'parent_identifier' => 'main-menu_training-and-technical-assistance:training-and-technical-assistance',
  );
  // Exported menu link: main-menu_special-circumstances:node/392.
  $menu_links['main-menu_special-circumstances:node/392'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/392',
    'router_path' => 'node/%',
    'link_title' => 'Special Circumstances',
    'options' => array(
      'identifier' => 'main-menu_special-circumstances:node/392',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_cultural--special-circumstances:node/7618',
  );
  // Exported menu link: main-menu_statetribal-trainings:node/394.
  $menu_links['main-menu_statetribal-trainings:node/394'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/394',
    'router_path' => 'node/%',
    'link_title' => 'State/Tribal Trainings',
    'options' => array(
      'identifier' => 'main-menu_statetribal-trainings:node/394',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_training-and-technical-assistance:training-and-technical-assistance',
  );
  // Exported menu link: main-menu_success-stories:node/62.
  $menu_links['main-menu_success-stories:node/62'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'Success Stories',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_success-stories:node/62',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_integration-strategies:program-development',
  );
  // Exported menu link: main-menu_training-and-technical-assistance:training-and-technical-assistance.
  $menu_links['main-menu_training-and-technical-assistance:training-and-technical-assistance'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'training-and-technical-assistance',
    'router_path' => 'training-and-technical-assistance',
    'link_title' => 'Training and Technical Assistance',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_training-and-technical-assistance:training-and-technical-assistance',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_videos:media-gallery/videos.
  $menu_links['main-menu_videos:media-gallery/videos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media-gallery/videos',
    'router_path' => 'media-gallery/videos',
    'link_title' => 'Videos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_videos:media-gallery/videos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_media-gallery:media-gallery',
  );
  // Exported menu link: main-menu_webinars:media-gallery/webinars.
  $menu_links['main-menu_webinars:media-gallery/webinars'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media-gallery/webinars',
    'router_path' => 'media-gallery/webinars',
    'link_title' => 'Webinars',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_webinars:media-gallery/webinars',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_media-gallery:media-gallery',
  );
  // Exported menu link: main-menu_whats-new:whats-new.
  $menu_links['main-menu_whats-new:whats-new'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'whats-new',
    'router_path' => 'whats-new',
    'link_title' => 'What\'s New',
    'options' => array(
      'identifier' => 'main-menu_whats-new:whats-new',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Calendar of Events');
  t('Contact Us');
  t('Curricula');
  t('E-News Archive');
  t('Education');
  t('Family Violence Prevention Advisory Panel');
  t('Fostering Cultural Competency');
  t('Head Start/Early Learning');
  t('Healthy Marriage Education');
  t('Home');
  t('Integration Strategies');
  t('Level 1: Basic Engagement');
  t('Level 2: Partnerships');
  t('Level 3: Full Integration');
  t('Media Gallery');
  t('Podcasts');
  t('Request Assistance');
  t('Special Circumstances');
  t('State/Tribal Trainings');
  t('Success Stories');
  t('Training and Technical Assistance');
  t('Videos');
  t('Webinars');
  t('What\'s New');

  return $menu_links;
}
