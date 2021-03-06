<?php
/**
 * @file
 * trf_ring_taxonomies.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_ring_taxonomies_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: taxonomy
  $overrides["taxonomy.collection.description"] = 'Collections such as themes, men\'s and women\'s, gemstones, color, commitment rings, etc.';
  $overrides["taxonomy.collection.rdf_mapping"] = array(
    'description' => array(
      'predicates' => array(
        0 => 'rdfs:comment',
      ),
    ),
    'name' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'rdftype' => array(
      0 => 'skos:ConceptScheme',
    ),
  );
  $overrides["taxonomy.collection.weight"] = -10;
  $overrides["taxonomy.color.rdf_mapping"] = array(
    'description' => array(
      'predicates' => array(
        0 => 'rdfs:comment',
      ),
    ),
    'name' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'rdftype' => array(
      0 => 'skos:ConceptScheme',
    ),
  );
  $overrides["taxonomy.color.weight"] = -8;

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_taxonomy_term__collection.value|extra_fields|display|description|featured"] = array(
    'weight' => 2,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_taxonomy_term__collection.value|extra_fields|form|description"] = array(
    'weight' => 4,
  );
  $overrides["variable.field_bundle_settings_taxonomy_term__collection.value|extra_fields|form|name"] = array(
    'weight' => 0,
  );
  $overrides["variable.field_bundle_settings_taxonomy_term__collection.value|extra_fields|form|path"] = array(
    'weight' => 6,
  );
  $overrides["variable.field_bundle_settings_taxonomy_term__collection.value|view_modes|add_to_cart_form"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_taxonomy_term__collection.value|view_modes|featured"] = array(
    'custom_settings' => TRUE,
  );

 return $overrides;
}
