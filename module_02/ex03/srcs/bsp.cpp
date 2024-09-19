/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:59:59 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/18 12:10:03 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	_abs( float f){
	if (f < 0)
		return (f * -1);
	else
		return (f);
}

static Fixed	_area( Point const &a, Point const &b, Point const &c){

	float total;

	total = _abs( a.getXf() * (b.getYf() - c.getYf()) + b.getXf() * (c.getYf() - a.getYf()) + c.getXf() * (a.getYf() - b.getYf()) ) / 2;
	return (Fixed(total));
}

bool	bsp( Point const a, Point const b, Point const c, Point const point ){

	if (_area( a, b, point) == 0 | _area( b, c, point) == 0 | _area( c, a, point) == 0)
		return (false);
	else if (_area( a, b, c) == _area( a, b, point) + _area( b, c, point) + _area( c, a, point))
		return (true);
	else
		return (false);
}

Fixed	testArea( Point const &a, Point const &b, Point const &c){

	return (_area( a, b, c ));
}
