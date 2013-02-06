<?php
/**
 * @file
 * views_cache_bully.views.inc
 */

/**
 * Implements hook_views_plugins_alter().
 */
function views_cache_bully_views_plugins_alter(&$plugins) {
  unset($plugins['cache']['none']);
  $plugins['cache']['none'] = $plugins['cache']['time'];
  $plugins['cache']['none']['title'] = 'Time-based (from Views Cache Bully)';
}
