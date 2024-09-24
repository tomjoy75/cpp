/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:18:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/24 11:51:27 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ):Animal(){
	this->_type = "Dog";
	std::cout << "Dog : " << this->_type << " has been created!" << std::endl;
}

Dog::Dog( Dog const &src): Animal(src){
	this->_type = src._type;
	std::cout << "Dog : " << this->_type << " has been copied! (copy constructor)" << std::endl;
}

Dog::~Dog( void ){
	std::cout << "Dog : " << this->_type << " has been destroyed!" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs){
	if (this != &rhs)
		*this = rhs;//TODO: Voir si ca marche...sinon copier _type
	std::cout << "Dog : " << this->_type << " has been copied! (operator overload =)" << std::endl;
	return (*this);
}

void	Dog::makeSound( void ) const{
	std::cout << GREEN << ITALIC << "OUAF!" << RESET << std::endl;
}
