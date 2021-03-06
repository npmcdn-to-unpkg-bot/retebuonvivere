<?php
/**
 * @file
 * rbv_com_fields.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rbv_com_fields_taxonomy_default_vocabularies() {
  return array(
    'categories' => array(
      'name' => 'Settori',
      'machine_name' => 'categories',
      'description' => 'Settori di attività o categorie',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
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
    'membership_roles' => array(
      'name' => 'Ruoli',
      'machine_name' => 'membership_roles',
      'description' => 'Ruoli ricoperti dalle persone nelle organizzazioni',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
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
    'org_types' => array(
      'name' => 'Tipi di organizzazione',
      'machine_name' => 'org_types',
      'description' => 'Le tipologie di organizazione della società civile, es: Associazione Onlus, Cooperativa Sociale, Comitato, Impresa sociale, GAS',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -5,
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
    'relation_categories' => array(
      'name' => 'Tipi di relazione',
      'machine_name' => 'relation_categories',
      'description' => 'Tipologie delle relazioni di collaborazione tra organizzazioni: è socio di, è nella rete, ...',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => -4,
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
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
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
