#pragma once

#include <iostream>

class ATarget;
class ASpell {
protected:
	std::string	_name;	
	std::string	_effects;	
public:
	ASpell( std::string const &name, std::string const &effects );
	virtual ~ASpell();
	std::string const	&getName() const;
	std::string const	&getEffects() const;
	virtual ASpell		*clone() const = 0;
	void			launch( ATarget const &target) const;
};
