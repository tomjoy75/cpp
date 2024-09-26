/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:18:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/26 11:08:09 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal( void ):_type(" no Type "){
	std::cout << "AAnimal : " << this->_type << " has been created!" << std::endl;
}

AAnimal::AAnimal( AAnimal const &src):_type(src._type){
	std::cout << "AAnimal : " << this->_type << " has been copied! (copy constructor)" << std::endl;
}

AAnimal::~AAnimal( void ){
	std::cout << "AAnimal : " << this->_type << " has been destroyed!" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	std::cout << "AAnimal : " << this->_type << " has been copied! (operator overload =)" << std::endl;
	return (*this);
}

void	AAnimal::makeSound( void ) const{
	std::cout << GREEN << ITALIC << "NO SOUND!" << RESET << std::endl;
}

std::string const	&AAnimal::getType( void ) const{
	return (this->_type);
}
