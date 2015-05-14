<?php
/**
 * @file
 * todotoday.features.inc
 */

/**
 * Implements hook_node_info().
 */
function todotoday_node_info() {
  $items = array(
    'todolist_task' => array(
      'name' => t('Task'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Task'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
