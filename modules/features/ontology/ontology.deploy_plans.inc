<?php
/**
 * @file
 * ontology.deploy_plans.inc
 */

/**
 * Implements hook_deploy_plans_default().
 */
function ontology_deploy_plans_default() {
  $export = array();

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'ontology_operational_role_terms';
  $plan->title = 'Ontology Operational Role Terms';
  $plan->description = 'Additions to the operational role(s) taxonomy';
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
  $export['ontology_operational_role_terms'] = $plan;

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'ontology_operational_unit_terms';
  $plan->title = 'Ontology Operational Unit Terms';
  $plan->description = 'Additions to the operational unit(s) taxonomy';
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
  $export['ontology_operational_unit_terms'] = $plan;

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'ontology_structure_terms';
  $plan->title = 'Ontology Structure Terms';
  $plan->description = 'Load terms initializing the taxonomy';
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
  $export['ontology_structure_terms'] = $plan;

  return $export;
}
