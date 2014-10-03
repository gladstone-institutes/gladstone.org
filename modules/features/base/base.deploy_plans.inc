<?php
/**
 * @file
 * base.deploy_plans.inc
 */

/**
 * Implements hook_deploy_plans_default().
 */
function base_deploy_plans_default() {
  $export = array();

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'structure_taxonomy';
  $plan->title = 'structure_taxonomy';
  $plan->description = 'load terms initializing the taxonomy';
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
  $export['structure_taxonomy'] = $plan;

  return $export;
}
