#include "TargetGenerator.hpp" 

void			TargetGenerator::learnTargetType( ATarget *target){
	if ( _targets.find(target->getType()) == _targets.end())
		_targets[target->getType()] = target;
}

void			TargetGenerator::forgetTargetType(std::string const &name){
	if ( _targets.find(name) != _targets.end())
		_targets.erase( name );	
}
/*
void			TargetGenerator::launchSpell(std::string const & name, ATarget const &target){

	if ( _targets.find(name) != _targets.end())
		_targets[name]->launch(target);
}*/

ATarget		*TargetGenerator::createTarget( std::string const &name){
	ATarget	*temp = NULL;
	if ( _targets.find(name) != _targets.end())
		temp = _targets[name]; 
	return (temp);
}
