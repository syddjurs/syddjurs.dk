<article<?php print $attributes; ?> class="<?php print $classes; ?> os2-node-full clearfix">
  <?php print $user_picture; ?>
  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
    <header class="content-header">
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
    </header>
  <?php elseif ($page && $title): ?>
    <header class="content-header">
      <a class="print" href="/print/<?php print $nid; ?>"></a>
      <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
    </header>
  <?php endif; ?>
  <div class="content-area clearfix">
    <?php if (!empty($content['links']) && !$teaser): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>
    <div class="printvenlig-side"><a target= "_blank" href="/print/<?php print $node->nid; ?>">&nbsp;</a></div>

    <?php if ($display_submitted): ?>
      <footer class="submitted"><?php print $date; ?> -- <?php print $name; ?></footer>
    <?php endif; ?>

    <div<?php print $content_attributes; ?>>
      <?php
      print render($content['field_os2web_base_field_lead_img']);
      ?>

      <div class="featured-area">
        <?php
          print render($content['field_os2web_hearings_type']);
        ?>

        <div class="row">
          <div class="col-sm-4">
            <?php
            print render($content['field_os2web_hearings_enddate']);
            ?>
          </div>

          <div class="col-sm-4">
            <?php
            print render($content['field_os2web_base_case_no']);
            ?>
          </div>

          <div class="col-sm-4">
            <?php
            if (variable_get('os2web_hearings_reply_enabled', FALSE)):
              if (strtotime($node->field_os2web_hearings_enddate['und'][0]['value']) >= strtotime("midnight", time())): ?>
                <a href="/node/<?php print $node->nid; ?>/formular" class="btn btn-success">
                  <?php print t('Write hearing reply'); ?>
                </a>
              <?php else: ?>
                <a class="btn btn-quaternary disabled">
                  <?php print t('Closed for hearing reply'); ?>
                </a>
              <?php endif ?>
            <?php endif ?>
          </div>

        </div>
      </div>

      <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['social_share']);
      hide($content['field_os2web_hearings_type']);
      hide($content['field_os2web_base_field_lead_img']);

      print render($content);
      ?>
    </div>
  </div>

  <?php if ($view_mode != 'os2web_meetings_meeting_detail_view'): ?>
    <?php print render($content['comments']); ?>
    <?php if (arg(0) == 'node' && is_numeric(arg(1)) && $page) : ?>
      <div class="del-bund">
        <div class="del">
          <?php print render($content['social_share']); ?>
        </div>
        <div class="fandt-du"><a href="/contact?<?php print urlencode('edit[subject]=' . $node_url); ?>">Fandt du ikke det du søgte</a></div>
      </div>

    <?php endif; ?>
    <?php if (!$teaser) {
      print "<div class='last-updated-node'> Opdateret: " . format_date($node->changed, "short") . "</div>";}
    ?>
  <?php endif; ?>
</article>
