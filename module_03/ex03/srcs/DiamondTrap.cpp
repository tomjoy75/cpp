/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:51:09 by joyeux            #+#    #+#             */
/*   Updated: 2024/09/22 18:21:02 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap( void ): ClapTrap("nobody_clap_name"), ScavTrap(), FragTrap(){
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	this->_name = "nobody";
	std::cout << "DiamondTrap " << this->_name << " has been created!" << std::endl;
	std::cout << "Hp : " << this->_hp << ", Energy : " << this ->_energy << ", Damage : " << this ->_damage << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(){
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	this->_name = name;
	std::cout << "DiamondTrap " << this->_name << " has been created!" << std::endl;
	std::cout << "Hp : " << this->_hp << ", Energy : " << this ->_energy << ", Damage : " << this ->_damage << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src ) : ClapTrap(src), ScavTrap(src), FragTrap(src){
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
