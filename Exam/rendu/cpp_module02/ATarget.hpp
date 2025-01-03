#pragma once

#include <iostream>

class ASpell;
class ATarget {
protected:
	std::string	_type;	
public:
	ATarget( std::string const &type);
	virtual ~ATarget();
	std::string const	&getType() const;
	virtual ATarget		*clone() const = 0;
	void			getHitBySpell( ASpell const &spell ) const;		
};
