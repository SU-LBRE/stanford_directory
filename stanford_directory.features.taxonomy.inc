<?php
/**
 * @file
 * stanford_directory.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function stanford_directory_taxonomy_default_vocabularies() {
  return array(
    'stanford_directory_audience' => array(
      'name' => 'Service Directory Audience',
      'machine_name' => 'stanford_directory_audience',
      'description' => 'Service Directory Audience',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'stanford_directory_category' => array(
      'name' => 'Service Directory Category',
      'machine_name' => 'stanford_directory_category',
      'description' => 'Service Directory Category',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
