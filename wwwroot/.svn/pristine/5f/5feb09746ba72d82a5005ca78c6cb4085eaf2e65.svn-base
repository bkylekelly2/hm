<?php

/**
 * @file
 * Contains the grid style plugin.
 */

/**
 * Style plugin to render each item in a grid cell.
 *
 * @ingroup views_style_plugins
 */
class tld_bootstrap_plugin_style_grid extends views_plugin_style {
  /**
   * Set default options
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['columns'] = array('default' => '4');

    $options['item_settings']['item_enabled'] = array('default' => 0);
    $options['item_settings']['item_width'] = array('default' => '3');
    $options['item_settings']['item_element'] = array('default' => 'div');

    $options['container_settings']['container_enabled'] = array('default' => 0);
    $options['container_settings']['container_element'] = array('default' => 'div');
    $options['container_settings']['container_width'] = array('default' => '12');

    return $options;
  }

  /**
   * Render the given style.
   */
  function options_form(&$form, &$form_state) {
    $form['columns'] = array(
      '#type' => 'textfield',
      '#title' => t('Number of columns'),
      '#default_value' => $this->options['columns'],
      '#required' => TRUE,
      '#element_validate' => array('views_element_validate_integer'),
    );

    $form['item_settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('Settings for each item'),
    );

    $form['item_settings']['item_enabled'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable wrappers for each item'),
      '#description' => t('You can wrap your items in a block level element via this view, or you can handle it in your content display settings.'),
      '#default_value' => $this->options['item_settings']['item_enabled'],
    );
    $form['item_settings']['item_element'] = array(
      '#type' => 'radios',
      '#title' => t('Item container element'),
      '#description' => t('The element type that will wrap the views content. This will be used if the item width is set. Otherwise it will be ignored.'),
      '#options' => array(
        'div' => 'div',
        'article' => 'article',
        'section' => 'section',
        'p' => 'p'
      ),
      '#default_value' => $this->options['item_settings']['item_element'],
    );
    $form['item_settings']['item_width'] = array(
      '#type' => 'textfield',
      '#title' => t('Item width'),
      '#description' => t('The width of each item in columns. Leave blank if you plan to implement wrapper classes through you content type display settings.'),
      '#required' => FALSE,
      '#default_value' => $this->options['item_settings']['item_width'],
      '#element_validate' => array('views_element_validate_integer'),
    );


    $form['container_settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('Settings for a main wrapper container'),
    );
    $form['container_settings']['container_enabled'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable a wrapper container on the whole view.'),
      '#description' => t('You can wrap the entire view in a container. This is usefel for setting the width of the display in columns.'),
      '#default_value' => $this->options['container_settings']['container_enabled'],
    );
    $form['container_settings']['container_element'] = array(
      '#type' => 'radios',
      '#title' => t('Provide wrapper container'),
      '#description' => t('Provide a wrapper container based upon plugin settings'),
      '#options' => array(
        'div' => 'div',
        'article' => 'article',
        'section' => 'section',
        'p' => 'p'
      ),
      '#default_value' => $this->options['container_settings']['container_element'],
    );
    $form['container_settings']['container_width'] = array(
      '#type' => 'textfield',
      '#title' => t('Container column width'),
      '#description' => t('The width of the item container (this wraps all output in a bootstrap class of spanX, where X is the column width of the container.'),
      '#required' => FALSE,
      '#default_value' => $this->options['container_settings']['container_width'],
      '#element_validate' => array('views_element_validate_integer'),
    );
  }
}