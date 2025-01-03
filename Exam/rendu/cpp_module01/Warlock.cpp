#include "Warlock.hpp" 


Warlock::Warlock( std::string const &name, std::string const &title ): _name(name), _title(title){
	std::cout << _name << ": This looks like another boring day." << std::endl; 
}

Warlock::~Warlock(){
	std::cout << _name << ": My job here is done!" << std::endl; 

}

std::string const	&Warlock::getName() const{
	return ( _name );
}

std::string const	&Warlock::getTitle() const{
	return ( _title );

}

void			Warlock::setTitle(std::string const &title){
	_title = title;
}

void			Warlock::introduce() const{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl; 
}

void			Warlock::learnSpell( ASpell *spell){
	if ( _spells.find(spell->getName()) == _spells.end())
		_spells[spell->getName()] = spell;
}

void			Warlock::forgetSpell(std::string const &name){
	if ( _spells.find(name) != _spells.end())
		_spells.erase( name );	
}

void			Warlock::launchSpell(std::string const & name, ATarget const &target){

	if ( _spells.find(name) != _spells.end())
		_spells[name]->launch(target);
}
