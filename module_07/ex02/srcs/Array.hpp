/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:13:22 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/12 14:31:54 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <stdexcept>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

template <typename T>
class	Array{

public:
	Array( void );
	Array( unsigned int n );
	Array(Array const &src);

	~Array( void );

	Array<T> const &operator=(Array<T> const &rhs);
	T const &operator[]( int idx) const;

	int	size( void ) const;
	T	&getElem( unsigned int i ) const;
	void	display();
	void	setNewTab( T const &elem );	

private:
	T				*_tab;
	unsigned int	_n;
};

# include "Array.tpp"
#endif
