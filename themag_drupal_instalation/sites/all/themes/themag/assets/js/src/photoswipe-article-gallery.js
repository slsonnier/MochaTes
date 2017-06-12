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

