<!-- Begin - outer wrapper -->
<div class="outer-wrapper">

    <!-- Begin - sidebar left -->
    <div class="sidebar sidebar-left">

        <!-- Begin - inner wrapper -->
        <div class="sidebar-inner-wrapper">

            <!-- Begin - logo -->
            <div class="sidebar-logo">
                <a href="<?php echo $front_page; ?>" class="sidebar-logo-link">
                    <img src="<?php echo $path_img . '/logo-sidebar-wide.png'; ?>"
                         class="sidebar-logo-image sidebar-logo-image-wide"
                         alt="<?php echo $site_name . t(' logo'); ?>"/>
                    <img src="<?php echo $path_img . '/logo-sidebar-narrow.png'; ?>"
                         class="sidebar-logo-image sidebar-logo-image-narrow"
                         alt="<?php echo $site_name . t(' logo'); ?>"/>
                </a>
            </div>
            <!-- End - logo -->

          <?php if (isset($sidebar_tertiary)): ?>
              <!-- Begin - navigation -->
            <?php print render($sidebar_tertiary); ?>
              <!-- End - navigation -->
          <?php endif; ?>

        </div>
        <!-- End - inner wrapper -->

    </div>
    <!-- End - sidebar left -->

    <!-- Begin - inner wrapper -->
    <div class="inner-wrapper" role="document">

      <?php if (isset($emergency_grant)): ?>
          <!-- Begin - emergency grant -->
          <div class="os2-emergency-grant">
            <?php print render($emergency_grant); ?>
          </div>
          <!-- End - emergency grant -->
      <?php endif; ?>

        <!-- Begin - simple navigation -->
        <nav class="simple-navigation">

            <!-- Begin - button list -->
            <ul class="simple-navigation-list simple-navigation-list-left">

                <!-- Begin - button -->
                <li class="simple-navigation-button">
                    <a href="#" data-sidebar-toggle="left">
                        <span class="fa icon fa-bars"></span> </a>
                </li>
                <!-- End - button -->

            </ul>
            <!-- End - button list -->

            <!-- Begin - logo -->
            <a href="<?php echo $front_page; ?>"
               class="simple-navigation-logo-link">
                <img src="<?php echo $path_img . '/logo-simple-navigation.png'; ?>"
                     class="simple-navigation-logo-image"
                     alt="<?php echo t('fredericia.dk logo'); ?>"/>
            </a>
            <!-- End - logo -->

        </nav>
        <!-- End - simple navigation -->

        <!-- Begin - content -->
        <div class="content">

            <!-- Begin - page header -->
            <div class="os2-page-header">
                <div class="container">

                    <div class="row">

                        <!-- Begin - user first -->
                      <?php if (!empty($page['user_first'])): ?>
                        <?php print render($page['user_first']); ?>
                      <?php endif; ?>
                        <!-- End - user first -->

                        <!-- Begin - user second -->
                      <?php if (!empty($page['user_second'])): ?>
                        <?php print render($page['user_second']); ?>
                      <?php endif; ?>
                        <!-- End - user second -->

                        <!-- Begin - preface first -->
                      <?php if (!empty($page['preface_first'])): ?>
                        <?php print render($page['preface_first']); ?>
                      <?php endif; ?>
                        <!-- End - preface first -->

                    </div>
                    <div class="row">

                        <!-- Begin - branding -->
                      <?php if (!empty($page['branding'])): ?>
                        <?php print render($page['branding']); ?>
                      <?php endif; ?>
                        <!-- End - branding -->

                        <!-- Begin - header second -->
                      <?php if (!empty($page['header_second'])): ?>
                        <?php print render($page['header_second']); ?>
                      <?php endif; ?>
                        <!-- End - header second -->

                    </div>
                    <div class="row">

                        <!-- Begin - menu -->
                      <?php if (!empty($page['menu'])): ?>
                        <?php print render($page['menu']); ?>
                      <?php endif; ?>
                        <!-- End - menu -->

                        <!-- Begin - search -->
                      <?php if (!empty($page['search'])): ?>
                        <?php print render($page['search']); ?>
                      <?php endif; ?>
                        <!-- End - search -->

                    </div>

                    <!-- Begin - header first -->
                  <?php if (!empty($page['header_first'])): ?>
                    <?php print render($page['header_first']); ?>
                  <?php endif; ?>
                    <!-- End - header first -->

                    <!-- Begin - preface second -->
                  <?php if (!empty($page['preface_second'])): ?>
                    <?php print render($page['preface_second']); ?>
                  <?php endif; ?>
                    <!-- End - preface second -->

                </div>
            </div>
            <!-- End - page header -->

          <?php if (!empty($breadcrumb)): ?>
              <!-- Begin - breadcrumb -->
              <section class="os2-breadcrumb-container">
                  <div class="container">
                      <div class="row">
                          <div class="col-xs-12">
                            <?php print $breadcrumb; ?>
                          </div>
                      </div>
                  </div>
              </section>
              <!-- End - breadcrumb -->
          <?php endif; ?>

            <div class="container">

              <?php if (!empty($page['help'])): ?>
                <?php print render($page['help']); ?>
              <?php endif; ?>

              <?php if (!empty($action_links)): ?>
                  <ul class="action-links"><?php print render(
                      $action_links
                    ); ?></ul>
              <?php endif; ?>

              <?php if (!empty($tabs_primary)): ?>
                  <!-- Begin - tabs primary -->
                  <div class="os2-tabs-container os2-tabs-variant-default">
                    <?php print render($tabs_primary); ?>
                  </div>
                  <!-- End - tabs primary -->
              <?php endif; ?>

              <?php if (!empty($tabs_secondary)): ?>
                  <!-- Begin - tabs secondary -->
                  <div class="os2-tabs-container os2-tabs-variant-tertiary">
                    <?php print render($tabs_secondary); ?>
                  </div>
                  <!-- End - tabs secondary -->
              <?php endif; ?>

            </div>

            <a id="main-content"></a>
            <div class="message">
              <?php print $messages; ?>
            </div>
          <?php if (panels_get_current_page_display()): ?>
            <?php if ($wrap_panels_layout): ?>
                  <div class="container">
                    <?php print render($page['content']); ?>
                  </div>
            <?php else: ?>
              <?php print render($page['content']); ?>
            <?php endif; ?>
          <?php else: ?>
              <div class="container">

                  <!-- Begin - sidebar first -->
                <?php if (!empty($page['sidebar_first'])): ?>
                  <?php print render($page['sidebar_first']); ?>
                <?php endif; ?>
                  <!-- End - sidebar first -->

                  <!-- Begin - content -->
                <?php print render($page['content']); ?>
                  <!-- End - content -->

                  <!-- Begin - sidebar second -->
                <?php if (!empty($page['sidebar_second'])): ?>
                  <?php print render($page['sidebar_second']); ?>
                <?php endif; ?>
                  <!-- End - sidebar second -->

                  <!--                  <div class="os2-box">-->
                  <!--                      <div class="os2-box-body">-->
                  <!--                        --><?php //print render($page['content']); ?>
                  <!--                      </div>-->
                  <!--                  </div>-->
              </div>
          <?php endif; ?>

        </div>
        <!-- End - content -->

        <!-- Begin - footer first -->
      <?php if (!empty($page['footer_first'])): ?>
          <footer class="footer">
              <div class="container">
                  <div class="footer-content">
                      <div class="row">

                          <div class="col-xs-12">
                            <?php print render($page['footer_first']); ?>
                          </div>

                      </div>
                  </div>
              </div>
          </footer>
      <?php endif; ?>
        <!-- End - footer first -->

        <!-- Begin - footer second -->
      <?php if (!empty($page['footer_second'])): ?>
          <footer class="footer">
              <div class="container">
                  <div class="footer-content">
                      <div class="row">

                          <div class="col-xs-12">
                            <?php print render($page['footer_second']); ?>
                          </div>

                      </div>
                  </div>
              </div>
          </footer>
      <?php endif; ?>
        <!-- End - footer second -->

        <!-- Begin - footer third -->
      <?php if (!empty($page['footer_third'])): ?>
          <footer class="footer">
              <div class="container">
                  <div class="footer-content">
                      <div class="row">

                          <div class="col-xs-12">
                            <?php print render($page['footer_third']); ?>
                          </div>

                      </div>
                  </div>
              </div>
          </footer>
      <?php endif; ?>
        <!-- End - footer third -->

    </div>
    <!-- End - inner wrapper -->

</div>
<!-- End - outer wrapper -->
