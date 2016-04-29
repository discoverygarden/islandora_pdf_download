<?php
/**
 * @file
 * An Islandora module for downloading PDF datastreams on objects.
 */

/**
 * Implements hook_preprocess_theme().
 */
function islandora_pdf_download_preprocess_islandora_pdf_download(&$variables) {
  drupal_add_js(
    array(
      'islandora_pdf_download' => array(
        'url' => url("islandora/object/{$variables['islandora_object']->id}/datastream/PDF/download"),
      ),
    ),
  'setting');
  $module_path = drupal_get_path('module', 'islandora_pdf_download');
  drupal_add_js("$module_path/js/behaviour.js");
}
