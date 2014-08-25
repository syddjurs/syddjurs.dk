<?php
/**
 * @file
 * os2web_mobile.inc
 */
?>
<header id="navbar" role="banner" class="navbar navbar-fixed-top">
  <div class="navbar-inner">
    <div class="container">
      <?php if ($logo): ?>
        <a class="logo pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a>
        <span class="pull-right goto-full fine-print">
          <?php
            // Redirect to full width needs a little logic..
            $url = explode('.', $_SERVER['HTTP_HOST']);
            array_shift($url);
            $full_width_url = 'http://' . implode('.', $url);
            if ($_SERVER['REDIRECT_URL'] !== '/mobile') :
              $full_width_url = 'http://' . implode('.', $url) . $_SERVER['REDIRECT_URL'];
            endif;
          ?>

          <a href="<?php print $full_width_url; ?>" rel="canonical" class="full-width-link"></a>
        </span>
      <?php endif; ?>
    </div>
  </div>
</header>

<div class="container">

  <header role="banner" id="page-header">
    <?php if ($site_slogan): ?>
      <p class="lead"><?php print $site_slogan; ?></p>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header> <!-- /#header -->

  <div class="row">

    <section class="<?php print _bootstrap_content_span($columns); ?>">
      <?php if ($page['highlighted']): ?>
        <div class="highlighted hero-unit"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="page-header"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if ($tabs): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if ($page['help']): ?>
        <div class="well"><?php print render($page['help']); ?></div>
      <?php endif; ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['mobile_content']); ?>
    </section>
   </div>
  <footer class="footer container">
    <?php print render($page['footer']); ?>
  </footer>
</div>
