/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <tjoyeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:55:27 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/12/09 11:17:31 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stack>
# include <sstream>
# include <algorithm>
# include <stdexcept>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

enum	Operator{
	ADD = '+',
	SUB = '-',
	MULT = '*',
	DIV = '/'
};

class	RPN: public std::stack<int> {
public:
	RPN( void );
	RPN( RPN const &src);
	~RPN( void );
	RPN	&operator=( RPN const &src );

	void	showStack( void ) ;
	void	operation( char const c );
	void	add( void );
	void	sub( void );
	void	mult( void );
	void	div( void );	
};

std::ostream	&operator<<( std::ostream &o, RPN const &rhs);
int		process( std::string const &str );
