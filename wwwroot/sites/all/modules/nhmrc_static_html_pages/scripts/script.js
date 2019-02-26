//Smooth Scrolling
$(document).ready(function() {
    $('a[href^="#"]').filter(':not([href="#"])').on('click', function(e) {
        e.preventDefault();

        var target = this.hash;
        var $target = $(target);

        $('html, body').stop().animate({
            'scrollTop': $target.offset().top
        }, 900, 'swing', function() {
            // window.location.hash = target; // adds id to URL
        });
    });
});

// open/close vertical menu
$('#open').click(function(e) {
    e.preventDefault();
    $('.menu').toggleClass('open-menu', 2000);
});

//Social Menu
$(function() {
    $(".addtoany-icons").hide();
    $(".addtoany-icons a").last().blur(function() {
        $(".socialOpen").focus();
    });
    $(".addtoany-icons").attr('aria-expanded', 'false');
});

// open/close social menu
$('.socialOpen').click(function(e) {

    e.preventDefault();
    var $iconContainer = $(".addtoany-icons");

    if ($(".socialShare").hasClass('open-social')) {
        $iconContainer.attr('aria-expanded', 'false');
        setTimeout(
            function()
            {
                $iconContainer.hide();
                //do something special
            }, 300);
    }else{
        $iconContainer.attr('aria-expanded', 'true');
        $iconContainer.show();
    }

    $('.socialShare').toggleClass('open-social', 2000);

});

$(function() {
    //add callback show tooltip
    var showPopover = $.fn.popover.Constructor.prototype.show;
    $.fn.popover.Constructor.prototype.show = function() {
        showPopover.call(this);
        if (this.options.showCallback) {
            this.options.showCallback.call(this);
        }
    };
    //add callback hide tooltip
    var hidePopover = $.fn.popover.Constructor.prototype.hide;
    $.fn.popover.Constructor.prototype.hide = function() {
        if (this.options.hideCallback) {
            this.options.hideCallback.call(this);
        }
        hidePopover.call(this);
    };

    //$('[data-toggle="popover"]').popover('show'); // Make tooltip show for testing

    //attach a tooltip to popover items
    $('[data-toggle="popover"]').popover({
        container: 'body',
        trigger: 'manual',
        showCallback : function() {
            //open popover links in a different broswer window
            $('.popover a').on('click', function (e) {
                //open links in tooltips in a new window
                e.preventDefault();
                window.open(this.href);
            });
        }
    });

    //Manually Trigger popover
    $('[data-toggle="popover"]').on('focus', function () {
        $(this).popover('show');
    });

    //Manually hide popover on clicking anything except the popup bubble
    $('body').on('click', function (e) {
        $('[data-toggle="popover"]').each(function () {
            //the 'is' for buttons that trigger popups
            //the 'has' for icons within a button that triggers a popup
            if (!$(this).is(e.target) && $(this).has(e.target).length === 0 && $('.popover').has(e.target).length === 0) {
                $(this).popover('hide');
            }
        });
    });

    //Manually Hide Popover when tabbing off of a popup item
    $('[data-toggle="popover"]').keydown(function (e) {
        if (e.keyCode === 9) {
            $(this).popover('hide');
        }
    });

//        Add keyboard support to tooltips (click enter when a tooltip item is highlighted)
    $('[data-toggle="popover"]').filter(':not([href="#"])').keydown(function (e) {
        if (e.keyCode === 13) {
            //if this href does not = #
//              window.location = this.href; //same window
            window.open(this.href); //new window
        }
    });
    //Stop popup item form going to href on click
    $('[data-toggle="popover"]').on('click', function (e) {
        e.preventDefault();
    });

    //In Firefox
    //if(navigator.userAgent.toLowerCase().indexOf('firefox') > -1)
    //{
    //    //hen the plus icon is selected, move focus to the popover item
    //    $(".plus-icon").on('click', function() {
    //        var $this = $(this);
    //        setTimeout(function() {
    //            $this.parents('[data-toggle="popover"]').focus();
    //        }, 130);
    //    });
    //}

});

function ScrollStart() {
    //start of scroll event for iOS
    $('.menu').removeClass('open-menu');
}
if (document.addEventListener) {
    document.addEventListener("touchmove", ScrollStart, false);
}

