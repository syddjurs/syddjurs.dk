/**
 * JS module to calculate date restrictions.
 */
var DateRestrictions = function (days, dates) {
  this.days = days;
  this.dates = dates;
};

/**
 * Check if a given day falls within our date restrictions.
 */
DateRestrictions.prototype.checkDay = function (day) {
  var days = [
    'sunday',
    'monday',
    'tuesday',
    'wednesday',
    'thursday',
    'friday',
    'saturday'
  ];
  if (this.days && this.days.indexOf(days[day.getDay()]) !== -1) {
    return false;
  }
  var date_string = [day.getFullYear(), day.getMonth() + 1, day.getDate()].join('-');
  if (this.dates && this.dates.indexOf(date_string) !== -1) {
    return false;
  }
  return true;
};

module.exports = DateRestrictions;
