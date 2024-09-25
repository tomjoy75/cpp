/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:18:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/25 10:45:22 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ):_type(" no Type "){
	std::cout << "Animal : " << this->_type << " has been created!" << std::endl;
}

Animal::Animal( Animal const &src): _type(src._type){
//	this->_type = src._type;
	std::cout << "Animal : " << this->_type << " has been copied! (copy constructor)" << std::endl;
}

Animal::~Animal( void ){
	std::cout << "Animal : " << this->_type << " has been destroyed!" << std::endl;
}

Animal	&Animal::operator=(Animal const &rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	std::cout << "Animal : " << this->_type << " has been copied! (operator overload =)" << std::endl;
	return (*this);
}

void	Animal::makeSound( void ) const{
	std::cout << GREEN << ITALIC << "NO SOUND!" << RESET << std::endl;
}

std::string const	&Animal::getType( void ) const{
	return (this->_type);
}
