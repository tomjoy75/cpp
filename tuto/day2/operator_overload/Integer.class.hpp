/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:24:09 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/09/10 12:15:53 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

# include <iostream>

class	Integer{

public:
	Integer(int const n);
	~Integer( void );

	int	getValue( void ) const;

	Integer	&operator=(Integer const &rhs);
	Integer	operator+(Integer const &rhs) const;

private:
	int	_n;
};

std::ostream	&operator<<( std::ostream & o, Integer const &rhs);
#endif
