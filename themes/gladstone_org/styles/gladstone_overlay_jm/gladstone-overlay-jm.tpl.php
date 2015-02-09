<?php
/**
 * @file
 *
 *
 * - $content: The content of the box.
 */

?>
<div class="pane gladstone-overlay gladstone-jump-menu fpp-id-<?php echo $settings['fpid']?> clearfix <?php echo $settings['css'] ?>">

	<div class="heading clearfix">
		<h3 class="title"><?php echo $title; ?></h3>
		<?php if (!empty($settings['icon'])): ?>
			<i class="fa <?php echo $settings['icon'] ?>"></i>
		<?php endif; ?>
	</div>
	
	<div class="content-wrapper rollover">
		<img src="<?php echo $settings['bg_image_url']?>" />
		<div class="content overlay">
			<div class="inner roll-toggle">
				<?php echo $content ?>
			</div>
			<div class="inner roll-toggle clearfix">
				<?php echo $menu; ?>
			</div>
		</div>		
	</div>
	
</div>
