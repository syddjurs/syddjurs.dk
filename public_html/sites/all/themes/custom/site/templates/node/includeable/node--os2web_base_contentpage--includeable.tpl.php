<?php if ($view_mode == 'includeable'): ?>
  <!-- node--os2web_base_contentpage--includeable.tpl.php -->
  <!-- Begin - includeable -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-includeable os2-node-includeable-contentpage"<?php print $attributes; ?>>

    <?php if (isset($content['body'])): ?>
      <!-- Begin - body -->
      <div class="os2-node-includeable-body">
        <?php print render($content['body']); ?>
      </div>
      <!-- End - body -->
    <?php endif; ?>

  </div>
  <!-- End - includeable -->

<?php endif; ?>
