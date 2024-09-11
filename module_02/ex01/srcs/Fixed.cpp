/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:50:11 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/11 15:48:12 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ):_nb(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const nb ){
	std::cout << "Int constructor called" << std::endl;
	this->_nb = nb * ( 1 << _nbBits );
	//TODO conversion de nb
}

Fixed::Fixed( float const nb ){
	std::cout << "Float constructor called" << std::endl;
	this->_nb = roundf( nb * ( 1 << _nbBits )); 
	//TODO conversion de nb
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

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs){
	o << rhs.getRawBits();
	return (o);
}

int	Fixed::getRawBits( void ) const{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}

void	Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;
	return ;
}

float	Fixed::toFloat( void ) const{
	return (0);
}

int		Fixed::toInt( void ) const{
	return (0);

}

int	const	Fixed::_nbBits = 8;

