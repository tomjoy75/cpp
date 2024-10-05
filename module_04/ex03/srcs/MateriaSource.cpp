/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:34:57 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/10/05 23:32:57 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource( void ){
	for (int i = 0; i < 4; i++){
		_items[i] = NULL;
	}
	std::cout << "MateriaSource : has been created!" << std::endl;
}
//TODO : implementer la suite en deep copy...+tester directement. 
MateriaSource::MateriaSource( MateriaSource const &src){
	for (int i = 0; i < 4; i++){
		if (src._items[i]){
			this->_items[i] = src._items[i]->clone();	
		}
		else
			this->_items[i] = NULL;
	}
	std::cout << "MateriaSource : has been copied(copy constructor)!" << std::endl;

}

MateriaSource::~MateriaSource( void ){
	for (int i = 0; i < 4; i++){
		if (this->_items[i]){
			for (int j = i + 1; j < 4; j++){
				if (this->_items[i] == this->_items[j]){
					std::cout << RED <<"\t!! " << _items[j]->getType() << " is a double" << RESET << std::endl;
					this->_items[j] = NULL;
				}
			}
			delete (this->_items[i]);
			this->_items[i] = NULL;
		}
	}
	std::cout << "MateriaSource : has been destroyed!" << std::endl;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs){
	if (this == &rhs){
		std::cout << "MateriaSource : same memory adress -- no copy!" << std::endl;
		return (*this);
	}
	for (int i = 0; i < 4; i++){
		if (this->_items[i]){
			for (int j = i + 1; j < 4; j++){
				if (this->_items[i] == this->_items[j])
					this->_items[j] = NULL;
			}
			delete (this->_items[i]);
			this->_items[i] = rhs._items[i]->clone();
		/*	if (rhs._items[i]->getType() == "cure")
				this->_items[i] = rhs._items[i].clone();
			else if (rhs._items[i]->getType() == "ice")
				this->_items[i] = rhs._items[i].clone();
			else
				this->_items[i] = NULL;*/
		}
		else
			this->_items[i] = NULL;
	}
	std::cout << "MateriaSource : has been copied(operator overload =)!" << std::endl;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* newM){
	int i = 0;
	if (!newM){
		std::cout << "MateriaSource : Materia don't exist" << std::endl;
		return ;
	}
	while (this->_items[i] && i < 4)
		i++;
	if (i == 4)	
		std::cout << "MateriaSource : No more empty room" << std::endl;
	else {
		this->_items[i] = newM;
		std::cout << "MateriaSource : Material "<< newM->getType() << " learned" << std::endl;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++){
		if (this->_items[i]->getType() == type){
			std::cout << "MateriaSource : Materia created of type "<< type << std::endl;
			return (this->_items[i]->clone());
		}
	}		
	std::cout << "MateriaSource : Materia unknown"<< type << std::endl;
	return (NULL);
}


void	MateriaSource::showItems( void ){
	int	i = 0;
	std::cout << "\nMateriaSource: in adress " << this << std::endl;
	std::cout << "Items :" << std::endl;
	while (this->_items[i]){
		std::cout << "\tItem " << i << " : " << this->_items[i]->getType() << " adress : " << this->_items[i] << std::endl;
		i++;
	}
}
