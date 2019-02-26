/**
 * Created by 37341 on 7/15/16.
 */
(function ($) {
    Drupal.behaviors.bootstrap_nhmrc_stop = {
        attach: function (context, settings) {

            //Trigger stop video when modal close
            var $div = $('.page-events-archive .view-archive-webinars .modal');
            var observer = new MutationObserver(function(mutations) {
                mutations.forEach(function(mutation) {
                    if (mutation.attributeName === "class") {
                        var attributeValue = $(mutation.target).prop(mutation.attributeName);
                        var video = $(mutation.target.innerHTML).find(".youtube-field-player").attr("src");
                        video += '&showinfo=0';
                        $(".page-events-archive #"+mutation.target.id+" .youtube-field-player").attr("src","");
                        $(".page-events-archive #"+mutation.target.id+" .youtube-field-player").attr("src",video);
                    }
                });
            });

            //Listen every video for me!
            for (i = 0; i < $div.length; i++) {
                observer.observe($div[i],  {
                    attributes: true
                });
            }
        }

    };
})(jQuery);