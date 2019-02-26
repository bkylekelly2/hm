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
        <span class="element-invisible">Site Logo</span>
         <?php if (!empty($logo)): ?>
            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>">
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
<div class="container-fullwidth navbar navbar-default">
    <div class="container">
      <div class="container">
        <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
        <a class="mobile-menu-title">
          Menu
        </a> 
        <a class="btn btn-navbar btn-default navbar-toggle collapsed" data-toggle="collapse" data-target=".navbar-collapse">
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

<?php if(drupal_is_front_page()): ?>
<div class="container-fullwidth home-bg-area">
  <?php
  $block =block_load('randomblocks','home_rd_bg');
  $output = drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
  print $output;
  ?>
</div>

<div class="home-bg-text">
  <h3 class="first-h3 animated fadeInLeft slower go" data-id="2">
      <span>Connecting healthy</span>
      <span>marriage and relationship</span>
      <span>education skills and</span>
      <span>safety-net services as an</span>
      <span>integrated approach to</span>
      <span>strengthening families</span>
    </h3>
  <a class="btn-about" href="/about-us"><button class="btn btn-primary btn-lg" type="button">About Us</button></a>
  <a href="#main-content" class="next-arrow animated bounceInDown slow animatedClick go" data-id="4" data-target="first-msg">
      <img src="/sites/all/themes/bootstrap_nhmrc/images/down-arrow.png" alt="Click or scroll to get started">
    </a>
</div>
<?php endif; ?>

<div class="main-container container">

  <div class="row">

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside class="col-sm-3 col-md-3" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>  

    <section <?php print $content_column_class; ?>>
      
      <?php if (!empty($page['topper'])): ?>
            <div class="topper"><?php print render($page['topper']); ?></div>
      <?php endif; ?>
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
        <?php if (!empty($breadcrumb)): print $breadcrumb; else : print_r("<div class=\"breadcrumb\">&nbsp;</div>"); endif;?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if (!empty($title)): ?>
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
        <?php if (!empty($page['content_top'])): ?>
        <div class="col-sm-12 col-md-12">
            <?php print render($page['content_top']); ?>
        </div>
        <?php endif; ?>
        <?php if (!empty($page['facet'])): ?>
            <aside id="region-library-search-facet" class="col-sm-3 col-md-3" role="complementary">
                <?php print render($page['facet']); ?>
            </aside>  <!-- /#facet -->
        <?php endif; ?>
        <?php if (!empty($page['content'])): ?>
        <div id="region-library-search-content" class="col-sm-9 col-md-9">
        <?php print render($page['content']); ?>
        </div>
        <?php endif; ?>
    </section>
      <div class="library-search-content-bottom col-sm-12">
          <div class="library-search-content-bottom-text col-sm-9">Do you have something you think is appropriate for the library? While library staff scour various resources seeking items for the collection, it is not possible for staff to have access to all marriage and family-related resources. This is where you can help by sharing materials created by your program so that they may be reviewed or used by program staff, resource families, or related professionals for the purpose of improving service delivery for families.</div>
          <p class="first-p"><a href="/library-resource-submission-policy" id="library-submission-policy-link" name="Submit Library Resource" value="Submit Library Resource" class="btn btn-primary col-sm-3">Submit Library Resource</a></p>
      </div>

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