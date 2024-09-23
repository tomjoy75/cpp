/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:39:39 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/21 19:27:11 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap( void ): ClapTrap(){
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap " << this->_name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(std::string const name): ClapTrap(name){
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap " << this->_name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &src ) : ClapTrap(src){
	*this = src;
	std::cout << "ScavTrap " << this->_name << " has been copied! (copy constructor)" << std::endl;
}

// Destructors
ScavTrap::~ScavTrap( void ){
	std::cout << "ScavTrap " << this->_name << " has been destroyed!" << std::endl;
}

// Operator overload
ScavTrap	&ScavTrap::operator= ( ScavTrap const &rhs ){
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hp = rhs._hp;
		this->_energy = rhs._energy;
		this->_damage = rhs._damage;
		std::cout << "ScavTrap " << this->_name << " has been copied! (operator overload =)" << std::endl;
	}
	return (*this);
}

// Functions
void	ScavTrap::attack( std::string const &target ){
	if (this->_hp < 1){
		std::cout << "Sorry, ScavTrap " << this->_name << " can't attack, he has no more hit points" << std::endl;
		return ;
	}
	if (this->_energy < 1){
		std::cout << "Sorry, ScavTrap " << this->_name << " can't attack, he has no more energy" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage! ( "<< this->_energy << " energy points remaining)"  << std::endl;
	this->_energy--;
}

void	ScavTrap::guardGate(){
	if (this->_hp < 1){
		std::cout << "Sorry, ScavTrap " << this->_name << " can't guard, he has no more hit points" << std::endl;
		return ;
	}
	if (this->_energy < 1){
		std::cout << "Sorry, ScavTrap " << this->_name << " can't guard, he has no more energy" << std::endl;
		return ;
	}
	this->_energy--;
	std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode" << std::endl;
}
