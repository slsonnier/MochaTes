/**
 * @file
 * Gulp Tasks
 */

var gulp = require('gulp');
var gutil = require('gulp-util');
var bower = require('gulp-bower');
var mainBowerFiles = require('main-bower-files');
var notify = require('gulp-notify');
var sourcemaps = require('gulp-sourcemaps');
var sass = require('gulp-sass');
var autoprefixer = require('gulp-autoprefixer');
var rename = require('gulp-rename');
var concat = require('gulp-concat');
var uglify = require('gulp-uglify');
var iife = require("gulp-iife");
var svgmin = require('gulp-svgmin');


// Configuration Variables
// ------------------------------.
var bowerDir = 'bower_components' 
    assetsDir = 'assets';

var config = {
  'scss': {
    'src': assetsDir + '/scss/*.scss',
    'watchDir': assetsDir + '/scss/**/*.*',
    'includePath': assetsDir + '/vendor',
    'sourcemaps': 'sourcemaps',
    'dest': assetsDir + '/css'
  },
  'js': {
    'src': assetsDir + '/js/src/**/*.js',
    'dest': {
      "src" : assetsDir + "/js",
      "min" : assetsDir + "/js"
    }
  },
  'svg': {
    'src': assetsDir + '/svg/**.*',
    'dest': assetsDir + '/images',
  },
  'icons': {
    'src': bowerDir + '/font-awesome/fonts/**.*',
    'dest': assetsDir + '/fonts',
  }
}


// Bower Components
// ------------------------------.
gulp.task('bower', function (cb) { 
  return bower()
    .pipe(gulp.dest(bowerDir)) ;
  cb(err);
});

gulp.task('bower-files', ['bower'], function () {
  return gulp.src(mainBowerFiles(/* options */), { base: bowerDir })
    .pipe(gulp.dest(assetsDir + '/vendor'))
});


// Fonts & Icons
// ------------------------------.
gulp.task('icons', ['bower'], function () {
  return gulp.src(config.icons.src)
    .pipe(gulp.dest(config.icons.dest))
});


// Processing SCSS/SASS
// ------------------------------.
gulp.task('scss', function () {
  return gulp.src(config.scss.src)
    .pipe(sourcemaps.init())
    .pipe(sass({
        outputStyle: 'expanded',
        includePaths: config.scss.includePath
    }))
    .on("error", notify.onError(function (error) {
      return "Error: " + error.message;
     }))
    .pipe(autoprefixer('last 5 versions', 'ie 9', 'ie 10'))
    .pipe(sourcemaps.write(config.scss.sourcemaps))
    .pipe(gulp.dest(config.scss.dest))
});


// Processing JavaScripts
// ------------------------------.
gulp.task('js', function () {
  return gulp.src(config.js.src)
    .pipe(concat('main.js'))
    .pipe(iife({
        useStrict: true,
        trimCode: true,
        prependSemicolon: false,
        bindThis: false,
        params: ["$"],
        args: ["jQuery"]
      }))
    .pipe(gulp.dest(config.js.dest.src))
    .pipe(rename({suffix: '.min'}))
    .pipe(uglify())
    .pipe(gulp.dest(config.js.dest.min))
});


// SVG Optimization
// ------------------------------.
gulp.task('svg-min', function () {
  return gulp.src(config.svg.src)
    .pipe(svgmin())
    .pipe(gulp.dest(config.svg.dest));
});


// Watch
// ------------------------------.
gulp.task('watch', function () {
  gulp.watch(config.scss.watchDir, ['scss']);
  gulp.watch(config.js.src, ['js']);
})


// Default Gulp Task
// ------------------------------.
gulp.task('default', [ 'bower', 'bower-files', 'icons' ]);
