/**
 * @file
 * script.js
 */
jQuery(document).ready(function () {
    var slideNavItems = jQuery('.custom-slideshow .item-bg');
    slideNavItems.each(function(k,v) {
        jQuery(v).parent().parent().parent().css('background-image','url('+jQuery(v).attr("title")+')');
    });

    jQuery('.billedrotator').mouseover(function() {
        jQuery('.custom-slideshow .active').addClass('hover');
        jQuery('#views_slideshow_cycle_main_os2web_base_panels_view_rotating-block').addClass('hover');
        jQuery('#views_slideshow_cycle_main_os2web_base_panels_view_rotating-block_1').addClass('hover');
    }).mouseout(function() {
        jQuery('.custom-slideshow .hover').removeClass('hover', 500);
    });

    jQuery('.pane-os2web-base-panels-view-newslist ul li').not(':last-child').each(function(k,v) {
        jQuery(v).find('.news-list-next').html(jQuery(v).next().find('.news-list-right').html());
    });

    if(jQuery('#region-sidebar-first .active').children('.menu').length > 0) {
      jQuery('#region-sidebar-first .active').children('.menu').addClass('menuActive');
    } else {
      jQuery('#region-sidebar-first .active').parent().addClass('menuActive');
    }

    jQuery('.vis-andre-sites a, .skjul-andre-sites a').click(function(event) {
        event.preventDefault();
        jQuery('#'+jQuery(this).data('target')).toggle();
        jQuery('.vis-andre-sites a').toggle();
    });

    jQuery('#edit-field-os2web-hearings-type-value').yaselect();


    // Prerendering all qtips removes a glitch.
    jQuery.each(Drupal.settings.menuMinipanels.panels,function(i){
        this.prerender = true;
    });

    MenuMiniPanels.setCallback('beforeShow', function(qTip, event, content) {
        jQuery('.minipanel-processed').each(function(i){
            jQuery(this).qtip('api').options.show.delay = '0';
            jQuery(this).qtip('api').options.show.effect.type = 'false';
            jQuery(this).qtip('api').options.show.effect.length = '0';
        });
    });

    MenuMiniPanels.setCallback('beforeHide', function(qTip, event, content) {
        setTimeout(function() {
            if (!jQuery('.qtip-active').length) {
                jQuery('.minipanel-processed').each(function(i){
                    jQuery(this).qtip('api').options.show.delay = '500';
                    jQuery(this).qtip('api').options.show.effect.type = 'fade';
                    jQuery(this).qtip('api').options.show.effect.length = '100';
                });
            }
        }, 1000);
    });

    jQuery('ul.nice-menu').addClass("top_menu_down");
    jQuery('ul.nice-menu').removeClass('nice-menu');

    // Add _blank to external links.
    for (var links = document.links, i = 0, a; a = links[i]; i++) {
      if (a.host !== location.host) {
       a.target = '_blank';
      }
    }

    jQuery('.top_menu_down li.menuparent').click(function(){
      jQuery('.top_menu_down li ul').hide();

      var $children = jQuery(this).find('ul');
      if($children.hasClass('open')){
        $children.hide();
        $children.removeClass('open');
      }
      else {
        jQuery('.top_menu_down li ul').removeClass('open');
        $children.addClass('open');
        $children.show();
        /*$children.mouseleave(function(event) {
          $children.hide();
          $children.removeClass('open');
        });*/
      }
    });

});

// Remove mouseover a.addthis_button_compact 
if (typeof addthis_config !== "undefined") {
  addthis_config.ui_click = true;
  addthis_config.ui_offset_left = -30;
  addthis_config.ui_offset_top = -30;
  addthis_config.ui_hover_direction = -1;
}
else {
  var addthis_config = {
    ui_click: true,
    ui_offset_left: -30,
    ui_offset_top: -30,
    ui_hover_direction: -1,
  };
}

