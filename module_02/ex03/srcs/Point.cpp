/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:09:22 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/16 14:58:59 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ): _x(Fixed()), _y(Fixed()){
	std::cout << "Default constructor called" << std::endl;
}

Point::Point( float const x, float const y): _x(Fixed(x)), _y(Fixed(y)){
	std::cout << "Float constructor called" << std::endl;
}

Point::Point( Point const &src ){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Point::~Point( void ){
	std::cout << "Destructor called" << std::endl;
}

Point &Point::operator=( Point const &rhs ){
	std::cout << "Affectation impossible, _x and _y are constant values" << std::endl;
//	this->_x = rhs.getX();
//	this->_y = rhs.getY();
	(void)rhs; // Not to use rhs
	return (*this);
}

Fixed	Point::getX( void ) const{
	return (_x);
}
Fixed	Point::getY( void ) const{
	return (_y);
}
