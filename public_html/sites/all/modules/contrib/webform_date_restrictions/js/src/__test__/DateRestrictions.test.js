var DateRestrictions = require('../DateRestrictions');

describe('date restrictions', function () {

  test('null restrictions allow all days', function () {
    var date = new DateRestrictions(null, null);
    expect(date.checkDay(new Date('Jul 17 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 18 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 19 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 20 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 21 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 22 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 23 2017'))).toEqual(true);
  });

  test('restricted day of the week', function() {
    var date = new DateRestrictions(['sunday', 'wednesday'], null);
    expect(date.checkDay(new Date('Jul 17 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 18 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 19 2017'))).toEqual(false);
    expect(date.checkDay(new Date('Jul 20 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 21 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 22 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 23 2017'))).toEqual(false);
  });

  test('restricted dates', function() {
    var date = new DateRestrictions(null, ['2017-7-22', '2017-7-18']);
    expect(date.checkDay(new Date('Jul 17 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 18 2017'))).toEqual(false);
    expect(date.checkDay(new Date('Jul 19 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 20 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 21 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 22 2017'))).toEqual(false);
    expect(date.checkDay(new Date('Jul 23 2017'))).toEqual(true);
  });

  test('combination of restrictions', function() {
    var date = new DateRestrictions(['thursday', 'friday'], ['2017-7-18']);
    expect(date.checkDay(new Date('Jul 17 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 18 2017'))).toEqual(false);
    expect(date.checkDay(new Date('Jul 19 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 20 2017'))).toEqual(false);
    expect(date.checkDay(new Date('Jul 21 2017'))).toEqual(false);
    expect(date.checkDay(new Date('Jul 22 2017'))).toEqual(true);
    expect(date.checkDay(new Date('Jul 23 2017'))).toEqual(true);
  });

});
