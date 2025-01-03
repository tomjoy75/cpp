#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp" 
#include "ATarget.hpp" 

class TargetGenerator{
private:
	std::map<std::string, ATarget *> _targets;
public:
	void			learnTargetType( ATarget *target);
	void			forgetTargetType(std::string const &name);
	//void			launchSpell(std::string const & name, ATarget const &target);
	ATarget		*createTarget( std::string const &name);
};
