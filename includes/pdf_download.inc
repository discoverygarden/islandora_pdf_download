<?php
/**
 * @file
 * An Islandora module for downloading PDF datastreams on objects.
 */

/**
 * Menu callback to facilitate PDF download.
 *
 * @param AbstractObject $islandora_object
 *   Islandora object with the PDF to be downloaded.
 */
function islandora_pdf_download_pdf(AbstractObject $islandora_object) {
  $message_link = t('Thank you for downloading. If your download has not started, click <a href="@download">here</a>.',
    array(
      '@download' => url("islandora/object/{$islandora_object->id}/datastream/PDF/download"),
    )
  );
  return theme(
    'islandora_pdf_download',
    array(
      'islandora_object' => $islandora_object,
      'message' => $message_link,
    )
  );
}
