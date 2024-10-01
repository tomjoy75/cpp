/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:05:04 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/01 13:04:45 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ): _type("none"){
	std::cout << "AMateria : " << this->_type << " has been created!" << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type){
	std::cout << "AMateria : " << this->_type << " has been created!" << std::endl;
}
/*
AMateria::AMateria(AMateria const &src){
	std::cout << "AMateria : " << this->_type << " has been copied!(copy constructor)" << std::endl;
}
*/
AMateria::~AMateria( void ){
	std::cout << "AMateria : " << this->_type << " has been destroyed!" << std::endl;

}
/*
AMateria	&AMateria::operator=(AMateria const &rhs){
	std::cout << "AMateria : " << this->_type << " has been copied!(operator overload)" << std::endl;
}
*/
std::string const & AMateria::getType() const{ //Returns the materia type
	return (this->_type);
}

//	virtual AMateria* clone() const = 0;
/*
void	AMateria::use(ICharacter& target){
}
*/
