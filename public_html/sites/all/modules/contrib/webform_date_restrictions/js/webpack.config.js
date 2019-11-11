const webpack = require('webpack');

module.exports = {
  context: __dirname + '/src/',
  entry: './index.js',
  output: {
    path: __dirname,
    filename: 'webform_date_restrictions.restrict-calendar.min.js'
  },
  externals: {
  },
  plugins: [
    new webpack.optimize.UglifyJsPlugin()
  ]
};
