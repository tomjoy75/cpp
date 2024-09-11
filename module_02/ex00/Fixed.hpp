/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:45:33 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/11 13:24:13 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed{

public:
	Fixed( void );
	Fixed( Fixed const & src );
	~Fixed( void );

	Fixed	&operator=( Fixed const  & rhs );
	int	getRawBits( void ) const;
private:
	int					_nb;
	static const int	_nbBits;
};

#endif
