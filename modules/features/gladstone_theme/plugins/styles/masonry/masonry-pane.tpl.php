<?php
/**
 * @file
 *
 * Display a pane for use with masonry.js
 *
 * - $content: The content of the box.
 */

?>
<div class="masonry-pane">

	<div class="heading">
		<?php echo $title; ?>
		<?php if (!empty($settings['icon'])): ?>
			<i class="fa <?php echo $settings['icon'] ?>"></i>
		<?php endif; ?>
	</div>
	<div class=".content">
		<?php echo $content ?>
	</div>

</div>