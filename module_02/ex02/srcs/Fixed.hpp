/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:45:33 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/13 16:49:59 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define BITS 8
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

class	Fixed{

public:
	Fixed( void );
	Fixed( int const nb );
	Fixed( float const nb );
	Fixed( Fixed const &src );
	~Fixed( void );

//operators overload
	
	Fixed	&operator=( Fixed const &rhs );
	// Comparison operators
	bool	operator>( Fixed const &rhs ) const;
	bool	operator<( Fixed const &rhs ) const;
	bool	operator>=( Fixed const &rhs ) const;
	bool	operator<=( Fixed const &rhs ) const;
	bool	operator==( Fixed const &rhs ) const;
	bool	operator!=( Fixed const &rhs ) const;
	// Arithmetic operators
	Fixed	operator+( Fixed const &rhs ) const;
	Fixed	operator-( Fixed const &rhs ) const;
	Fixed	operator*( Fixed const &rhs ) const;
	Fixed	operator/( Fixed const &rhs ) const;
	// Increment operators
	Fixed	&operator++( void );
	Fixed	operator++( int );
	Fixed	&operator--( void );
	Fixed	operator--( int );
	// Functions
	int				getRawBits( void ) const;
	void			setRawBits( int const raw );
	float			toFloat( void ) const;
	int				toInt( void ) const;
	static Fixed	&min(Fixed &a, Fixed &b); 
	static Fixed	min(Fixed const &a, Fixed const &b); 
	static Fixed	&max(Fixed &a, Fixed &b); 
	static Fixed	max(Fixed const &a, Fixed const &b); 
private:
	int					_nb;
	static const int	_nbBits;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);
#endif
