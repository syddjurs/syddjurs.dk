Drupal.behaviors.os2web_menus = {
  attach: function (context, settings) {

    // Override the default os2web_menus.js code.
    var default_zone_menu_height = jQuery('#zone-menu').outerHeight();
    jQuery('.js-megamenu-toggle').click(function(){

      var $parent = jQuery(this).closest('.megamenu');
      if(!$parent.hasClass('open')){
        jQuery('.megamenu-panel').hide();

        var $megamenu = $parent.find('.megamenu-panel');
        $megamenu.show();
        var megamenu_height = $parent.find('.megamenu-panel').height();
        $megamenu.find('.panel-display').addClass('clearfix');
        jQuery('#zone-menu').animate({'height' : default_zone_menu_height + megamenu_height});
        jQuery('.megamenu').not($parent).removeClass('open');
        $parent.addClass('open');
      }
      return false;
    });

    // Add handling of closing with close button.
    jQuery('.js-megamenu-close').live('click', function(){
      var $parent = jQuery(this).closest('.megamenu');
      if($parent.hasClass('open')){
        $parent.removeClass('open');
        jQuery('#zone-menu').animate({'height' : default_zone_menu_height}, 'swing', function(){
          jQuery('.megamenu-panel').hide();
        });
      }

      return false;
    });

    // Add a close button to all minipanels.
    jQuery('.megamenu-panel').each(function() {
      jQuery('<a></a>').attr('href', '#').addClass('js-megamenu-close').appendTo(this);
    });

    // Hack to split menus in mega menu into several columns.
    // This will only work with a 4 column target.
    // Disabled for node edit, fixes VXY-462-27673
    jQuery('.megamenu-panel ul.menu').each(function() {
      var $parent = jQuery(this).parent();

      var number_of_items = jQuery(this).find('li').length,
          number_of_items_per_column = Math.ceil(number_of_items / 4);

      for (var i = 2; i >= 0; i--) {
        var $ul = jQuery('<ul></ul>').addClass('menu');

        jQuery(this).find('li').slice(0, number_of_items_per_column).prependTo($ul);
        jQuery(this).before($ul);
      }
    });
  }
};
