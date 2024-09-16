/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:04:01 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/16 14:56:16 by tjoyeux          ###   ########.fr       */
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

	Fixed	getX( void ) const;
	Fixed	getY( void ) const;
private:
	Fixed const	_x;
	Fixed const	_y;
};

#endif
