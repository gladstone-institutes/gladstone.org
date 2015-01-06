<?php 

$stderr = fopen('php://stderr','a');

/**
 * An implementation of var_export() that is compatible with instances
 * of stdClass.
 * @param mixed $variable The variable you want to export
 * @param bool $return If used and set to true, improved_var_export()
 *     will return the variable representation instead of outputting it.
 * @return mixed|null Returns the variable representation when the
 *     return parameter is used and evaluates to TRUE. Otherwise, this
 *     function will return NULL.
 */
function improved_var_export($variable, $return = false, $depth = 0) {
    
    $indent = str_repeat("\t",$depth);

    if ($variable instanceof stdClass) {
        $result = '(object) '.improved_var_export(get_object_vars($variable), true, $depth+1);
    } else if (is_array($variable)) {
        $array = array ();
        foreach ($variable as $key => $value) {
            $array[] = $indent.var_export($key, true).' => '.improved_var_export($value, true, $depth+1);
        }
        $result = "array(\n".implode(",\n", $array)."\n".$indent.")";
    } else {
        $result = var_export($variable, true);
    }

    if (!$return) {
        print $result;
        return null;
    } else {
        return $result;
    }
}

/** 
 * Load existing entities to be updated
 */
function get_uuid_entities($module) {

    $entities = array();
    $current  = array(
            'lookup_uuid' => array(),
            'entities'    => array(),
            'plan' => ''
        );

    require $module.'/'.$module.'.features.uuid_entities.inc';
    $hook = $module.'_uuid_default_entities';
    $entities = $hook();

    // build uuid lookup hash
    if (count(array_keys($entities)) > 1) {
        echo "Make sure there is only one deploy plan per module for\n";
        echo "entities deplayed as part of the 'structure' module\n\n";
        exit;
    }

    $current['plan'] = array_keys($entities)[0];

    foreach ($entities[$current['plan']] as $i => $entity) {
        $uuid = $entity->uuid;
        $current['entities'][$i] = $entity;
        $current['lookup_uuid'][$uuid] = $i;
    }

    return $current;
}

/** 
 * Load new entities to use for update
 */
function get_updated_entities() {
    require 'export_staging/export_staging.features.uuid_entities.inc';
    $update = export_staging_uuid_default_entities();
    return $update['export_staging'];
}

/**
 * Update the currently "exported" uuid entities' values, 
 * appending any new entities to the end of the array
 */
function update_current(&$current, &$updates, $types) {

    global $stderr;

    $plan = $current['plan'];

    // update any existing entities and append new ones
    foreach ($updates as $update ) {
        $uuid = $update->uuid;
        $type = $update->__metadata['type'];
        
        if ( in_array($type, $types) ) {

            if ( property_exists($update,'title') ) {
                $title = $update->title;
            } elseif ( property_exists($update, 'name') ) {
                $title = $update->name;
            } elseif ( property_exists($update, 'link_title')) {
                $title = $update->link_title;
            } else {
                $title = "";
            }

            $type = str_pad($update->__metadata['type'],14);
            if ( array_key_exists($uuid, $current['lookup_uuid']) ) {
                $i = $current['lookup_uuid'][$uuid];
                $current['entities'][$i] = $update;
                fwrite($stderr, "Updated: $type $uuid $title\n"); 
            } else {
                $current['entities'][] = $update;
                fwrite($stderr,"!NEW!  : $type $uuid $title\n");   
            }

        }
    }
}

function export_header($module) {
    return '<?php
    /**
     * @file
     * structure.features.uuid_entities.inc
     */

    /**
     * Implements hook_uuid_default_entities().
     */
    function '.$module.'_uuid_default_entities() {
      $entities = array();'."\n\n";
}

function export_footer() {
    return '
      return $entities;
    }';
}


# MAIN ------------------------------------

// sanity check
if ( count($argv) < 2 ){
    echo "--- HELP ---\n";
    echo " Use this script to update exported uuid_entities for the structure module \n";
    echo " preserving the original order. Make sure there is only one deploy plan per \n";
    echo " module for entities deployed as part of the 'structure' module\n\n";
    echo "\n* run from the structure directory, and the entities exported to 'export_staging'\n";
    echo "will be merged/updated into the specified module_name and deploy_plan\n\n";
    echo "usage: php uuid-update.php input_file module_name deploy_plan_name entity_types\n\n";
    echo "module_name\tmachine name of module\n";
    echo "entity_types\tmachine names of entity_types (e.g. 'node','menu_link','taxonomy_term')\n";
    echo "\n\n";
    exit;
}

// arguments
$module  = $argv[1];
$types   = array_slice($argv,2);

// import
$current = get_uuid_entities($module);
$updates = get_updated_entities();

// update
update_current($current, $updates, $types);

// export
$export = fopen($module.'/'.$module.'.features.uuid_entities.inc', 'w+');
fwrite($export, export_header($module));
foreach ($current['entities'] as $i => $entity) {    
    $type = $entity->__metadata['type'];
    $object = '$entities[\''.$current['plan'].'\'][] = '.improved_var_export($entity,true).";\n\n";              
    fwrite($export, $object);   
}
fwrite($export, export_footer());

fclose($export);
fclose($stderr);
?>

