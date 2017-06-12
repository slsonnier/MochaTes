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

