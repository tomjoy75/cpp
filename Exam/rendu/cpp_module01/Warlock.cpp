/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:18:02 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/20 15:36:47 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"


Warlock::Warlock(std::string const &name, std::string const &title): _name(name), _title(title) {
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock( void ){
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

void	Warlock::setTitle( std::string const &title ){
	this->_title = title;
}

void	Warlock::introduce( void ) const{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

