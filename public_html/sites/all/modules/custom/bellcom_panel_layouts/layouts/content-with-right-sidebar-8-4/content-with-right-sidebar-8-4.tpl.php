<!-- content-with-right-sidebar-8-4.tpl.php -->
<div class="row" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

    <?php if ($content['top']): ?>

        <!-- Begin - top -->
        <div class="col-xs-12 os2-panels-top">
            <?php print $content['top']; ?>
        </div>
        <!-- End - top -->

    <?php endif; ?>

    <?php if ($content['sidebar']): ?>

        <!-- Begin - content -->
        <div class="col-sm-8 os2-panels-main-content">
            <?php print $content['content']; ?>
        </div>
        <!-- End - content -->

        <!-- Begin - sidebar -->
        <div class="col-sm-4 hidden-print os2-panels-right-sidebar">
            <?php print $content['sidebar']; ?>
        </div>
        <!-- End - sidebar -->

    <?php else: ?>

        <!-- Begin - content -->
        <div class="col-xs-12 os2-panels-main-content no-sidebar">
            <?php print $content['content']; ?>
        </div>
        <!-- End - content -->

    <?php endif ?>

    <?php if ($content['bottom']): ?>

        <!-- Begin - bottom -->
        <div class="col-xs-12 os2-panels-bottom">
            <?php print $content['bottom']; ?>
        </div>
        <!-- End - bottom -->

    <?php endif; ?>

</div>
