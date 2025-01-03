#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp" 
#include "ATarget.hpp" 

class SpellBook {
private:
	std::map<std::string, ASpell *> _spells;
public:
	void			learnSpell( ASpell *spell);
	void			forgetSpell(std::string const &name);
	//void			launchSpell(std::string const & name, ATarget const &target);
	ASpell		*createSpell( std::string const &name);
};
