
// Instantiate fastclick.js
if ('addEventListener' in document) {
  document.addEventListener('DOMContentLoaded', function() {
    FastClick.attach(document.body);
  }, false);
}

// Scripts to add once the page has loaded.
document.addEventListener('DOMContentLoaded', function() {

/**
 * The jQuery plugin namespace.
 * @external "jQuery.fn"
 * @see {@link http://learn.jquery.com/plugins/|jQuery Plugins}
 */

  // Add title attribute to home page featured ring blocks.
  jQuery('.featured-categories__item').attr('title', 'View all titanium rings in this category');

  // Remove image titles when they appear in home page featured ring blocks.
  jQuery('.field-name-field-cat-featured-rings img').attr('title', '');

/**
 * Tooltips
 * @function external: "jQuery.fn".tooltipster
 * @class tooltips
 */

  /**
  * Adding Tooltipster tooltip overlays.
  * @name tooltipster
  *
  * @memberOf tooltips
  * @author Caleb Jacob and Louis Ameline
  */

  // Main menu
  jQuery('.navigation--primary a').tooltipster({
    position: 'bottom'
  });

  // Secondary menu
  jQuery('.navigation--secondary a').tooltipster({
  });

  // Cart block
  jQuery('.block-shopping-cart-block .content a').tooltipster({
  });

  // Home page featured rings
  jQuery('.featured-categories__item').tooltipster({
  });

  // All other links in content and footer areas
  jQuery('.section-content a[title], .section-footer a[title]').tooltipster();

//
// Closing tag
//
});
