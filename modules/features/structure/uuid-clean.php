<?php
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
function improved_var_export ($variable, $return = false, $depth = 0) {
    
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

function entity_type_export($file,$entities,$plan,$type) {
	foreach ($entities[$plan] as $entity) {
		if ($entity->__metadata['type'] = $type) {
	        $object = '$entities[\''.$plan.'\'][] = '.improved_var_export($entity,true).";\n\n";              
	        fwrite($file, $object);
		}
	}

}

function export_header($hook) {
    return '<?php
    /**
     * @file
     * structure.features.uuid_entities.inc
     */

    /**
     * Implements hook_uuid_default_entities().
     */
    function '.$hook.'_uuid_default_entities() {
      $entities = array();'."\n\n";
}

function export_footer() {
    return '
      return $entities;
    }';
}

#---------------------------------------------------------------------

// sanity check
if ( count($argv) < 5 ){
    echo "--- HELP ---\n";
    echo " Use this script to clean the exported uuid_entities, \n";
    echo " purging the file of extraneous entities\n\n";
    echo "usage: php uuid_entities-build_prepare.php input_file module_name deploy_plan_name wrap? entity_types\n\n";
    echo "input_file\t*.features.uuid_entities.inc\n";
    echo "module_name\tmachine name of module\n";
    echo "deploy_plan_name\tmachine name of deploy plan\n";
    echo "wrap\tspecify 'wrap' or 'no_wrap' (w/o) quotes to enclose in function hook_*()\n";
    echo "entity_types\tmachine names of entity_types (e.g. 'node','menu_link','taxonomy_term')\n";
    echo "\n\n";
    exit;
}

// arguments
if ( in_array('wrap', $argv)) {
    $input = $argv[1];
    $hook  = $argv[2];
    $plan  = $argv[3];
    $wrap  = ($argv[4] == 'wrap') ? TRUE : FALSE;
    $types = array_slice($argv,5);
} else {
    $input = $argv[1];
    $hook  = $argv[2];
    $plan  = $argv[3];
    $wrap  = FALSE;
    $types = array_slice($argv,4);
}


// load input
include_once $input;
$deploy_hook = $hook.'_uuid_default_entities';
$entities = $deploy_hook();


// Export all objects from one plan
if ($wrap) { echo export_header($hook); }
foreach ($entities[$plan] as $entity) {
    $type = $entity->__metadata['type'];
    if ( in_array($type, $types) ) {
        $object = '$entities[\''.$plan.'\'][] = '.improved_var_export($entity,true).";\n\n";              
        echo $object;
    }
}
if ($wrap) { echo export_footer(); }


