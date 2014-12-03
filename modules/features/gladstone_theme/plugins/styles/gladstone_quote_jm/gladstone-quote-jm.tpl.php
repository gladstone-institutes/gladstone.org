<?php
/**
 * @file
 *
 *
 * - $content: The content of the box.
 */

?>
<div class="pane gladstone-quote-jm rollover fpp-id-<?php echo $settings['fpid']?> clearfix <?php echo $settings['css'] ?>">	
	<div class="content-wrapper">
		<img src="<?php echo $settings['bg_image_url']?>" />
		
		<div class="content accent">
			<div class="inner">
				<h3 class="title"><?php echo $title; ?></h3>
				<div class="caption">
					<?php echo $content ?>
				</div>
			</div>
		</div>

		<div class="content-bottom">
			<div class="inner rollover">
				<?php echo $menu ?>
			</div>
		</div>

	</div>
</div>
