<?php if ($node = menu_get_object()) {
    $nid = $node->nid;
    $category_event = node_load($nid)->field_category_of_event['und'][0]['value'];
  }
?>
<?php if (!empty($page['social_bar'])): ?>
  <section id="social-bar" class="full-width">
    <div class="social-bar-inside full-width-inside">
      <?php print render($page['social_bar']); ?>
    </div>
  </section>
<?php endif; ?>
<div id="navbar_wrapper">
  <header id="navbar" role="banner" class="container">
    <a class="logo_wrapper" href="<?php print $front_page; ?>" title="<?php print t('The National Resource Center for Healthy Marriage and Families Home Page'); ?>">
      <div id="logo" class="pull-left">
        <?php if (!empty($logo)): ?>
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        <?php endif; ?>
      </div>
    </a>
    <?php if (!empty($site_name)): ?>
      <h1 id="site-name" class="pull-left">
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="brand"><?php print $site_name; ?></a>
      </h1>
    <?php endif; ?>
    <?php if (!empty($page['search'])): ?>
      <div id="search" class="pull-right">
        <div class="search"><?php print render($page['search']); ?></div>
      </div>
    <?php endif; ?>
  </header>
</div>
<div class="container-fullwidth navbar navbar-default navbar-light bg-faded">
  <div class="container">
    <div class="container">
      <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
      <a class="mobile-menu-title">
        Menu
      </a>
      <a class="btn btn-navbar btn-default navbar-toggle btn-secondary" data-toggle="collapse" data-target=".navbar-collapse">
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </a>
      <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
        <div class="collapse navbar-collapse">
          <nav role="navigation">
            <?php if (!empty($primary_nav)): ?>
              <?php print render($primary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($secondary_nav)): ?>
              <?php print render($secondary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($page['navigation'])): ?>
              <?php print render($page['navigation']); ?>
            <?php endif; ?>
          </nav>
        </div>
      <?php endif; ?>
    </div>
  </div>
</div>

<div class="main-container container">

  <div class="row">

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside class="col-sm-3 col-md-3" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>

    <section<?php print $content_column_class; ?>>

      <?php if (!empty($page['topper'])): ?>
        <div class="row">
          <div class="col-sm-12 col-md-12">
            <div class="topper"><?php print render($page['topper']); ?></div>
          </div>
        </div>
      <?php endif; ?>
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
      <?php //if (!empty($breadcrumb)): print $breadcrumb; endif;?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if (!empty($title)): ?>
        <?php
        switch ($category_event) {
          case "Integration Institute":
            echo "<div class='integration-institute'></div>";
            break;
          case "training":
            echo "<div class='training'></div>";
            break;
          case "event":
            echo "<div class='event'></div>";
            break;
          case "webinar":
            echo "<div class='webinar'></div>";
            break;
          case "workshop":
            echo "<div class='workshop'></div>";
            break;
          case "conference":
            echo "<div class='conference'></div>";
            break;
          default:
            echo "<div class='all-other'></div>";
        }
        ?>
        <h1 class="page-header"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if (!empty($page['help'])): ?>
        <div class="well"><?php print render($page['help']); ?></div>
      <?php endif; ?>
      <?php if (!empty($action_links)): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
    </section>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside class="col-sm-3 col-md-3" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

  </div>
</div>
<div id="footer_wrapper">
  <footer class="footer container">
    <?php print render($page['footer']); ?>
  </footer>
</div>
