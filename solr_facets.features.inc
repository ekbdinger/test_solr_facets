<?php
/**
 * @file
 * solr_facets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function solr_facets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}
