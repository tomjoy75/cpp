/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:46:29 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/19 22:25:03 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap( void ): _name("noName"), _hp(10), _energy(10), _damage(10){
	std::cout << "ClapTrap " << this->_name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): _name(name), _hp(10), _energy(10), _damage(10){
	std::cout << "ClapTrap " << this->_name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap	const &src ){
	*this = src;
	std::cout << "ClapTrap " << this->_name << " has been copied! (copy constructor)" << std::endl;
}

// Destructors
ClapTrap::~ClapTrap( void ){
	std::cout << "ClapTrap " << this->_name << " has been destroyed!" << std::endl;
}

// Operator overload
ClapTrap	&ClapTrap::operator= ( ClapTrap const &rhs ){
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hp = rhs._hp;
		this->_energy = rhs._energy;
		this->_damage = rhs._damage;
		std::cout << "ClapTrap " << this->_name << " has been copied! (operator overload =)" << std::endl;
	}
	return (*this);
}

// Functions
void	ClapTrap::attack( const std::string& target ){
	if (this->_hp < 1){
		std::cout << "Sorry, " << this->_name << " has no more hit points" << std::endl;
		return ;
	}
	if (this->_energy < 1){
		std::cout << "Sorry, " << this->_name << " has no more energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
	this->_energy--;
}

void	ClapTrap::takeDamage( unsigned int amount ){
	if (this->_hp < 1){
		std::cout << "Sorry, " << this->_name << " has no more hit points." << std::endl;
		return ;
	}
	if (amount >= this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount;
	std::cout << "ClapTrap " << this->_name << " gets " << amount << " of damages" << std::endl;
	if (this->_hp == 0)
		std::cout << "ClapTrap " << this->_name << " has no more hit points" << std::endl;

}

void	ClapTrap::beRepaired( unsigned int amount ){
	if (this->_hp < 1){
		std::cout << "ClapTrap " << this->_name << " has no more hit points" << std::endl;
		return ;
	}
	if (this->_energy < 1){
		std::cout << "Sorry, " << this->_name << " has no more energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " gets " << amount << " hit points back" << std::endl;
	this->_energy--;
	if (this->_hp > std::numeric_limits<unsigned int>::max() - amount){
		this->_hp = std::numeric_limits<unsigned int>::max();
		std::cout << "\t...But he can´t go over " << std::numeric_limits<unsigned int>::max() << std::endl;
	}
	else
		this->_hp += amount;
}
