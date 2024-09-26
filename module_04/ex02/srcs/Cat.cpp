/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:18:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/26 11:09:02 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ):AAnimal(){
	this->_type = "Cat";
	this->_brain = new Brain;
	std::cout << "Cat : " << this->_type << " has been created!" << std::endl;
}

Cat::Cat( Cat const &src): AAnimal(src){
	this->_brain = new Brain(*src._brain);
	std::cout << "Cat : " << this->_type << " has been copied! (copy constructor)" << std::endl;
}

Cat::~Cat( void ){
	delete (this->_brain);
	std::cout << "Cat : " << this->_type << " has been destroyed!" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs){
	if (this == &rhs){
		std::cout << "Cat : " << this->_type << " same memory adress -- no copy!" << std::endl;
		return (*this);
	}
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain(*rhs._brain);
	this->_type = rhs._type;
	std::cout << "Cat : " << this->_type << " has been copied! (operator overload =)" << std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const{
	std::cout << GREEN << ITALIC << "MIAOOOOU!" << RESET << std::endl;
}
