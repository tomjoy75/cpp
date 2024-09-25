/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joyeux <joyeux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:18:00 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/25 11:39:31 by joyeux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ):WrongAnimal(){
	this->_type = "WrongCat";
	std::cout << "WrongCat : " << this->_type << " has been created!" << std::endl;
}

WrongCat::WrongCat( WrongCat const &src): WrongAnimal(src){
//	this->_type = src._type;
	std::cout << "WrongCat : " << this->_type << " has been copied! (copy constructor)" << std::endl;
}

WrongCat::~WrongCat( void ){
	std::cout << "WrongCat : " << this->_type << " has been destroyed!" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	std::cout << "WrongCat : " << this->_type << " has been copied! (operator overload =)" << std::endl;
	return (*this);
}

void	WrongCat::makeSound( void ) const{
	std::cout << GREEN << ITALIC << "Wrong MIAOOOOU!" << RESET << std::endl;
}
