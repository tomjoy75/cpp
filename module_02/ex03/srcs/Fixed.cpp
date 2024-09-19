/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:50:11 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/18 12:10:22 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors

// Default constructor
Fixed::Fixed( void ):_nb(0){
//	std::cout << "Default constructor called" << std::endl;
	return ;
}

// Int constructor
Fixed::Fixed( int const nb ){
//	std::cout << "Int constructor called" << std::endl;
	this->_nb = nb * ( 1 << Fixed::_nbBits );
}

// Float constructor
Fixed::Fixed( float const nb ){
//	std::cout << "Float constructor called" << std::endl;
	this->_nb = roundf( nb * ( 1 << Fixed::_nbBits )); 
}

// Copy constructor
Fixed::Fixed( Fixed const & src ){
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;	
}

// Destructor
Fixed::~Fixed( void ){
//	std::cout << "Destructor called" << std::endl;
	return ;			
}

// Operator overload

Fixed	&Fixed::operator=( Fixed const  & rhs ){
//	std::cout << "Copy assignment operator called" << std::endl;
	this->_nb = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs){
	o << rhs.toFloat();//TODO: Appel de toFloat
	return (o);
}

	// Comparison operators
bool	Fixed::operator>( Fixed const &rhs ) const{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<( Fixed const &rhs ) const{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=( Fixed const &rhs ) const{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=( Fixed const &rhs ) const{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==( Fixed const &rhs ) const{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const &rhs ) const{
	return (this->getRawBits() != rhs.getRawBits());
}

	// Arithmetic operators
Fixed	Fixed::operator+( Fixed const &rhs ) const{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-( Fixed const &rhs ) const{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*( Fixed const &rhs ) const{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/( Fixed const &rhs ) const{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

	// Increment operators
Fixed	&Fixed::operator++( void ){
	this->_nb++;
	return (*this);
}

Fixed	Fixed::operator++( int ){
	Fixed	old = *this;
	this->_nb++;
	return (old);
}

Fixed	&Fixed::operator--( void ){
	this->_nb--;
	return (*this);
}

Fixed	Fixed::operator--( int ){
	Fixed	old = *this;
	this->_nb--;
	return (old);
}

// Functions

int	Fixed::getRawBits( void ) const{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}

void	Fixed::setRawBits( int const raw ){
//	std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;
	return ;
}

float	Fixed::toFloat( void ) const{
	float	f = (float)this->_nb / (1 << Fixed::_nbBits); 
	return (f);
}

int		Fixed::toInt( void ) const{
	int	i = this->_nb / (1 << Fixed::_nbBits);
	return (i);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b){ 
	if ( a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed	Fixed::min(Fixed const &a, Fixed const &b){ 
	if ( a.getRawBits() < b.getRawBits())
		return (Fixed(a));
	else
		return (Fixed(b));	
}

Fixed	&Fixed::max(Fixed &a, Fixed &b){ 
	if ( a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed	Fixed::max(Fixed const &a, Fixed const &b){ 
	if ( a.getRawBits() > b.getRawBits())
		return (Fixed(a));
	else
		return (Fixed(b));	
}

int const	Fixed::_nbBits = BITS;

