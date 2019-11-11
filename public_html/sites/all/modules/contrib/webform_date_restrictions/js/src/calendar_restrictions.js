(function ($) {

  var DateRestrictions = require('./DateRestrictions');

  /**
   * Attach to all webform calendars, to restrict the dates selected.
   */
  Drupal.behaviors.webformDateRestrictionsRestrictCalendar = {
    attach: function (context, settings) {

      $('.webform-date-restrictions-restrict-dates', context).once('webform-date-restrictions', function () {
        var $wrapper = $(this);
        var $calendar = $wrapper.find('.webform-calendar');

        var date_restrictions = new DateRestrictions($wrapper.data('restricted-days'), $wrapper.data('restricted-dates'));
        if ($calendar.length) {
          $calendar.datepicker('option', 'beforeShowDay', function(day) {
            return [date_restrictions.checkDay(day), ''];
          });
        }
      });

    }
  };

})(jQuery);
