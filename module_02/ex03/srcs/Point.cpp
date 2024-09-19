/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:09:22 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/18 12:11:34 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ): _x(0), _y(0){
//	std::cout << "Default constructor called" << std::endl;
}

Point::Point( float const x, float const y): _x(x), _y(y){
//	std::cout << "Float constructor called" << std::endl;
}

Point::Point( Point const &src ): _x(src.getX()), _y(src.getY()){
//	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Point::~Point( void ){
//	std::cout << "Destructor called" << std::endl;
}

Point &Point::operator=( Point const &rhs ){
	std::cout << "Affectation impossible, _x and _y are constant values" << std::endl;
	(void)rhs; // Not to use rhs
	return (*this);
}

Fixed const	&Point::getX( void ) const{
	return (this->_x);
}
Fixed const	&Point::getY( void ) const{
	return (this->_y);
}

float	Point::getXf( void ) const{
	return (this->_x.toFloat());
}
float	Point::getYf( void ) const{
	return (this->_y.toFloat());
}

