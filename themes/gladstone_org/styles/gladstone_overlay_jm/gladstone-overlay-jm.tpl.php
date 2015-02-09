<?php
/**
 * @file
 *
 *
 * - $content: The content of the box.
 */

?>
<div class="pane gladstone-style gladstone-style-jump-menu gladstone-overlay gladstone-jump-menu fpp-id-<?php echo $settings['fpid']?> clearfix <?php echo $settings['css'] ?>">

	<div class="heading clearfix">
		<h3 class="title"><?php echo $title; ?></h3>
		<?php if (!empty($settings['icon'])): ?>
			<i class="fa <?php echo $settings['icon'] ?>"></i>
		<?php endif; ?>
	</div>
	
	<div class="content-wrapper rollover">
		<?php print $background ?>
		
		<div class="content-bottom overlay">
			<div class="inner roll-toggle" style="display:block;">
				<?php echo $content ?>
			</div>
			<div class="inner roll-toggle clearfix">
				<?php echo $menu; ?>
			</div>
		</div>		
	</div>
	
</div>
