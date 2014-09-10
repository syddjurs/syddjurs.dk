(function ($) {
  Drupal.behaviors.os2web_mobile_theme = {
    attach: function (context, settings) {
      $('[class*=pane-menu-block]').not('.no-toggle').find('h3').each(function(){
        $(this).append('<i class="icon-chevron-down"></i>');

        $(this).wrap('<span class="btn btn-block btn-mini menu-toggle" />');
      });

      $('.menu-toggle').bind('click', function(event){
        $(this).parent().find('[class*=menu-block-OS2Web_mobile]').toggle();
        $(this).parent().find('i').toggleClass('icon-chevron-down').toggleClass('icon-chevron-up');
      });

      $('[class*=menu-block-OS2Web_mobile]').not('.menu-level-3').hide();
      $('.pane-menu-block-os2web-mobile-18').find('i').toggleClass('icon-chevron-down').toggleClass('icon-chevron-up');

      $('[class*=views_slideshow_controls_text_]').addClass('btn');
    }
  };
}(jQuery));
