/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:32:12 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/03 22:09:56 by joyeux           ###   ########.fr       */
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

Character::Character( Character const &src ):_name(src._name){
	for (int i = 0; i < 4; i++){
		if (src._items[i])
			this->_items[i] = src._items[i]->clone();
		else 
			this->_items[i] = NULL;
	}	
	std::cout << "Character: " << this->_name << " has been copied!(copy constructor)" << std::endl;

}

Character::~Character( void ){
	for (int i = 0; i < 4; i++){
		if (_items[i] != NULL){
			delete (_items[i]);
			_items[i] = NULL;
		}
	}
	std::cout << "Character: " << this->_name << " has been destroyed!" << std::endl;
}

Character	&Character::operator=( Character const &rhs ){
	if (this == &rhs)
		std::cout << "Character: " << this->_name << " same memory adress -- no copy!" << std::endl;
	else {
		for (int i = 0; i < 4; i++){
			if (this->_items[i]){
				delete (this->_items[i]);
				this->_items[i] = rhs._items[i]->clone();
			}
			else
				this->_items[i] = NULL;
		}
		this->_name = rhs._name;
		std::cout << "Character: " << this->_name << " has been copied!(operator overload)" << std::endl;
	}
	return (*this);
}

std::string	const	&Character::getName( void ) const {
	return (this->_name);
}

void		Character::equip(AMateria *m){
	int	i = 0;
	while (this->_items[i] && i < 4){
		if (this->_items[i] == m){
			std::cout << "Character " << this->_name << " has already equiped this " << this->_items[i]->getType() << " Materia" << std::endl;
			return;
		}
		i++;
	}
	if (i < 4)
	{
		_items[i] = m;
		std::cout << "Character " << this->_name << " equiped " << this->_items[i]->getType() << std::endl;
	}
	else
		std::cout << "Character " << this->_name << " has too much equipment" << std::endl;
}
/*
void		Character::unequip(int idx){
	std::cout << "Character TEST: " << this->_name << " unequip" << std::endl;

}

void		Character::use(int idx, ICharacter &target){

}
*/
void		Character::showItems( void ){
	int	i = 0;
	std::cout << "\nCharacter: " << this->_name << " in adress " << this << std::endl;
	std::cout << "Items :" << std::endl;
	while (this->_items[i]){
		std::cout << "\tItem " << i << " : " << this->_items[i]->getType() << " adress : " << this->_items[i] << std::endl;	
		i++;
	}
}
