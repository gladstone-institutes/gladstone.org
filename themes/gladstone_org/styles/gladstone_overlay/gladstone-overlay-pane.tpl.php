<?php
/**
 * @file
 *
 *
 * - $content: The content of the box.
 */

?>
<?php if ($link): ?><a href="<?php echo $link ?>"><?php endif; ?>
<div class="pane gladstone-style gladstone-style-overlay fpp-id-<?php echo $settings['fpid']?> clearfix <?php echo $settings['css'] ?>">

	<div class="heading clearfix">
		<h3 class="title"><?php echo $title; ?></h3>
		<?php if (!empty($settings['icon'])): ?>
			<i class="fa <?php echo $settings['icon'] ?>"></i>
		<?php endif; ?>
	</div>
	
	<div class="content-wrapper">
		<?php print $background ?>
		<div class="content overlay">
			<div class="inner">
				<?php echo $content ?>
			</div>
		</div>		
	</div>
	
</div>
<?php if ($link): ?></a><?php endif; ?>
