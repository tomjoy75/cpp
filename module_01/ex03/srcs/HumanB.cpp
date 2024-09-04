/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:23:06 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/04 09:28:08 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name){
	this->_weapon = NULL;	
}

void	HumanB::attack( void ) const{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " can't attack, he has no weapon" << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon){
	this->_weapon = &weapon;
}
