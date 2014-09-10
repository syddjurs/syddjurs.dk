<?php
/**
 * @file
 * os2web_mobile.inc
 */
?>
<div class="panel-display clearfix" <?php print !empty($css_id)?"id=\"$css_id\"":""; ?>>

  <div class="panel-panel">
    <div class="inside"><?php print $content['top']; ?></div>
  </div>

  <div class="panel-panel">
    <div class="inside"><?php print $content['center']; ?></div>
  </div>

  <div class="panel-panel">
    <div class="inside"><?php print $content['bottom']; ?></div>
  </div>
</div>
