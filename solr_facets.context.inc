<?php
/**
 * @file
 * solr_facets.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function solr_facets_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'facet_version';
  $context->description = 'Facet to sort by product version';
  $context->tag = 'solr';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-VOYmF3NnKk95qY2lOC4Bf0v0k5b4QYUd' => array(
          'module' => 'facetapi',
          'delta' => 'VOYmF3NnKk95qY2lOC4Bf0v0k5b4QYUd',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Facet to sort by product version');
  t('solr');
  $export['facet_version'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'forum_category_test';
  $context->description = 'Forum Category should display when on forum facet';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-rmLsZFdnrGSVSQd6lAHvMKksosIUhq8y' => array(
          'module' => 'facetapi',
          'delta' => 'rmLsZFdnrGSVSQd6lAHvMKksosIUhq8y',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Forum Category should display when on forum facet');
  $export['forum_category_test'] = $context;

  return $export;
}
