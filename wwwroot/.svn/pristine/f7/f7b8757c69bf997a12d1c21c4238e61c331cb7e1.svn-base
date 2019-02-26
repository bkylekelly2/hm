(function ($) {
    
    
    
    Drupal.behaviors.gaTracking = {
        attach: function(context) {
        // Track submission events.
        $('form#nhmrc-custom-functions-cform', context).submit(function() {
                ga('send', {hitType: 'event', eventCategory: 'Webform', eventAction: 'Form Submitted', eventLabel: 'New Submission for ' + $(this).attr("id")});
            });
        }
    };
    
    Drupal.behaviors.bootstrap_nhmrc = {
		attach: function (context, settings) {
            
            //show/hide popover for calendar
            $('.page-calendar .calendar-popover button.calendar-tooltip').popover();
            $('body').on('click', function (e) {
                if ($(e.target).data('toggle') !== 'popover'
                    && $(e.target).parents('[data-toggle="popover"]').length === 0
                    && $(e.target).parents('.popover.in').length === 0) {
                    $('[data-toggle="popover"]').popover('hide');
                }
            });
            
            // 508 Esc popover
            $('.page-calendar .calendar-popover button.calendar-tooltip').keyup(function (e) {
                if (e.keyCode == 27){
                    $(this).popover('hide');
                }
            });
		    
		    //
            $(window).scroll(function () {
                //if you hard code, then use console
                //.log to determine when you want the
                //nav bar to stick.
                // console.log($(window).scrollTop())
                if ($(window).scrollTop() > 132) {
                    $('.navbar').addClass('navbar-fixed');
                }
                if ($(window).scrollTop() < 133) {
                    $('.navbar').removeClass('navbar-fixed');
                }
            });
             
            
            //Homepage down arrow
            $('.home-bg-text a[href^="#"]').filter(':not([href="#"])').on('click', function(e) {
                e.preventDefault();
                
                var target = this.hash;
                var $target = $(target);
                
                $('html, body').stop().animate({
                    'scrollTop': $target.offset().top
                }, 900, 'swing', function() {
                });
            });
            
            
            // Implement parent-invisible class to apply to any page element that need to hide at parent level
            $('.parent-invisible').parent().hide();
            
            setInterval(function() {
                //Adjust homepage blocks position for responsive
                var r = $("div.home-bg-area").outerHeight();
    
                $(".page-home .next-arrow").css('top',  r/1.1 + 'px');
                $(".page-home .btn-about").css('top',  r/1.3 + 'px');
                //$(".page-home .first-h3").css('top',  r/2.8 + 'px');
    
                if (r < 450) {
                    $(".page-home .first-h3").css('top',  r/1.95 + 'px');
                    $(".home-bg-text .first-h3").removeClass('very-small-font');
                    $(".home-bg-text .first-h3").addClass('extra-small-font');
                    $(".page-home #totalWrapper > .main-container").css('margin-top',  r/1.17 + 'px');
                } else if (r < 660) {
                    $(".page-home .first-h3").css('top',  r/2.2 + 'px');
                    $(".home-bg-text .first-h3").addClass('very-small-font');
                    $(".home-bg-text .first-h3").removeClass('extra-small-font')
                    $(".page-home #totalWrapper > .main-container").css('margin-top',  r/1.17 + 'px');
                } else if (r < 700) {
                    $(".page-home #totalWrapper > .main-container").css('margin-top',  r/1.17 + 'px');
                    $(".page-home .first-h3").css('top',  r/2.9 + 'px');
                    $(".home-bg-text .first-h3").removeClass('very-small-font');
                } else if (r < 800) {
                    $(".page-home #totalWrapper > .main-container").css('margin-top',  r/1.14 + 'px');
                    $(".page-home .first-h3").css('top',  r/2.8 + 'px');
                    $(".home-bg-text .first-h3").removeClass('very-small-font');
                } else if (r < 900) {
                    $(".page-home #totalWrapper > .main-container").css('margin-top',  r/1.12 + 'px');
                    $(".page-home .first-h3").css('top',  r/2.8 + 'px');
                    $(".home-bg-text .first-h3").removeClass('very-small-font');
                } else {
                    $(".page-home #totalWrapper > .main-container").css('margin-top',  r/1.1 + 'px');
                    $(".page-home .first-h3").css('top',  r/2.8 + 'px');
                    $(".home-bg-text .first-h3").removeClass('very-small-font');
                }
            }, 10);
            
            

            //fix list-inline issue on mobile
            $('.page-calendar .calendar-popover').css( "display", "inline-block" );
            
            //Rm redundant delimiter
            $('body.page-calendar-month div.breadcrumb span.last').prev('span.delimiter').addClass('element-invisible');
            $('body.page-calendar-month .breadcrumb li:last-child').addClass('element-invisible');

            //Section 508, Replace empty th
            $('.webform-client-form fieldset.webform-component-fieldset .fieldset-wrapper .webform-component-webform_grid > table > thead > tr > th.webform-grid-question').replaceWith('<td class="webform-grid-question"></td></td>');
            //$('.webform-client-form fieldset.webform-component-fieldset table > thead > tr > th:first-of-type').replaceWith('<td class="webform-grid-question"></td></td>');

            //Section 508, Fix missing label
            $(".page-library input[value='SIMPLE_SRCH']").attr('id', 'simpleSearch');
            $(".page-library #simpleSearch").before('<label class="ui-helper-hidden-accessible" for="simpleSearch">Simple Search</label>');
            
            //508 Missing first level heading
            $("body.page-home").prepend('<h1 class="element-invisible">Healthy Marriage and Families Home</h1>');

            //508 Orphaned labels
            $(".page-node-add-event #edit-field-date-und-0-value2-datepicker-popup-0").parent().prev().remove();
            $(".page-node-add-event #edit-field-date-und-0-value2").parent().prev().attr("for","edit-field-date-und-0-value2-datepicker-popup-0");
            $(".page-node-add-event #edit-field-website-und-0-url").parent().prev().remove();
            $(".page-node-add-event #field-website-add-more-wrapper > div > .control-label").attr("for","edit-field-website-und-0-url");
            $(".page-node-add-event #edit-field-submitter-website-und-0-url").parent().prev().remove();
            $(".page-node-add-event #field-submitter-website-add-more-wrapper > div > .control-label").attr("for","edit-field-submitter-website-und-0-url");
            
            // Section 508, Orphaned form label when Add Event
            var replaceTag = 'span';
            
            // Replace all a tags with the type of replaceTag
            $('.page-node-add-event #edit-revision-information > .fieldset-wrapper > .form-item-revision-operation > .control-label').each(function() {
                var outer = this.outerHTML;
                
                // Replace opening tag
                var regex = new RegExp('<' + this.tagName, 'i');
                var newTag = outer.replace(regex, '<' + replaceTag);
                
                // Replace closing tag
                regex = new RegExp('</' + this.tagName, 'i');
                newTag = newTag.replace(regex, '</' + replaceTag);
                
                $(this).replaceWith(newTag);
            });

            // Section 508, Orphaned form label
            var replacementTag = 'legend';

            // Replace all a tags with the type of replacementTag
            $('.webform-client-form fieldset.webform-component-fieldset .fieldset-wrapper .webform-component-checkboxes > label.control-label').each(function() {
                var outer = this.outerHTML;

                // Replace opening tag
                var regex = new RegExp('<' + this.tagName, 'i');
                var newTag = outer.replace(regex, '<' + replacementTag);

                // Replace closing tag
                regex = new RegExp('</' + this.tagName, 'i');
                newTag = newTag.replace(regex, '</' + replacementTag);

                $(this).replaceWith(newTag);
            });
            $('.webform-client-form fieldset.webform-component-fieldset .fieldset-wrapper .webform-component-radios > label.control-label').each(function() {
                var outer = this.outerHTML;

                // Replace opening tag
                var regex = new RegExp('<' + this.tagName, 'i');
                var newTag = outer.replace(regex, '<' + replacementTag);

                // Replace closing tag
                regex = new RegExp('</' + this.tagName, 'i');
                newTag = newTag.replace(regex, '</' + replacementTag);

                $(this).replaceWith(newTag);
            });
            $('.webform-client-form fieldset.webform-component-fieldset .fieldset-wrapper .webform-component-webform_grid > label.control-label').each(function() {
                var outer = this.outerHTML;

                // Replace opening tag
                var regex = new RegExp('<' + this.tagName, 'i');
                var newTag = outer.replace(regex, '<' + replacementTag);

                // Replace closing tag
                regex = new RegExp('</' + this.tagName, 'i');
                newTag = newTag.replace(regex, '</' + replacementTag);

                $(this).replaceWith(newTag);
            });
            $('.page-node-add-event section.col-md-12 form#event-node-form #edit-field-category-of-event .form-item > label.control-label').each(function() {
                var outer = this.outerHTML;

                // Replace opening tag
                var regex = new RegExp('<' + this.tagName, 'i');
                var newTag = outer.replace(regex, '<' + replacementTag);

                // Replace closing tag
                regex = new RegExp('</' + this.tagName, 'i');
                newTag = newTag.replace(regex, '</' + replacementTag);

                $(this).replaceWith(newTag);
            });
            $('.page-node-add-event section.col-md-12 form#event-node-form #edit-field-type-of-event .form-item > label.control-label').each(function() {
                var outer = this.outerHTML;

                // Replace opening tag
                var regex = new RegExp('<' + this.tagName, 'i');
                var newTag = outer.replace(regex, '<' + replacementTag);

                // Replace closing tag
                regex = new RegExp('</' + this.tagName, 'i');
                newTag = newTag.replace(regex, '</' + replacementTag);

                $(this).replaceWith(newTag);
            });
            $('.page-node-add-event fieldset#edit-body-und-0-format #edit-body-und-0-format-help').each(function() {
                var outer = this.outerHTML;
                
                // Replace opening tag
                var regex = new RegExp('<' + this.tagName, 'i');
                var newTag = outer.replace(regex, '<' + replacementTag);
                
                // Replace closing tag
                regex = new RegExp('</' + this.tagName, 'i');
                newTag = newTag.replace(regex, '</' + replacementTag);
                
                $(this).replaceWith(newTag);
            });
            
            $('.page-node-add-event div#edit-field-category-of-event div.form-item-field-category-of-event-und').replaceWith(function(){
                var fieldset = $("<fieldset>", {html: $(this).html()});
                $.each(this.attributes, function(i, attribute){
                    fieldset.attr(attribute.name, attribute.value);
                });
                return fieldset;
            });
            
            $('.page-node-add-event div#edit-field-type-of-event div.form-item-field-type-of-event-und').replaceWith(function(){
                var fieldset = $("<fieldset>", {html: $(this).html()});
                $.each(this.attributes, function(i, attribute){
                    fieldset.attr(attribute.name, attribute.value);
                });
                return fieldset;
            });

            //show/hide draggable views for the accordian
			$('.view-accordion .view-footer .showhidefooter').on('click', function(e){
				e.preventDefault();
				$(this).parent().next().slideToggle();
			});

			//Add the class of first-p to the first paragraph on a page
			$('.main-container p:first').addClass('first-p');
			$('.page-search .main-container p:first, .node-type-archived-webinars p:first, .node-type-event p:first, .page-library-search-results p:first, .node-type-resource p:first').removeClass('first-p');

			// add class "ios" if on an ios device
			var device = navigator.userAgent.toLowerCase();
			var ios = device.match(/(iphone|ipod|ipad)/);
			if (ios) {
			     $("body").addClass("ios");
			}

			//fix boostrap menu on touch divices
			$('.dropdown-toggle').click(function(e) {
				e.preventDefault();
					setTimeout($.proxy(function() {
						if ('ontouchstart' in document.documentElement) {
						$(this).siblings('.dropdown-backdrop').off().remove();
					}
				}, this), 0);
			});
			//SRT files open in a new window
			$('a[href$=".srt"]').each(function(){$(this).attr({ target: "_blank" });});


			// popup survey
			var cookieVal = $.cookie("clickpop");  //grab the cookie

			if( cookieVal === "2" ){ //ready to pop

				var triggereElement = $('.popitup a');
				var minutesToDelay = .02;
		        var yearsToExpiration = 10;

		        //set expiration
		        var expires = new Date();
		        expires.setYear(expires.getFullYear() + yearsToExpiration);
				//popup
				function popit() {
					//popup code here
					triggereElement.trigger('click');
					$.cookie("clickpop", 3, { expires: expires , path: '/' });
				}
				//set delay
		        var popupDelay = minutesToDelay * 60000;
				window.setTimeout(popit, popupDelay);

			}else if( cookieVal === "3" ){ //never pop again
				//pop up has occured, do nothing
			}else{ //count page loads
				if( cookieVal === null ) {   //see if it is null
					$.cookie( 'clickpop', '0',  { expires: 7, path: '/' } );  //set default value
					cookieVal = 0;  //set the value to zero
				}
				var cookieValue = parseInt(cookieVal,10);  //convert it to number
				cookieValue++;  //increment the value
				$.cookie("clickpop", cookieValue, { expires: 7 , path: '/' }); //save new value
			}

			//on clicking skip link move focus to main content
			$("#skip-link a").click(function () {
				$('#main-content').attr('tabIndex', -1).focus();
			});

			//pause on focus & ouline on focus
			var $bootstap_carousel = $(".views-bootstrap-carousel-plugin-style");
			$('.carousel-inner a').focus(function(){
				$bootstap_carousel.carousel('pause').css( "outline", "2px solid #9D2023" );
			}).blur(function() {
				$bootstap_carousel.carousel('cycle').css( "outline", "none" );
			});

			//add a twitter link to the latest tweets section
			// $('.pane-twitter-feed .pane-title').append('<a href="https://twitter.com/MarriageResCtr" style="float:right;"><img src="sites/all/themes/bootstrap_nhmrc/images/icon-twitter.png" alt="Twitter"></a>')
            setTimeout(function() {
                $('.able-seek-head').attr('aria-label','slider');
            }, 100);

            $(".media.media-animated a").on( "focus", function(){
                $(this).parents('.media.media-animated').addClass("focus");
            } );
            $(".media.media-animated a").on( "blur", function(){
                $(this).parents('.media.media-animated').removeClass("focus");
            } );
            
            // if (!$('.field-name-field-description').length) {
            //     $('.field-name-field-youtube').css({"float": "left", "margin-left":"0"});
            // }
            //Zhao, When training event integration-Institute workshop being selected, automatically setTo private
            setInterval(function() {
                if ($("#edit-field-category-of-event-und-training").is(':checked')||$("#edit-field-category-of-event-und-integration-institute").is(':checked')||$("#edit-field-category-of-event-und-workshop").is(':checked')) {
                    $('#edit-field-type-of-event').css("display", "none"); }
                else {
                    $('#edit-field-type-of-event').css("display", "block");
                }
                
                    if ($('#edit-field-type-of-event').css('display') == 'none') {
                        $('#edit-field-type-of-event-und-1').prop("checked", true);
                    }
            }, 1000);
            
            $('.node-type-sns .paragraphs-item-image-title').each(function () {
                var href = $(this).find('a.paragraphs-img-txt-wrapper-link').attr('href');
                $(this).find('.paragraph-image-n-text').wrapInner('<a class="paragraphs-img-txt-wrapper-link" href="'+href+'"></a>');
            });
        }

	};
    Drupal.behaviors.bootstrap_nhmrc_accordion_accessibility = {
        attach: function (context, settings) {
            // Store a reference to the original remove method.
            var originalcollapseMethod = jQuery.fn.collapse;

            // Overriding Bootstrap collapse method.
            jQuery.fn.collapse = function(){
                if ( $(this).css('display') == 'none' ) {
                    $(this).removeClass('display-none');
                }

                // Execute the original method.
                originalcollapseMethod.apply( this, arguments );
            };

            //Vars
            $accordion = $(".accordion");
            $item = $('.accordion-group');
            $heading = $(".accordion-heading a");
            $body = $('.accordion-body');
            $headingWords = $('.words');
            $itemFirst = $item.first().addClass('first');
            $itemLast = $item.last().addClass('last');

            //On pageload
            $accordion.attr({
                'role': "tablist"
            });

            $item.each(function(){
                $this = $(this);
                $thisId = $this.find($body).attr('id');
                $thisIdForHeading = 'heading-' + $thisId;
                $thisIdForBody = $thisId;

                $this.find($heading).attr({
                    'id': $thisIdForHeading,
                    'aria-controls': $thisIdForBody,
                    'role': "tab",
                    'tabindex': "-1",
                    'aria-selected': "false",
                    'aria-expanded': "false"
                });
                $this.find($body).attr({
                    'aria-hidden': "true",
                    'role': "tabpanel",
                    'aria-labelledby': $thisIdForHeading
                }).addClass('display-none');
            });

            $itemFirst.find($heading).attr({
                'tabindex': "0",
                'aria-selected': "true"
            });

            //When the accordion starts to show
            $body.on('show',
                function(e){
                    $heading.attr({
                        'aria-selected': "false",
                        'tabindex': "-1"
                    });
                    $(e.currentTarget).parent().find('.accordion-heading').addClass('active');
                    $(e.currentTarget).parent().find($heading)
                        .attr({
                            'aria-expanded': "true",
                            'aria-selected': "true",
                            'tabindex': "0"
                        });
                    $(e.currentTarget).attr({
                        'aria-hidden': "false"
                    });
                }
            );

            //When the accordion starts to hide
            $body.on('hide',
                function(e){
                    $(e.currentTarget).parent().find('.accordion-heading').removeClass('active');
                    $(e.currentTarget).parent().find($heading)
                        .attr({
                            'aria-expanded': "false"
                        });
                    $(e.currentTarget).attr({
                        'aria-hidden': "true"
                    });
                }
            );

            //After the accordion has hidden completely
            $body.on('hidden',
                function(e){
                     $(e.currentTarget).addClass('display-none');
                }
            );

            function carouselSelect($itemToSelect){
                $heading.attr('tabindex', '-1').attr('aria-selected', 'false').removeClass('selected');
                $itemToSelect.find($heading).attr('tabindex', '0').focus().attr('aria-selected', 'true').addClass('selected');
            }

            //Keyboard Support

            $(document).keydown(function (e) {
                //Prevent page from scrolling down on spacebar when role="tab" is targeted
                var key = e.charCode ? e.charCode : e.keyCode ? e.keyCode : 0;
                if ( (key === 32) && ( $(e.target).is('[role="tab"]') ) ){
                    e.preventDefault();
                }
                //Prevent default on control up when focused on an item
                if ( (e.keyCode === 38 && (navigator.platform.match("Mac") ? e.metaKey : e.ctrlKey)) && $(e.target).is($paneContent.find('a, input')) ){
                    e.preventDefault();
                }
                //Prevent default on control down when focused on an item
                if ( (e.keyCode === 40 && (navigator.platform.match("Mac") ? e.metaKey : e.ctrlKey)) && $(e.target).is($paneContent.find('a, input')) ){
                    e.preventDefault();
                }
                //Prevent default on control left when focused on an item
                if ( (e.keyCode === 37 && (navigator.platform.match("Mac") ? e.metaKey : e.ctrlKey)) && $(e.target).is($paneContent.find('a, input')) ){
                    e.preventDefault();
                }
                //Prevent default on control right when focused on an item
                if ( (e.keyCode === 39 && (navigator.platform.match("Mac") ? e.metaKey : e.ctrlKey)) && $(e.target).is($paneContent.find('a, input')) ){
                    e.preventDefault();
                }
            });


            // Title keydown
            $heading.bind('keydown', function(objEvent) {
                var $this = $(this);
                var $thisItem = $this.parents($item);
                var $prevItem = $thisItem.prev();
                var $nextItem = $thisItem.next();

                if(objEvent.keyCode === 32) { //Clicked Space
                    $this.trigger('click');
                }

                if (objEvent.keyCode === 40 || objEvent.keyCode === 39 ) {  //clicked down arrow || right
                    // Down Arrow
                    objEvent.preventDefault();
                    if($thisItem.is('.last')){
                        carouselSelect($itemFirst);
                    }else{
                        carouselSelect($nextItem);
                    }
                }

                if (objEvent.keyCode === 38 || objEvent.keyCode === 37 ) {  //clicked up arrow || left
                    // up Arrow
                    objEvent.preventDefault();
                    if($thisItem.is('.first')){
                        carouselSelect($itemLast);
                    }else{
                        carouselSelect($prevItem);
                    }

                }

                if (objEvent.keyCode === 36) {  //clicked Home
                    objEvent.preventDefault();
                    carouselSelect($itemFirst);
                }
                if (objEvent.keyCode === 35) {  //clicked end
                    objEvent.preventDefault();
                    carouselSelect($itemLast);
                }

            });

            //Body keydown
            $body.find('a').bind('keydown', function(e){
                var $this = $(this);
                var $thisItem = $this.parents('.accordion-group');

                if (( e.keyCode === 38 ||  e.keyCode === 37 ) && (navigator.platform.match("Mac") ? e.metaKey : e.ctrlKey)) {  //Control + up || Control + left
                    e.preventDefault();
                    carouselSelect($thisItem);
                }

                if (( e.keyCode === 40 || e.keyCode === 39 ) && (navigator.platform.match("Mac") ? e.metaKey : e.ctrlKey)) {   //Control + down || Control + right
                    e.preventDefault();
                    carouselSelect($thisItem.next());
                }

            });

            //events-archive, add x to make it accessible to keyboard only users
            $(".page-events-archive .pane-archive-webinars .view-archive-webinars .views-field-field-youtube .modal-header h3").before('<button type="button" class="close" data-dismiss="modal" aria-hidden="true">×</button>');
        }
    }

    Drupal.behaviors.collapsible_facet = {
      attach: function(context, settings) {
        /*This function could be refactored.
        It does what it needs to do, but it is not the most efficient*/
        var container = '#region-library-search-facet';
        var filterContainer = '.block-facetapi';
        var totalContainer = container + " " + filterContainer;
        var expandAllText = "Expand All";
        var collapseAllText = "Collapse All";
        var expandThisText = "+";
        var collapseThisText = "-";
        var toggleExpandClass = "collapsed";
        var toggleCollapseClass = "expanded";
        //hide all checkboxe lists
        $(totalContainer).children('.facetapi-facetapi-checkbox-links').hide();
        // show checkbox lists that have things checked
        $(':checkbox:checked').parents(totalContainer).children('.facetapi-facetapi-checkbox-links').show();

        var $content = $(totalContainer).children('.facetapi-facetapi-checkbox-links');

        $content.find('a').each(function() {
          var activeFacet;
          if ( $(this).hasClass('facetapi-active') ){
            activeFacet = true;
          }
          if ( activeFacet === true ){
            $('#results').attr('tabIndex', -1).focus();
          }
        });


        //add the toggle switch
        $content.each(function() {
          var $this = $(this);
          var $title = $this.parents(totalContainer).children('.block-title');
          //var $links = $this.find('a');

          $title.attr('tabindex', '0');
          $title.wrapInner("<span class='facet-title'></span>");

          if ( $this.is(':visible') ){
              // handles visible state
              $title.append('</span><span class="facet-toggle ' + toggleCollapseClass + '">' + collapseThisText + '</span>');
          } else {
              // handles hidden state
               $title.append('<span class="facet-toggle ' + toggleExpandClass + '">' + expandThisText + '</span>');
          }

          //$links.href += '#text';
          //console.log($links);
        });

        //Toggle Functionality
        $( ".facet-toggle" ).parent('h2').bind('click', function() {

          var $this = $(this);
          var $toggler = $(this).children( ".facet-toggle" );
          var $content = $this.parents(totalContainer).children('.facetapi-facetapi-checkbox-links');

          if($toggler.text() === expandThisText){
            $toggler.text(collapseThisText).removeClass(toggleExpandClass).addClass(toggleCollapseClass);
            $content.slideDown();
          }else{
            $toggler.text(expandThisText).removeClass(toggleCollapseClass).addClass(toggleExpandClass);
            $content.slideUp();
          }
        });

          // Keybord support
         $( ".facet-toggle" ).parent('h2').bind('keyup', function(objEvent) {
              var $this = $(this);
                if (objEvent.keyCode === 13) {  //clicked enter
                     $this.trigger('click');
                }
          });

        //Expand All Functionality
        $( ".expand-facet" ).click(function(e) {
          e.preventDefault();

          var $this = $(this);
          var $content = $(totalContainer).children('.facetapi-facetapi-checkbox-links');
          var $toggle = $( ".facet-toggle" );

          if($this.text() === expandAllText){
            $this.text(collapseAllText);
            $content.slideDown();
            $toggle.text(collapseThisText).removeClass(toggleExpandClass).addClass(toggleCollapseClass);
          }else{
            $this.text(expandAllText);
            $content.slideUp();
            $toggle.text(expandThisText).removeClass(toggleCollapseClass).addClass(toggleExpandClass);
          }
        });
    
          //Collapse All Functionality
          $( "#block-boxes-facet-collapse-all h2.collapse-facet" ).click(function(e) {
              e.preventDefault();
        
              var $this = $(this);
              var $toggler = $( ".facet-toggle" );
              var $content = $('.facetapi-facetapi-checkbox-links');
    
              if($('#boxes-box-facet_collapse_all .facet-title').text() === expandAllText){
                  $toggler.text(collapseThisText).removeClass(toggleExpandClass).addClass(toggleCollapseClass);
                  $content.slideDown();
                  $( "#boxes-box-facet_collapse_all .facet-title" ).text(collapseAllText);
              }else{
                  $toggler.text(expandThisText).removeClass(toggleCollapseClass).addClass(toggleExpandClass);
                  $content.slideUp();
                  $( "#boxes-box-facet_collapse_all .facet-title" ).text(expandAllText);
              }
          });
      }
    };

    // Filter functionality for Search and Library Search Results pages. Please see Document Ready function for related code.
    Drupal.behaviors.filter_search_results = {
        attach: function(context, settings) {
            var typeChecks = '#filter-type .form-type-checkbox label';
            var webCheck = '.form-item-web-res input.form-checkbox';
            var libCheck = '.form-item-lib-res input.form-checkbox';
            var webArg = '?type_op=<>&type=resource';
            var libArg = '?type_op=%3D&type=resource';
            var myURL = window.location;

            // Zhao Gao's code for Library Search Results page filters :) - July 2017
    
            var getUrlParameter = function getUrlParameter(sParam) {
                var sPageURL = decodeURIComponent(window.location.search.substring(1)),
                    sURLVariables = sPageURL.split('&'),
                    sParameterName,
                    i;
        
                for (i = 0; i < sURLVariables.length; i++) {
                    sParameterName = sURLVariables[i].split('=');
            
                    if (sParameterName[0] === sParam) {
                        return sParameterName[1] === undefined ? true : sParameterName[1];
                    }
                }
            };
    
            var setSelectList = function setSelectList(Param, Text) {
                $('#library-search-switcher option[value=' + Param + ' ]').attr('selected','selected');
                $(".main-container #views-exposed-form-solr-library-search-page .views-exposed-widgets " + Param + " input").val(Text);
                $(".main-container " + Param).show();
                $(".main-container #views-exposed-form-solr-library-search-page .views-exposed-widgets .views-exposed-widget:not(" + Param + ")").hide();
                $(".main-container #views-exposed-form-solr-library-search-page .views-exposed-widgets .views-submit-button").show();
                $(".main-container #views-exposed-form-solr-library-search-page .views-exposed-widgets .views-reset-button").show();
            };
    
            // Retain search text and selected option
            var fulltext = getUrlParameter('search_api_views_fulltext');
            var title = getUrlParameter('search_api_aggregation_2');
            var author = getUrlParameter('search_api_aggregation_3');
            if (fulltext) {
                setSelectList('#edit-search-api-views-fulltext-wrapper', fulltext);
            }
            else if (title) {
                setSelectList('#edit-search-api-aggregation-2-wrapper', title);
            }
            else if (author) {
                setSelectList('#edit-search-api-aggregation-3-wrapper', author);
            }
    
            $('#library-search-switcher').click(function(){
                input_text = $(".main-container #views-exposed-form-solr-library-search-page "+this.value+" input").val();
            });
            
            $('#library-search-switcher').change(function() {
                $(".main-container #views-exposed-form-solr-library-search-page .views-exposed-widgets .views-exposed-widget input").val('');
                $(".main-container " + this.value + " input").val(input_text);
                
                $(".main-container " +this.value).show();
                $(".main-container #views-exposed-form-solr-library-search-page .views-exposed-widgets .views-exposed-widget:not(" +this.value+")").hide();
                $(".main-container #views-exposed-form-solr-library-search-page .views-exposed-widgets .views-submit-button").show();
                $(".main-container #views-exposed-form-solr-library-search-page .views-exposed-widgets .views-reset-button").show();
            })

            
            // ZG - Data binding to exposed per page filter
            function replaceParam(url, paramName, paramValue){
                if(paramValue == null)
                    paramValue = '';
                var pattern = new RegExp('\\b('+paramName+'=).*?(&|$)')
                if(url.search(pattern)>=0){
                    return url.replace(pattern,'$1' + paramValue + '$2');
                }
                url = url.replace(/\?$/,'');
                return url + (url.indexOf('?')>0 ? '&' : '?') + paramName + '=' + paramValue
            }
            
            $("#static-select-results-per-page").change(function () {
                if (this.value == 10) {
                    $('#select-results-per-page option[value=10]').attr('selected','selected');
                }
                else if (this.value == 25) {
                    $('#select-results-per-page option[value=25]').attr('selected','selected');
                }
                else if (this.value == 50) {
                    $('#select-results-per-page option[value=50]').attr('selected','selected');
                }
                else if (this.value == 100) {
                    $('#select-results-per-page option[value=100]').attr('selected','selected');
                }
    
                window.location.replace(replaceParam(window.location.href, 'items_per_page', this.value));
                
                // $('#views-exposed-form-solr-library-search-page').submit();
            });

            // Carey Hartmann's code for main Search Results page filters :) - July 2017
            // Change content type filter and submit form when "Web Results" or "Library Results" checkboxes are clicked
            $(typeChecks).click(function () {             
                if($(webCheck).is(':checked') && $(libCheck).is(':not(:checked)')) {
                    $('#edit-type option[value=1]').attr('selected','selected');
                }
                else if ($(webCheck).is(':not(:checked)') && $(libCheck).is(':checked')) {
                    $('#edit-type option[value=2]').attr('selected','selected');
                }
                else if ($(webCheck).is(':checked') && $(libCheck).is(':checked')) {
                    $('#edit-type option[value=3]').attr('selected','selected');
                }
                else {
                    $('#edit-type option[value=All]').attr('selected','selected');
                }
                $('#views-exposed-form-solr-library-search-page-1').submit(); 
            });
        }
    };
    
    // Filter functionality for Search and Special Collections Search Results pages. Please see Document Ready function for related code.
    Drupal.behaviors.filter_search_results_special_collections = {
        attach: function(context, settings) {
            var typeChecks = '#filter-type .form-type-checkbox label'
            var webCheck = '.form-item-web-res input.form-checkbox';
            var libCheck = '.form-item-lib-res input.form-checkbox';
            var webArg = '?type_op=<>&type=resource'
            var libArg = '?type_op=%3D&type=resource'
            var myURL = window.location;
            
            // Zhao Gao's code for Library Search Results page filters :) - July 2017
            
            var getUrlParameter = function getUrlParameter(sParam) {
                var sPageURL = decodeURIComponent(window.location.search.substring(1)),
                    sURLVariables = sPageURL.split('&'),
                    sParameterName,
                    i;
                
                for (i = 0; i < sURLVariables.length; i++) {
                    sParameterName = sURLVariables[i].split('=');
                    
                    if (sParameterName[0] === sParam) {
                        return sParameterName[1] === undefined ? true : sParameterName[1];
                    }
                }
            };
            
            var setSelectList = function setSelectList(Param, Text) {
                $('#library-search-switcher option[value=' + Param + ' ]').attr('selected','selected');
                $(".main-container #views-exposed-form-solr-library-search-page-2 .views-exposed-widgets " + Param + " input").val(Text);
                $(".main-container " + Param).show();
                $(".main-container #views-exposed-form-solr-library-search-page-2 .views-exposed-widgets .views-exposed-widget:not(" + Param + ")").hide();
                $(".main-container #views-exposed-form-solr-library-search-page-2 .views-exposed-widgets .views-submit-button").show();
                $(".main-container #views-exposed-form-solr-library-search-page-2 .views-exposed-widgets .views-reset-button").show();
            };
            
            // Retain search text and selected option
            var fulltext = getUrlParameter('search_api_views_fulltext');
            var title = getUrlParameter('search_api_aggregation_2');
            var author = getUrlParameter('search_api_aggregation_3');
            if (fulltext) {
                setSelectList('#edit-search-api-views-fulltext-wrapper', fulltext);
            }
            else if (title) {
                setSelectList('#edit-search-api-aggregation-2-wrapper', title);
            }
            else if (author) {
                setSelectList('#edit-search-api-aggregation-3-wrapper', author);
            }
            
            $('#library-search-switcher').click(function(){
                input_text = $(".main-container #views-exposed-form-solr-library-search-page-2 "+this.value+" input").val();
            });
            
            $('#library-search-switcher').change(function() {
                $(".main-container #views-exposed-form-solr-library-search-page-2 .views-exposed-widgets .views-exposed-widget input").val('');
                $(".main-container " + this.value + " input").val(input_text);
                
                $(".main-container " +this.value).show();
                $(".main-container #views-exposed-form-solr-library-search-page-2 .views-exposed-widgets .views-exposed-widget:not(" +this.value+")").hide();
                $(".main-container #views-exposed-form-solr-library-search-page-2 .views-exposed-widgets .views-submit-button").show();
                $(".main-container #views-exposed-form-solr-library-search-page-2 .views-exposed-widgets .views-reset-button").show();
            })
            
            
            // ZG - Data binding to exposed per page filter
            $("#static-select-results-per-page").change(function () {
                if (this.value == 10) {
                    $('#select-results-per-page option[value=10]').attr('selected','selected');
                }
                else if (this.value == 25) {
                    $('#select-results-per-page option[value=25]').attr('selected','selected');
                }
                else if (this.value == 50) {
                    $('#select-results-per-page option[value=50]').attr('selected','selected');
                }
                else if (this.value == 100) {
                    $('#select-results-per-page option[value=100]').attr('selected','selected');
                }
    
                window.location.replace(replaceParam(window.location.href, 'items_per_page', this.value));
                
                // $('#views-exposed-form-solr-library-search-page-2').submit();
            });
            
        }
    };


    Drupal.behaviors.hideAndShow = {
        attach: function(context, settings) {
            $button = $('.addtoany-share-button');
            $hideAndShowDiv = $("#social-bar");
            $hideAndShowDivLabel = $hideAndShowDiv.find('.h2');
            $closeBtn = $('#social-bar .close');

            if(!$hideAndShowDiv.length) {
                //console.log('it is not here');
                return;
            }

            $hideAndShowDivLabel.addClass('element-invisible').attr('id','hideAndShowDivLabel');
            $hideAndShowDivLabel.attr('tabindex','0');
            $hideAndShowDiv.attr('aria-labelledby','hideAndShowDivLabel');

            $button.add($closeBtn).addClass('hideAndShowButton').attr('role','button');

            $hideAndShowButton = $('.hideAndShowButton');

            $hideAndShowButton.attr('aria-controls','social-bar');

            $hideAndShowButton.on('click',function(e){
                e.preventDefault();
                if( $hideAndShowDiv.is(':visible')){
                    hideIt($hideAndShowDiv);
                }
                if( $hideAndShowDiv.is(':hidden')){
                    showIt($hideAndShowDiv);
                }

            });

            function hideIt($hideAndShowDiv){
                hideAria($hideAndShowDiv);
                $hideAndShowDiv.slideUp();
                $button.first().focus();
            }
            function showIt($hideAndShowDiv){
                showAria($hideAndShowDiv);
                $hideAndShowDiv.slideDown();
                $hideAndShowDivLabel.focus();
            }

            function hideAria($hideAndShowDiv){
                $hideAndShowDiv.attr('aria-expanded','false');
            }
            function showAria($hideAndShowDiv){
                $hideAndShowDiv.attr('aria-expanded','true');
            }

            //initialize
            $hideAndShowDiv.hide();
            hideAria($hideAndShowDiv);
        }
    };
    
    // Drupal.behaviors.printCert = {
    //     attach: function(context, settings) {
    //
    //         $('#node-476 .first-p > button').click(function(e) {
    //             e.preventDefault();
    //             // printInfo(e);
    //             var prntHead = "<head><title>Page</title><style>div#nhmrc_certif h1 {font-size:2.7em;font-weight:500;color:#fff;background:#1b6270;margin: .25em auto; @page { size: landscape; } padding: 0 0 .25em 0;width: 60%;}div#nhmrc_certif p.nhmrc_cert_name {font-family: News Cycle,sans-serif;font-size: 3.3em;font-weight: 500;margin-top: -10px;color: #1b6270;}div#nhmrc_certif p.cert_length {background: #ddd;padding: 8px 0;width: 60%;margin: .25em auto;font-size: 1em;}</style></head>";
    //             var prntBody = "<body><div style=\"text-align: center; border: solid 2px #6889a5;\" id=\"nhmrc_certif\">"+ document.getElementById('nhmrc_certif').innerHTML +"</div></body>";
    //             var prtContent = prntHead + prntBody;
    //             var restorepage = document.body.innerHTML;
    //             //var WinPrint = window.open('', '', 'left=0,top=0,width=800,height=900,toolbar=0,scrollbars=0,status=0');
    //             //WinPrint.document.write('<link rel="stylesheet" href="/sites/all/themes/bootstrap_nhmrc/css/style.css>" media="all"');
    //             //WinPrint.document.write(prtContent.innerHTML);
    //             //WinPrint.document.close();
    //             //WinPrint.focus();
    //             //WinPrint.print();
    //             //WinPrint.close();
    //             document.body.innerHTML = prtContent;
    //             window.print();
    //             document.body.innerHTML = restorepage;
    //         })
    //     }
    // };

     
})(jQuery);

jQuery(document).ready(function() {

    /*START 
     *document ready code for Search and Library Search pages.
     */
    // ZG - Switcher for combined library search.
    //     jQuery('#edit-search-api-aggregation-3-wrapper').hide();
    //     jQuery('#edit-search-api-aggregation-2-wrapper').hide();
    // ZG - Add X to keyword filter tabs.
        jQuery(".page-library-search-results #region-library-search-content #block-current-search-library-search-block .current-search-item-active ul li a").text(" X ");
    
    
    
    jQuery(".page-success-stories .view-success-stories-landing .view-header button[data-group='alllevel']").text("All");
        
        // CDH - Check appropriate "Web Results" and/or "Library Results" checkbox(es) on page load depending on content type filter values.
    // Library Search Results Page.
    if(window.location.pathname == '/search') {
        if(jQuery('#edit-type').val() == 1) {
            jQuery('#web-res').prop('checked', true);
            jQuery('#lib-res').prop('checked', false);
        }
        else if(jQuery('#edit-type').val() == 2) {
            jQuery('#web-res').prop('checked', false);
            jQuery('#lib-res').prop('checked', true);
        }
        else if(jQuery('#edit-type').val() == 3) {
            jQuery('#web-res').prop('checked', true);
            jQuery('#lib-res').prop('checked', true);
        }
        else{
            jQuery('#web-res').prop('checked', false);
            jQuery('#lib-res').prop('checked', false);
        }
    }
    // CDH - Select appropriate "View per page" option on page load depending on per page filter values.
    // Search Page.
    if(window.location.pathname == '/library-search-results') {        
        if (window.location.href.indexOf('items_per_page=100') > -1) {
            jQuery('select#static-select-results-per-page option[value=100]').attr('selected','selected');
        }
        else if (window.location.href.indexOf('items_per_page=50') > -1) {
            jQuery('select#static-select-results-per-page option[value=50]').attr('selected','selected');
        }
        else if (window.location.href.indexOf('items_per_page=25') > -1) {
            jQuery('select#static-select-results-per-page option[value=25]').attr('selected','selected');
        }
        else if (window.location.href.indexOf('items_per_page=10') > -1) {
            jQuery('select#static-select-results-per-page option[value=10]').attr('selected','selected');
        }
    }
    
    // Special Collections search
    if(window.location.pathname == '/healthy-dating-search-results') {
        if (window.location.href.indexOf('items_per_page=100') > -1) {
            jQuery('select#static-select-results-per-page option[value=100]').attr('selected','selected');
        }
        else if (window.location.href.indexOf('items_per_page=50') > -1) {
            jQuery('select#static-select-results-per-page option[value=50]').attr('selected','selected');
        }
        else if (window.location.href.indexOf('items_per_page=25') > -1) {
            jQuery('select#static-select-results-per-page option[value=25]').attr('selected','selected');
        }
        else if (window.location.href.indexOf('items_per_page=10') > -1) {
            jQuery('select#static-select-results-per-page option[value=10]').attr('selected','selected');
        }
    }
    /*END 
     *document ready code for Search and Library Search pages.
     */
    
    jQuery('.page-success-stories .view-success-stories-landing .view-content').addClass('col-sm-9');
    jQuery('.page-success-stories .view-success-stories-landing .paragraph-image-n-text').each(function(){
        var tmp = jQuery(this).attr('data-groups');
        jQuery(this).attr('data-groups', '');
        jQuery(this).parents('.picture-item').attr('data-groups', tmp);
    });
    
    jQuery('a.addthis-content-link').each(function(){
		var newTitle = jQuery(this).attr('title').replace(' | National Resource Center for Healthy Marriage and Families', '');
	    jQuery(this).attr('title', newTitle);
	});	
	jQuery('.video-poster').each(function(){
		var image = jQuery(this).attr('title');
		var poster = jQuery(this).find('.mejs-poster');
		jQuery(poster).attr('title',image);
		jQuery(this).find('.mejs-poster').css({'background-image':'url(' + image + ')', 'display': 'block', 'visibility': 'visible', 'background-size': '100% 100%'});
	});
    if (top.location.pathname !== '/library') {
        jQuery('a[href*="library.healthymarriageandfamilies.org"]').each(function () {
            jQuery(this).attr('target', '_blank');
        });
    }

    //Section 508, Empty buttons
    jQuery('#colorbox #cboxContent #cboxPrevious').text("Previous");
    jQuery('#colorbox #cboxContent #cboxNext').text("Next");
    jQuery('#colorbox #cboxContent #cboxSlideshow').text("Slideshow");
    jQuery('section#block-search-form #edit-search-block-form--2').next(".input-group-btn").find("button span").text("Search");
    jQuery('section#block-system-main-menu .input-group-btn button span').text("Search");
    jQuery('#a2apage_dropdown #a2apage_title').attr("aria-label","Share");
    jQuery('#a2apage_modal #a2a_copy_link_text').attr("aria-label","Copy");
    jQuery('section#block-search-form .form-search div.input-group').prepend('<label class="ui-helper-hidden-accessible" for="edit-search-block-form--2">Enter the terms you wish to search for.</label>');
    jQuery('section#block-system-main-menu .search-form div.input-group').prepend('<label class="ui-helper-hidden-accessible" for="edit-keys--4">Enter the terms you wish to search for.</label>');
    jQuery('form#search-form div.input-group').prepend('<label class="ui-helper-hidden-accessible" for="edit-keys">Enter the terms you wish to search for.</label>');
    
    // jQuery('.page-search .view-solr-library-search #filter-type adv-lib-btn a').popover('hover');
    
    // equalheight boxes (thank you - http://codepen.io/micahgodbolt/pen/FgqLc)
    function equalheight(container){
        
        var currentTallest = 0,
            currentRowStart = 0,
            rowDivs = [],
            $el;
        
        jQuery(container).each(function() {
            
            $el = jQuery(this);
            jQuery($el).height('auto');
            var topPostion = $el.position().top;
            var currentDiv;
            
            if (currentRowStart !== topPostion) {
                for (currentDiv = 0 ; currentDiv < rowDivs.length ; currentDiv++) {
                    rowDivs[currentDiv].outerHeight(currentTallest);
                }
                rowDivs.length = 0; // empty the array
                currentRowStart = topPostion;
                currentTallest = $el.outerHeight();
                rowDivs.push($el);
            } else {
                rowDivs.push($el);
                currentTallest = (currentTallest < $el.outerHeight()) ? ($el.outerHeight()) : (currentTallest);
            }
            for (currentDiv = 0 ; currentDiv < rowDivs.length ; currentDiv++) {
                rowDivs[currentDiv].height(currentTallest);
            }
        });
    }

    // jQuery('ul.facetapi-facet-field-resource-publication-year li').each(function(){
    //     var currentDate = new Date();
    //     var currentYear = currentDate.getFullYear();
    //     if(jquery(this))
    //     alert(currentYear);
    // });


    
    jQuery(window).load(function(){
        equalheight('.media-gallery-bottom .col-sm-4 .media-gallery-body');
        // yearFacet();
    });
    
    jQuery(window).resize(function(){
        equalheight('.media-gallery-bottom .col-sm-4 .media-gallery-body');
    });
    
    jQuery('#block-system-main-menu ul.menu > li:not(:first)').each(function(){
        if (!jQuery(this).hasClass('active')) {
            jQuery(this).find('a').append('<span class="caret"></span>');
        }
    });


// jQuery('.view-media .view-content').css({'background-image':'url(/sites/all/themes/nhmrc/images/spinner.gif)', 'background-repeat': 'repeat-x'});
// jQuery('.view-media .view-content .mediaelement-video').css('display', 'none');
// jQuery(window).load(function(){
//   setTimeout(function(){
//     jQuery('.view-media .view-content').css('background-image', '');
//     jQuery('.view-media .view-content .mediaelement-video').css('display', 'block');
//     jQuery('.view-media .view-content .mejs-time-rail').css('width', '152px');
//     jQuery('.view-media .view-content .mejs-time-total').css('width', '142px');
//     jQuery('.view-media .view-content .mejs-time-loaded').css('width', '1px');  
//   },10000);
// });

});
//(jQuery);

