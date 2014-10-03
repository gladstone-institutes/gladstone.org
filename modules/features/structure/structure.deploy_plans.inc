<?php
/**
 * @file
 * structure.deploy_plans.inc
 */

/**
 * Implements hook_deploy_plans_default().
 */
function structure_deploy_plans_default() {
  $export = array();

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'superstruct_structure_taxonomy';
  $plan->title = 'superstruct_structure_taxonomy';
  $plan->description = 'Additions to the structure taxonomy';
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
  $export['superstruct_structure_taxonomy'] = $plan;

  return $export;
}
