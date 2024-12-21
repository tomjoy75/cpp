/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:29:23 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/21 15:57:07 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock( std::string const &name, std::string const &title ): _name(name), _title(title){
	std::cout << _name << ": This looks like another boring day." << std::endl;  
}

Warlock::~Warlock( void ){
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string const	&Warlock::getName( void ) const {
	return (_name);
};

std::string const	&Warlock::getTitle( void ) const {
	return (_title);
};

void			Warlock::setTitle( std::string const &src ){ this->_title = src; }; 

void			Warlock::introduce() const{
	std::cout << _name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}
