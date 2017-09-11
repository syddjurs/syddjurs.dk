<?php
  $content['field_os2web_ofir_job_period']['#label_display']='hidden';
  if ($view_mode == 'teaser'): ?>
  <!-- node--os2web_ofir_job--teaser.tpl.php -->
  <article role="document" id="node-<?php print $node->nid; ?>" class="row <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="col-sm-9">
      <header class="os2-node-teaser-heading-title" role="heading">
        <a class="h3" href="<?php print $node_url; ?>">
          <?php print $title; ?>
        </a>
      </header>
      <?php if (isset($content['field_os2web_ofir_job_text'])): ?>
        <main class="os2-node-teaser-body" role="main">
          <div class="os2-node-teaser-body-content">
            <?php print render($content['field_os2web_ofir_job_text']); ?>
          </div>
        </main>
      <?php endif; ?>
    </div>
    <footer role="contentinfo" class="col-sm-3">
      <?php print render($content['field_os2web_ofir_job_period']); ?>
    </strong>
  </article>
<?php endif; ?>
