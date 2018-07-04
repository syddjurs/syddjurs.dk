<?php if ($view_mode == 'teaser'): ?>
  <!-- node--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-grid-teaser os2-box os2-equal-height-element"<?php print $attributes; ?>>
    <?php if (isset($content['field_os2web_hearings_type'])): ?>
      <?php print render($content['field_os2web_hearings_type']); ?>
    <?php endif; ?>

    <!-- Begin - heading -->
    <div class="os2-node-teaser-heading">
      <h3 class="os2-node-teaser-heading-title"><a href="<?php print $node_url; ?>"><?php print (strlen($title) > 60) ? mb_substr($title,0,60) . '...' : $title; ?></a></h3>
    </div>
    <!-- End - heading -->

    <!-- Begin - body -->
    <div class="os2-node-teaser-body">

      <?php if (isset($content['body'])): ?>
        <!-- Begin - body -->
        <div class="os2-node-teaser-body-content">
          <?php print render($content['body']); ?>
        </div>
        <!-- End - body -->
      <?php endif; ?>
    </div>

    <!-- Begin - footer -->
    <div class="os2-node-teaser-footer clearfix">
      <div class="pull-left">
        <?php if (isset($content['field_os2web_hearings_enddate'])): ?>
          <?php print render($content['field_os2web_hearings_enddate']); ?>
        <?php endif; ?>
      </div>
      <div class="pull-right">
        <?php if (strtotime($node->field_os2web_hearings_enddate['und'][0]['value']) > strtotime('yesterday')): ?>
          <a class="btn btn-success">
            <?php print t("Open");?>
          </a>
        <?php else: ?>
          <a class="btn btn-quaternary disabled">
            <?php print t("Closed");?>
          </a>
        <?php endif; ?>
      </div>
    </div>
    <!-- Begin - footer -->


    <!-- End - body -->
  </article>
  <!-- End - teaser -->

<?php endif; ?>
