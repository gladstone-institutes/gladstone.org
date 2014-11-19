<?php
/**
 * @file
 * site_pages.deploy_plans.inc
 */

/**
 * Implements hook_deploy_plans_default().
 */
function site_pages_deploy_plans_default() {
  $export = array();

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'structure_site_pages';
  $plan->title = 'Structure Site Pages';
  $plan->description = 'Core nodes essential to site structure (see doc: deployment workaround). This plan ensures nodes are populated in a specific order such that "special" URIs in the sitemap will remain persistent since deploy does not attempt to map the nids for these paths. (example: institute/gicd/home/10, will not have nid:10\'s relationship preserved)';
  $plan->debug = 0;
  $plan->aggregator_plugin = 'DeployAggregatorManaged';
  $plan->aggregator_config = array(
    'delete_post_deploy' => 0,
  );
  $plan->fetch_only = 1;
  $plan->processor_plugin = '';
  $plan->processor_config = array();
  $plan->endpoints = array();
  $plan->dependency_plugin = 'deploy_iterator';
  $export['structure_site_pages'] = $plan;

  return $export;
}
