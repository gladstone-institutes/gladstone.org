(function($) {
	$(document).ready(function(){

        Drupal.menuTab.init();
        Drupal.menuItem.init();
		Drupal.menuLayout.init();




		$("input.numeric").numeric({ negative: false });
        /*
		$('#dmg-orientation').change(function(){
			if($(this).attr('value') == 'vertical') {
				$('#dmg-submenuw-wrap').show();
				$('#dmg-fixed-wrap, #dmg-fullwith-wrap').addClass('disable').find('input').attr('disabled','disabled');
				$('#dmg-showfixed-wrap, #dmg-position-wrap, #dmg-customwidth-wrap').hide();
				$('#dmg-submenuw').focus();
			} else {
				$('#dmg-submenuw-wrap').hide();
				$('#dmg-fixed-wrap, #dmg-fullwith-wrap').removeClass('disable').find('input').removeAttr('disabled');
				$('#dmg-fixed, #dmg-fullwith').trigger("change");
			}
		});
		
		$('#dmg-fullwith').change(function() {
			if (!$(this).is(':checked')) {
				$('#dmg-customwidth-wrap').show();
				$('#dmg-customwidth').focus();
			} else {
				$('#dmg-customwidth-wrap').hide();
			}
	  });
		
		$('#dmg-fixed').change(function() {
			if ($(this).is(':checked')) {
				$('#dmg-showfixed-wrap, #dmg-position-wrap').show();
				$('#dmg-pushing-wrap').addClass('disable').find('input').attr('disabled','disabled');
			} else {
				$('#dmg-showfixed-wrap, #dmg-position-wrap').hide();
				$('#dmg-pushing-wrap').addClass('disable').removeClass('disable').find('input').removeAttr('disabled');
			}
	  });
		
		$('#dmg-desc').change(function() {
			if ($(this).is(':checked')) {
				$('body').addClass('showdesc');
			} else {
				$('body').removeClass('showdesc');
			}
	  });
		
		$('#dmg-itemdesc').change(function() {
			if ($(this).is(':checked')) {
				$('body').addClass('showitemdesc');
			} else {
				$('body').removeClass('showitemdesc');
			}
	  });
		
		$('#dmg-cssclasses').change(function() {
			if ($(this).is(':checked')) {
				$('body').addClass('showcssclasses');
			} else {
				$('body').removeClass('showcssclasses');
			}
	  });
		
		$('#dmg-menuicon').change(function() {
			if ($(this).is(':checked')) {
				$('body').addClass('showmenuicon');
			} else {
				$('body').removeClass('showmenuicon');
			}
	  });
		
		$('#dmg-menuitemicon').change(function() {
			if ($(this).is(':checked')) {
				$('body').addClass('showmenuitemicon');
			} else {
				$('body').removeClass('showmenuitemicon');
			}
	  });
		
		$('#dmi-autocrop').change(function() {
			if ($(this).is(':checked')) {
				$('#dmi-imgwidth-wrap, #dmi-imgheight-wrap').show();
			} else {
				$('#dmi-imgwidth-wrap, #dmi-imgheight-wrap').hide();
			}
	  });
		
		$('#dmg-orientation, #dmg-fullwith, #dmg-fixed, #dmg-desc, #dmg-itemdesc, #dmg-cssclasses, #dmg-menuicon, #dmg-menuitemicon, #dmi-autocrop').trigger("change");
*/
        $('#submnu_full_width').change(function() {
            if ($(this).is(':checked')) {
                $('#mnu-sub-width').hide();
            } else {
                $('#mnu-sub-width').show();
            }
        });
		
		blocktype = $('#blocklist .md-listleft li');
		blocktype_length = blocktype.length;
		if (blocktype_length > 9) {
			blocktype.slice(7,blocktype_length).hide();
			$('#blocklist .md-listleft').append('<div id="showallblocks">Show all</div>');
			$('#showallblocks').click(function(){
				blocktype.show();
				$(this).remove();
			})
		}
		
		/* 
		END js added by Neo
		*/
		function getFlyMenuItem(ul) {
			var lstItem = [];
			$("> li", ul).each(function() {
				var setting = $.stringToObject($(this).find("input.setting").val());
				var subItems = $(this).has("ul") ? getFlyMenuItem($("> ul", $(this))) : null;
				lstItem.push({setting: setting, subItems: subItems});
			});
			return lstItem;
		}
		
		/*
		 * Added by Duynv
		 */
		$("#edit-save-btn, #edit-save-continue-btn").click(function() {
			var data = [];
			$("#md-tabs .ui-tabs-nav a.tab-link").each(function() {
				var tab = $($(this).attr("href"));
				var subMenu = [];
				var settings = $.stringToObject(tab.find("input.settings").val());
				if(settings.mnu_fly_type) {
					$tree = tab.find("div.tree");
					if($tree.has("ul")) {
						subMenu = getFlyMenuItem($("> ul", $tree));
					}
				} else {
					tab.find(".md-row").each(function() {
						var rowItems = [];
						$(this).find("div.md-col").each(function() {
							var colItems = [];
							$(this).find("div.md-bl").each(function() {
								var obj = $(this).find("input.setting").val();
								colItems.push($.unserialize(obj));
							});
							rowItems.push(colItems);
						});
						if(rowItems.length > 0) 
							subMenu.push(rowItems);
					});
				}
				data.push({
					settings: settings,
					subMenu: subMenu
				});
			});
			$("textarea.md-megamenu-data-save").val($.objectToString(data));
		});	
		
		$('a.choose-image-link').live('click',function () {
			var _self = $(this);
	      	Drupal.media.popups.mediaBrowser(function (mediaFiles) {
	        	var icon = mediaFiles[0];
	        	var preview = _self.prev().empty();
	        	var iconElement = $('<img/>').attr('src', icon.url);
	        	preview.append(iconElement);        	
	        	_self.next().val("id=" + icon.fid + "&url=" + icon.url);
	        });
		 });

        Drupal.menuTab.initTab();
	});
	
	$.fn.loadingDialog = function() {
        $(this).html('<div class="divloading"></div>');
        $(this).parent().find("button.ui-button").attr("disabled", true);
        return this;
    }
    $.fn.unLoadingDialog = function() {
        $(this).parent().find("button.ui-button").attr("disabled", false);
        return this;
    }
		
})(jQuery);