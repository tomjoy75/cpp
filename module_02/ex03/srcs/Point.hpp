/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:04:01 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/18 10:01:19 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class	Point{

public:
	Point( void );
	Point( float const x, float const y);
	Point( Point const &src );
	~Point( void );

	Point &operator=( Point const &rhs );

	Fixed const	&getX( void ) const;
	Fixed const	&getY( void ) const;
	float	getXf( void ) const;
	float	getYf( void ) const;
private:
	Fixed const	_x;
	Fixed const	_y;
};

//Fixed	testArea( Point const &a, Point const &b, Point const &c);
bool	bsp( Point const a, Point const b, Point const c, Point const point );
#endif
