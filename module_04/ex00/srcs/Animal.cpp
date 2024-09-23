/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:18:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/23 16:53:33 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ):_type(" no Type "){
}

Animal::Animal( Animal const &src){
	this->_type = src._type;
}

Animal::~Animal( void ){
}

Animal	&Animal::operator=(Animal const &rhs){
	if (this != &rhs)
		*this = rhs;//TODO: Voir si ca marche...sinon copier _type
	return (*this);
}

void	Animal::makeSound( void ) const{
	std::cout << "NO SOUND!" << std::endl;
}

std::string const	&Animal::getType( void ) const{
	return (this->_type);
}
