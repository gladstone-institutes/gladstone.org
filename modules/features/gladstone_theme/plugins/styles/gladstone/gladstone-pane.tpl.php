<?php
/**
 * @file
 *
 *
 * - $content: The content of the box.
 */

?>
<div class="pane gladstone-pane <?php echo $settings['css'] ?>">

	<?php if ($link): ?><a href="<?php echo $link ?>"><?php endif; ?>
	<div class="heading clearfix">
		<h3 class="title"><?php echo $title; ?></h3>
		<?php if (!empty($settings['icon'])): ?>
			<i class="fa <?php echo $settings['icon'] ?>"></i>
		<?php endif; ?>
	</div>
	<?php if ($link): ?></a><?php endif; ?>
	
	<div class="content">
		<?php echo $content ?>
	</div>

</div>