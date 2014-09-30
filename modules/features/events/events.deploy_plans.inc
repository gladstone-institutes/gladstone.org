<?php
/**
 * @file
 * events.deploy_plans.inc
 */

/**
 * Implements hook_deploy_plans_default().
 */
function events_deploy_plans_default() {
  $export = array();

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'event_types_taxonomy';
  $plan->title = 'event_types_taxonomy';
  $plan->description = 'Taxonomy terms for events management and content type';
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
  $export['event_types_taxonomy'] = $plan;

  return $export;
}
