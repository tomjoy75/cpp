/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:32:12 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/01 14:02:10 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name):_name(name){
	std::cout << "Character: " << this->_name << " has been created!" << std::endl;
}

std::string	const	&Character::getName( void ) const {
	return (this->_name);
}
/*
void		Character::equip(AMateria *m){
	std::cout << "Character TEST: " << this->_name << " equip" << std::endl;

}

void		Character::unequip(int idx){
	std::cout << "Character TEST: " << this->_name << " unequip" << std::endl;

}

void		Character::use(int idx, ICharacter &target){

}
*/
