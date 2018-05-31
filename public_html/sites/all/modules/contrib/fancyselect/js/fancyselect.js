(function ($) {
  Drupal.behaviors.fancyselect = {
    attach: function(context, settings) {
      $(Drupal.settings.fancyselectSettings.domSelector).each(function() {
        jQuery(this).fancySelect({
          forceiOS: Drupal.settings.fancyselectSettings.forceiOS,
          includeBlank: Drupal.settings.fancyselectSettings.includeBlank
        }).on('change.fs', function() {
          $(this).trigger('change.$');
        });
      });
    }
  }
}(jQuery));
