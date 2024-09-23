/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:18:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/23 17:21:34 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ):Animal(){
	this->_type = "Dog";
}

Dog::Dog( Dog const &src): Animal(src){
	this->_type = src._type;
}

Dog::~Dog( void ){
}

Dog	&Dog::operator=(Dog const &rhs){
	if (this != &rhs)
		*this = rhs;//TODO: Voir si ca marche...sinon copier _type
	return (*this);
}

void	Dog::makeSound( void ) const{
	std::cout << "OUAF!" << std::endl;
}
