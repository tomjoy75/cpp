/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:18:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/26 11:10:04 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ):AAnimal(){
	this->_type = "Dog";
	this->_brain = new Brain;
	std::cout << "Dog : " << this->_type << " has been created!" << std::endl;
}

Dog::Dog( Dog const &src): AAnimal(src){
	this->_brain = new Brain(*src._brain);
	std::cout << "Dog : " << this->_type << " has been copied! (copy constructor)" << std::endl;
}

Dog::~Dog( void ){
	delete (this->_brain);
	std::cout << "Dog : " << this->_type << " has been destroyed!" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs){
	if (this == &rhs){
		std::cout << "Dog : " << this->_type << " same memory adress -- no copy!" << std::endl;
		return (*this);
	}
	delete (this->_brain);
	this->_brain = new Brain(*rhs._brain);
	this->_type = rhs._type;
	std::cout << "Dog : " << this->_type << " has been copied! (operator overload =)" << std::endl;
	return (*this);
}

void	Dog::makeSound( void ) const{
	std::cout << GREEN << ITALIC << "OUAF!" << RESET << std::endl;
}
