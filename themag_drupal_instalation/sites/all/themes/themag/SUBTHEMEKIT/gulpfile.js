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


// Watch
// ------------------------------.
gulp.task('watch', function () {
  gulp.watch(config.scss.watchDir, ['scss']);
})


// Default Gulp Task
// ------------------------------.
gulp.task('default', [ 'bower', 'bower-files']);
