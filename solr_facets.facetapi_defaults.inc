<?php
/**
 * @file
 * solr_facets.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function solr_facets_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1::im_field_version';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = '';
  $facet->facet = 'im_field_version';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(
        'article' => 0,
        'page' => 0,
        'forum' => 0,
      ),
      'roles' => array(
        1 => 0,
        2 => 0,
        11 => 0,
      ),
    ),
    'facet_mincount' => '1',
    'facet_missing' => 0,
    'flatten' => '0',
    'query_type' => 'term',
  );
  $export['apachesolr@acquia_search_server_1::im_field_version'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1::im_taxonomy_forums';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = '';
  $facet->facet = 'im_taxonomy_forums';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'selected',
      'bundle_selected' => array(
        'forum' => 'forum',
        'article' => 0,
        'page' => 0,
      ),
      'roles' => array(
        1 => 0,
        2 => 0,
        11 => 0,
      ),
    ),
    'facet_mincount' => '1',
    'facet_missing' => 0,
    'flatten' => '0',
    'query_type' => 'term',
  );
  $export['apachesolr@acquia_search_server_1::im_taxonomy_forums'] = $facet;

  return $export;
}
