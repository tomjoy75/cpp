/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:45:33 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/11 15:46:04 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed{

public:
	Fixed( void );
	Fixed( int const nb );
	Fixed( float const nb );
	Fixed( Fixed const &src );
	~Fixed( void );

	Fixed	&operator=( Fixed const &rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
private:
	int					_nb;
	static const int	_nbBits;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);
#endif
