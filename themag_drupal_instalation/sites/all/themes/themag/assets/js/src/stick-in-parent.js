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

