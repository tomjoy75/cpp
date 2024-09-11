/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:50:11 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/11 14:15:58 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ):_nb(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src ){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;	
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
	return ;			
}

Fixed	&Fixed::operator=( Fixed const  & rhs ){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_nb = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}

void	Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;
	return ;
}

int	const	Fixed::_nbBits = 8;

