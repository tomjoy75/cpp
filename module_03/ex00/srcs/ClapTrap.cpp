/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:46:29 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/19 15:22:07 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap( void ): _name("noName"), _hp(10), _energy(10), _damage(10){
	std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): _name(name), _hp(10), _energy(10), _damage(10){
	std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap	const &src ){
	*this = src;
	std::cout << "ClapTrap " << _name << " has been copied!" << std::endl;
}

// Destructors
ClapTrap::~ClapTrap( void ){
	std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
}

// Operator overload
ClapTrap	&ClapTrap::operator= ( ClapTrap const &rhs ){
//	this->_name = rhs._name;
//	return (*this);
	return (ClapTrap(rhs._name));
}

// Functions
void	ClapTrap::attack( const std::string& target ){
	if (this->_hp < 1){
		std::cout << "Sorry, no more hit points" << std::endl;
		return ;
	}
	if (this->_energy < 1){
		std::cout << "Sorry, no more energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
	this->_energy--;
}

void	ClapTrap::takeDamage( unsigned int amount ){
	if (this->_hp > 0){
		std::cout << "ClapTrap " << this->_name << " gets " << amount << " of damages" << std::endl;
		this->_hp -= amount;
	}
}

void	ClapTrap::beRepaired( unsigned int amount ){
	if (this->_hp < 1){
		std::cout << "Sorry, no more hit points" << std::endl;
		return ;
	}
	if (this->_energy < 1){
		std::cout << "Sorry, no more energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " gets " << amount << " hit points back" << std::endl;
	this->_energy--;
}
