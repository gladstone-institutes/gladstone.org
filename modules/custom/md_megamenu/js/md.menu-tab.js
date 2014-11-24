(function($) {
	var mdMenuLayout = Drupal.menuLayout;
	var styleHtml = Drupal.styleHtml;
	var mdMenuItem = Drupal.menuItem;

	var mdMenuTab = {
		    tabs: null,
		    tab_counter: $("ul li.tab-item").length+1,
		    dlg_itemsettings: null,
		    init: function() {
		        $(".md-tabs-head li").live({
		            mouseenter: function() {
		                $(this).find(".ui-icon-close").show();
		            },
		            mouseleave: function() {
		                $(this).find(".ui-icon-close").hide();
		            }
		        });

		        $(".md-tabs-head span.ui-icon-close").live("click", function() {
		        	/*
					 * Added by Duynv Call request to remove tab in databse
					 * before remove html
					 */
					var _self = this;
					var id = $(this).prev('a').attr('href');
					var settings = $('input.settings', $(id)).val();
					settings = $.stringToObject(settings);

					// Confirm delete
					if (!confirm('Are you sure to delete this tab?')) {
						return;
					}

                    // Restore all blocks
                    var blocks = $(id).find(".block-item");
                    for (var i = 0; i < blocks.length; i++) {
                        var block = blocks[i];
                        var module = $.unserialize($(block).find("input[type=hidden]").val()).block_module;
                        $("#" + module).append(block);
                    }

					if (settings.tab_id == 0) {
						var index = $("li", mdMenuTab.tabs).index($(this).parent());
						mdMenuTab.tabs.tabs("remove", index);
					} else {
						$.ajax({
							url : Drupal.settings.basePath + "?q=admin/structure/md-megamenu/delete-tab",
							type : 'POST',
							data : {
								'tab' : settings.tab_id,
								'token_value' : $('input#delete_tab_token').val()
							},
							dataType : 'json',
							success : function(data) {
								if (data.message == "OK") {
									var index = $("li", mdMenuTab.tabs).index($(_self).parent());
                                    mdMenuTab.tabs.tabs("remove", index);
								}
							}
						});
					}
					/* End added by Duynv */
		            });
		        mdMenuTab.dlg_itemsettings = $("#dlg-mnuitemsetting").dialog({
		            resizable: false,
		            autoOpen: false,
		            draggable: false,
		            modal: true,
		            width: 1000,
		            open: function() {
			        	var settings = $(this).data('settings');
						var mnusettings = $.stringToObject(settings);
						if(mnusettings != null) {
							mdMenuTab.setMenuFormVal(mnusettings);
						} else {
							var form = $("form", mdMenuTab.dlg_itemsettings)[0];
							form.reset();
							$(form).find("input[type=hidden]").each(function() {this.value = "";});
							$(form).find(".image-preview").empty();
						}
						$(".md-subtabs").tabs('option', 'active', 0);
						$("#mnu_title", mdMenuTab.dlg_itemsettings).focus();
						$("#title_enabled").trigger("change");
		            },
		            close: function() {
		            	$("form", mdMenuTab.dlg_itemsettings)[0].reset();
		            	styleHtml.hide();
		            }
		        });

		        $("#add_tab").click(function() {
				   	mdMenuTab.dlg_itemsettings.data('settings', null).data("id", null).dialog({
		    			title:'Add new menu item',
		    			buttons: {
		    				Add: function() {
		    					mdMenuTab.addTab();
		    					$(this).dialog("close");
			    			},
			    			Cancel: function() {
			    				$(this).dialog("close");
			    			}
		    			}
		    		}).dialog("open");
		    		return false;
		    	});

		        $(".mnu-settings").live('click',function() {
		    		var settings = $(this).parent().find("input.settings").val();
		    		var id = $(this).parent().parent().attr("id");
		    		mdMenuTab.dlg_itemsettings.data('settings', settings).data("id", id).dialog({
		    			title:'Menu item data',
		    			buttons: {
		    				Save: function() {
		    					if($("#form-mnuitemsetting").valid()) {
		    						var tabId = $(this).data('id');
		        					var new_mnusettings = mdMenuTab.getMenuFormVal();
		        					mdMenuTab.updateTabSetting(tabId, new_mnusettings);
		        					$(this).dialog("close");
		    					}
		    				},
		    				Cancel: function() {
		    					$(this).dialog("close");
		    				}
		    			}
		    		}).dialog( "open" );
                    $('#submnu_full_width').trigger("change");
		    		return false;
		    	});

		        $("#form-mnuitemsetting").validate();

		        $("#blocklist").tabs();
		        $("#mni-subtabs").tabs({
		        			select: function(event, ui) {
		        				styleHtml.hide();
		        			}
						});

				$(".md-listleft a").click(function(){
					$(this).parent().parent().find("a").removeClass("border-white");
					$(this).parent().prev().find("a").addClass("border-white");
				});
				$(".md-listleft li.ui-state-active").each(function(){
					$(this).prev().find("a").addClass("border-white");
				});

		        $("#md-subtabs .itemcol").click(function() {
		        	$("#md-subtabs .itemcol").removeClass("selected");
		        	$(this).addClass("selected");
		        });
		    	/**
		    	* js added by Neo
		    	*/
		    	$(".el-block").live({
		    			mouseenter: function() {
		    					$(this).addClass('el-hover');
		    			},
		    			mouseleave: function() {
		    					$(this).removeClass('el-hover');
		    			}
		    	});

		    	dlg_mmsettings = $("#dlg-mmsetting").dialog({
		    			resizable: false,
		    			autoOpen: false,
		    			draggable: false,
		    			modal: true,
		    			width: 680,
		    			buttons: {
		    				OK: function() {
		    					$(this).dialog("close");
		    				}
		    			},
		    			open: function(){
		    	            jQuery('.ui-widget-overlay').bind('click',function(){
		    	            	dlg_mmsettings.dialog('close');
		    	            });
		    	        }
		    	});

		    	$("#megamenu-setting").live("click", function() {
		    		dlg_mmsettings.dialog("open");
		    		return false;
		    	});

		    	$("#title_enabled").change(function() {
		    		if ($(this).is(':checked')) {
		    			$('#mnu_title').attr("disabled", false);
		    		} else {
		    			$('#mnu_title').attr("disabled", true);
		    		}
		    	});
		    	mdMenuTab.flyoutItem = $("#dlg-flyout-item").dialog({
		            resizable: false,
		            autoOpen: false,
		            draggable: false,
		            modal: true,
		            width: 600,
		            buttons: {
						OK: function() {
		    				$item = $(this).data('item');
		    				var value = mdMenuTab.getFormVal($("#dlg-flyout-item form"));
		    				title = value["a_title"] !== undefined ? value["a_title"] : "";
		    				$(">dl >dt >a.sm2_title", $item).html(title);
		    				$item.children("input.setting").val($.objectToString(value));
		    				if(!$item.hasClass("ei-processed")) {
		    					$item.addClass("ei-processed");
		    				}
							$(this).dialog("close");
						},
		    			Cancel: function() {
							$(this).dialog("close");
						}
					},
					close: function() {
						$item = $(this).data('item');
						if($item != null && !$item.hasClass("ei-processed")) {
							$item.remove();
						}
					}
		        });
		    	$("#md-tabs").find("div.tree > ul").megadrupalTreeMenu();
		    	$("a.mnu-addnewlink").live("click", function() {
					newli = $(Drupal.flyMenuItem);
					$tree = $(this).parent().prev("div.tree");
					$("> ul", $tree).append(newli).megadrupalTreeMenu();
					newli.find("a.fly-item-edit").trigger("click");
				});
		    	$("a.fly-item-edit").live("click", function() {
		    		item = $(this).parent().parent().parent();
		    		var data = $.stringToObject(item.find("input.setting").val());
		    		$("#dlg-flyout-item").loadingDialog();
		    		$("#dlg-flyout-item").dialog("open");
					$.post(Drupal.settings.basePath + "?q=admin/structure/md-megamenu/essential-item", data ,function(html) {
						$("#dlg-flyout-item").html(html);
						mdMenuTab.flyoutItem.data('item', item).unLoadingDialog();
					});
					return false;
		    	});

		    	$("a.fly-item-delete").live("click", function() {
		    		$(this).parent().parent().parent().remove();
		    	});
                mdMenuTab.tabs = $("#md-tabs");
		    },
            initTab: function() {
                mdMenuTab.tabs.tabs({
                    cookie: {expires: 1},
                    tabTemplate: '<li class="tab-item clearfix"><a class="tab-link" href="#{href}"><span class="tab-text">#{label}</span></a> <span class="ui-icon ui-icon-close">Remove Tab</span></li>',
                    add: function( event, ui ) {
                        $( ui.panel ).append( '<div class="settings"><a href="#" class="mnu-settings">[settings]</a><input autocomplete="off" type="hidden" class="settings" />'
                            + '</div><div class="md-menudropdown clearfix"><div class="tree"></div><div class="dropdown-addnew"><a href="#" class="mnu-addnewlink">[add new link]</a></div></div><div class="md-menuwrap md-1col1 clearfix"></div>' );
                        mdMenuTab.tabs.tabs('option', 'active', ui.index);
                    },
                    remove: function(event, ui) {
                        $(ui.panel).find("div.md-bl").each(function() {
                            var setting = $.unserialize($(this).find("input.setting").val());
                            if(setting.type.substr(0,5) == "block") {
                                $("#blocks").append($(this));
                            }
                        });
                    }
                });
                this.sortTab();
            },
		    removeIcon: function(elm) {
		    	$("#icon_url").val("").change();
		    },
		    sortTab: function() {
		    	mdMenuTab.tabs.find(".ui-tabs-nav").sortable({
		            axis: "x",
		            stop: function() {
		    			mdMenuTab.tabs.tabs("refresh");
		            }
		        });
		    },
		    addTab: function() {
				var tab_title = $("#mnu_title").val() || "Tab " + mdMenuTab.tab_counter;
				var tabId = "tabs-" + mdMenuTab.tab_counter;
				var new_tab = '<li class="tab-item clearfix"><a class="tab-link" href="#'+tabId+'"><span class="tab-text">'+tab_title+'</span></a>  <span class="ui-icon ui-icon-close">Remove Tab</span></li>';
				// mdMenuTab.tabs.tabs( "add", "#tabs-" + mdMenuTab.tab_counter, tab_title );
				mdMenuTab.tabs.children('ul').append(new_tab);
				mdMenuTab.updateTabSetting(tabId, mdMenuTab.getMenuFormVal());
				mdMenuTab.tab_counter++;
			},
		    getSelectedTabIndex: function() {
		  		return mdMenuTab.tabs.tabs('option', 'selected');
			},
			updateTabSetting: function(tabId, setting) {
				if(setting.mnu_fly_type) {
					$('#' + tabId).find("div.md-menuwrap").hide();
                    if(setting.title_enabled)
                        $('a[href$="#'+tabId+'"] .tab-text').html(setting.mnu_title);
                    else
                        $('a[href$="#'+tabId+'"] .tab-text').html("");
					$menuflyout = $('#' + tabId).find("div.md-menudropdown");
					$tree = $menuflyout.show().find(".tree");
					if($tree.is(':empty')) {
						$tree.html('<ul></ul>');
						$("> ul", $tree).megadrupalTreeMenu();
					}
					$('#' + tabId).find("input.settings").val($.objectToString(setting));

				} else {
					$('#' + tabId).find("div.md-menudropdown").hide();
					$('#' + tabId).find("div.md-menuwrap").show();
					if(setting.title_enabled)
						$('a[href$="#'+tabId+'"] .tab-text').html(setting.mnu_title);
					else
						$('a[href$="#'+tabId+'"] .tab-text').html("");
					var img = $('a[href$="#'+tabId+'"] img');
					if($('#dmg-menuicon').is(':checked') && setting.icon_url && setting.icon_url != "") {
						if(img.length > 0) {
							img.attr("src", setting.icon_url);
						} else {
							$('a[href$="#'+tabId+'"]').prepend('<img width="16" height="16" src="'+setting.icon_url+'">');
						}
					} else {
						if(img.length) {
							img.remove();
						}
					}

					$('#' + tabId).find("input.settings").val($.objectToString(setting));
					var mnuwrap = $('#' + tabId).find('.md-menuwrap');
					var nbNewCol = setting.mnu_layout;
					var oldCol = mnuwrap.find(".md-col");

					if(oldCol.length == 0) {
						mdMenuTab.changeLayout(mnuwrap, nbNewCol);
					} else {
						oldColContent = [];
						$.each(oldCol, function(index, value){
							oldColContent.push($(value).find(".inner").html());
						});
						mdMenuTab.changeLayout(mnuwrap, nbNewCol);
						var newCols = mnuwrap.find(".md-col");
						$.each(oldColContent, function(index, value){
							if(index < newCols.length) {
								$(newCols[index]).find(".inner").html(value);
							} else {
								$(newCols[newCols.length - 1]).find(".inner").append(value);
							}
						});
					}
					mdMenuItem.mdcolsort();
				}


			},
			changeLayout: function(mnuwrap, nbNewCol) {
				mnuwrap.removeClass("fluid_mmcontainer_12 fluid_mmcontainer_16").addClass("fluid_mmcontainer_" + nbNewCol.numCol);
				mnuwrap.html(mdMenuTab.getMenuTabHtml(nbNewCol.setting, nbNewCol.numCol));
			},
			getMenuTabHtml: function(layoutSetting, numCol) {
				var html = "";
				layoutSetting = (typeof layoutSetting == "string") ? $.stringToObject(layoutSetting) : layoutSetting;
				if(layoutSetting.length > 0) {
					for (var i = 0; i < layoutSetting.length; i++) {
						var colSetting = layoutSetting[i];
						html += '<div class="md-row clearfix">';
						for(var j = 0; j < colSetting.cols.length; j++) {
							var colNum = parseInt(colSetting.cols[j].length * numCol / 48);
							html += '<div class="md-col {grid}"><div class="inner ui-sortable"></div></div>'.replace("{grid}", "mmg_" + colNum);;
						}
						html += '</div>';
					}
				}
				return html;
			},
			getMenuFormVal: function() {
				var mnu_layout = mdMenuLayout.getLayoutConfig();
				return {
					mnu_fly_type: $('#dlg-mnuitemsetting input[name="mnu_type"]').is(':checked') ? false : true,
					title_enabled:$('#dlg-mnuitemsetting input[name="title_enabled"]').is(':checked') ? true : false,
					mnu_title	: $('#dlg-mnuitemsetting input[name="mnu_title"]').val(),
					mnu_path	: $('#dlg-mnuitemsetting input[name="mnu_path"]').val(),
					icon_url	: $('#dlg-mnuitemsetting input[name="icon_url"]').val(),
					mnu_desc  	: $('#dlg-mnuitemsetting textarea[name="mnu_desc"]').val(),
					mnu_class 	: $('#dlg-mnuitemsetting input[name="mnu_class"]').val(),
					mnu_id 		: $('input[name=menu_id]').val(), /* Added by Duynv - id of menu */
					tab_id 		: $("#mnu_tab_id").val(), /* Added by Duynv - id of tab */
					mnu_layout	: mnu_layout
				};
			},
			setMenuFormVal: function(menusettings) {
				$("#dlg-mnuitemsetting input[name=mnu_type]").attr("checked", !menusettings.mnu_fly_type);
				$("#dlg-mnuitemsetting input[name=mnu_title]").val(menusettings.mnu_title);
				$('#dlg-mnuitemsetting input[name="mnu_path"]').val(menusettings.mnu_path);
				$('#dlg-mnuitemsetting textarea[name="mnu_desc"] ').val(menusettings.mnu_desc);
				$('#dlg-mnuitemsetting input[name="icon_url"]').val(menusettings.icon_url);
				mdMenuLayout.applyLayoutConfig(menusettings.mnu_layout);
				$('#dlg-mnuitemsetting input[name="mnu_class"]').val(menusettings.mnu_class);
				$('#dlg-mnuitemsetting input[name="dms-bgc"]').val(menusettings.smn_bgc);
				$('#dlg-mnuitemsetting input[name="dms-bow"]').val(menusettings.smn_bow);
				$('#dlg-mnuitemsetting select[name="dms-bos"]').val(menusettings.smn_bos);
				$('#dlg-mnuitemsetting input[name="dms-boc"]').val(menusettings.smn_boc);
				$("#mnu_tab_id").val(menusettings.tab_id); /* Added by Duynv */
				if (menusettings.icon_url != null && menusettings.icon_url != "") {
					var icon_url = menusettings.icon_url.split("&")[1];
					icon_url = icon_url.split("=")[1];
					var img_preview = $('<img/>').attr('src', icon_url);
					$('#dlg-mnuitemsetting .image-preview').empty().append(img_preview);
				}
			},
			getFormVal: function(form) {
				var value = {};
				$("input, select, textarea", $(form)).each(function() {
					value[$(this).attr("name")] = $(this).val();
				});
				return value;
			}
		};

	Drupal.menuTab = mdMenuTab;
})(jQuery);
