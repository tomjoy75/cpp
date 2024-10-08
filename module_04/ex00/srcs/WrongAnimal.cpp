/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:18:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/25 11:38:47 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ):_type(" no Type "){
	std::cout << "WrongAnimal : " << this->_type << " has been created!" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src):_type(src._type){
//	this->_type = src._type;
	std::cout << "WrongAnimal : " << this->_type << " has been copied! (copy constructor)" << std::endl;
}

WrongAnimal::~WrongAnimal( void ){
	std::cout << "WrongAnimal : " << this->_type << " has been destroyed!" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	std::cout << "WrongAnimal : " << this->_type << " has been copied! (operator overload =)" << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound( void ) const{
	std::cout << GREEN << ITALIC << "NO SOUND!" << RESET << std::endl;
}

std::string const	&WrongAnimal::getType( void ) const{
	return (this->_type);
}
