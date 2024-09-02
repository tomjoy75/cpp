/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:42:56 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/02 14:05:17 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
}

Weapon::Weapon( std::string const type){
	this->_type = type;
}

Weapon::~Weapon(){
}

std::string	const &Weapon::getType( void ) const{
	return (this->_type);
}

void		Weapon::setType(std::string	const type){
	this->_type = type;
}
