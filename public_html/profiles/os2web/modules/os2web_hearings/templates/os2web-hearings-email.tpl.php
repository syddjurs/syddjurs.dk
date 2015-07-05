<h2><?php print $node->title; ?></h2>

<p>
  <strong><?php print t('Publiceringsdato'); ?>:</strong><br />
  <?php print $node_created; ?> -- <?php print $author_name; ?>
</p>

<?php if (!empty($hearings_enddate)): ?>
  <p>
    <strong><?php print t('Høringsfrist / Klagefrist'); ?>:</strong><br />
    <?php print $hearings_enddate; ?>
  </p>
<?php endif; ?>

<p>
  <?php print $node->body['und'][0]['value']; ?>
</p>

<?php if (!empty($politics)): ?>
  <p>
    <strong><?php print t('Politik'); ?>:</strong><br />
    <?php print $politics; ?>
  </p>
<?php endif; ?>

<?php if (!empty($meeting)): ?>
  <p>
    <strong><?php print t('Møder'); ?>:</strong><br />
    <?php print $meeting; ?>
  </p>
<?php endif; ?>

<?php if (!empty($case_no)): ?>
  <p>
    <strong><?php print t('Sagsnummer'); ?>:</strong><br />
    <?php print $case_no; ?>
  </p>
<?php endif; ?>

<p>
  <strong><?php print t('Opdateret'); ?>:</strong><br />
  <?php print $node_changed; ?>
</p>