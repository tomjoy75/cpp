#include "SpellBook.hpp" 

void			SpellBook::learnSpell( ASpell *spell){
	if ( _spells.find(spell->getName()) == _spells.end())
		_spells[spell->getName()] = spell;
}

void			SpellBook::forgetSpell(std::string const &name){
	if ( _spells.find(name) != _spells.end())
		_spells.erase( name );	
}
/*
void			SpellBook::launchSpell(std::string const & name, ATarget const &target){

	if ( _spells.find(name) != _spells.end())
		_spells[name]->launch(target);
}*/

ASpell		*SpellBook::createSpell( std::string const &name){
	ASpell	*temp = NULL;
	if ( _spells.find(name) != _spells.end())
		temp = _spells[name]; 
	return (temp);
}
