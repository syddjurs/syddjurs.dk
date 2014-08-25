/**
 * @file os2web_service_popup.js
 * OS2web Service Popup
 */

// TODO: fra til tidspunkter på dagen. Kun hverdage.

(function ($) {

  Drupal.behaviors.os2web_service_popup = {
    attach: function(context, settings) {
      if (Drupal.settings.os2web_service_popup.title &&
          Drupal.settings.os2web_service_popup.body &&
          Drupal.settings.os2web_service_popup.idle_time &&
          Drupal.settings.os2web_service_popup.clock_start &&
          Drupal.settings.os2web_service_popup.clock_stop) {

        var date = new Date(),
            current_time = date.getHours() + ':' + date.getMinutes();

        if(Drupal.settings.os2web_service_popup.clock_start <= current_time &&
           current_time <= Drupal.settings.os2web_service_popup.clock_stop &&
           // Show only on weekdays 0(zero) is sunday.
           $.inArray(date.getDay(), [1,2,3,4,5])) {

          // Add the popup to the DOM.
          $('<div id="os2web_service_popup"><h3>'+Drupal.settings.os2web_service_popup.title+'</h3>'+Drupal.settings.os2web_service_popup.body+'</div>')
            .hide().appendTo('body');

          $(document).idleTimer(Drupal.settings.os2web_service_popup.idle_time);

          $( document ).bind( "idle.idleTimer", function(){
            // User has become idle. Show them a popup. :-)

            // TODO some fancy show... SlideIn etc.
            $('#os2web_service_popup').fadeIn(Drupal.settings.os2web_service_popup.fadein);
          });
          $('#os2web_service_popup').click(function(){
            setTimeout(function(){
              $('#os2web_service_popup').fadeOut(Drupal.settings.os2web_service_popup.fadeout);
            },100);
          });
        }
      }
    }
  };

})(jQuery);
