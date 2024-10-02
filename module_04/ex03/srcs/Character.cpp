/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:32:12 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/02 16:33:45 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character( void ):_name("no name"){
	for (int i = 0; i < 4; i++){
		_items[i] = NULL;
	}
	std::cout << "Character: " << this->_name << " has been created!" << std::endl;
}

Character::Character(std::string name):_name(name){
	for (int i = 0; i < 4; i++){
		_items[i] = NULL;
	}
	std::cout << "Character: " << this->_name << " has been created!" << std::endl;
}
/*
Character::Character( Character const &src ){
	
}
*/
Character::~Character( void ){
	for (int i = 0; i < 4; i++){
		if (_items[i])
			delete (_items[i]);
	}
	std::cout << "Character: " << this->_name << " has been destroyed!" << std::endl;
}
/*
Character	&Character::operator=( Character const &rhs ){

}
*/
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
