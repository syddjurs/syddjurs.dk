// Configurations
var pkgjson = require('./package.json');
var config = {
  pkg      : pkgjson,
  directory: {
    vendor: './src/vendor',
    src   : './src',
    dist  : './dist'
  }
};
var module;

// Grunt
module.exports = function (grunt) {
  'use strict';

  // Configurations
  var gruntConfig = grunt.file.readJSON('./src/grunt/config.json', { encoding: 'utf8' });

  // Setup
  grunt.initConfig({
    config: config,
    pkg   : config.pkg,

    clean: {
      css: '<%= config.directory.dist %>/css',
      js : '<%= config.directory.dist %>/js'
    },

    less: {
      preprod: {
        options: {
          strictMath       : true,
          sourceMap        : true,
          outputSourceFiles: true,
          sourceMapURL     : '<%= config.directory.dist %>/css/stylesheet.css.map',
          sourceMapFilename: '<%= config.directory.dist %>/css/stylesheet.css.map'
        },
        src    : '<%= config.directory.src %>/less/stylesheet.less',
        dest   : '<%= config.directory.dist %>/css/stylesheet.css'
      },
      prod: {
        options: {
          strictMath       : true,
          sourceMap        : false,
          outputSourceFiles: true,
          sourceMapURL     : '<%= config.directory.dist %>/css/stylesheet.css.map',
          sourceMapFilename: '<%= config.directory.dist %>/css/stylesheet.css.map'
        },
        src    : '<%= config.directory.src %>/less/stylesheet.less',
        dest   : '<%= config.directory.dist %>/css/stylesheet.css'
      }
    },

    concat: {
      options: {
        sourceMap   : true,
        stripBanners: false
      },
      app     : {
        src : gruntConfig.concat.jsApp,
        dest: '<%= config.directory.dist %>/js/app.js'
      },
      ie9     : {
        src : gruntConfig.concat.jsIe9,
        dest: '<%= config.directory.dist %>/js/ie9.js'
      }
    },

    autoprefixer: {
      app    : {
        options: {
          map: true,
          browsers: gruntConfig.autoprefixer.browsers.other
        },
        src    : '<%= config.directory.dist %>/css/stylesheet.css'
      }
    },

    csslint: {
      options: {
        csslintrc: '<%= config.directory.src %>/less/.csslintrc'
      },
      app    : [
        '<%= config.directory.dist %>/css/stylesheet.css'
      ]
    },

    jshint: {
      options: {
        jshintrc: '<%= config.directory.src %>/js/.jshintrc'
      },
      app    : {
        src: ['<%= config.directory.src %>/js/*.js']
      }
    },

    jscs: {
      options: {
        config: '<%= config.directory.src %>/js/.jscsrc'
      },
      app    : {
        src: '<%= jshint.app.src %>'
      }
    },

    watch: {
      options: {
        dateFormat: function(time) {
          grunt.log.writeln('The watch finished in ' + time + 'ms at' + (new Date()).toString());
          grunt.log.writeln('Waiting for more changes...');
        },
        livereload: true
      },
      less: {
        files: ['<%= config.directory.src %>/less/**/*.less'],
        tasks: ['clean:css', 'less:preprod']
      },
      js  : {
        files: '<%= config.directory.src %>/js/**/*.js',
        tasks: ['clean:js', 'concat']
      }
    }
  });

  // Load
  grunt.loadNpmTasks('grunt-contrib-clean');
  grunt.loadNpmTasks('grunt-contrib-less');
  grunt.loadNpmTasks('grunt-autoprefixer');
  grunt.loadNpmTasks('grunt-contrib-concat');
  grunt.loadNpmTasks('grunt-contrib-csslint');
  grunt.loadNpmTasks('grunt-contrib-jshint');
  grunt.loadNpmTasks('grunt-jscs');
  grunt.loadNpmTasks('grunt-contrib-watch');

  // Register
  grunt.registerTask('default', ['watch']);

  grunt.registerTask('build-preprod', ['clean', 'concat', 'less:preprod']);
  grunt.registerTask('build-prod', ['clean', 'concat', 'less:prod', 'autoprefixer']);
  grunt.registerTask('build', ['clean', 'concat', 'less:prod', 'autoprefixer']);

  grunt.registerTask('build-css', ['clean:css', 'less', 'autoprefixer']);
  grunt.registerTask('build-js', ['clean:js', 'concat']);

  grunt.registerTask('test', ['clean', 'concat', 'jscs', 'jshint', 'less', 'autoprefixer', 'csslint']);
  grunt.registerTask('test-css', ['clean:css', 'less', 'autoprefixer', 'csslint']);
  grunt.registerTask('test-js', ['clean:js', 'concat', 'jscs', 'jshint']);
};
