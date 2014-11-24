(function($) {
	var styleHtml = Drupal.styleHtml;
	var mdMenuLayout = {
		    init: function() {
				$(".el-block").live({
					mouseenter: function() {
						$(this).addClass('el-hover');
					},
					mouseleave: function() {
						$(this).removeClass('el-hover');
					}
				});
				$('#mni-layout input[name="column_grid"]').change(function() {
					var column = $('#mni-layout input:radio:checked').val() || 12;
					var fullWidth = [];
					fullWidth["isFull"] = true;
					fullWidth['subWidth'] = "";
					mdMenuLayout.applyNumCol(column, mdMenuLayout.getConfigObject("[[24,24],[48]]"), fullWidth);
				}).change();
				
				$('#itemcolumn div.item').click(function() {
					$("#el-gen").html("");
					mdMenuLayout.getLayoutHtml(mdMenuLayout.getConfigObject($(this).attr("value")));
				});
				
				$("#el-gen").sortable({
					handle: 'a.handle',
					revert: false,
					placeholder: "ui-state-highlight",
					items: "div.el-row"
				});
				
				$("#layout_newrow").click(function() {
					var column = $('#mni-layout input:radio:checked').val();
					mdMenuLayout.getLayoutHtml(mdMenuLayout.getConfigObject("[[48]]"));
					return false;
				});
				
				$("#layout_save").click(function() {
					var layoutSetting = [];
					$("#el-gen .el-row").each(function() {
						var rowSeting = [];
						$(this).find(".el-block").each(function() {
							rowSeting.push(mdMenuLayout.extractColNum($(this)));
						});
						layoutSetting.push(rowSeting);
					});
					alert($.objectToString(layoutSetting));
				});
				
				$(".el-delete").live("click", function() {
					var parent = $(this).parent();
					var colNum = mdMenuLayout.extractColNum(parent);
					if(colNum > 0 && colNum < 12) {
						var next = parent.next("div.el-block");
						var nextColNum = mdMenuLayout.extractColNum(next);
						if(!mdMenuLayout.updateColNum(next, (nextColNum + colNum))) {
							var prev = parent.prev("div.el-block");
							var prevColNum = mdMenuLayout.extractColNum(prev);
							mdMenuLayout.updateColNum(prev, (prevColNum + colNum))
						}
						parent.remove();
					} else {
						$(this).parent().parent().remove();
					}
					return false;
				});
				styleHtml.appendTo(document.body).hide();
				$("input.color-picker", styleHtml).ColorPicker({
					onSubmit: function(hsb, hex, rgb, el) {
						$(el).val(hex);
						$(el).ColorPickerHide();
					},
					onBeforeShow: function () {
						current_obj = this;
						$(this).ColorPickerSetColor(this.value);
					},
					onChange: function (hsb, hex, rgb) {
						$(current_obj).val(hex);
					}
				}).bind('keyup', function(){
					$(this).ColorPickerSetColor(this.value);
				});
				
				$("a.btn_save", styleHtml).click(function() {
					var setting = mdMenuLayout.getStyleHtmlVal();
					parent = styleHtml.data("item");
					parent.children("input.setting").val($.objectToString(setting));
					styleHtml.hide();
					return false;
				});
				$("a.btn_cancel", styleHtml).click(function() {
					styleHtml.hide();
					return false;
				});
				$(".el-style, .el-globalstyle").live("click", function() {
					var offset = $(this).offset();
					var parent = $(this).parent();
					var setting = parent.children("input.setting").val();
					mdMenuLayout.setStyleHtmlVal($.stringToObject(setting));
					styleHtml.data("item", parent).css({'top':offset.top + 19,'left':offset.left -13}).show();
					return false;
				});
				
				$(".el-split").live("click", function() {
					var parent = $(this).parent();
					var row = parent.parent();
					var numrow = mdMenuLayout.extractColNum(parent);
					if(numrow > 1) {
						var newcolnum = Math.floor(numrow/2);
						var oldcolnum = numrow - newcolnum;
						mdMenuLayout.updateColNum(parent, oldcolnum);
						parent.after(mdMenuLayout.getColTemplate(newcolnum));
					}
					return false;
				});
				
				$(".el-wider").live("click", function() {
					var parent = $(this).parent();
					var next = parent.next("div.el-block");
					if(mdMenuLayout.shortenCol(next, "next")) {
						var colNum = mdMenuLayout.extractColNum(parent);
						mdMenuLayout.updateColNum(parent, ++colNum);
					}
					return false;
				});
				
				$(".el-shorten").live("click", function() {
					var parent = $(this).parent();
					var next = parent.prev("div.el-block");
					if(mdMenuLayout.shortenCol(next, "prev")) {
						var colNum = mdMenuLayout.extractColNum(parent);
						mdMenuLayout.updateColNum(parent, ++colNum);
					}
					return false;
				});
		    },
		    getLayoutConfig: function() {
				var layoutSetting = [];
				var numCol = mdMenuLayout.extractColNum($("#el-gen"));
				var fullWidth = mdMenuLayout.extractFullWidth();
				$("#el-gen .el-row").each(function() {
					var cols = [];
					$(this).find(".el-block").each(function() {
						cols.push({
							style: $.stringToObject($(this).children("input.setting").val()),
							length: (mdMenuLayout.extractColNum($(this)) * 48 / numCol)
						});
					});
					layoutSetting.push({
						style: $.stringToObject($(this).children("input.setting").val()),
						cols: cols
					});
				});
				return {numCol: numCol, setting: layoutSetting, isFullWidth: fullWidth['isFull'], subWidth: fullWidth['subWidth']};
		    },
		    applyLayoutConfig: function(layoutConfig) {
		    	var fullWidth = [];
		    	fullWidth['isFull'] = layoutConfig.isFullWidth;
		    	fullWidth['subWidth'] = layoutConfig.subWidth;
		    	mdMenuLayout.applyNumCol(layoutConfig.numCol, layoutConfig.setting, fullWidth);
		    },
		    shortenCol: function(col, nextElm) {
		    	if(col != null && col.length > 0) {
		    		var colNum = mdMenuLayout.extractColNum(col);
		    		if(colNum > 1) {
		    			mdMenuLayout.updateColNum(col, --colNum);
		    			return true;
		    		} else {
		    			if(nextElm == "next") {
		    				return mdMenuLayout.shortenCol(col.next("div.el-block"), nextElm);
		    			} else {
		    				return mdMenuLayout.shortenCol(col.prev("div.el-block"), nextElm);
		    			}
		    		}
		    	} 
		    	return false;
		    },
		    updateColNum: function(col, num) {
		    	if(num > 0 && num < 13 && col != null && col.length > 0) {
		    		col.removeClass('mmg_1 mmg_2 mmg_3 mmg_4 mmg_5 mmg_6 mmg_7 mmg_8 mmg_9 mmg_10 mmg_11 mmg_12 mmg_13 mmg_14 mmg_15 mmg_16');
		    		col.addClass("mmg_" + num);
		    		return true;
		    	}
		    	return false;
		    },
		    extractSpanNum: function(a) {
		        var b, c, d;
		        b = $(a).attr("class"), c = b.split(/\s+/);
		        for (d = 0; d < c.length; d += 1) if (c[d].match(/^mmg_/)) return c[d].split("_")[1]
		    },
		    extractColNum: function(col) {
		    	var numrow;
		    	if(col != null && col.length > 0) {
		    		numrow = col.attr("class").match(/\d+/);
		    	}
		    	numrow = numrow ? parseInt(numrow[0]) : 0;
		        return numrow;
		    },
		    /**
		     * Added by Duynv
		     * Get is submenu full width or not
		     */
		    extractFullWidth: function() {
		    	var ret = [];
		    	ret['isFull'] = $('#submnu_full_width').is(':checked');
		    	ret['subWidth'] = '';
		    	if (!ret['isFull'] && !isNaN(parseInt($('#mnu_subwid').val()))) {
		    		ret['subWidth'] = $('#mnu_subwid').val();
		    	}
		    	
		    	return ret;
		    },		    
		    /**
		     * End added by Duynv
		     */		    
		    getColTemplate: function(colnum, style) {
		    	var layoutCol = $('<div class="el-block mmg_'+colnum+'">'
		    					+ 	'<a href="#" class="el-delete" title="Delete this column"></a>'
		    					+ 	'<a href="#" class="el-style" title="Change column style"></a><input type="hidden" class="setting" value="" autocomplete="off" />'
		    					+ 	'<a href="#" class="el-split" title="Split column"></a>'
		    					+ 	'<a href="#" class="el-wider" title="Make this column wider"></a>'
		    					+ 	'<a href="#" class="el-shorten" title="Make this column shorten"></a>'
		    					+ '</div>');
		    	
		    	layoutCol.children("input.setting").val($.objectToString(style));
		    	return layoutCol.clone();
		    },
		    getLayoutHtml: function(layoutSetting) {
		    	var numCol = mdMenuLayout.extractColNum($("#el-gen"));
		    	layoutSetting = (typeof layoutSetting == "string") ? $.stringToObject(layoutSetting) : layoutSetting;
		    	if(layoutSetting.length > 0) {
		    		for (var i = 0; i < layoutSetting.length; i++) {
		    			var rowSetting = layoutSetting[i];
		    			row = $('<div class="el-row"><a href="#" class="handle"></a><a href="#" class="el-globalstyle" title="Change row style"></a><input type="hidden" class="setting" value="" autocomplete="off" /></div>');
		    			row.children("input.setting").val($.objectToString(rowSetting.style));
		    			cols = rowSetting.cols;
		    			if(cols != undefined) {
		    				var colSum = 0;
		    				for(var j = 0; j < (cols.length - 1); j++) {
		    					var colNum = parseInt(cols[j].length * numCol / 48);
		    					colSum += colNum;
		    					if(colSum < numCol) { // Moi row phai co colSetting co sum < 48
		    						row.append(mdMenuLayout.getColTemplate(colNum, cols[j].style));
		    					} 
		    				}
		    				if(colSum < numCol) {
		    					row.append(mdMenuLayout.getColTemplate(numCol - colSum, cols[cols.length - 1].style));
		    				}
		    			}
		    			$("#el-gen").append(row);
		    		}
		    	}
		    },

		    applyNumCol: function(numcol, layoutSettingStr, fullWidth) {
		    	$('input:radio[name="column_grid"][value="' + numcol + '"]').attr('checked', true);		    	
		    	$('#submnu_full_width').attr('checked', fullWidth['isFull']);
		    	$('#mnu_subwid').val(fullWidth['subWidth']);
		    	$("#el-gen").removeClass("fluid_mmcontainer_12 fluid_mmcontainer_16").addClass("fluid_mmcontainer_" + numcol);
		    	$("#el-gen").html("");
		    	mdMenuLayout.getLayoutHtml(layoutSettingStr);
		    },

		    setStyleHtmlVal: function(setting) {
		    	setting = $.extend({
		    		elsmargin: false,
		    		elsbackground: "",
		    		elsborderw: "",
		    		elsborders: "",
		    		elsborderc: ""
		    	}, setting);
		    	$('input[name="els-margin"]', styleHtml).attr('checked', setting.elsmargin),
		    	$('input[name="els-background"]').val(setting.elsbackground);
		    	$('input[name="els-borderw"]').val(setting.elsborderw);
		    	$('select[name="els-borders"]').val(setting.elsborders);
		    	$('input[name="els-borderc"]').val(setting.elsborderc);
		    },
		    getConfigObject: function(str) {
		    	var setting = [];
		    	var config = $.stringToObject(str);
		    	for (var i = 0; i < config.length; i++) {
		    		rowSetting = {style: null, cols: []};
		    		for(var j = 0; j < config[i].length; j++) {
		    			rowSetting.cols.push({style:null, length: config[i][j]});
		    		}
		    		setting.push(rowSetting);
		    	}
		    	return setting;
		    },
		    getStyleHtmlVal: function() {
		    	return {
		    		elsmargin: $('input[name="els-margin"]', styleHtml).is(':checked') ? true : false,
		    		elsbackground: $('input[name="els-background"]').val(),
		    		elsborderw: $('input[name="els-borderw"]').val(),
		    		elsborders: $('select[name="els-borders"]').val(),
		    		elsborderc: $('input[name="els-borderc"]').val()
		    	};
		    }
		};
	Drupal.menuLayout = mdMenuLayout;
})(jQuery);