<?php
/**
 * @file
 *
 *
 * - $content: The content of the box.
 */

?>
<div class="pane gladstone-style gladstone-style-jump-menu gladstone-jump-menu fpp-id-<?php echo $settings['fpid']?> clearfix <?php echo $settings['css'] ?>">	
	<div class="pane inner rollover">
		<div class="content-wrapper">
			<?php print $background ?>
			
			<div class="content accent">
				<div class="inner">
					<h3 class="title accent"><?php echo $title; ?></h3>
					<div class="caption">
						<?php echo $content ?>
					</div>
				</div>
			</div>

			<div class="content-bottom">
				<div class="inner roll-toggle">
					<?php echo $menu ?>
				</div>
			</div>

		</div>
	</div>
</div>

