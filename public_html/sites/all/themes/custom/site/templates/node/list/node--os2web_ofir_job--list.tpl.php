<!-- node--os2web_ofir_job--list.tpl.php -->
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-equal-height-element os2web-list clearfix"<?php print $attributes; ?>>
  <a href="<?php print $node_url; ?>">
    <span class="job item">
      <span class="job heading-wrapper">
        <span class="job heading-text">
          <?php print $title; ?>
        </span>
      </span>
      <span class="job date">
        <?php print render($content['field_os2web_ofir_job_period']); ?>
      </span>
      <?php if (isset($content['field_os2web_ofir_job_text'])): ?>
        <span class="job body-wrapper">
          <span class="job body-text">
            <?php print render($content['field_os2web_ofir_job_text']); ?>
          </span>
        <span>
      <?php endif; ?>
    </span>
  </a>
</article>
