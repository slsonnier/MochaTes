(function($) {
"use strict";

/**
 * Show / Hide "Back to Top" button by using Waypoints plugin.
 *
 * @see: http://imakewebthings.com/waypoints/api/waypoint/
 */
$(function() {
  var backToTopWaypoint = new Waypoint({
    element: $('body'),
    handler: function(direction) {
      if(direction == 'down') {
        $('#baack-to-top-button').addClass('active');
      } else {
        $('#baack-to-top-button').removeClass('active');
      }
    },
    offset: '-75%'
  })
});


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

/**
 * Node Functionalities
 */

$(function() {
  // Add class .active to the comments textfield
  $('#comment-form').find('textarea').on('focus', function(){
    $('#comment-form').addClass('active');
  });
})


/**
 * Setting up and initialise the PhotoSwipe gallery.
 *
 * @see http://photoswipe.com/documentation/options.html
 */

$(function() {
  if (typeof Drupal.settings.mgPhotoswipe != "undefined") {

    $.each(Drupal.settings.mgPhotoswipe, function(galleryIndex, gallery) {
      var galleryWrapper = $('#mg-gallery-' + gallery.galleryId);
      galleryWrapper.find("img").each(function( imageIndex, image ) {
  			$( this ).on("click", function() {
  				openGallery(galleryWrapper, gallery.slides, gallery.galleryId, imageIndex);
  			});
    	});
    });

  	function openGallery(galleryWrapper, galleryItems, galleryId, imageIndex) {
      var pswpElement = document.querySelectorAll('.pswp')[0];

      var options = {
  			galleryUID: galleryId,
  			index: imageIndex,
  			history: false,
  		};

  		var gallery = new PhotoSwipe( pswpElement, PhotoSwipeUI_Default, galleryItems, options);
  		gallery.init();
    }
  }
});


/**
 * Poll Functionalities
 */

$(function() {
  if($('.poll').length > 0) {
    var pollInview = new Waypoint.Inview({
      element: $('.poll')[0],
      enter: function(direction) {
        $(this.element).addClass('active');
      }
    })
  }
});


/**
 * Setting up and initialise Sidr responsive menu.
 *
 * @see http://www.berriart.com/sidr/
 */

$(function() {
  $('#responsive-menu-button').sidr({
    name: 'responsive-main-navigation',
    renaming: false,
    displace: true,
    source: '#responsive-navigation, #social-menu--wrapper',
    onOpen: sidrOpen,
    onOpenEnd: sidrOpenEnd,
    onClose: sidrClose
  });

  // Close on resize
  $(window).resize(function() {
    $.sidr('close' , 'responsive-main-navigation');
  });

  function sidrOpen() {
    $('.responsive-menu-overlay').addClass('active');
  }

  function sidrOpenEnd() {
    $('.responsive-menu-overlay').on('click', function() {
      $(this).removeClass('active');
        $.sidr('close' , 'responsive-main-navigation');
    });
  }

  function sidrClose() {
    $('.responsive-menu-overlay').removeClass('active');
  }

  // Multilevel menu navigation in Sidr menu
  $('.sidr').find('li.expanded').each(function(index, menuItem) {
    $(this).find('> a, > .nolink').on('click', function(event) {
      event.preventDefault();
      $(this).toggleClass('active');
      $(menuItem).find('> ul.menu').toggleClass('open');
    })
  });
});


/**
 * Initialising Smooth Scroll plugin.
 *
 * @see: https://github.com/cferdinandi/smooth-scroll
 */

smoothScroll.init({
    selector: '[data-scroll]', // Selector for links (must be a class, ID, data attribute, or element tag)
    selectorHeader: null, // Selector for fixed headers (must be a valid CSS selector) [optional]
    speed: 500, // Integer. How fast to complete the scroll in milliseconds
    easing: 'easeInOutCubic', // Easing pattern to use
    offset: 0, // Integer. How far to offset the scrolling anchor location in pixels
    callback: function ( anchor, toggle ) {} // Function to run after scrolling
});


/**
 * Initializing Sticky-Kit plugin.
 * Use .stick-in-parent class on any element to stuck inside their parent element.
 *
 * @see: http://leafo.net/sticky-kit
 */

$(function() {

  var options = {};

  if(Drupal.settings.TheMAG.sticky_header == 1) {
    options.offset_top = Drupal.settings.TheMAG.stickyHeaderHeight;
  }

  // Enable sticky elements only if Panels IPE is not active.
  if(Drupal.settings.PanelsIPECacheKeys == null) {
    $('.stick-in-parent').stick_in_parent(options);
  }
});
}(jQuery));
