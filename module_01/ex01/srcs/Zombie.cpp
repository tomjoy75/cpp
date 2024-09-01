/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:07:54 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/01 13:09:12 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void):_name("no name"){
}

Zombie::Zombie( std::string name ):_name(name){
}

Zombie::~Zombie( void ){
	std::cout << this->_name << " is destroyed!!!" << std::endl;
}

void	Zombie::announce( void ){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name){
	this->_name = name;
}
