/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:45:15 by joyeux            #+#    #+#             */
/*   Updated: 2024/10/02 16:35:41 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure( void ): AMateria("cure"){
//	this->_type = "cure";
	std::cout << "Cure : " << this->_type << " has been created!" << std::endl;
}

Cure::Cure( Cure const & src): AMateria( src ){
	this->_type = src._type;
	std::cout << "Cure : " << this->_type << " has been copied!(copy constructor)" << std::endl;
}

Cure::~Cure( void ){
	std::cout << "Cure : " << this->_type << " has been destroyed!" << std::endl;
}

Cure	&Cure::operator=( Cure const &rhs ){
	if ( this == &rhs ){
		std::cout << "Cure : " << this->_type << " same memory adress -- no copy!" << std::endl;
		return (*this);
	}
	this->_type = rhs._type;
	std::cout << "Cure : " << this->_type << " has been copied!(operator overload =)" << std::endl;
	return (*this);
}

AMateria	*Cure::clone( void ) const{
	AMateria	*tmp = new Cure(*this);
	std::cout << "Cure : " << this->_type << " has been cloned!(dynamic allocation)" << std::endl;
	return (tmp);	
}

void		Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
