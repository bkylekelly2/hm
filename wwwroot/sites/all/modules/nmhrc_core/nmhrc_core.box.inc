<?php
/**
 * @file
 * nmhrc_core.box.inc
 */

/**
 * Implements hook_default_box().
 */
function nmhrc_core_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'calendar_link';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Return to Calendar';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="/calendar/month" target="_self">Return to Calendar of Events</a></p>',
      'format' => 'custom_formatting',
    ),
    'additional_classes' => '',
  );
  $export['calendar_link'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'hhs_share';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'hhs share';
  $box->options = array(
    'body' => array(
      'value' => '<ul class="hhs-share">
	<li><a class="addtoany-share-button" href="#" target="_blank" title="Share this page"><img alt="Share this page" src="/sites/all/themes/bootstrap_nhmrc/images/share-share-yel.png"></a></li>
</ul>
',
      'format' => 'pure_html',
    ),
    'additional_classes' => '',
  );
  $export['hhs_share'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home3icons';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Home 3 Icons';
  $box->options = array(
    'body' => array(
      'value' => '<div class="row">
	<div class="col-sm-12">
		<a href="/whats-new">
			<img class="pull-left col-sm-3" alt="" src="<?php print drupal_get_path(\'theme\',$GLOBALS[\'theme\']);?>/images/icon-news.png">
			<div class="col-sm-9"><h3>New and Noteworthy</h3>
			<p>Latest news items and most popular content.</p></div>
		</a>
	</div>
	<div class="col-sm-12">
		<a href="/virtual-training-center">
			<img class="pull-left col-sm-3" alt="" src="<?php print drupal_get_path(\'theme\',$GLOBALS[\'theme\']);?>/images/icon-training.png">
			<div class="col-sm-9"><h3>Virtual Training Center</h3>
			<p>Instant access to research-based courses and tutorials.</p></div>
		</a>
	</div>
	<div class="col-sm-12">
		<a href="/about-healthy-marriage-relationship-education#research">
			<img class="pull-left col-sm-3" alt="" src="<?php print drupal_get_path(\'theme\',$GLOBALS[\'theme\']);?>/images/icon-research.png">
			<div class="col-sm-9"><h3>Research and Statistics</h3>
			<p>Current trends most relevant to the populations you serve.</p></div>
		</a>
	</div>
</div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['home3icons'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_bg_1';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Home Background 1';
  $box->options = array(
    'body' => array(
      'value' => '<div class="home-bg-img"><img class="img-responsive" src="/sites/all/themes/bootstrap_nhmrc/images/healthy-marriage-heroimage-1-min.jpg" alt=""></div>',
      'format' => 'pure_html',
    ),
    'additional_classes' => '',
  );
  $export['home_bg_1'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_bg_2';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Home Background 2';
  $box->options = array(
    'body' => array(
      'value' => '<div class="home-bg-img"><img class="img-responsive" src="/sites/all/themes/bootstrap_nhmrc/images/healthy-marriage-heroimage-2-min.jpg" alt=""></div>',
      'format' => 'pure_html',
    ),
    'additional_classes' => '',
  );
  $export['home_bg_2'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_bg_3';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Home Background 3';
  $box->options = array(
    'body' => array(
      'value' => '<div class="home-bg-img"><img class="img-responsive" src="/sites/all/themes/bootstrap_nhmrc/images/healthy-marriage-heroimage-3-min.jpg" alt=""></div>',
      'format' => 'pure_html',
    ),
    'additional_classes' => '',
  );
  $export['home_bg_3'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mobile_twitter';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Mobile Twitter';
  $box->options = array(
    'body' => array(
      'value' => '<div id="mobile-twitter">
<a class="mobile-twitter-btn" href="https://twitter.com/MarriageResCtr">Follow Us on Twitter</a>
</div>',
      'format' => 'pure_html',
    ),
  );
  $export['mobile_twitter'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'our_social_media_pages';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Social Media Links';
  $box->options = array(
    'body' => array(
      'value' => 'Connect with us: <a href="https://twitter.com/MarriageResCtr"><img src="/sites/all/themes/bootstrap_nhmrc/images/icon-twitter.png" alt="Twitter"></a><a href="https://www.linkedin.com/company-beta/17883914/"><img src="/sites/all/themes/bootstrap_nhmrc/images/icon-linkedin-ft-1.jpeg" alt="Linkedin"></a>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['our_social_media_pages'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'quick_links_subscribe';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Quick Links Subscribe';
  $box->options = array(
    'body' => array(
      'value' => '
<div class="subscribe-button">
<a href="/subscribe" class=" btn btn-accent2">SUBSCRIBE</a>
</div>',
      'format' => 'pure_html',
    ),
    'additional_classes' => '',
  );
  $export['quick_links_subscribe'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'quicklinks_socialmedia';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Quick Links Social Media';
  $box->options = array(
    'body' => array(
      'value' => '<span class="h2 element-invisible" id="share-social-media" tabindex="0">Share on Social Media</span>
<div class="quicklinksblock" aria-labelledby="share-social-media">
<!-- AddThis Button BEGIN -->
    <div class="a2a_kit a2a_kit_size_32 a2a_default_style addtoany-icons" id="addtoany-icons">
        <a class="a2a_button_facebook" title="Share on Facebook"></a>
        <a class="a2a_button_twitter" title="Share on Twitter"></a>
        <a class="a2a_button_google_plus" title="Share on Google Plus"></a>
        <a class="a2a_button_linkedin" title="Share on Linked In"></a>
        <a class="a2a_button_tumblr" title="Share on Tumblr"></a>
</div>

<script type="text/javascript">
var a2a_config = a2a_config || {};
a2a_config.track_links = \'bitly\';
a2a_config.track_links_key = \'addtoany|R_cc6a4017b0274d1d86f2397771b70136\';
a2a_config.templates = {
    twitter: "${title} ${link} via @MarriageResCtr"
};
</script>
<script type="text/javascript" src="//static.addtoany.com/menu/page.js"></script>
<!-- AddThis Button END -->
</div>',
      'format' => 'pure_html',
    ),
    'additional_classes' => '',
  );
  $export['quicklinks_socialmedia'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'social_bar';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Social Media Bar';
  $box->options = array(
    'body' => array(
      'value' => '<span class="h2 element-invisible" id="hideAndShowDivLabel" tabindex="0">Share on Social Media</span>
<div class="quicklinksblock">
<!-- AddThis Button BEGIN -->
    <div class="a2a_kit a2a_kit_size_32 a2a_default_style addtoany-icons" id="addtoany-icons">
        <a class="a2a_button_facebook" title="Share on Facebook"></a>
        <a class="a2a_button_twitter" title="Share on Twitter"></a>
        <a class="a2a_button_tumblr" title="Share on Tumblr"></a>
        <a class="a2a_button_google_plus" title="Share on Google Plus"></a>
        <a class="a2a_button_linkedin" title="Share on Linked In"></a>
</div>
<script type="text/javascript" src="//static.addtoany.com/menu/page.js"></script>
<!-- AddThis Button END -->
<div class="subscribe-button">
<a target="_blank" href="subscribe" class=" btn btn-accent2">Subscribe</a>
</div>
</div>
<a class="close hideAndShowButton" href="#" aria-label="Close Social Media Bar" role="button" aria-controls="social-bar">×</a>',
      'format' => 'pure_html',
    ),
    'additional_classes' => 'container',
  );
  $export['social_bar'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'styleguide';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Style Guide';
  $box->options = array(
    'body' => array(
      'value' => '<h2>
The font family for the site headers is Raleway, Sans-Serif.
</h2>
<p>
The font family for the site headers is Raleway, Sans-Serif.
</p>
<h1>
	Testing display of HTML elements
</h1>
<h2>
	This is 2nd level heading
</h2>
<p>
	The first paragraph of the page is always larger than the others on the page. It is a highlight paragraph and should have important information for the user to read. People do say, Bigger is better.
</p>
<h3>
	This is 3rd level heading
</h3>
<p>
	This is a test paragraph.
</p>
<h4>
	This is 4th level heading
</h4>
<p>
	This is a test paragraph.
</p>
<h5>
	This is 5th level heading
</h5>
<p>
	This is a test paragraph.
</p>
<h6>
	This is 6th level heading
</h6>
<p>
	This is a test paragraph.
</p>
<h2>
	Basic block level elements
</h2>
<p>
	This is a normal paragraph or (<code>p</code> element). It is what the majority of content is contained in. You can add inline elements to a paragraph such as a <code>b</code> tag to make things <b>bold</b> or an <code>i</code> tag to make things <i>italic</i>. Those sorts of tags are for styling along and hold no weight in and of themselves. 
</p>
<p>
	This is another paragraph. Placing a couple of paragraphs next to each other can give you a better idea of how they will look when there are lots of paragraphs together. This can be useful if you are putting content on you website.
</p>
<h3>Blockquote</h3>
<blockquote>
	<p>
		This is a blockquote containing a single paragraph. Well, not quite, since this is not <em>really</em> quoted text, but I hope you understand the point. This would be a quote if it were located somewhere else on the site.
	</p>
</blockquote>

<h3>Blockquote w/ citation</h3>
<blockquote>
  <p>This is a blockquote containing a single paragraph. Well, not quite, since this is not <em>really</em> quoted text, but I hope you understand the point. This would be a quote if it were located somewhere else on the site.</p>
  <small>Someone famous <cite title="Source Title">Source Title</cite></small>
</blockquote>

<h3>Blockquote on the right</h3>
<blockquote class="pull-right">
  <p>This is a blockquote containing a single paragraph. Well, not quite, since this is not <em>really</em> quoted text, but I hope you understand the point. This would be a quote if it were located somewhere else on the site.</p>
</blockquote>
<p>
	The following contains address information, in an <code>address</code> element.
</p>
<address>
	Jane Doe, <a href="jane@doe.aaa">jane@doe.aaa</a><br>
	HereAndThere, VA 22031
</address>
<p>
	The following contains this site\'s email address.
</p>
	<a href="info@HealthyMarriageandFamilies.org">info@HealthyMarriageandFamilies.org</a>
<h2>Lists</h2>
<h3>Unordered List</h3>
<p>
	This is a paragraph before an <strong>unordered</strong> list (<code>ul</code>). An unordered list is also often called a bulleted list.
</p>
<ul>
	<li>One.
	</li>
	<li>Two.
	</li>
	<li>Three. Well, probably this list item should be longer. Note that for short items lists look better if they are compactly presented, whereas for long items, it would be better to have more vertical spacing between items.
	</li>
	<li>Four. This is the last item in this list. Let us terminate the list now without making any more fuss about it.
	</li>
</ul>
<h3>Ordered List</h3>
<p>
	This is a paragraph before a <strong>ordered</strong> list (<code>ol</code>). These lists count with number or with Roman numerals or even letters. Just remember to set your css.
</p>
<ol>
	<li>One.
	</li>
	<li>Two.
	</li>
	<li>Three. Well, probably this list item should be longer. Note that if items are short, lists look better if they are compactly presented, whereas for long items, it would be better to have more vertical spacing between items.
	</li>
	<li>Four. This is the last item in this list. Let us terminate the list now without making any more fuss about it.
	</li>
</ol>
<h3>Definition List</h3>
<p>
	This is a paragraph before a <strong>definition</strong> list (<code>dl</code>). In principle, such a list should consist of <em>terms</em> and associated definitions.
</p>
<dl>
	<dt>
		recursion
	</dt>
	<dd>
		see recursion
	</dd>
	<dt>
		recursion, indirect
	</dt>
	<dd>
		see indirect recursion
	</dd>
	<dt>
		indirect recursion
	</dt>
	<dd>
		see recursion, indirect
	</dd>
	<dt>
		term
	</dt>
	<dd>
		a word or other expression taken into specific use in a well-defined meaning, which is often defined rather rigorously, even formally, and may differ quite a lot from an everyday meaning
	</dd>
</dl>
<h3>Definition List - Horizontal</h3>
<p>
	This is a paragraph before a <strong>definition</strong> list (<code>dl</code>), but is has an added class to make it be horizontal. To make this happen ass the class of <code>.dl-horizontal</code> In principle, such a list should consist of <em>terms</em> and associated definitions.
</p>
<dl class="dl-horizontal">
	<dt>
		recursion
	</dt>
	<dd>
		see recursion
	</dd>
	<dt>
		recursion, indirect
	</dt>
	<dd>
		see indirect recursion
	</dd>
	<dt>
		indirect recursion
	</dt>
	<dd>
		see recursion, indirect
	</dd>
	<dt>
		term
	</dt>
	<dd>
		a word or other expression taken into specific use in a well-defined meaning, which is often defined rather rigorously, even formally, and may differ quite a lot from an everyday meaning
	</dd>
</dl>

<h3>Arrow List</h3>
<p>
	This is a paragraph before an <strong>Arrow</strong> list. Add a <b>div</b> with the class <code>.arrow-list</code> around a <code>ul</code>. 
</p>
<div class="arrow-list">
<ul>
	<li>One.
	</li>
	<li>Two.
	</li>
	<li>Three. Well, probably this list item should be longer. Note that for short items lists look better if they are compactly presented, whereas for long items, it would be better to have more vertical spacing between items.
	</li>
	<li>Four. This is the last item in this list. Let us terminate the list now without making any more fuss about it.
	</li>
</ul>
</div>
<h2>
	Inline Styles
</h2>
<p>These types of tags can be used inside paragraphs and other block level elements.</p>
<ul>
	<li>
		<abbr title="Cascading Style Sheets">CSS</abbr> (an abbreviation; <code>abbr</code> markup used)
	</li>
	<li>
		<acronym title="radio detecting and ranging">radar</acronym> (an acronym; <code>acronym</code> markup used)
	</li>
	<li>
		<b>bolded</b> (<code>b</code> markup used - just bolding with unspecified semantics)
	</li>
	<li>
		<cite>Origin of Species</cite> (a book title; <code>cite</code> markup used)
	</li>
	<li>
		<code>a[i] = b[i] + c[i);</code> (computer code; <code>code</code> markup used)
	</li>
	<li>this is <em>very</em> simple (<code>em</code> markup used for emphasizing a word)
	</li>
	<li>
		<i lang="la">Homo sapiens</i> (should appear in italics; <code>i</code> markup used)
	</li>
	<li>type <kbd>yes</kbd> when prompted for an answer (<code>kbd</code> markup used for text indicating keyboard input)
	</li>
	<li>
		<q>Hello!</q> (<code>q</code> markup used for quotation)
	</li>
	<li>He said: <q>She said <q>Hello!</q></q> (a quotation inside a quotation)
	</li>
	<li>you may get the message <samp>Core dumped</samp> at times (<code>samp</code> markup used for sample output)
	</li>
	<li>
		<strike>overstruck</strike> (<code>strike</code> markup used; note: <code>s</code> is a nonstandard synonym for <code>strike</code>)
	</li>
	<li>
		<strong>this is highlighted text</strong> (<code>strong</code> markup used)
	</li>
	<li>In order to test how subscripts and superscripts (<code>sub</code> and <code>sup</code> markup) work inside running text, we need some dummy text around constructs like x<sub>1</sub> and H<sub>2</sub>O (where subscripts occur). So here is some fill so that you will (hopefully) see whether and how badly the subscripts and superscripts mess up vertical spacing between lines. Now superscripts: M<sup>lle</sup>, 1<sup>st</sup>, and then some mathematical notations: e<sup>x</sup>, sin<sup>2</sup> <i>x</i>, and some nested superscripts (exponents) too: e<sup>x<sup>2</sup></sup> and f(x)<sup>g(x)<sup>a+b+c</sup></sup> (where 2 and a+b+c should appear as exponents of exponents).
	</li>
	<li>
		<u>underlined</u> text (<code>u</code> markup used)
	</li>
	</li>
</ul>
<h2>
	Links
</h2>

<h3>Regular Link</h3>
<p><a href="#">anchor</a></p>

<h3>Button Links</h3>
<p>
	<a href="#" class="btn">anchor.btn</a>
	<a href="#" class="btn btn-primary">anchor.btn.btn-primary</a>
	<a href="#" class="btn btn-accent">anchor.btn.btn-accent</a>
	<a href="#" class="btn btn-accent2">anchor.btn.btn-accent2</a>
</p>

<h3>Paragraph with links</h3>
<p>
	This is a text paragraph that contains some inline links. We like you to see how a <a href="#">link in a paragraph</a> is going to look so you can see how it blends or <a href="#">stands out</a> from the rest of the text in the paragraph. Does it give the right feeling to the page.
</p>

<h3>List of links</h3>
<ul>
	<li>
		<a href="index.html">Home</a>
	</li>
	<li>
		<a href="#">Something else</a>
	</li>
</ul>

<h2>
	Forms
</h2>
<form>
	<div>
		<p>This form has some of the avalible fields that can be use in a form. it is not layd out in any special way.</p>
	</div>
	<div>
		<label>Button Element:
			<button>button</button>
			<button class="btn">button.btn</button>
			<button class="btn btn-primary">button.btn.btn-primary</button>
			<button class="btn btn-accent">button.btn.btn-accent</button>
			<button class="btn btn-accent2">button.btn.btn-accent2</button>
	</div>
	<div>
		<label for="f1">Single-line text input field: <input id="f1" type="text" placeholder="Fill Me In"></label>
	</div>
	<div>
		<label for="f2">Multi-line text input field (textarea):</label>
		<textarea cols="20" id="f2" name="textarea" placeholder="How about writting something in me?"></textarea>
	</div>
	<div>
		The following two radio buttons are inside a <code>fieldset</code> element with a <code>legend</code>:
	</div>
	<fieldset>
		<legend>Legend</legend>
		<div>
			<label for="f3"><input id="f3" name="radio" type="radio" value="1"> Radio button 1</label>
		</div>
		<div>
			<label for="f4"><input checked="checked" id="f4" name="radio" type="radio" value="2"> Radio button 2 (initially checked)</label>
		</div>
	</fieldset>
	<fieldset>
		<legend>Check those that apply</legend>
		<div>
			<label for="f5"><input id="f5" name="checkbox" type="checkbox"> Checkbox 1</label>
		</div>
		<div>
			<label for="f6"><input checked="checked" id="f6" name="checkbox2" type="checkbox"> Checkbox 2 (initially checked)</label>
		</div>
	</fieldset>
	<div>
		<label for="f10">A <code>select</code> element (dropdown box):</label>
		<select id="f10" name="select1" size="1">
			<option>
				one
			</option>
			<option selected="selected">
				two (default)
			</option>
			<option>
				three
			</option>
		</select>
	</div>
	<div>
		<label for="f99">Submit button: <input id="f99" name="submit" type="submit" value="Submit Me"></label>
	</div>
</form>

<h2>
	Tables
</h2>
<p>There are many classes that can be added to a table to give them different styles. These classes can also be used in combination.</p>

<h3>No Class</h3>
<table summary="Each row names a Nordic country and specifies its total area and land area, in square kilometers">
	<thead>
		<tr>
			<th scope="col">
				Country
			</th>
			<th scope="col">
				Total area
			</th>
			<th scope="col">
				Land area
			</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<th scope="row">
				Denmark
			</th>
			<td>
				43,070
			</td>
			<td>
				42,370
			</td>
		</tr>
		<tr>
			<th scope="row">
				Finland
			</th>
			<td>
				337,030
			</td>
			<td>
				305,470
			</td>
		</tr>
		<tr>
			<th scope="row">
				Iceland
			</th>
			<td>
				103,000
			</td>
			<td>
				100,250
			</td>
		</tr>
		<tr>
			<th scope="row">
				Norway
			</th>
			<td>
				324,220
			</td>
			<td>
				307,860
			</td>
		</tr>
		<tr>
			<th scope="row">
				Sweden
			</th>
			<td>
				449,964
			</td>
			<td>
				410,928
			</td>
		</tr>
	</tbody>
</table>

<h3>Table</h3>
<p>
	Table with class <code>.table</code>
</p>
<table summary="Each row names a Nordic country and specifies its total area and land area, in square kilometers" class="table">
	<thead>
		<tr>
			<th scope="col">
				Country
			</th>
			<th scope="col">
				Total area
			</th>
			<th scope="col">
				Land area
			</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<th scope="row">
				Denmark
			</th>
			<td>
				43,070
			</td>
			<td>
				42,370
			</td>
		</tr>
		<tr>
			<th scope="row">
				Finland
			</th>
			<td>
				337,030
			</td>
			<td>
				305,470
			</td>
		</tr>
		<tr>
			<th scope="row">
				Iceland
			</th>
			<td>
				103,000
			</td>
			<td>
				100,250
			</td>
		</tr>
		<tr>
			<th scope="row">
				Norway
			</th>
			<td>
				324,220
			</td>
			<td>
				307,860
			</td>
		</tr>
		<tr>
			<th scope="row">
				Sweden
			</th>
			<td>
				449,964
			</td>
			<td>
				410,928
			</td>
		</tr>
	</tbody>
</table>

<h3>Striped</h3>
<p>
	Table with class <code>.table.table-striped</code>
</p>
<table summary="Each row names a Nordic country and specifies its total area and land area, in square kilometers" class="table table-striped">
	<thead>
		<tr>
			<th scope="col">
				Country
			</th>
			<th scope="col">
				Total area
			</th>
			<th scope="col">
				Land area
			</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<th scope="row">
				Denmark
			</th>
			<td>
				43,070
			</td>
			<td>
				42,370
			</td>
		</tr>
		<tr>
			<th scope="row">
				Finland
			</th>
			<td>
				337,030
			</td>
			<td>
				305,470
			</td>
		</tr>
		<tr>
			<th scope="row">
				Iceland
			</th>
			<td>
				103,000
			</td>
			<td>
				100,250
			</td>
		</tr>
		<tr>
			<th scope="row">
				Norway
			</th>
			<td>
				324,220
			</td>
			<td>
				307,860
			</td>
		</tr>
		<tr>
			<th scope="row">
				Sweden
			</th>
			<td>
				449,964
			</td>
			<td>
				410,928
			</td>
		</tr>
	</tbody>
</table>

<h3>Bordered</h3>
<p>
	Table with class <code>.table.table-bordered</code>
</p>
<table summary="Each row names a Nordic country and specifies its total area and land area, in square kilometers" class="table table-bordered">
	<thead>
		<tr>
			<th scope="col">
				Country
			</th>
			<th scope="col">
				Total area
			</th>
			<th scope="col">
				Land area
			</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<th scope="row">
				Denmark
			</th>
			<td>
				43,070
			</td>
			<td>
				42,370
			</td>
		</tr>
		<tr>
			<th scope="row">
				Finland
			</th>
			<td>
				337,030
			</td>
			<td>
				305,470
			</td>
		</tr>
		<tr>
			<th scope="row">
				Iceland
			</th>
			<td>
				103,000
			</td>
			<td>
				100,250
			</td>
		</tr>
		<tr>
			<th scope="row">
				Norway
			</th>
			<td>
				324,220
			</td>
			<td>
				307,860
			</td>
		</tr>
		<tr>
			<th scope="row">
				Sweden
			</th>
			<td>
				449,964
			</td>
			<td>
				410,928
			</td>
		</tr>
	</tbody>
</table>

<h3>Heading Border Bottom</h3>
<p>
	Table with class <code>.table.table-border-bottom</code>
</p>
<table summary="Each row names a Nordic country and specifies its total area and land area, in square kilometers" class="table table-border-bottom">
	<thead>
		<tr>
			<th scope="col">
				Country
			</th>
			<th scope="col">
				Total area
			</th>
			<th scope="col">
				Land area
			</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<th scope="row">
				Denmark
			</th>
			<td>
				43,070
			</td>
			<td>
				42,370
			</td>
		</tr>
		<tr>
			<th scope="row">
				Finland
			</th>
			<td>
				337,030
			</td>
			<td>
				305,470
			</td>
		</tr>
		<tr>
			<th scope="row">
				Iceland
			</th>
			<td>
				103,000
			</td>
			<td>
				100,250
			</td>
		</tr>
		<tr>
			<th scope="row">
				Norway
			</th>
			<td>
				324,220
			</td>
			<td>
				307,860
			</td>
		</tr>
		<tr>
			<th scope="row">
				Sweden
			</th>
			<td>
				449,964
			</td>
			<td>
				410,928
			</td>
		</tr>
	</tbody>
</table>

<h3>Hover</h3>
<p>
	Table with class <code>.table.table-hover</code>
</p>
<table summary="Each row names a Nordic country and specifies its total area and land area, in square kilometers" class="table table-hover">
	<thead>
		<tr>
			<th scope="col">
				Country
			</th>
			<th scope="col">
				Total area
			</th>
			<th scope="col">
				Land area
			</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<th scope="row">
				Denmark
			</th>
			<td>
				43,070
			</td>
			<td>
				42,370
			</td>
		</tr>
		<tr>
			<th scope="row">
				Finland
			</th>
			<td>
				337,030
			</td>
			<td>
				305,470
			</td>
		</tr>
		<tr>
			<th scope="row">
				Iceland
			</th>
			<td>
				103,000
			</td>
			<td>
				100,250
			</td>
		</tr>
		<tr>
			<th scope="row">
				Norway
			</th>
			<td>
				324,220
			</td>
			<td>
				307,860
			</td>
		</tr>
		<tr>
			<th scope="row">
				Sweden
			</th>
			<td>
				449,964
			</td>
			<td>
				410,928
			</td>
		</tr>
	</tbody>
</table>

<h2> Inline Videos</h2>

<p>To put a video in a page, copy the code below and replace <code>URL-HERE</code> with your video\'s YouTube share URL.</p>

<p>An example URL would look like this <code>//youtu.be/P3uJCCofuIg</code>, but remember to remove the <code>http:</code></p>

<p>If you would like the video to show left instead of right, then change the word <code>right</code> in the top line into <code>left</code></p>

<pre>
&lt;div class="inline-video right"&gt;
	&lt;div class="youtube-container--responsive"&gt;
		&lt;iframe id="youtube-field-player" class="youtube-field-player" width="100%" height="100%" src="URL-HERE?rel=0&amp;modestbranding=1&amp;wmode=opaque&amp;showinfo=0&amp;autohide=1" frameborder="0" allowfullscreen&gt;&lt;/iframe&gt;
	&lt;/div&gt;
&lt;/div&gt;
</pre>

<div>
	This site was created using <a href="http://getbootstrap.com/2.3.2/base-css.html">Bootstrap 2</a>. For more styles that can be used check out the documentation. 
</div>',
      'format' => 'pure_html',
    ),
    'additional_classes' => '',
  );
  $export['styleguide'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'survey_btn';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Survey Btn';
  $box->options = array(
    'body' => array(
      'value' => '<div class="survey_btn">
<a href="survey" target="_blank">
<div class="circle">
<img alt="Click to Provide Feedback" src="sites/all/themes/bootstrap_nhmrc/images/icon-clip-red.png">
</div>
<p>Take Our 2 Minute Survey</p>
</a>
</div>',
      'format' => 'pure_html',
    ),
    'additional_classes' => '',
  );
  $export['survey_btn'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'survey_pop_button';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Survey Pop Button';
  $box->options = array(
    'body' => array(
      'value' => '<div class="popitup" style="display:none;"><a class="colorbox-inline" href="survey?width=50%25&amp;height=50%25&amp;inline=true#block-webform-client-block-82">pop</a></div>',
      'format' => 'custom_formatting',
    ),
    'additional_classes' => '',
  );
  $export['survey_pop_button'] = $box;

  return $export;
}
