<!-- content-with-right-sidebar-9-3.tpl.php -->
<div class="row" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

    <?php if ($content['top']): ?>

        <!-- Begin - top -->
        <div class="col-xs-12 os2-panel-top">
            <?php print $content['top']; ?>
        </div>
        <!-- End - top -->

    <?php endif; ?>

    <?php if ($content['sidebar']): ?>

        <!-- Begin - sidebar -->
        <div class="col-sm-3 col-sm-push-9 hidden-print os2-panel-right-sidebar">
            <?php print $content['sidebar']; ?>
        </div>
        <!-- End - sidebar -->

        <!-- Begin - content -->
        <div class="col-sm-9 col-sm-pull-3 os2-panel-main">
            <?php print $content['content']; ?>
        </div>
        <!-- End - content -->

    <?php else: ?>

        <!-- Begin - content -->
        <div class="col-xs-12 os2-panel-main">
            <?php print $content['content']; ?>
        </div>
        <!-- End - content -->

    <?php endif ?>

    <?php if ($content['bottom']): ?>

        <!-- Begin - bottom -->
        <div class="col-xs-12 os2-panel-bottom">
            <?php print $content['bottom']; ?>
        </div>
        <!-- End - bottom -->

    <?php endif; ?>

</div>
