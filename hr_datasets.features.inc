<?php
/**
 * @file
 * hr_datasets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_datasets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hr_datasets_node_info() {
  $items = array(
    'hr_dataset' => array(
      'name' => t('Dataset'),
      'base' => 'node_content',
      'description' => t('A Dataset contains information about a particular COD or FOD.  This information includes a description of the dataset, and instructions on how to obtain the dataset or a link to it.  The link can be to a file uploaded locally on this registry or to an external source of the data.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use this form to submit or edit a <strong>COD or FOD</strong> dataset.  The dataset must represent the "best-available" dataset which is agreed by the Information Management Working Group for the country or emergency.  More information on the <a href="/about">difference between CODs and FODs.</a>'),
    ),
  );
  return $items;
}
