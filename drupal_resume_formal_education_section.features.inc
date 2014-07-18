<?php
/**
 * @file
 * drupal_resume_formal_education_section.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupal_resume_formal_education_section_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drupal_resume_formal_education_section_node_info() {
  $items = array(
    'formal_education' => array(
      'name' => t('Formal Education'),
      'base' => 'node_content',
      'description' => t('This content type is used to describe College/University level education, including degrees earned and more.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
