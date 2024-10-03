/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:45:15 by joyeux            #+#    #+#             */
/*   Updated: 2024/10/03 21:51:00 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice( void ): AMateria(){
	this->_type = "ice";
	std::cout << "Ice : " << this->_type << " has been created!" << std::endl;
}

Ice::Ice( Ice const & src): AMateria( src ){
	this->_type = src._type;
	std::cout << "Ice : " << this->_type << " has been copied!(copy constructor)" << std::endl;
}

Ice::~Ice( void ){
	std::cout << "Ice : " << this->_type << " has been destroyed!" << std::endl;
}

Ice	&Ice::operator=( Ice const &rhs ){
	if ( this == &rhs ){
		std::cout << "Ice : " << this->_type << " same memory adress -- no copy!" << std::endl;
		return (*this);
	}
	this->_type = rhs._type;
	std::cout << "Ice : " << this->_type << " has been copied!(operator overload =)" << std::endl;
	return (*this);
}

AMateria	*Ice::clone( void ) const{
	AMateria	*tmp = new Ice(*this);
	std::cout << "Ice : " << this->_type << " has been cloned!(dynamic allocation)" << std::endl;
	return (tmp);	
}

void		Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
