/**
 * @file
 * Header Functionalities.
 */

$(function () {

  // Sticky Header.
  var stickyHeader = $('.sticky-header');

  if (stickyHeader.length) {

    Drupal.settings.TheMAG.stickyHeaderHeight = stickyHeader.height();

     // Add 'sticky-header-enabled' body class.
    $('body').addClass('sticky-header-enabled');

    // This creates a wrapper element around the header.
    // The wrapper element prevents page content from hiding while the header is in the fixed position.
    stickyHeader.wrap('<div class="sticky-header-wrapper" style="height: ' + Drupal.settings.TheMAG.stickyHeaderHeight + 'px"></div>');
  }

  // Show/Hide header search block by clicking on the search icon.
  $('.toggle-header-search').on('click', function (event) {
    event.preventDefault();
    $(this).toggleClass('active');
    $('.search--wrapper').toggleClass('active');
  });
})
