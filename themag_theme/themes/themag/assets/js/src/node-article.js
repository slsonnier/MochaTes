/**
 * Node Functionalities
 */

$(function() {
  // Add class .active to the comments textfield
  $('#comment-form').find('textarea').on('focus', function(){
    $('#comment-form').addClass('active');
  });
})

