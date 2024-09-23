/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:51:09 by joyeux            #+#    #+#             */
/*   Updated: 2024/09/23 12:17:46 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap( void ): ClapTrap("nobody_clap_name"), FragTrap(), ScavTrap(){
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	this->_name = "nobody";
	std::cout << "DiamondTrap " << this->_name << " has been created!" << std::endl;
	std::cout << "Hp : " << this->_hp << ", Energy : " << this ->_energy << ", Damage : " << this ->_damage << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name): ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(){
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	this->_name = name;
	std::cout << "DiamondTrap " << this->_name << " has been created!" << std::endl;
	std::cout << "Hp : " << this->_hp << ", Energy : " << this ->_energy << ", Damage : " << this ->_damage << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src ) : ClapTrap(src), FragTrap(src), ScavTrap(src){
	*this = src;
	std::cout << "DiamondTrap " << this->_name << " has been copied! (copy constructor)" << std::endl;
}

// Destructors
DiamondTrap::~DiamondTrap( void ){
	std::cout << "DiamondTrap " << this->_name << " has been destroyed!" << std::endl;
}

// Operator overload
DiamondTrap	&DiamondTrap::operator= ( DiamondTrap const &rhs ){
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hp = rhs._hp;
		this->_energy = rhs._energy;
		this->_damage = rhs._damage;
		std::cout << "DiamondTrap " << this->_name << " has been copied! (operator overload =)" << std::endl;
	}
	return (*this);
}

// Functions
void	DiamondTrap::whoAmI( void ){
	if (this->_hp < 1){
		std::cout << this->_name << " can't say his name, he has no more hit points" << std::endl;
		return ;
	}
	if (this->_energy < 1){
		std::cout << "Sorry, " << this->_name << " can't say his name, he has no more energy" << std::endl;
		return ;
	}
	std::cout << "my name is " << this->_name << "\nmy ClapTrap name is " << ClapTrap::_name << std::endl;
	this->_energy--;
}