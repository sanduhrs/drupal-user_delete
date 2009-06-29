<?php
/* $Id$ */

/**
 * User delete
 * 
 * @author 
 * Stefan Auditor <stefan.auditor@erdfisch.de>
 */

/**
 * Administrative settings page
 *
 * @return array
 *   a form array
 */
function user_delete_settings() {
  //TODO: add additional settings based on http://drupal.org/node/8#comment-628434
  
  $form['user_delete_redirect'] = array(
    '#type' => 'textfield',
    '#title' => t('Redirection page'),
    '#default_value' => variable_get('user_delete_redirect', '<front>'),
    '#description' => t('Choose where to redirect your users after account deletion. Any valid Drupal path will do, e.g. %front or %node', array('%front' => '<front>', '%node' => 'node/1')),
    '#required' => TRUE,
  );
  
  return system_settings_form($form);
}
