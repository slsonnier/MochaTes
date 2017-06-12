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

