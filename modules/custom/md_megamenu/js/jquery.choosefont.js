(function($) {
	$.fn.choosefont = function() {
		return this.each(function() {
			var self = $(this),
			id = self.attr('id'),
			inputhidden = 'input[name=' + id.replace(/-/g,"_") +']',
			fontfamilyval = "",
			fwchange = 1;
			
			self.find('.form-font').remove();
			// Restore from input
			data_arr = $(inputhidden).val().split('|');
			data_arr[0] = typeof data_arr[0] !== 'undefined' ? data_arr[0] : "0";
			if (!data_arr[0]) data_arr[0] = "0";
			data_arr[1] = typeof data_arr[1] !== 'undefined' ? data_arr[1] : "n4";
			data_arr[2] = typeof data_arr[2] !== 'undefined' ? data_arr[2] : "";
			data_arr[3] = typeof data_arr[3] !== 'undefined' ? data_arr[3] : "px";
			data_arr[4] = typeof data_arr[4] !== 'undefined' ? data_arr[4] : "0";
			if (!Drupal.settings.font_vars[data_arr[0]]) {
				data_arr[0] = "1";
			}
            var text_transform_arr = new Array('-','none','capitalize','lowercase','uppercase')

			//Build HTML
			html = '<div class="form-font">';
				html += '<label for="'+id +'-fontfamily">Font</label>';
				html += '<select id="'+id +'-fontfamily" class="form-select2">';
				$.each(Drupal.settings.font_array, function(key, value) {
					if (key == data_arr[0]) { _select = ' selected="selected"'} else { _select = '';}
					html += '<option'+_select+' value="'+key+'">'+value+'</option>';
				});
				html += '</select>';
				html += '<div id="fontweight-'+id+'" class="form-font-weight"></div>';
				html += '<label for="'+id +'-fontsize">size:</label>';
				html += '<div class="form-font-size"><input type="text" maxlength="128" size="60" value="'+data_arr[2]+'" id="'+id+'-fontsize" class="font-size form-text" /></div>';
				html += '<select id="'+id +'-sizetype" class="form-select2">';
				if (data_arr[3] == "em") {
					html += '<option value="px">px</option><option selected="selected" value="em">em</option>';
				} else {
					html += '<option value="px">px</option><option value="em">em</option>';
				}
				html += '</select>';
                html += '<label for="'+id +'-uppercase">Text transform:</label>';
                html += '<select id="'+id +'-uppercase" class="form-select2">';
                $.each(text_transform_arr, function(key, value) {
                    if (key == data_arr[4]) { _select = ' selected="selected"'} else { _select = '';}
                    html += '<option'+_select+' value="'+value+'">'+value+'</option>';
                });
                html += '</select>';
				//if (data_arr[4]) {checked = ' checked="checked"';} else {checked = ''};
				//html += '<input type="checkbox" id="'+id +'-uppercase"'+checked+' /> <label for="'+id +'-uppercase">Uppercase</label>';
			html += '</div>';

			self.prepend(html);

			fontfamilyval = data_arr[0];
			fontweight_html = '<select id="'+id +'-fontweight" class="form-select3">';
			fontweight_arr = Drupal.settings.font_vars[fontfamilyval].Weight.split(',');
			$.each(fontweight_arr, function(index, value) {
				optval = $.trim(value);
				if (optval == data_arr[1]) { _select = ' selected="selected"'} else { _select = '';}
				fontweight_html += '<option'+_select+' value="'+optval+'">'+_expandFontWeight(optval)+'</option>';
			});
			fontweight_html += '</select>';
			$('#fontweight-'+id).html(fontweight_html);

			// Build preview
			if(!$('#previewbtn-'+id).length) {
				self.addClass('withpreviewbtn').append('<div id="previewbtn-'+id+'" class="previewbtn"><a href="#">Preview</a></div>');
				self.append('<div id="preview-'+id+'" class="textpreview"><div class="tp-textdemo">Grumpy wizards make toxic brew for the evil Queen and Jack.</div><a href="#" class="tp-close">Close preview</a></div>');
				$('#previewbtn-'+id+' a').click(function(){
					_updatePreview(id);
					$('#preview-'+id).show();
					$(this).text('Refresh').addClass('pbtn-refresh');
					return false;
				});
				
				$('#preview-'+id+' .tp-close').click(function(){
					$(this).parent().hide();
					$('#previewbtn-'+id+' a').text('Preview').removeClass('pbtn-refresh');;
					return false;
				});
			}

			$('#' + id +'-fontfamily').change(function(){
					fontfamilyval = $(this).val();
					fontweight_html = '<select id="'+id +'-fontweight" class="form-select3">';
					fontweight_arr = Drupal.settings.font_vars[fontfamilyval].Weight.split(',');
					$.each(fontweight_arr, function(index, value) {
						optval = $.trim(value);
						fontweight_html += '<option value="'+optval+'">'+_expandFontWeight(optval)+'</option>';
					});
					fontweight_html += '</select>';
					$('#fontweight-'+id).html(fontweight_html);
					fwchange = 1;
					_updateTextStyle()

			});

			$('#'+id +'-fontweight').live("change",function(){
					_updateTextStyle();
	    });
			
			$('#'+id +'-fontsize').live("focusout",function(){
					_updateTextStyle()
	    });

			$('#'+id +'-sizetype,'+ '#'+ id +'-uppercase').change(function(){
					_updateTextStyle()
	    });

  		// Functions
			function _updateTextStyle() {
				_fontfamily = $('#'+ id +'-fontfamily').val();
				_fontweight = $('#'+ id +'-fontweight').val();
				_fontsize = $('#'+id+'-fontsize').val();
				_sizetype = $('#'+ id +'-sizetype').val();
				_uppercase = $('#'+ id +'-uppercase').val();

				_fontfamilydetail = Drupal.settings.font_vars[_fontfamily].CSS;

				_style = '';
				if (_fontfamily != 0) {
					_style += 'font-family: ' + _fontfamilydetail + ';';
					if (_fontweight) {
						_style += 'font-weight: ' + _expandFontWeight(_fontweight).toLowerCase() + ';';
					}
				}
				
				if (_fontsize) {
					_style += 'font-size: ' + _fontsize + _sizetype + ';';
				}
				if (_uppercase != "-") {
					_style += 'text-transform: ' + _uppercase + ';';
				}
				
				$(inputhidden).val(_fontfamily + "|" + _fontweight + "|" + _fontsize + "|" + _sizetype + "|" + _uppercase + "|" + _style)
			}

			function _updatePreview(id) {
				_fontfamily = $('#'+ id +'-fontfamily').val();
				_fontweight = $('#'+ id +'-fontweight').val();
				_fontsize = $('#'+id+'-fontsize').val();
				_sizetype = $('#'+ id +'-sizetype').val();
				_texttransform = 'none';
				if ($('#'+ id +'-uppercase').is(':checked')) {_texttransform = 'uppercase';}
				_color = '#' + $('#'+id).next().find('input.form-colorpicker').val();
				_fontweightarr = _fontweight.split('');
				if (_fontweightarr[0] == "i") {_fontweightarr[0] = "italic"}
				else {_fontweightarr[0] = "normal"}

				_fontfamilydetail = Drupal.settings.font_vars[_fontfamily].CSS;
				$('#preview-'+id+' .tp-textdemo').css({
					'font-family': _fontfamilydetail,
					'font-weight': _fontweightarr[1] + "00",
					'font-style': _fontweightarr[0],
					'font-size': _fontsize + _sizetype,
					'text-transform': _texttransform,
					'color': _color
				})
			}

			function _expandFontWeight(fw, ept) {
				switch(fw) {
					case 'n1':
						fontExpand = "Thin";
						break;
					case 'i1':
						fontExpand = "Thin Italic";
						break;
					case 'n2':
						fontExpand = "Extra Light";
						break;
					case 'i2':
						fontExpand = "Extra Light Italic";
						break;
					case 'n3':
						fontExpand = "Light";
						break;
					case 'i3':
						fontExpand = "Light Italic";
						break;
					case 'n4':
						fontExpand = "Normal";
						break;
					case 'i4':
						fontExpand = "Italic";
						break;
					case 'n5':
						fontExpand = "Medium";
						break;
					case 'i5':
						fontExpand = "Medium Italic";
						break;
					case 'n6':
						fontExpand = "Semi Bold";
						break;
					case 'i6':
						fontExpand = "Semi Bold Italic";
						break;
					case 'n7':
						fontExpand = "Bold";
						break;
					case 'i7':
						fontExpand = "Bold Italic";
						break;
					case 'n8':
						fontExpand = "Extra Bold";
						break;
					case 'i8':
						fontExpand = "Extra Bold Italic";
						break;
					case 'n9':
						fontExpand = "Heavy";
						break;
					case 'i9':
						fontExpand = "Heavy Italic";
						break;
					default:
						fontExpand = "undefined";
				}

				return fontExpand;
			}

		});
	}
})(jQuery);