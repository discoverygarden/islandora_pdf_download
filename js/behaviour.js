/**
 * @file
 * A base JavaScript file for the pdf download functionality.
 */


(function ($) {
  Drupal.behaviors.pdf_download = {
    attach: function (context, settings) {
      window.onload = function() {
        // Kick off the download of this datastream.
        window.location.href = Drupal.settings.islandora_pdf_download.url;
      };
    }
  }
})(jQuery);
