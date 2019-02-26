This is not a real Drupal module
This is a static stand alone landing page

The URL is set up inthe .htaccess file using the following rule
  ->  RewriteRule  ^making-a-difference-for-families/?$  sites/all/modules/nhmrc_static_html_pages/index.html [NC,L] # "Landing Page" URL Change


You can use relative paths in your HTML, but you need to prefix them with -> sites/all/modules/nhmrc_static_html_pages