(function($) {
	Drupal.flyMenuItem = '<li class="dragitem">'
					+ 	'<input type="hidden" class="setting" value=\'{"type": "a"}\' />'
	                +  	'<dl class="sm2_s_published ui-droppable clearfix"><a href="#" class="mdd-handle"></a>'
	                + 		'<dt><a class="sm2_title" href="#">{title}</a></dt>'
	                +   	'<dd class="mdd-change"><a class="fly-item-edit" href="#">edit</a> | <a class="fly-item-delete" href="#">delete</a></dd>'
	                +  	'</dl>'
					+ '</li>';
	
	Drupal.styleHtml = $('<div class="els-wrap arrowtop" style="z-index:1999">'
			  +		'<div class="form-item clearfix"><label>Margin</label><div class="els-right"><input type="checkbox" name="els-margin" /></div></div>'
			  +		'<div class="form-item clearfix"><label>Background</label><div class="els-right"><input type="text" name="els-background" value="" class="color-picker form-text w60" name="els-bgcolor" /></div></div>' // lieu add duoc color picker???
			  +		'<div class="form-item clearfix" style="display: none"><label>Border</label><div class="els-right"><input name="els-borderw" type="text" value="" class="form-text w60" name="els-bosize" /> px '
			  + 		'<select name="els-borders"><option value="solid">Solid</option><option value="dashed">Dashed</option><option value="dotted">Dotted</option></select> '
			  + 		'<input type="text" value="" name="els-borderc" class="color-picker form-text w60" name="els-bocolor" />'
			  + 	'</div></div>'
			  + 	'<div class="form-item"><a class="md-button nomargin btn_save">Save</a><a class="md-button btn_cancel">Cancel</a></div>'
			  + '</div>');
	
	$.unserialize = function(serializedString) {
		var str = decodeURI(encodeURI(serializedString));
		var pairs = str.split('&');
		var obj = {}, p, idx;
		for ( var i = 0, n = pairs.length; i < n; i++) {
			p = pairs[i].split('=');
			idx = p[0];

			if (idx.indexOf("[]") == (idx.length - 2)) {
				// Eh um vetor
				var ind = idx.substring(0, idx.length - 2);
				if (obj[ind] === undefined) {
					obj[ind] = [];
				}
				obj[ind].push(p[1]);
			} else {
				obj[idx] = p[1];
			}
		}
		return obj;
	};
	
	$.objectToString = function(obj) {
		return JSON.stringify(obj);
	};
	
	$.stringToObject = function(string) {
		return jQuery.parseJSON(string);
	};
})(jQuery);