(function($) {
	// init functions
	$(function() {

		$.fn.megadrupalTreeMenu = function() {
			var self = $(this);
			not = $('li', self).has("div.dropzone");
			$('li', self).not(not).prepend('<div class="dropzone"></div>');

			$('dl, .dropzone', self).droppable(
					{
						accept : 'li.dragitem',
						tolerance : 'pointer',
						drop : function(e, ui) {
							var li = $(this).parent();
							var child = !$(this).hasClass('dropzone');
							if (child && li.children('ul').length == 0) {
								li.append('<ul/>');
							}
							if (child) {
								li.addClass('sm2_liOpen').removeClass(
										'sm2_liClosed').children('ul').append(
										ui.draggable);
							} else {
								li.before(ui.draggable);
							}
							$('li.sm2_liOpen', self).not(
									':has(li:not(.ui-draggable-dragging))')
									.removeClass('sm2_liOpen');
							li.find('dl,.dropzone').css({
								backgroundColor : '',
								borderColor : ''
							});
						},
						over : function() {
							$(this).filter('dl').css({
								backgroundColor : '#F90'
							});
							$(this).filter('.dropzone').css({
								borderColor : '#F90'
							});
						},
						out : function() {
							$(this).filter('dl').css({
								backgroundColor : ''
							});
							$(this).filter('.dropzone').css({
								borderColor : ''
							});
						}
					});
			$('li', self).draggable({
				handle : ' > dl',
				opacity : .8,
				addClasses : false,
				helper : 'clone',
				zIndex : 100
			});
		};
		$("#dropdown").megadrupalTreeMenu();

		$("#dropdown dl").live("mouseenter", function() {
			$(this).addClass('hover');
		}).live("mouseleave", function() {
			$(this).removeClass('hover');
		});

		$("#btn_add").click(function() {
			$("#dropdown").append($("#dropdown li:last").clone());
			$("#dropdown").megadrupalTreeMenu();

		});
	});
})(jQuery);
