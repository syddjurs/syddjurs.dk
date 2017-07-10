<?php

/**
 * @file
 * Bartik's theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>
<?php

drupal_add_js(drupal_get_path('module', 'bellcom_borgerdk_migrate') . '/js/os2web_borger_dk.js', 'file');
drupal_add_css(drupal_get_path('module', 'bellcom_borgerdk_migrate') . '/css/os2web_borger_dk.css', 'file');

if (!empty($variables['field_borger_dk_article_ref'])) {
  $article = borgerdk_article_load($variables['field_borger_dk_article_ref'][0]['borgerdk_article_entity_id']);

  $microarticle_ids = json_decode($variables['field_borger_dk_article_ref'][0]['borgerdk_microarticle_entity_ids']);
  $microarticles = borgerdk_microarticle_load_multiple_sorted($microarticle_ids);

  $selfservice_ids = json_decode($variables['field_borger_dk_article_ref'][0]['borgerdk_selfservice_entity_ids']);
  $selvservices = borgerdk_selfservice_load_multiple_sorted($selfservice_ids);

  foreach ($microarticles as $ma) {
    $selvservices = array_merge($selvservices, borgerdk_selfservice_load_multiple(FALSE, array('microarticle_id' => $ma->entity_id)));
  }
}

?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div id='region-content' class="content"<?php print $content_attributes; ?>>
    <div class='borger_dk-region-stack3'>
      <div class='inside'>
        <?php if ($article): ?>
          <div class='borger_dk_header' id='borger_dk_header'>
            <?php print $article->header; ?>
          </div>
        <?php endif; ?>
        <?php
        ?>
      </div>
    </div>

    <div class="content clearfix"<?php print $content_attributes; ?>>
      <?php if (!empty($selvservices)): ?>
        <div class='borger_dk-region-stack2'>
          <div class='inside'>
            <div class='field-name-field-os2web-base-field-selfserv'>
              <div class='field-label'>Blanketter/selvbetjening:&nbsp;</div>
              <ul>
                <?php
                foreach ($selvservices as $ss) {
                  print render(entity_view('borgerdk_selfservice', array($ss->entity_id => $ss), 'teaser'));
                }
                ?>
              </ul>
            </div>
          </div>
        </div>
      <?php endif; ?>
    </div>

    <div class="content clearfix"<?php print $content_attributes; ?>>
      <div class='borger_dk-region-stack3'>
        <div class='inside'>
          <?php if ($content['field_borger_dk_pre_text']): ?>
            <div class='borger_dk-field_os2web-borger-dk-pre_text'>
              <?php print render($content['field_borger_dk_pre_text']); ?>
            </div>
            <div class='panel-separator'></div>
          <?php endif; ?>

          <div class='borger_dk-body node-body' id='borger_dk-body'>
            <div class='borger_dk_body_intro_text'><?php print t('Læs om') . ' ' . $node->title; ?></div>
            <?php
            foreach ($microarticles as $ma) {
              print render(entity_view('borgerdk_microarticle', array($ma->entity_id => $ma), 'teaser'));
            }
            ?>
          </div>
          <div class='panel-separator'></div>

          <?php if ($content['field_borger_dk_post_text']): ?>
            <div class='borger_dk-field_os2web-borger-dk-post_text'>
              <?php print render($content['field_borger_dk_post_text']); ?>
            </div>
            <div class='panel-separator'></div>
          <?php endif; ?>

          <?php if ($article->legislation): ?>
            <div class='borger_dk-field_os2web-borger-dk-legislati'>
              <h3><?php print t('Hvad siger loven?'); ?></h3>
              <?php print $article->legislation; ?>
            </div>
          <?php endif; ?>
        </div>
      </div>

      <div class='borger_dk-region-stack4'>
        <div class='inside'>
          <?php if ($article->recommendation): ?>
            <div class='borger_dk-field_os2web-borger-dk-recommend'>
              <h3><?php print t('Læs også'); ?></h3>
              <?php print $article->recommendation; ?>
            </div>
          <?php endif; ?>

          <?php if ($content['field_borger_dk_shortlist']): ?>
            <div class='borger_dk-field_os2web-borger-dk-shortlist'>
              <?php print render($content['field_borger_dk_shortlist']); ?>
            </div>
          <?php endif; ?>

          <?php if ($article->byline): ?>
            <div class='borger_dk-field_os2web-borger-dk-byline'>
              <?php print $article->byline; ?>
            </div>
          <?php endif; ?>
        </div>
      </div>
    </div>
  </div>

  <?php
  // Remove the "Add new comment" link on the teaser page or if the comment
  // form is being displayed on the same page.
  // if ($teaser || !empty($content['comments']['comment_form'])) {
  //unset($content['links']['comment']['#links']['comment-add']);
  //}
  // Only display the wrapper div if there are links.
  $links = render($content['links']);
  if ($links):
    ?>
    <div class="link-wrapper">
      <?php print $links; ?>
    </div>
  <?php endif; ?>

  <?php print render($content['comments']); ?>

</div>
