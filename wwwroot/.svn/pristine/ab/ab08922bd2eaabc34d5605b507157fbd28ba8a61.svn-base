alt_http_client module

D7's drupal_http_request can be configured to use "an alternate HTTP client
library".

This module provides an Alternative HTTP Client library, which is really just a
copy of drupal_http_request with a few tweaks.

For example, an enhancement being discussed in
https://www.drupal.org/node/1081192 is included, which means it's possible to
tweak the SSL context options passed to PHP's stream_socket_client for HTTPS
connections.

This can be useful if you're having problems with drupal_http_request failing to
make https connections (perhaps following an upgrade to PHP 5.6 which changed
some of the defaults.

To use this module's client, put this in settings.php

$conf['drupal_http_request_function'] = 'alt_drupal_http_request';

You can then set up a custom configuration for SSL connections, including
options for specific hosts.

For example to have Drupal accept a self-signed certificate when connecting to
https://example.com put this in settings.php

$conf['drupal_ssl_context_options'] = array(
  'default' => array(
    'ssl' => array(
      'verify_peer_name' => TRUE,
      'verify_peer' => TRUE,
      'allow_self_signed' => FALSE,
    ),
  ),
  'example.com' => array(
    'ssl' => array(
      'verify_peer_name' => FALSE,
      'verify_peer' => FALSE,
      'allow_self_signed' => TRUE,
    ),
  ),
);

You should include default options.
