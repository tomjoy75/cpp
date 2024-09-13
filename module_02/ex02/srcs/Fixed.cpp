/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:50:11 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/13 15:02:59 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors

Fixed::Fixed( void ):_nb(0){
//	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const nb ){
//	std::cout << "Int constructor called" << std::endl;
	this->_nb = nb * ( 1 << Fixed::_nbBits );
}

Fixed::Fixed( float const nb ){
//	std::cout << "Float constructor called" << std::endl;
	this->_nb = roundf( nb * ( 1 << Fixed::_nbBits )); 
}

Fixed::Fixed( Fixed const & src ){
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;	
}

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
//	std::cout << "TEST : OPERATOR *, this->getRawBits " << this->getRawBits() << ", rhs.getRawBits() " << rhs.getRawBits() << " = " << this->getRawBits() * rhs.getRawBits() << std::endl;
//	std::cout << "TEST : this->toFloat " << this->toFloat() << ", rhs.toFloat() " << rhs.toFloat() << " = " << this->toFloat() * rhs.toFloat() << std::endl;
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
	float	f = (float)this->_nb / (1 << Fixed::_nbBits); 
	return (f);
}

int		Fixed::toInt( void ) const{
	int	i = this->_nb / (1 << Fixed::_nbBits);
	return (i);
}

int const	Fixed::_nbBits = BITS;

