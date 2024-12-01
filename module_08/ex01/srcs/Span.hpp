/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:18:22 by tjoyeux           #+#    #+#             */
/*   Updated: 2024/11/26 14:03:02 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <set>
# include <stdexcept>
# include <cstdlib>
# include <ctime>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define BLINK "\e[5m"

class	Span {
public:
	Span( void );
	Span( unsigned int N );
	Span( Span const &src );
	~Span( void );

	Span	&operator=(Span const &rhs);

	void 		addNumber( int N );
	void		fillRandNumbers();
	unsigned int	shortestSpan( void );
	unsigned int	longestSpan( void );

	std::multiset<int> const	&getData() const;
	int	const			&getN() const;

	static void		showActualSize(std::multiset<int> set);

private:
	int			_n;
	std::multiset<int>	_data;
};

#endif

