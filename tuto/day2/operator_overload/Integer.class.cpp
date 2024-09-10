/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:28:05 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/10 12:26:24 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"

Integer::Integer(int const n):_n(n){
	std::cout << "Constructor lanched" << std::endl;
}

Integer::~Integer(){
	std::cout << "Destructor lanched" << std::endl;
}

int	Integer::getValue( void ) const{
	return(this->_n);
}

Integer	&Integer::operator=(Integer const &rhs){
	std::cout << " Equality operator called with " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;
	this->_n = rhs.getValue();
	return (*this);
}

Integer	Integer::operator+(Integer const &rhs) const{
	std::cout << " Addition operator called with " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;
	return Integer(this->_n + rhs.getValue());
}

std::ostream	&operator<<( std::ostream & o, Integer const &rhs){
	std::cout << " Redirection operator called with " << rhs.getValue() << " to output stream" << std::endl;
//	std::cout << " and " << rhs.getValue() << std::endl;

	o << rhs.getValue();
	return (o);
}

