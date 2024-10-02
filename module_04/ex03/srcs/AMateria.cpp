/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:05:04 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/02 16:44:37 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( void ): _type("none"){
	std::cout << "AMateria : " << this->_type << " has been created!" << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type){
	std::cout << "AMateria : " << this->_type << " has been created!" << std::endl;
}

AMateria::AMateria(AMateria const &src): _type(src._type){
	std::cout << "AMateria : " << this->_type << " has been copied!(copy constructor)" << std::endl;
}

AMateria::~AMateria( void ){
	std::cout << "AMateria : " << this->_type << " has been destroyed!" << std::endl;

}

AMateria	&AMateria::operator=(AMateria const &rhs){
	if ( this == &rhs ){
		std::cout << "AMateria : " << this->_type << " same memory adress -- no copy!" << std::endl;
		return (*this);
	}
	this->_type = rhs._type;
	std::cout << "AMateria : " << this->_type << " has been copied!(operator overload)" << std::endl;
	return (*this);
}

std::string const & AMateria::getType() const{ //Returns the materia type
	return (this->_type);
}

//	virtual AMateria* clone() const = 0;

void	AMateria::use(ICharacter& target){
	std::cout << "AMateria use on " << target.getName() << std::endl;
}

