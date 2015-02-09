<?php
/**
 * @file
 *
 *
 * - $content: The content of the box.
 */

?>
<?php if ($link): ?><a href="<?php echo $link ?>"><?php endif; ?>
<div class="pane gladstone-quote fpp-id-<?php echo $settings['fpid']?> clearfix <?php echo $settings['css'] ?>">
	<div class="pane inner">
		<div class="content-wrapper">			
			<img src="<?php echo $settings['bg_image_url']?>" />

			<div class="content accent">
				<div class="inner">
					<h3 class="title"><?php echo $title; ?></h3>
					<div class="caption">
						<?php echo $caption ?>
					</div>
				</div>
			</div>

		</div>
	</div>
</div>
<?php if ($link): ?></a><?php endif; ?>
