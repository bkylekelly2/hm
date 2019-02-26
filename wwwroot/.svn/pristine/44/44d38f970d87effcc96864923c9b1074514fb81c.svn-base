var cleanCss = require('gulp-clean-css');
var gulp = require('gulp');
var less = require('gulp-less');
var minify = require('gulp-minify');
var cached = require('gulp-cached');
var uglify = require('gulp-uglify');



/************Working Tasks************/

gulp.task('less', function() {
    return gulp.src('less/style.less')
        .pipe(less())
        .pipe(cleanCss())
        .pipe(gulp.dest('css'))
});
gulp.task('less-print', function() {
    return gulp.src('less/print.less')
        .pipe(less())
        .pipe(cleanCss())
        .pipe(gulp.dest('css'))
});
gulp.task('js', function() {
    return gulp.src('js/**/*.js')
        .pipe(minify())
        .pipe(cached('script'))
        .pipe(uglify())
        .pipe(gulp.dest('js'))
});