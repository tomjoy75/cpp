/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:27:35 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/10 15:59:50 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

	// constructeur par defaut
Sample::Sample( void ): _foo( 0 ){
	std::cout << "Default constructor called" << std::endl;
}

	// constructeur par copie
Sample::Sample( Sample const &src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Sample::Sample( int const i){
	std::cout << "Argument constructor called" << std::endl;
	this->_foo = i;
}

	// operateur = (permet de faire une autre assignation a partir de cette classe)
Sample	&Sample::operator=(Sample const &rhs){
	std::cout << "Assignment operator called" << std::endl;

	if (this != &rhs)
		this->_foo = rhs.getFoo();

	return *this;
}
	// destructeur
Sample::~Sample( void){
	std::cout << "Destructor called" << std::endl;
}
	

int	Sample::getFoo( void ) const{
	return (this->_foo);
}

std::ostream	&operator<<( std::ostream &o, Sample const &next ){
	o << "The value of _foo is " << next.getFoo();
	return (o);
}
