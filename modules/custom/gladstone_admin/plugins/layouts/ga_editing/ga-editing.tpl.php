<?php

// @todo @hack : set js trigger classes 'column-side' and 
// 'column-wrapper' on if not in page manager
$sidebar = (get_class($renderer) == 'panels_renderer_editor' ? False : True);

?>
<div class="panel-display panel-twocol-65-35-stacked" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel">
    <?php if ($content['header']): ?>
    <div class="panel-panel unit panel-header">
      <?php print $content['header']; ?>
    </div>
    <?php endif; ?>

  </div>

  <div class="panel-panel">
    <?php if ($content['top']): ?>
    <div class="panel-panel unit panel-top">
      <?php print $content['top']; ?>
    </div>
    <?php endif; ?>
  </div>

  <div class="panel-panel">
    <div class="panel-panel unit panel-col-65">
      <div class="inside">
        <?php print $content['left']; ?>
      </div>
    </div>

    <div class="panel-panel panel-col-35 <?php  echo ($sidebar ? 'column-side': '')?>">
      <div class="inside <?php echo ($sidebar ? 'column-wrapper': '') ?>">
        <?php print $content['right']; ?>
      </div>
    </div>
  </div>

  <div class="panel-panel">
    <?php if ($content['footer']): ?>
    <div class="panel-panel unit panel-footer lastUnit">
      <?php print $content['footer']; ?>
    </div>
    <?php endif; ?>
  </div>
</div>
