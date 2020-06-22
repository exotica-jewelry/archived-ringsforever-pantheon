(function ($) {
  Drupal.behaviors.platformIndicator = {
    attach: function (context, settings) {

      var platformEnvironment = Drupal.settings.environment;
      var platformProjectID = Drupal.settings.project_id;

      $('body').prepend('<div id="platform-indicator">' + platformEnvironment + ' <span id="platform-indicator-infos">' + platformProjectID + '</span></div>');

    }
  };
})(jQuery);
