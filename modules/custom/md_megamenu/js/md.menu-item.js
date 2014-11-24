(function($) {
	var mdMenuItem = {
			dlg_item: null,
			blocks: $(".connectedSortable"),
			elitems: $("#essentialitems"),
		    init: function() {
		    	$(window).resize();
		    	$(".md-bl", mdMenuItem.elitems).draggable({
		    		revert: "invalid",
		    		connectToSortable: ".inner.ui-sortable",
		    		handle: 'a.handle',
		    		helper: function(event) {
		    			var text = "Add the block";
		    			if(event.currentTarget !== undefined &&  $(event.currentTarget).attr("data-title") != undefined) {
		    				text = $(event.currentTarget).attr("data-title");
		    			}
		    			return $("<div class='ui-widget-header'>"+text+"</div>");
		    		}
		    	});
		    	this.mdcolsort();
		    	this.dragBlocks();
		    	this.bindClickEvent();
		    	this.dlg_item = $("#dlg-item").dialog({
		    		resizable: false,
		    		autoOpen: false,
		    		draggable: false,
		    		modal: true,
		    		width: 480,
		    		buttons: {
		    			Apply: function() {
		    				var eitem = $(this).data('eitem');
		    				eitem.find("input.setting").val($("#dlg-item form").serialize());
		    				eitem.addClass("ei-processed");
		    				// Set menu header
		    				eitem.find('.ei-text span').html($("#dlg-item form").find('input[name="title"]').val());
		    				//updateMenuData(eitem.parent());
		    				$(this).dialog( "close" );
		    				return true;
		    			},
		    			Cancel: function() {
		    				$(this).dialog( "close" );
		    			},
		    			Remove: function() {
		    				$(this).dialog( "close" );
		    				var eitem = $(this).data('eitem');
		    				eitem.remove();
		    			}
		    		},
		            close: function() {
		    			var eitem = $(this).data('eitem');
		    			if(!eitem.hasClass("ei-processed")) {
		    				eitem.remove();
		    			}
		            },
		            open: function() {
		            	jQuery('.ui-widget-overlay').bind('click',function(){
							$("#dlg-item").dialog('close');
			            });
		            }
		    	});

		    },
		    bindClickEvent: function() {
		    	$(".ei-edit").live('click',function() {
		    		mdMenuItem.essentialItems($(this).parent());
		    		return false;
		    	});
		    	$(".ei-remove").live('click',function() {
		    		$(this).parent().remove();
		    		return false;
		    	});
		    	$(".bl-remove").live('click',function() {
		    		$("#blocks").append($(this).parent());
		    		var module = $.unserialize($(this).parent().find('input[type=hidden]').val()).block_module;
		    		$("#" + module).append($(this).parent());
		    		return false;
		    	});
		    },
		    mdcolsort: function() {
		    	$(".inner").sortable({
					connectWith: ".ui-sortable",
					handle: 'a.handle',
					revert: true,
					placeholder: "ui-state-highlight",
					stop: function(event, ui) {
						$item = $(ui.item);
						if (!$item.hasClass('ei-processed')) {
							mdMenuItem.essentialItems($item);
						}
					}
				});
		    },
		    dragBlocks: function() {
				$(mdMenuItem.blocks).sortable({
						connectWith: ".ui-sortable",
						handle: 'a.handle',
						placeholder: "ui-state-highlight",
						helper: function(event) {
							var text = "Add the block";
							if(event.currentTarget !== undefined &&  $(event.currentTarget).attr("data-title") != undefined) {
								text = $(event.currentTarget).attr("data-title");
							}
							return $("<div class='ui-widget-header'>"+text+"</div>");
						}
				}).disableSelection();
		    },
		    essentialItems: function(eitem) {
				var title = "", type = "";
				var data = {};
				if(eitem.hasClass('ei-processed')) { // Edit item
					data = eitem.find("input.setting").val();
					if (eitem.hasClass('ei-header')) {
						title = "Edit the header";
					} else if (eitem.hasClass('ei-image')) {
						title = "Edit the image";
					} else if (eitem.hasClass('ei-html')) {
						type = 'html';
						title = "Edit HTML code";
					} else if (eitem.hasClass('ei-list')) {
						title = "Edit the list";
					} else if (eitem.hasClass('ei-iframe')) {
						title = "Edit the iframe";
					} else if (eitem.hasClass('ei-video')) {
						title = "Edit the video";
					}
				} else {  // New item
					if (eitem.hasClass('ei-header')) {
						type = 'header';
						title = "Add new header";
					} else if (eitem.hasClass('ei-image')) {
						type = 'img';
						title = "Add new image";
					} else if (eitem.hasClass('ei-link')) {
						type = 'a';
						title = "Add new link";
					} else if (eitem.hasClass('ei-html')) {
						type = 'html';
						title = "Add new HTML code";
					} else if (eitem.hasClass('ei-iframe')) {
						type = 'iframe';
						title = "Add new iframe";
					} else if (eitem.hasClass('ei-video')) {
						type = 'video';
						title = "Add new video";
					} else if (eitem.hasClass('ei-textblock')) {
                        type = 'textblock';
                        title = "Add new textblock";
                    } else if (eitem.hasClass('ei-seperator')) {
                        type = 'seperator';
                        title = "Add new seperator";
                    } else if (eitem.hasClass('ei-seperatortext')) {
                        type = 'seperatortext';
                        title = "Add new seperator with text";
                    } else if (eitem.hasClass('ei-flickr')) {
                        type = 'flickr';
                        title = "Add new flickr";
                    } else if (eitem.hasClass('ei-twitter')) {
                        type = 'twitter';
                        title = "Add new twitter";
                    } else if (eitem.hasClass('ei-gmap')) {
                        type = 'gmap';
                        title = "Add new gmap";
                    }
					data.type = type;
				}

				if (data.type != 'seperator') {
                    $("#dlg-item").loadingDialog();
                    if(type == "html") {
                        mdMenuItem.dlg_item.dialog("option", "width", 800).dialog("option", "height", 550);
                    }
                    else {
                        mdMenuItem.dlg_item.dialog("option", "width", 400).dialog("option", "height", "auto");
                    }
                    mdMenuItem.dlg_item.data('eitem', eitem).dialog("option", "title", title).dialog("open");

                    $.post(Drupal.settings.basePath + "?q=admin/structure/md-megamenu/essential-item", data ,function(html) {
                        $("#dlg-item").html(html).unLoadingDialog();
                    });
                }
			}
		};

		$(window).resize(function() {
			listcontentw = $(".md-wrap").width() - 282;
			$(".md-listcontent").width(listcontentw);
		});

		Drupal.menuItem = mdMenuItem;
})(jQuery);
