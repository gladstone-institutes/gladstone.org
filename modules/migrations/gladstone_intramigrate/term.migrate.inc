<?php
class GSOpsUnitTerms extends DrupalTerm7Migration {
  public function __construct(array $arguments) {
    $arguments['description'] = 'import ops units terms';
    $arguments['source_vocabulary'] = 'operational_units';
    $arguments['destination_vocabulary'] = 'operational_units';    
    parent::__construct($arguments);

    $this->dependencies[] = 'role';
  }
}

class GSOpsRoleTerms extends DrupalTerm7Migration {
  public function __construct(array $arguments) {
    $arguments['description'] = 'import ops role terms';
    $arguments['source_vocabulary'] = 'operational_roles';
    $arguments['destination_vocabulary'] = 'operational_roles';    
    parent::__construct($arguments);

    $this->dependencies[] = 'operational_unit';

    $this->removeFieldMapping('parent');
    $this->addUnmigratedDestinations(array(
      'parent',
    ));
  }
}

class GSOpsTitleTerms extends DrupalTerm7Migration {
  public function __construct(array $arguments) {
    $arguments['description'] = 'import ops title terms';
    $arguments['source_vocabulary'] = 'operational_titles';
    $arguments['destination_vocabulary'] = 'operational_titles';    
    parent::__construct($arguments);

    $this->dependencies[] = 'operational_role';

    $this->removeFieldMapping('parent');
    $this->addUnmigratedDestinations(array(
      'parent',
    ));
  }
}

class GSInstitutionTerms extends DrupalTerm7Migration {
  public function __construct(array $arguments) {
    $arguments['description'] = 'import institution terms';
    $arguments['source_vocabulary'] = 'institutions';
    $arguments['destination_vocabulary'] = 'institutions';
    parent::__construct($arguments);

    $this->dependencies[] = 'operational_title';

    $this->removeFieldMapping('parent');
    $this->addUnmigratedDestinations(array(
      'parent',
    ));   
  }
}

class GSInstitutionOpUnitTerms extends DrupalTerm7Migration {
  public function __construct(array $arguments) {
    $arguments['description'] = 'import institution operational unit terms';
    $arguments['source_vocabulary'] = 'institution_operational_unit';
    $arguments['destination_vocabulary'] = 'institution_operational_unit';
    parent::__construct($arguments);

    $this->dependencies[] = 'institution';

    $this->removeFieldMapping('parent');
    $this->addUnmigratedDestinations(array(
      'parent',
    ));   
  }
}

class GSHonorsAndAwardsTerms extends DrupalTerm7Migration {
  public function __construct(array $arguments) {
    $arguments['description'] = 'import honors and awards terms';
    $arguments['source_vocabulary'] = 'honors_and_awards';
    $arguments['destination_vocabulary'] = 'honors_and_awards';
    parent::__construct($arguments);

    $this->dependencies[] = 'institution_operational_unit';

    $this->removeFieldMapping('parent');
    $this->addUnmigratedDestinations(array(
      'parent',
    ));   
  }
}

class GSConcentrationOfStudyTerms extends DrupalTerm7Migration {
  public function __construct(array $arguments) {
    $arguments['description'] = 'import concentration of study terms';
    $arguments['source_vocabulary'] = 'concentration_of_study';
    $arguments['destination_vocabulary'] = 'concentration_of_study';
    parent::__construct($arguments);

    $this->dependencies[] = 'honors_and_awards';

    $this->removeFieldMapping('parent');
    $this->addUnmigratedDestinations(array(
      'parent',
    ));   
  }
}

class GSResearchTerms extends DrupalTerm7Migration {
  public function __construct(array $arguments) {
    $arguments['description'] = 'import research terms';
    $arguments['source_vocabulary'] = 'research';
    $arguments['destination_vocabulary'] = 'research';
    parent::__construct($arguments);

    $this->dependencies[] = 'concentration_of_study';

    $this->removeFieldMapping('parent');
    $this->addUnmigratedDestinations(array(
      'parent',
    ));   
  }
}

class GSEventTypeTerms extends DrupalTerm7Migration {
  public function __construct(array $arguments) {
    $arguments['description'] = 'import research terms';
    $arguments['source_vocabulary'] = 'event_type';
    $arguments['destination_vocabulary'] = 'event_type';
    parent::__construct($arguments);

    $this->dependencies[] = 'research';

    $this->removeFieldMapping('parent');
    $this->addUnmigratedDestinations(array(
      'parent',
    ));   
  }
}

