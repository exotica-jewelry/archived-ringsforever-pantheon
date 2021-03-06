<?php
/**
 * @file
 * trf_ring_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function trf_ring_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_rings';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_rings';
  $strongarm->value = '[node:field-ring-name] titanium ring with [node:field-ring-elements-primary]';
  $export['auto_entitylabel_pattern_node_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_rings';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_rings';
  $strongarm->value = '1';
  $export['comment_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_rings';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_rings';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_rings';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__rings';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'product_list' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'reference_view' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'embedded' => array(
        'custom_settings' => TRUE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '15',
        ),
        'redirect' => array(
          'weight' => '16',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'reference_view' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'embedded' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'reference_view' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'embedded' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'reference_view' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'embedded' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
        ),
        'product:title_field' => array(
          'default' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'reference_view' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '37',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'embedded' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'reference_view' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'featured' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'embedded' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:field_images' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'reference_view' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'featured' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'embedded' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'product:field_color' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'reference_view' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '17',
            'visible' => TRUE,
          ),
          'featured' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'embedded' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'product:field_ring_width' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'reference_view' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
          'featured' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'embedded' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'product:field_ring_width_shown' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'reference_view' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'featured' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'embedded' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
        'product:field_title_parent' => array(
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'reference_view' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'embedded' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_rings';
  $strongarm->value = array();
  $export['menu_options_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_rings';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_rings';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_rings';
  $strongarm->value = '1';
  $export['node_preview_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_rings';
  $strongarm->value = 0;
  $export['node_submitted_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_rings_pattern';
  $strongarm->value = '[node:field-product-type]/[node:field-ring-elements-primary:name]/[node:field-ring-name]';
  $export['pathauto_node_rings_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'title_commerce_product';
  $strongarm->value = array(
    'auto_attach' => array(
      'title' => 'title',
    ),
    'hide_label' => array(
      'entity' => 'entity',
      'page' => 0,
    ),
  );
  $export['title_commerce_product'] = $strongarm;

  return $export;
}
