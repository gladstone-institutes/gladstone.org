<?php
/**
 * @file
 *
 * Display the box for rounded corners.
 *
 * - $content: The content of the box.
 */
?>
<div class="feature-image">
	
	<?php if ( !empty($title) || !empty($caption)) { ?>
		<?php echo $image; ?>
		<div class="content">
			<?php echo $title; ?>
			<?php echo $caption; ?>
			<?php if ($link) { ?>
			<a href="<?php echo $link ?>" class="button accent-bg">
				<span>Read More</span>
				<i class="fa fa-angle-right fa-2x"></i>
			</a>
			<?php } ?>
		</div>
	<?php } else { ?>
		<a href="<?php echo $link ?>">
			<?php echo $image; ?>
		</a>
	<?php } ?>

</div>
