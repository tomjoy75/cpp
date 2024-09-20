/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:01:12 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/20 16:00:31 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap( void ): ClapTrap(){
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "FragTrap " << this->_name << " has been created!" << std::endl;
}

FragTrap::FragTrap(std::string const name): ClapTrap(name){
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "FragTrap " << this->_name << " has been created!" << std::endl;
}

FragTrap::FragTrap( FragTrap const &src ){
	*this = src;
	std::cout << "FragTrap " << this->_name << " has been copied! (copy constructor)" << std::endl;
}

// Destructors
FragTrap::~FragTrap( void ){
	std::cout << "FragTrap " << this->_name << " has been destroyed!" << std::endl;
}

// Operator overload
FragTrap	&FragTrap::operator= ( FragTrap const &rhs ){
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hp = rhs._hp;
		this->_energy = rhs._energy;
		this->_damage = rhs._damage;
		std::cout << "FragTrap " << this->_name << " has been copied! (operator overload =)" << std::endl;
	}
	return (*this);
}

// Functions
void	FragTrap::highFivesGuys( void ){
	if (this->_hp < 1){
		std::cout << this->_name << " can't high fives, he has no more hit points" << std::endl;
		return ;
	}
	if (this->_energy < 1){
		std::cout << "Sorry, " << this->_name << " can't be fives, he has no more energy" << std::endl;
		return ;
	}
	std::cout << this->_name << " gives you a high five 🙌 🙏" << std::endl;
	this->_energy--;

}
