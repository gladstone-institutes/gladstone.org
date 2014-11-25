Drupal.settings.spotlight_settings = Drupal.settings.spotlight_settings || {};

(function ($) {

 /**
  * Get the total displacement of given region.
  *
  * @param region
  *   Region name. Either "top" or "bottom".
  *
  * @return
  *   The total displacement of given region in pixels.
  */
  if (Drupal.overlay) {
    Drupal.overlay.getDisplacement = function (region) {
      var displacement = 0;
      var lastDisplaced = $('.overlay-displace-' + region + ':last');
      if (lastDisplaced.length) {
        displacement = lastDisplaced.offset().top + lastDisplaced.outerHeight();

        // In modern browsers (including IE9), when box-shadow is defined, use the
        // normal height.
        var cssBoxShadowValue = lastDisplaced.css('box-shadow');
        var boxShadow = (typeof cssBoxShadowValue !== 'undefined' && cssBoxShadowValue !== 'none');
        // In IE8 and below, we use the shadow filter to apply box-shadow styles to
        // the toolbar. It adds some extra height that we need to remove.
        if (!boxShadow && /DXImageTransform\.Microsoft\.Shadow/.test(lastDisplaced.css('filter'))) {
          displacement -= lastDisplaced[0].filters.item('DXImageTransform.Microsoft.Shadow').strength;
          displacement = Math.max(0, displacement);
        }
      }
      return displacement;
    };
  };

 /**
  * Update Settings for timeago
  */
  jQuery.timeago.settings.strings = {
          prefixAgo: null,
          prefixFromNow: null,
          suffixAgo: '',
          suffixFromNow: "from now",
          seconds: 'less than a minute',
          minute:  'about a minute',
          minutes: '<div class="time">%d</div><div class="unit">minutes ago</div>',
          hour:    '<div class="timestring">about an hour</div>',
          hours:   '<div class="time">%d</div><div class="unit">hours ago</div>',
          day:     '<div class="time">%d</div><div class="unit">day ago</div>',
          days:    '<div class="time">%d</div><div class="unit">days ago</div>',
          month:   '<div class="timestring">about a month ago</div>',
          months:  '<div class="time">%d</div><div class="unit">months ago</div>',
          year:    '<div class="timestring">about a year</div>',
          years:   '<div class="time">%d</div><div class="unit">years ago</div>',
          wordSeparator: " ",
          numbers: []
  };
  
  /**
  * Form behavior for Timeago
  * note: http://blog.amazeelabs.com/en/drupal-behaviors-quick-how
  */
  Drupal.behaviors.timeAgo = {
    attach: function (context, settings) {
      $('div.timeago').timeago();
    }
  }
 
})(jQuery);
