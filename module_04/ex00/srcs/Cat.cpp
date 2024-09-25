/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:18:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/25 10:55:41 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ):Animal(){
	this->_type = "Cat";
	std::cout << "Cat : " << this->_type << " has been created!" << std::endl;
}

Cat::Cat( Cat const &src): Animal(src){
//	this->_type = src._type;
	std::cout << "Cat : " << this->_type << " has been copied! (copy constructor)" << std::endl;
}

Cat::~Cat( void ){
	std::cout << "Cat : " << this->_type << " has been destroyed!" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	std::cout << "Cat : " << this->_type << " has been copied! (operator overload =)" << std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const{
	std::cout << GREEN << ITALIC << "MIAOOOOU!" << RESET << std::endl;
}
