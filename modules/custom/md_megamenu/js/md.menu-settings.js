(function($){
	$(function(){
		$("#megamenu-settings, .md-subtabs").tabs({
			cookie: {
					expires: 1
			}
		});

		$(".md-listleft a").click(function(){
			$(this).parent().parent().find("a").removeClass("border-white");
			$(this).parent().prev().find("a").addClass("border-white")
		});
		$(".md-listleft li.ui-state-active").each(function(){
			$(this).prev().find("a").addClass("border-white");
		});

		/* general tab */
		$('#edit-dmg-orientation').change(function(){
			if($(this).attr('value') == 'vertical') {
				$('.form-item-dmg-submenuw, .form-item-dmg-verdir').show();
				$('.form-item-dmg-fullwidth, .form-item-dmg-fixed').addClass('disable').find('input').attr('disabled','disabled');
				$('.form-item-dmg-customwidth, .form-item-dmg-showfixed, .form-item-dmg-position').hide();
				$('#dmg-submenuw').focus();
			} else {
				$('.form-item-dmg-submenuw, .form-item-dmg-verdir').hide();
				$('.form-item-dmg-fullwidth, .form-item-dmg-fixed').removeClass('disable').find('input').removeAttr('disabled');
				$('#edit-dmg-fullwidth, #edit-dmg-fixed').trigger("change");
			}
		});

		$('#edit-dmg-fullwidth').change(function() {
			if (!$(this).is(':checked')) {
				$('.form-item-dmg-customwidth').show();
				$('#edit-dmg-customwidth').focus();
			} else {
				$('.form-item-dmg-customwidth').hide();
			}
		});

		$('#edit-dmg-defaultheight').change(function() {
			if ($(this).is(':checked')) {
				$('.form-item-dmg-customheight').show();
				$('#edit-dmg-customheight').focus();
			} else {
				$('.form-item-dmg-customheight').hide();
			}
		});

		$('#edit-dmg-fixed').change(function() {
			if ($(this).is(':checked')) {
				$('.form-item-dmg-showfixed, .form-item-dmg-position').show();
			} else {
				$('.form-item-dmg-showfixed, .form-item-dmg-position').hide();
			}
		});

        $('#edit-dm-right-dmg-desc').change(function() {
            if ($(this).is(':checked')) {
                $('.form-item-top-dms-descc').show();
            } else {
                $('.form-item-top-dms-descc').hide();
            }
        });

        $('#edit-dm-right-dmg-menuicon').change(function() {
            if ($(this).is(':checked')) {
                $('.form-item-top-img-wrap').show();
            } else {
                $('.form-item-top-img-wrap').hide();
            }
        });

        $('#edit-dm-right-dmg-menuitemicon').change(function() {
            if ($(this).is(':checked')) {
                $('.form-item-sub-img-wrap').show();
            } else {
                $('.form-item-sub-img-wrap').hide();
            }
        });

		$('#edit-dmf-ucf').change(function(){
			if ($(this).is(':checked')) {
				$('#customfont-wrap').show();
			} else {
				$('#customfont-wrap').hide();
			}
		});

		$('#edit-top-border-radius-equal').change(function(){
			if ($(this).is(':checked')) {
				$('.form-item-top-border-radius').show();
				$('#toplevel-border-radius-not-equal').hide();
			} else {
				$('.form-item-top-border-radius').hide();
				$('#toplevel-border-radius-not-equal').show();
			}
		});

		$('#edit-sub-border-radius-equal').change(function(){
			if ($(this).is(':checked')) {
				$('.form-item-sub-border-radius').show();
				$('#sublevel-border-radius-not-equal').hide();
			} else {
				$('.form-item-sub-border-radius').hide();
				$('#sublevel-border-radius-not-equall').show();
			}
		});

		$('#edit-hoveritem-border-radius-equal').change(function(){
			if ($(this).is(':checked')) {
				$('.form-item-hoveritem-border-radius').show();
				$('#hoveritemlevel-border-radius-not-equal').hide();
			} else {
				$('.form-item-hoveritem-border-radius').hide();
				$('#hoveritemlevel-border-radius-not-equall').show();
			}
		});

		$('#edit-dmg-orientation, #edit-dmg-fullwith, #edit-dmg-fixed, #edit-dmf-ucf, #edit-top-border-radius-equal, #edit-sub-border-radius-equal, #edit-hoveritem-border-radius-equal, #edit-dmg-defaultheight, #edit-dm-right-dmg-desc, #edit-dm-right-dmg-menuicon, #edit-dm-right-dmg-menuitemicon').trigger("change");

		/* Added by Duynv
		 * Update font when add google
		 */
		$("#edit-dmf-google, #edit-dmf-typekit").focusout(function() {
			var _self = $(this);
			if ($(_self).val() == '') {	return;}
			$.ajax({
				url : Drupal.settings.basePath + "?q=admin/structure/md-megamenu/get-font-style",
				type : 'POST',
				data : {
					'type' : $(_self).attr("id"),
					'data' : $(_self).val()
				},
				dataType : 'json',
				success : function(data) {
					var fonts = Drupal.settings.font_array;
					var fontVars = Drupal.settings.font_vars;
					if (data != '') {
						$.each (data[0], function(i, item) {
							var id = $.inArray(item, fonts);
							if (id == -1) {
								fonts.push(item);
								fontVars.push(data[1][i]);
							}
							else {
								fontVars[id] = data[1][i];
							}
						});
						Drupal.settings.font_array = fonts;
						Drupal.settings.font_vars = fontVars;
						$(".choosefont").choosefont();
					}
				}
			});
		});
		/*
		 * End added by Duynv
		 */

		// Fonts
		$(".choosefont").choosefont();
		// Color picker
		var colorpickerHTML = '<span class="colorSelect"><span></span></span>';
		$('.form-colorpicker').before(colorpickerHTML);
		$('.colorSelect').each(function(){
			tmpbackground = $(this).next().val();
			$(this).css({'background-color':"#"+tmpbackground});
		});
		$('span.colorSelect').ColorPicker({
			onSubmit: function(hsb, hex, rgb, el) {
				$(el).css({'background-color':"#"+hex});
				$(el).next().val(hex);
				$(el).ColorPickerHide();
			},
			onBeforeShow: function () {
				current_obj = this;
				$(this).ColorPickerSetColor($(this).next().val());
			},
			onChange: function (hsb, hex, rgb) {
				$(current_obj).css({'background-color':"#"+hex});
				$(current_obj).next().val(hex);
			}
		});
		
		// Custom style
		new_html = $('.md-guide-custom-style').html();
		$('#edit-dms-predefine').change(function(){
			if ($(this).val() == 'custom') {
				machine_name = $('#edit-machine-name').val();

				$('.md-guide-custom-style').html(new_html.replace(/machine_name/g, machine_name));
				$('.md-guide-custom-style').show();
			} else {
				$('.md-guide-custom-style').hide();
			}
		}).trigger('change');
		$('#edit-machine-name, #edit-menu-title').focusout(function() {
			machine_name = $('#edit-machine-name').val();
			$('.md-guide-custom-style').html(new_html.replace(/machine_name/g, machine_name));
		});


	});
})(jQuery);
