<?php
/**
 * @file
 * panels-os2web-2col-1-3.tpl.php
 */
?>
<div class="panel-display col2-1-3 clearfix" <?php print (!empty($css_id))?"id=\"$css_id\"":'';  ?>>

  <div class="panel-panel panel-region-col1">
    <div class="inside"><?php print $content['col1']; ?></div>
  </div>

  <div class="panel-panel panel-region-col2">
    <div class="inside"><?php print $content['col2']; ?></div>
  </div>

</div>
