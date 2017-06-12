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

